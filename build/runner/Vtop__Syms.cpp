// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_R32);
    __Vhier.remove(&__Vscope_R32, &__Vscope_R32__u_ALU);
    __Vhier.remove(&__Vscope_R32, &__Vscope_R32__u_control_unit);
    __Vhier.remove(&__Vscope_R32, &__Vscope_R32__u_program_counter);
    __Vhier.remove(&__Vscope_R32, &__Vscope_R32__u_register_file);
    __Vhier.remove(&__Vscope_R32__u_ALU, &__Vscope_R32__u_ALU__unnamedblk1);
    __Vhier.remove(&__Vscope_R32__u_control_unit, &__Vscope_R32__u_control_unit__output_logic);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk5);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk6);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk7);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic__unnamedblk1, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk2);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic__unnamedblk1, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk3);
    __Vhier.remove(&__Vscope_R32__u_control_unit__output_logic__unnamedblk1, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk4);
    __Vhier.remove(&__Vscope_R32__u_register_file, &__Vscope_R32__u_register_file__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(55);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_R32.configure(this, name(), "R32", "R32", "R32", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_R32__u_ALU.configure(this, name(), "R32.u_ALU", "u_ALU", "ALU", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_R32__u_ALU__unnamedblk1.configure(this, name(), "R32.u_ALU.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit.configure(this, name(), "R32.u_control_unit", "u_control_unit", "control_unit", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_R32__u_control_unit__output_logic.configure(this, name(), "R32.u_control_unit.output_logic", "output_logic", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk1.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk2.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk1.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk3.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk1.unnamedblk3", "unnamedblk3", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk4.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk1.unnamedblk4", "unnamedblk4", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk5.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk6.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk6", "unnamedblk6", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_control_unit__output_logic__unnamedblk7.configure(this, name(), "R32.u_control_unit.output_logic.unnamedblk7", "unnamedblk7", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_R32__u_program_counter.configure(this, name(), "R32.u_program_counter", "u_program_counter", "program_counter", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_R32__u_register_file.configure(this, name(), "R32.u_register_file", "u_register_file", "register_file", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_R32__u_register_file__unnamedblk1.configure(this, name(), "R32.u_register_file.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_R32);
    __Vhier.add(&__Vscope_R32, &__Vscope_R32__u_ALU);
    __Vhier.add(&__Vscope_R32, &__Vscope_R32__u_control_unit);
    __Vhier.add(&__Vscope_R32, &__Vscope_R32__u_program_counter);
    __Vhier.add(&__Vscope_R32, &__Vscope_R32__u_register_file);
    __Vhier.add(&__Vscope_R32__u_ALU, &__Vscope_R32__u_ALU__unnamedblk1);
    __Vhier.add(&__Vscope_R32__u_control_unit, &__Vscope_R32__u_control_unit__output_logic);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk5);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk6);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic, &__Vscope_R32__u_control_unit__output_logic__unnamedblk7);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic__unnamedblk1, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk2);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic__unnamedblk1, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk3);
    __Vhier.add(&__Vscope_R32__u_control_unit__output_logic__unnamedblk1, &__Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk4);
    __Vhier.add(&__Vscope_R32__u_register_file, &__Vscope_R32__u_register_file__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_R32.varInsert(__Vfinal,"alu_opcode", &(TOP.R32__DOT__alu_opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32.varInsert(__Vfinal,"alu_operand_a", &(TOP.R32__DOT__alu_operand_a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"alu_operand_b", &(TOP.R32__DOT__alu_operand_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"alu_result", &(TOP.R32__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"branch_flag", &(TOP.R32__DOT__branch_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"done_executing_flag", &(TOP.R32__DOT__done_executing_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"i_clock", &(TOP.R32__DOT__i_clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"i_data", &(TOP.R32__DOT__i_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"i_instruction", &(TOP.R32__DOT__i_instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"i_reset", &(TOP.R32__DOT__i_reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"imm", &(TOP.R32__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"jalr_flag", &(TOP.R32__DOT__jalr_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"o_data", &(TOP.R32__DOT__o_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"o_data_address", &(TOP.R32__DOT__o_data_address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"o_data_rw", &(TOP.R32__DOT__o_data_rw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"o_data_rw_strobe", &(TOP.R32__DOT__o_data_rw_strobe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32.varInsert(__Vfinal,"o_error", &(TOP.R32__DOT__o_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"o_instruction_address", &(TOP.R32__DOT__o_instruction_address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"o_rom_ready", &(TOP.R32__DOT__o_rom_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"program_count", &(TOP.R32__DOT__program_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_read_line_1", &(TOP.R32__DOT__reg_read_line_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_read_line_2", &(TOP.R32__DOT__reg_read_line_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_read_sel_1", &(TOP.R32__DOT__reg_read_sel_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_read_sel_2", &(TOP.R32__DOT__reg_read_sel_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_write_enable", &(TOP.R32__DOT__reg_write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_write_line", &(TOP.R32__DOT__reg_write_line), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32.varInsert(__Vfinal,"reg_write_sel", &(TOP.R32__DOT__reg_write_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_ADD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_ADD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_AND", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_AND))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_OR", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_OR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_SLL", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_SLL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_SLT", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_SLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_SLTU", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_SLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_SRA", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_SRA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_SRL", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_SRL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_SUB", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_SUB))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"OP_XOR", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_ALU__DOT__OP_XOR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"i_opcode", &(TOP.R32__DOT__u_ALU__DOT__i_opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"i_operand_a", &(TOP.R32__DOT__u_ALU__DOT__i_operand_a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"i_operand_b", &(TOP.R32__DOT__u_ALU__DOT__i_operand_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_ALU.varInsert(__Vfinal,"o_result", &(TOP.R32__DOT__u_ALU__DOT__o_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_ALU__unnamedblk1.varInsert(__Vfinal,"shift_amt", &(TOP.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"ALU_op", &(TOP.R32__DOT__u_control_unit__DOT__ALU_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"ALU_op_reg", &(TOP.R32__DOT__u_control_unit__DOT__ALU_op_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"BEQ", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__BEQ))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"BGE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__BGE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"BGEU", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__BGEU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"BLT", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__BLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"BLTU", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__BLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"BNE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__BNE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"B_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__B_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_ADDI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_ADDI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_ANDI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_ANDI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_ORI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_ORI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_SLLI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_SLLI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_SLTI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_SLTI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_SLTIU", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_SLTIU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_SRLI_SRAI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_SRLI_SRAI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"FUNCT3_XORI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__FUNCT3_XORI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"I_TYPE_ARITHMETIC", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__I_TYPE_ARITHMETIC))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"I_TYPE_JALR", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__I_TYPE_JALR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"I_TYPE_LOAD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__I_TYPE_LOAD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"J_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__J_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"LOAB_BYTE_U", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__LOAB_BYTE_U))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"LOAD_BYTE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__LOAD_BYTE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"LOAD_HWORD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__LOAD_HWORD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"LOAD_HWORD_U", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__LOAD_HWORD_U))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"LOAD_WORD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__LOAD_WORD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_ADD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_ADD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_AND", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_AND))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_OR", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_OR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_SLL", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_SLL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_SLT", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_SLT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_SLTU", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_SLTU))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_SRA", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_SRA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_SRL", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_SRL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_SUB", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_SUB))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"OP_XOR", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__OP_XOR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"R_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__R_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"STORE_BYTE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__STORE_BYTE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"STORE_HWORD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__STORE_HWORD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"STORE_WORD", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__STORE_WORD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"S_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__S_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"U_TYPE_AUIPC", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__U_TYPE_AUIPC))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"U_TYPE_LUI", const_cast<void*>(static_cast<const void*>(&(TOP.R32__DOT__u_control_unit__DOT__U_TYPE_LUI))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"current_state", &(TOP.R32__DOT__u_control_unit__DOT__current_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"data_rw_lines", &(TOP.R32__DOT__u_control_unit__DOT__data_rw_lines), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"data_rw_lines_reg", &(TOP.R32__DOT__u_control_unit__DOT__data_rw_lines_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"effective_address", &(TOP.R32__DOT__u_control_unit__DOT__effective_address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"effective_address_reg", &(TOP.R32__DOT__u_control_unit__DOT__effective_address_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"error", &(TOP.R32__DOT__u_control_unit__DOT__error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"error_flag_reg", &(TOP.R32__DOT__u_control_unit__DOT__error_flag_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_ALU_result", &(TOP.R32__DOT__u_control_unit__DOT__i_ALU_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_clock", &(TOP.R32__DOT__u_control_unit__DOT__i_clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_data", &(TOP.R32__DOT__u_control_unit__DOT__i_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_instruction", &(TOP.R32__DOT__u_control_unit__DOT__i_instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_program_counter", &(TOP.R32__DOT__u_control_unit__DOT__i_program_counter), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_reg_read_line_1", &(TOP.R32__DOT__u_control_unit__DOT__i_reg_read_line_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_reg_read_line_2", &(TOP.R32__DOT__u_control_unit__DOT__i_reg_read_line_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"i_reset", &(TOP.R32__DOT__u_control_unit__DOT__i_reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"imm", &(TOP.R32__DOT__u_control_unit__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"imm_reg", &(TOP.R32__DOT__u_control_unit__DOT__imm_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"just_branched_flag", &(TOP.R32__DOT__u_control_unit__DOT__just_branched_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"just_branched_reg", &(TOP.R32__DOT__u_control_unit__DOT__just_branched_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"next_state", &(TOP.R32__DOT__u_control_unit__DOT__next_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_ALU_operand_a", &(TOP.R32__DOT__u_control_unit__DOT__o_ALU_operand_a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_ALU_operand_b", &(TOP.R32__DOT__u_control_unit__DOT__o_ALU_operand_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_address_rom", &(TOP.R32__DOT__u_control_unit__DOT__o_address_rom), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_branch", &(TOP.R32__DOT__u_control_unit__DOT__o_branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_data", &(TOP.R32__DOT__u_control_unit__DOT__o_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_data_address", &(TOP.R32__DOT__u_control_unit__DOT__o_data_address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_data_rw", &(TOP.R32__DOT__u_control_unit__DOT__o_data_rw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_data_rw_lines", &(TOP.R32__DOT__u_control_unit__DOT__o_data_rw_lines), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_done_executing", &(TOP.R32__DOT__u_control_unit__DOT__o_done_executing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_error", &(TOP.R32__DOT__u_control_unit__DOT__o_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_imm", &(TOP.R32__DOT__u_control_unit__DOT__o_imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_jalr", &(TOP.R32__DOT__u_control_unit__DOT__o_jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_opcode", &(TOP.R32__DOT__u_control_unit__DOT__o_opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_ready_rom", &(TOP.R32__DOT__u_control_unit__DOT__o_ready_rom), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_reg_read_select1", &(TOP.R32__DOT__u_control_unit__DOT__o_reg_read_select1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_reg_read_select2", &(TOP.R32__DOT__u_control_unit__DOT__o_reg_read_select2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_reg_write_enable", &(TOP.R32__DOT__u_control_unit__DOT__o_reg_write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_reg_write_line", &(TOP.R32__DOT__u_control_unit__DOT__o_reg_write_line), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"o_reg_write_select", &(TOP.R32__DOT__u_control_unit__DOT__o_reg_write_select), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"rs1", &(TOP.R32__DOT__u_control_unit__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"rs1_reg", &(TOP.R32__DOT__u_control_unit__DOT__rs1_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"rs2", &(TOP.R32__DOT__u_control_unit__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"rs2_reg", &(TOP.R32__DOT__u_control_unit__DOT__rs2_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"rsd", &(TOP.R32__DOT__u_control_unit__DOT__rsd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit.varInsert(__Vfinal,"rsd_reg", &(TOP.R32__DOT__u_control_unit__DOT__rsd_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk1.varInsert(__Vfinal,"opcode", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk2.varInsert(__Vfinal,"funct3_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk2.varInsert(__Vfinal,"funct7_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk3.varInsert(__Vfinal,"funct3_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk1__unnamedblk4.varInsert(__Vfinal,"funct3_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk5.varInsert(__Vfinal,"funct3_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk6.varInsert(__Vfinal,"byte_address", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk6.varInsert(__Vfinal,"funct3_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk6.varInsert(__Vfinal,"hword_address", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_control_unit__output_logic__unnamedblk7.varInsert(__Vfinal,"funct3_field", &(TOP.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"currentCountReg", &(TOP.R32__DOT__u_program_counter__DOT__currentCountReg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"i_branch", &(TOP.R32__DOT__u_program_counter__DOT__i_branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"i_clock", &(TOP.R32__DOT__u_program_counter__DOT__i_clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"i_done_executing", &(TOP.R32__DOT__u_program_counter__DOT__i_done_executing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"i_imm", &(TOP.R32__DOT__u_program_counter__DOT__i_imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"i_jalr", &(TOP.R32__DOT__u_program_counter__DOT__i_jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"i_reset", &(TOP.R32__DOT__u_program_counter__DOT__i_reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_program_counter.varInsert(__Vfinal,"o_currentCount", &(TOP.R32__DOT__u_program_counter__DOT__o_currentCount), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_clock", &(TOP.R32__DOT__u_register_file__DOT__i_clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_reg_read_select1", &(TOP.R32__DOT__u_register_file__DOT__i_reg_read_select1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_reg_read_select2", &(TOP.R32__DOT__u_register_file__DOT__i_reg_read_select2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_reg_write_input", &(TOP.R32__DOT__u_register_file__DOT__i_reg_write_input), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_reg_write_sel", &(TOP.R32__DOT__u_register_file__DOT__i_reg_write_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_reset", &(TOP.R32__DOT__u_register_file__DOT__i_reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"i_write_enable", &(TOP.R32__DOT__u_register_file__DOT__i_write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"o_reg_output1", &(TOP.R32__DOT__u_register_file__DOT__o_reg_output1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"o_reg_output2", &(TOP.R32__DOT__u_register_file__DOT__o_reg_output2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_R32__u_register_file.varInsert(__Vfinal,"register_file_array", &(TOP.R32__DOT__u_register_file__DOT__register_file_array), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,31,0);
        __Vscope_R32__u_register_file__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"i_clock", &(TOP.i_clock), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"i_data", &(TOP.i_data), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"i_instruction", &(TOP.i_instruction), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"i_reset", &(TOP.i_reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_data", &(TOP.o_data), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_data_address", &(TOP.o_data_address), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_data_rw", &(TOP.o_data_rw), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_data_rw_strobe", &(TOP.o_data_rw_strobe), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_error", &(TOP.o_error), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_instruction_address", &(TOP.o_instruction_address), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"o_rom_ready", &(TOP.o_rom_ready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
    }
}
