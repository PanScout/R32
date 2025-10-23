# tests/test_r32.py
#
# Comprehensive cocotb testbench for the "R32" top-level CPU.
# - Uses a tiny RV32I assembler implemented below to generate instructions.
# - Provides a cycle-accurate (1-cycle latency) Python ROM/RAM model on the CPU bus.
# - Verifies arithmetic (R/I), loads/stores (byte/half/word, sign/zero), branches, JAL, JALR,
#   and error signaling, using memory-mapped signatures.
# - Intended to be launched via your tests/_runner.py helper:
#       python tests/test_r32.py
#   which will call cocotb.runner with hdl_toplevel="R32".
#
# DUT ports used (from your R32):
#   clk                : i_clock
#   reset              : i_reset
#   ROM handshake      : o_rom_ready, o_instruction_address, i_instruction
#   Data bus           : o_data_rw (1=write), o_data, o_data_address, o_data_rw_strobe, i_data
#   Error              : o_error
#
# Notes
# -----
# * The ROM model always returns an instruction for the requested byte address (word-aligned)
#   and behaves like a 1-cycle-latency synchronous memory: instruction is available in the
#   cycle after o_rom_ready is asserted.
# * The RAM model implements byte strobes and 1-cycle-latency reads. Stores update immediately
#   on the cycle o_data_rw==1, as a typical write-through.
# * To avoid a HALT instruction, tests run for a bounded number of cycles then inspect RAM
#   "signature" words at 0x00001000, 0x00001004, ... to assert correctness.
#
# SPDX-License-Identifier: MIT

from __future__ import annotations

import os
import math
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

# ------------------------------------------------------------
# Tiny RV32I assembler helpers (enough for this testbench)
# ------------------------------------------------------------

# Opcode constants (7-bit)
OP_R_TYPE       = 0b0110011
OP_I_ARITH      = 0b0010011
OP_I_LOAD       = 0b0000011
OP_I_JALR       = 0b1100111
OP_S_TYPE       = 0b0100011
OP_B_TYPE       = 0b1100011
OP_U_LUI        = 0b0110111
OP_U_AUIPC      = 0b0010111
OP_J_JAL        = 0b1101111

# funct3 for I-ALU, R-ALU, loads/stores, branches
F3_ADD_SUB  = 0b000
F3_SLL      = 0b001
F3_SLT      = 0b010
F3_SLTU     = 0b011
F3_XOR      = 0b100
F3_SRL_SRA  = 0b101
F3_OR       = 0b110
F3_AND      = 0b111

F3_LB   = 0b000
F3_LH   = 0b001
F3_LW   = 0b010
F3_LBU  = 0b100
F3_LHU  = 0b101

F3_SB   = 0b000
F3_SH   = 0b001
F3_SW   = 0b010

F3_BEQ  = 0b000
F3_BNE  = 0b001
F3_BLT  = 0b100
F3_BGE  = 0b101
F3_BLTU = 0b110
F3_BGEU = 0b111

# funct7 for R-type shifts/sub
F7_ADD_SRL = 0b0000000
F7_SUB_SRA = 0b0100000

# Helpers for immediate range checks and sign conversion

def _sext(val: int, bits: int) -> int:
    mask = (1 << bits) - 1
    val &= mask
    if val & (1 << (bits - 1)):
        val -= (1 << bits)
    return val

# Encoders for each base format

def enc_r(rd: int, rs1: int, rs2: int, funct3: int, funct7: int, opcode: int = OP_R_TYPE) -> int:
    return ((funct7 & 0x7F) << 25) | ((rs2 & 0x1F) << 20) | ((rs1 & 0x1F) << 15) | ((funct3 & 0x7) << 12) | ((rd & 0x1F) << 7) | (opcode & 0x7F)


def enc_i(rd: int, rs1: int, imm: int, funct3: int, opcode: int) -> int:
    if not -2048 <= _sext(imm, 12) <= 2047:
        raise ValueError("I-immediate out of range: %r" % imm)
    imm &= 0xFFF
    return (imm << 20) | ((rs1 & 0x1F) << 15) | ((funct3 & 0x7) << 12) | ((rd & 0x1F) << 7) | (opcode & 0x7F)


