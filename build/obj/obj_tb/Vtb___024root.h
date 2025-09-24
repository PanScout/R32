// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clock;
    CData/*0:0*/ tb__DOT__reset;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__rom_ready;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__data_rw;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__mem_error_ram;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__mem_error_rom;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable;
    CData/*3:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__next_state;
    CData/*3:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg;
    CData/*3:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd;
    CData/*3:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op;
    CData/*3:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error;
    CData/*6:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field;
    CData/*6:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field;
    CData/*1:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address;
    CData/*0:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address;
    CData/*2:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field;
    CData/*4:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__instruction;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__data_in;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__data_out;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__instruction_address;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array;
    VlUnpacked<IData/*31:0*/, 512> tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__ROM;
    VlUnpacked<IData/*31:0*/, 1024> tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
