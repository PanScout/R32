# tests/test_and_gate.py
import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def check_and(dut):
    # Truth table: a & b -> y
    for a, b, exp in [(0,0,0), (0,1,0), (1,0,0), (1,1,1)]:
        dut.a.value = a
        dut.b.value = b
        await Timer(10, units="ns")
        assert int(dut.y.value) == exp, f"{a}&{b} -> {int(dut.y.value)} != {exp}"

if __name__ == "__main__":
    # Verilator + SystemVerilog runner; waves=True enables FST by default (DUMP=vcd for VCD).
    from _runner import run_cocotb
    run_cocotb(__file__, dut="and_gate", waves=False)