def enc_s(rs1: int, rs2: int, imm: int, funct3: int, opcode: int = OP_S_TYPE) -> int:
    # 12-bit immediate split between bits [11:5] and [4:0]
    if not -2048 <= _sext(imm, 12) <= 2047:
        raise ValueError("S-immediate out of range: %r" % imm)
    u = imm & 0xFFF
    imm_11_5 = (u >> 5) & 0x7F
    imm_4_0  = u & 0x1F
    return (imm_11_5 << 25) | ((rs2 & 0x1F) << 20) | ((rs1 & 0x1F) << 15) | ((funct3 & 0x7) << 12) | (imm_4_0 << 7) | (opcode & 0x7F)


def enc_b(rs1: int, rs2: int, imm: int, funct3: int, opcode: int = OP_B_TYPE) -> int:
    # Branch immediate is a signed offset in bytes, must be multiple of 2.
    if imm % 2 != 0:
        raise ValueError("B-immediate must be 2-byte aligned")
    if not -4096 <= imm <= 4094:
        raise ValueError("B-immediate out of range: %r" % imm)
    u = (imm >> 1) & 0xFFF  # drop bit0; spread across fields
    imm_11   = (u >> 10) & 0x1
    imm_4_1  = (u >> 0)  & 0xF
    imm_10_5 = (u >> 4)  & 0x3F
    imm_12   = (imm >> 12) & 0x1  # sign bit after shift
    return (imm_12 << 31) | (imm_10_5 << 25) | ((rs2 & 0x1F) << 20) | ((rs1 & 0x1F) << 15) | ((funct3 & 0x7) << 12) | (imm_4_1 << 8) | (imm_11 << 7) | (opcode & 0x7F)


def enc_u(rd: int, imm20: int, opcode: int) -> int:
    # imm20 occupies bits [31:12]
    if not 0 <= imm20 <= 0xFFFFF:
        raise ValueError("U-immediate out of range: %r" % imm20)
    return (imm20 << 12) | ((rd & 0x1F) << 7) | (opcode & 0x7F)


def enc_j(rd: int, imm: int, opcode: int = OP_J_JAL) -> int:
    # JAL immediate is a signed byte offset, multiple of 2.
    if imm % 2 != 0:
        raise ValueError("J-immediate must be 2-byte aligned")
    if not - (1 << 20) * 2 <= imm <= ((1 << 20) - 1) * 2:
        raise ValueError("J-immediate out of range: %r" % imm)
    u = (imm >> 1) & 0xFFFFF
    imm_19_12 = (u >> 8) & 0xFF
    imm_11    = (u >> 7) & 0x1
    imm_10_1  = (u >> 0) & 0x7F
    imm_20    = (imm >> 21) & 0x1  # sign bit after shift
    return (imm_20 << 31) | (imm_19_12 << 12) | (imm_11 << 20) | (imm_10_1 << 21) | ((rd & 0x1F) << 7) | (opcode & 0x7F)

# Convenience wrappers

def NOP() -> int:
    # addi x0, x0, 0
    return enc_i(0, 0, 0, F3_ADD_SUB, OP_I_ARITH)

# U-type

def LUI(rd: int, imm20: int) -> int:   return enc_u(rd, imm20, OP_U_LUI)

def AUIPC(rd: int, imm20: int) -> int: return enc_u(rd, imm20, OP_U_AUIPC)

# I-type arithmetic & shifts

def ADDI(rd, rs1, imm): return enc_i(rd, rs1, imm, F3_ADD_SUB, OP_I_ARITH)

def ANDI(rd, rs1, imm): return enc_i(rd, rs1, imm, F3_AND, OP_I_ARITH)

def ORI(rd, rs1, imm):  return enc_i(rd, rs1, imm, F3_OR,  OP_I_ARITH)

def XORI(rd, rs1, imm): return enc_i(rd, rs1, imm, F3_XOR, OP_I_ARITH)

def SLTI(rd, rs1, imm):  return enc_i(rd, rs1, imm, F3_SLT,  OP_I_ARITH)

