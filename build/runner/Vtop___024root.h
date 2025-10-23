// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clock,0,0);
        VL_IN8(i_reset,0,0);
        VL_OUT8(o_error,0,0);
        VL_OUT8(o_rom_ready,0,0);
        VL_OUT8(o_data_rw,0,0);
        VL_OUT8(o_data_rw_strobe,3,0);
        CData/*0:0*/ R32__DOT__i_clock;
        CData/*0:0*/ R32__DOT__i_reset;
        CData/*0:0*/ R32__DOT__o_error;
        CData/*0:0*/ R32__DOT__o_rom_ready;
        CData/*0:0*/ R32__DOT__o_data_rw;
        CData/*3:0*/ R32__DOT__o_data_rw_strobe;
        CData/*0:0*/ R32__DOT__jalr_flag;
        CData/*0:0*/ R32__DOT__branch_flag;
        CData/*0:0*/ R32__DOT__done_executing_flag;
        CData/*0:0*/ R32__DOT__reg_write_enable;
        CData/*3:0*/ R32__DOT__alu_opcode;
        CData/*4:0*/ R32__DOT__reg_read_sel_1;
        CData/*4:0*/ R32__DOT__reg_read_sel_2;
        CData/*4:0*/ R32__DOT__reg_write_sel;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__i_clock;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__i_reset;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_done_executing;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_branch;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_jalr;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_ready_rom;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__o_reg_read_select1;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__o_reg_read_select2;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__o_reg_write_select;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_reg_write_enable;
        CData/*3:0*/ R32__DOT__u_control_unit__DOT__o_opcode;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_data_rw;
        CData/*3:0*/ R32__DOT__u_control_unit__DOT__o_data_rw_lines;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__o_error;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__current_state;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__next_state;
        CData/*3:0*/ R32__DOT__u_control_unit__DOT__ALU_op_reg;
        CData/*3:0*/ R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__rs1_reg;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__rs2_reg;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__rsd_reg;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__just_branched_reg;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__error_flag_reg;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__rs1;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__rs2;
        CData/*4:0*/ R32__DOT__u_control_unit__DOT__rsd;
        CData/*3:0*/ R32__DOT__u_control_unit__DOT__ALU_op;
        CData/*3:0*/ R32__DOT__u_control_unit__DOT__data_rw_lines;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__just_branched_flag;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__error;
        CData/*6:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field;
        CData/*6:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field;
        CData/*1:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address;
        CData/*0:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address;
        CData/*2:0*/ R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field;
        CData/*3:0*/ R32__DOT__u_ALU__DOT__i_opcode;
        CData/*4:0*/ R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt;
        CData/*0:0*/ R32__DOT__u_program_counter__DOT__i_clock;
        CData/*0:0*/ R32__DOT__u_program_counter__DOT__i_reset;
    };
    struct {
        CData/*0:0*/ R32__DOT__u_program_counter__DOT__i_done_executing;
        CData/*0:0*/ R32__DOT__u_program_counter__DOT__i_branch;
        CData/*0:0*/ R32__DOT__u_program_counter__DOT__i_jalr;
        CData/*0:0*/ R32__DOT__u_register_file__DOT__i_clock;
        CData/*0:0*/ R32__DOT__u_register_file__DOT__i_reset;
        CData/*4:0*/ R32__DOT__u_register_file__DOT__i_reg_read_select1;
        CData/*4:0*/ R32__DOT__u_register_file__DOT__i_reg_read_select2;
        CData/*4:0*/ R32__DOT__u_register_file__DOT__i_reg_write_sel;
        CData/*0:0*/ R32__DOT__u_register_file__DOT__i_write_enable;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_reset__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(i_instruction,31,0);
        VL_OUT(o_instruction_address,31,0);
        VL_OUT(o_data,31,0);
        VL_IN(i_data,31,0);
        VL_OUT(o_data_address,31,0);
        IData/*31:0*/ R32__DOT__i_instruction;
        IData/*31:0*/ R32__DOT__o_instruction_address;
        IData/*31:0*/ R32__DOT__o_data;
        IData/*31:0*/ R32__DOT__i_data;
        IData/*31:0*/ R32__DOT__o_data_address;
        IData/*31:0*/ R32__DOT__program_count;
        IData/*31:0*/ R32__DOT__imm;
        IData/*31:0*/ R32__DOT__alu_operand_a;
        IData/*31:0*/ R32__DOT__alu_operand_b;
        IData/*31:0*/ R32__DOT__alu_result;
        IData/*31:0*/ R32__DOT__reg_read_line_1;
        IData/*31:0*/ R32__DOT__reg_read_line_2;
        IData/*31:0*/ R32__DOT__reg_write_line;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__i_program_counter;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_imm;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_address_rom;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__i_instruction;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__i_reg_read_line_1;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__i_reg_read_line_2;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_reg_write_line;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_ALU_operand_a;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_ALU_operand_b;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__i_ALU_result;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_data_address;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__o_data;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__i_data;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__imm_reg;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__effective_address_reg;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__imm;
        IData/*31:0*/ R32__DOT__u_control_unit__DOT__effective_address;
        IData/*31:0*/ R32__DOT__u_ALU__DOT__i_operand_a;
        IData/*31:0*/ R32__DOT__u_ALU__DOT__i_operand_b;
        IData/*31:0*/ R32__DOT__u_ALU__DOT__o_result;
        IData/*31:0*/ R32__DOT__u_program_counter__DOT__i_imm;
        IData/*31:0*/ R32__DOT__u_program_counter__DOT__o_currentCount;
        IData/*31:0*/ R32__DOT__u_program_counter__DOT__currentCountReg;
        IData/*31:0*/ R32__DOT__u_register_file__DOT__o_reg_output1;
        IData/*31:0*/ R32__DOT__u_register_file__DOT__o_reg_output2;
        IData/*31:0*/ R32__DOT__u_register_file__DOT__i_reg_write_input;
        IData/*31:0*/ R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> R32__DOT__u_register_file__DOT__register_file_array;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__R_TYPE = 0x33U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__I_TYPE_LOAD = 3U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__I_TYPE_ARITHMETIC = 0x13U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__I_TYPE_JALR = 0x67U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__S_TYPE = 0x23U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__B_TYPE = 0x63U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__J_TYPE = 0x6fU;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__U_TYPE_AUIPC = 0x17U;
    static constexpr CData/*6:0*/ R32__DOT__u_control_unit__DOT__U_TYPE_LUI = 0x37U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_ADDI = 0U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_SLLI = 1U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_SLTI = 2U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_SLTIU = 3U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_XORI = 4U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_SRLI_SRAI = 5U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_ORI = 6U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__FUNCT3_ANDI = 7U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_ADD = 0U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_SUB = 1U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_XOR = 2U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_OR = 3U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_AND = 4U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_SLL = 5U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_SRL = 6U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_SRA = 7U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_SLT = 8U;
    static constexpr CData/*3:0*/ R32__DOT__u_control_unit__DOT__OP_SLTU = 9U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__STORE_BYTE = 0U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__STORE_HWORD = 1U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__STORE_WORD = 2U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__LOAD_BYTE = 0U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__LOAD_HWORD = 1U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__LOAD_WORD = 2U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__LOAB_BYTE_U = 4U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__LOAD_HWORD_U = 5U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__BEQ = 0U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__BNE = 1U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__BLT = 4U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__BGE = 5U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__BLTU = 6U;
    static constexpr CData/*2:0*/ R32__DOT__u_control_unit__DOT__BGEU = 7U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_ADD = 0U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_SUB = 1U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_XOR = 2U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_OR = 3U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_AND = 4U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_SLL = 5U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_SRL = 6U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_SRA = 7U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_SLT = 8U;
    static constexpr CData/*3:0*/ R32__DOT__u_ALU__DOT__OP_SLTU = 9U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