def SLTIU(rd, rs1, imm): return enc_i(rd, rs1, imm, F3_SLTU, OP_I_ARITH)

def SLLI(rd, rs1, shamt): return enc_i(rd, rs1, (shamt & 0x1F) | (F7_ADD_SRL << 5), F3_SLL, OP_I_ARITH)

def SRLI(rd, rs1, shamt): return enc_i(rd, rs1, (shamt & 0x1F) | (F7_ADD_SRL << 5), F3_SRL_SRA, OP_I_ARITH)

def SRAI(rd, rs1, shamt): return enc_i(rd, rs1, (shamt & 0x1F) | (F7_SUB_SRA << 5), F3_SRL_SRA, OP_I_ARITH)

# R-type

def ADD(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_ADD_SUB, F7_ADD_SRL)

def SUB(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_ADD_SUB, F7_SUB_SRA)

def AND(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_AND, F7_ADD_SRL)

def OR(rd, rs1, rs2):   return enc_r(rd, rs1, rs2, F3_OR, F7_ADD_SRL)

def XOR(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_XOR, F7_ADD_SRL)

def SLL(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_SLL, F7_ADD_SRL)

def SRL(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_SRL_SRA, F7_ADD_SRL)

def SRA(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_SRL_SRA, F7_SUB_SRA)

def SLT(rd, rs1, rs2):  return enc_r(rd, rs1, rs2, F3_SLT, F7_ADD_SRL)

def SLTU(rd, rs1, rs2): return enc_r(rd, rs1, rs2, F3_SLTU, F7_ADD_SRL)

# Loads / Stores

def LB(rd, rs1, imm):  return enc_i(rd, rs1, imm, F3_LB,  OP_I_LOAD)

def LH(rd, rs1, imm):  return enc_i(rd, rs1, imm, F3_LH,  OP_I_LOAD)

def LW(rd, rs1, imm):  return enc_i(rd, rs1, imm, F3_LW,  OP_I_LOAD)

def LBU(rd, rs1, imm): return enc_i(rd, rs1, imm, F3_LBU, OP_I_LOAD)

def LHU(rd, rs1, imm): return enc_i(rd, rs1, imm, F3_LHU, OP_I_LOAD)

def SB(rs1, rs2, imm): return enc_s(rs1, rs2, imm, F3_SB)

def SH(rs1, rs2, imm): return enc_s(rs1, rs2, imm, F3_SH)

def SW(rs1, rs2, imm): return enc_s(rs1, rs2, imm, F3_SW)

# Branches / Jumps

def BEQ(rs1, rs2, imm):  return enc_b(rs1, rs2, imm, F3_BEQ)

def BNE(rs1, rs2, imm):  return enc_b(rs1, rs2, imm, F3_BNE)

def BLT(rs1, rs2, imm):  return enc_b(rs1, rs2, imm, F3_BLT)

def BGE(rs1, rs2, imm):  return enc_b(rs1, rs2, imm, F3_BGE)

def BLTU(rs1, rs2, imm): return enc_b(rs1, rs2, imm, F3_BLTU)

def BGEU(rs1, rs2, imm): return enc_b(rs1, rs2, imm, F3_BGEU)

def JAL(rd, imm):        return enc_j(rd, imm, OP_J_JAL)

def JALR(rd, rs1, imm):  return enc_i(rd, rs1, imm, F3_ADD_SUB, OP_I_JALR)

# ------------------------------------------------------------
# Simple bus-attached memory model for ROM and RAM
# ------------------------------------------------------------

class SimpleMemory:
    def __init__(self):
        self.rom = {}   # word-addressed (byte address >> 2)
        self.ram = {}   # byte-addressed backing store as 32-bit words per aligned address
        self._next_i_data = 0

    def load_rom(self, base_addr: int, words: list[int]):
        for i, w in enumerate(words):
            self.rom[(base_addr + 4*i) >> 2] = w & 0xFFFFFFFF

    def rom_read(self, byte_addr: int) -> int:
        return self.rom.get(byte_addr >> 2, NOP())

    @staticmethod
    def _align(addr: int) -> int:
        return addr & ~0x3

    def ram_read_word(self, byte_addr: int) -> int:
        a = self._align(byte_addr)
        return self.ram.get(a, 0)

    def ram_write(self, byte_addr: int, data_word: int, strobes: int):
        a = self._align(byte_addr)
        cur = self.ram.get(a, 0)
        w = data_word & 0xFFFFFFFF
        # Byte lanes: bit0 -> [7:0], bit1 -> [15:8], bit2 -> [23:16], bit3 -> [31:24]
        for i in range(4):
            if (strobes >> i) & 1:
                mask = (0xFF << (8*i))
                cur = (cur & ~mask) | (w & mask)
        self.ram[a] = cur & 0xFFFFFFFF

    # Coroutines to drive the DUT buses
    async def bus_driver(self, dut):
        # 1-cycle pipeline on ROM and RAM reads
        self._next_i_data = 0
        dut.i_instruction.value = NOP()
        dut.i_data.value = 0
        await RisingEdge(dut.i_clock)
        while True:
            # Present previous cycle's data read
            dut.i_data.value = self._next_i_data

            # ROM: provide instruction based on requested address when ROM ready
            pc = int(dut.o_instruction_address.value)
            if int(dut.o_rom_ready.value) == 1:
                instr = self.rom_read(pc)
            else:
                instr = self.rom_read(pc)  # keep instruction stable regardless
            dut.i_instruction.value = instr

            # RAM: capture read request for next cycle, commit writes now
            if int(dut.o_data_rw.value) == 1:
                # WRITE
                self.ram_write(int(dut.o_data_address.value), int(dut.o_data.value), int(dut.o_data_rw_strobe.value))
                # On writes, next_i_data remains whatever last queued (no read)
            else:
                # READ -> queue next cycle value
                self._next_i_data = self.ram_read_word(int(dut.o_data_address.value))

            await RisingEdge(dut.i_clock)

# ------------------------------------------------------------
# Test utilities
# ------------------------------------------------------------

CLK_PERIOD_NS = 10
RAM_BASE = 0x00001000  # signature base for tests

async def reset_dut(dut, cycles: int = 5):
    dut.i_reset.value = 1
    # Drive some safe defaults on inputs we own
    dut.i_instruction.value = NOP()
    dut.i_data.value = 0
    for _ in range(cycles):
        await RisingEdge(dut.i_clock)
    dut.i_reset.value = 0
    # one extra cycle to exit reset cleanly
    await RisingEdge(dut.i_clock)

async def run_for(dut, cycles: int):
    for _ in range(cycles):
        await RisingEdge(dut.i_clock)

# ------------------------------------------------------------
# Programs
# ------------------------------------------------------------

def prog_smoke() -> list[int]:
    """Simple arithmetic & store: x1=5, x2=7, x3=x1+x2, x4=x3-x1 => 7; store to RAM_BASE"""
    p = []
    p += [ADDI(1, 0, 5)]         # x1 = 5
    p += [ADDI(2, 0, 7)]         # x2 = 7
    p += [ADD(3, 1, 2)]          # x3 = 12
    p += [SUB(4, 3, 1)]          # x4 = 7
    p += [LUI(5, RAM_BASE >> 12)]  # x5 = RAM_BASE
    p += [SW(5, 4, 0)]           # MEM[RAM_BASE] = x4 (7)
    # idle a bit
    p += [NOP(), NOP(), NOP()]
    return p

def prog_load_store() -> tuple[list[int], dict[int, int]]:
    """Load/store width and sign/zero extension checks.
    Preload RAM[RAM_BASE+0x20] = 0xA1B2C3D4, then read bytes/half/word and
    store the sign/zero-extended results at RAM_BASE+0x04..0x10.
    Returns (program, ram_init).
    """
    SRC = RAM_BASE + 0x20
    p = []
    p += [LUI(5, RAM_BASE >> 12)]            # x5 = RAM_BASE
    p += [ADDI(6, 5, 0x20)]                  # x6 = SRC
    # LB -> sign-extend low byte (D4 -> 0xFFFFFFD4)
    p += [LB(7, 6, 0)]                       # x7 = LB 0(x6)
    p += [SW(5, 7, 0x04)]                    # MEM[RAM_BASE+4] = x7
    # LBU -> zero-extend low byte (0x000000D4)
    p += [LBU(8, 6, 0)]
    p += [SW(5, 8, 0x08)]
    # LH -> sign-extend halfword (0xC3D4 -> 0xFFFFC3D4)
    p += [LH(9, 6, 0)]
    p += [SW(5, 9, 0x0C)]
    # LHU -> zero-extend halfword (0x0000C3D4)
    p += [LHU(10, 6, 0)]
    p += [SW(5, 10, 0x10)]
    # LW -> 0xA1B2C3D4
    p += [LW(11, 6, 0)]
    p += [SW(5, 11, 0x14)]
    p += [NOP(), NOP()]
    ram_init = { (SRC & ~0x3): 0xA1B2C3D4 }
    return p, ram_init


def prog_branch() -> list[int]:
    """Branch taken and not-taken paths, result stored at RAM_BASE+0x24."""
    p = []
    p += [ADDI(1, 0, 1)]          # x1 = 1
    p += [ADDI(2, 0, 1)]          # x2 = 1
    # beq to +12 bytes -> skip next two instructions into the 'taken' block
    p += [BEQ(1, 2, 12)]          # from here jump to index +3
    p += [ADDI(3, 0, 0x55)]       # (will be skipped)
    p += [JAL(0, 8)]              # skip the fail store (skipped anyway if beq taken)
    # taken target:
    p += [ADDI(3, 0, 0xAA)]       # x3 = 0xAA
    p += [LUI(5, RAM_BASE >> 12)]
    p += [SW(5, 3, 0x24)]         # MEM[RAM_BASE+0x24] = 0xAA
    p += [NOP()]
    return p


def prog_jumps() -> list[int]:
    """JALR absolute to PC=16 (instruction index 4) & JAL forward; store return addresses."""
    p = []
    # JALR with rs1=x0 jumps to absolute immediate & ~1. We target byte address 16.
    p += [JALR(1, 0, 16)]         # x1 = return addr (0x4); jump to PC=16
    p += [ADDI(2, 0, 0x11)]       # (skipped)
    p += [ADDI(2, 0, 0x22)]       # (skipped)
    p += [ADDI(2, 0, 0x33)]       # (skipped)
    # target @ PC=16:
    p += [ADDI(3, 0, 0x66)]       # land here
    p += [LUI(5, RAM_BASE >> 12)]
    p += [SW(5, 1, 0x28)]         # store x1 (should be 0x00000004)
    # JAL forward by 8 bytes (skip one instruction), rd=x4 gets return PC
    p += [JAL(4, 8)]              # return should be address of next instruction (current PC+4)
    p += [ADDI(6, 0, 0x77)]       # skipped
    p += [SW(5, 4, 0x2C)]         # store x4 (return address from JAL)
    p += [NOP()]
    return p


def prog_illegal() -> list[int]:
    """A single illegal instruction to trigger o_error."""
    return [0xFFFFFFFF, NOP(), NOP()]

# ------------------------------------------------------------
# Tests
# ------------------------------------------------------------

@cocotb.test()
async def test_smoke_arithmetic_store(dut):
    """Smoke test: arithmetic + store to RAM_BASE."""
    cocotb.start_soon(Clock(dut.i_clock, CLK_PERIOD_NS, units="ns").start())
    mem = SimpleMemory()
    mem.load_rom(0x00000000, prog_smoke())
    cocotb.start_soon(mem.bus_driver(dut))

    await reset_dut(dut)
    await run_for(dut, 80)

    got = mem.ram_read_word(RAM_BASE)
    assert got == 7, f"Expected 7 at RAM_BASE, got 0x{got:08X}"


@cocotb.test()
async def test_load_store_widths_and_sign(dut):
    """Verify LB/LBU/LH/LHU/LW behavior and SW with byte strobes."""
    cocotb.start_soon(Clock(dut.i_clock, CLK_PERIOD_NS, units="ns").start())
    mem = SimpleMemory()
    prog, ram_init = prog_load_store()
    mem.load_rom(0x0, prog)
    for a, w in ram_init.items():
        mem.ram[a] = w
    cocotb.start_soon(mem.bus_driver(dut))

    await reset_dut(dut)
    await run_for(dut, 150)

    assert mem.ram_read_word(RAM_BASE + 0x04) == 0xFFFFFFD4, "LB sign-extend wrong"
    assert mem.ram_read_word(RAM_BASE + 0x08) == 0x000000D4, "LBU zero-extend wrong"
    assert mem.ram_read_word(RAM_BASE + 0x0C) == 0xFFFFC3D4, "LH sign-extend wrong"
    assert mem.ram_read_word(RAM_BASE + 0x10) == 0x0000C3D4, "LHU zero-extend wrong"
    assert mem.ram_read_word(RAM_BASE + 0x14) == 0xA1B2C3D4, "LW wrong"


@cocotb.test()
async def test_branches(dut):
    """Branch taken path sets signature 0xAA at RAM_BASE+0x24."""
    cocotb.start_soon(Clock(dut.i_clock, CLK_PERIOD_NS, units="ns").start())
    mem = SimpleMemory()
    mem.load_rom(0x0, prog_branch())
    cocotb.start_soon(mem.bus_driver(dut))

    await reset_dut(dut)
    await run_for(dut, 120)

    got = mem.ram_read_word(RAM_BASE + 0x24)
    assert got == 0x000000AA, f"Branch result wrong, expected 0xAA got 0x{got:08X}"


@cocotb.test()
async def test_jal_and_jalr(dut):
    """Check that JALR writes return address to rd, jumps to imm&~1; JAL also writes rd."""
    cocotb.start_soon(Clock(dut.i_clock, CLK_PERIOD_NS, units="ns").start())
    mem = SimpleMemory()
    mem.load_rom(0x0, prog_jumps())
    cocotb.start_soon(mem.bus_driver(dut))

    await reset_dut(dut)
    await run_for(dut, 160)

    ra_jalr = mem.ram_read_word(RAM_BASE + 0x28)
    assert ra_jalr == 0x00000004, f"JALR return address wrong, got 0x{ra_jalr:08X}"

    ra_jal = mem.ram_read_word(RAM_BASE + 0x2C)
    # When executing JAL at PC=p, rd gets p+4. In our program, JAL is placed so that p is known:
    # Program addresses: [0: JALR, 4: -, 8: -, 12: -, 16: ADDI, 20: LUI, 24: SW, 28: JAL, 32: ADDI(skipped), 36: SW]
    # So JAL at 28 -> rd should get 32 (0x20)
    assert ra_jal == 0x00000020, f"JAL return address wrong, expected 0x00000020 got 0x{ra_jal:08X}"


@cocotb.test()
async def test_illegal_instruction_sets_error(dut):
    """Feed an illegal instruction and expect o_error to assert at some point."""
    cocotb.start_soon(Clock(dut.i_clock, CLK_PERIOD_NS, units="ns").start())
    mem = SimpleMemory()
    mem.load_rom(0x0, prog_illegal())
    cocotb.start_soon(mem.bus_driver(dut))

    await reset_dut(dut)

    saw_error = False
    for _ in range(40):
        await RisingEdge(dut.i_clock)
        if int(dut.o_error.value) == 1:
            saw_error = True
            break
    assert saw_error, "o_error never asserted after illegal instruction"


# ------------------------------------------------------------
# Local CLI entry-point via the provided tests/_runner.py helper
# ------------------------------------------------------------
if __name__ == "__main__":
    # Run with waves to aid debug if desired
    try:
        from _runner import run_cocotb
    except Exception:
        # Allow invocation from repo root or tests/ dir
        import sys
        sys.path.append(os.path.dirname(__file__))
        from _runner import run_cocotb

    run_cocotb(
        pyfile=__file__,
        dut="R32",
        waves=True,
        # If your HDL sources are not under src/, pass sources=[...] explicitly.
    )
