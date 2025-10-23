// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__R_TYPE;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__I_TYPE_LOAD;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__I_TYPE_ARITHMETIC;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__I_TYPE_JALR;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__S_TYPE;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__B_TYPE;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__J_TYPE;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__U_TYPE_AUIPC;
constexpr CData/*6:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__U_TYPE_LUI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_ADDI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_SLLI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_SLTI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_SLTIU;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_XORI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_SRLI_SRAI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_ORI;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__FUNCT3_ANDI;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_ADD;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_SUB;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_XOR;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_OR;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_AND;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_SLL;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_SRL;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_SRA;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_SLT;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__OP_SLTU;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__STORE_BYTE;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__STORE_HWORD;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__STORE_WORD;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__LOAD_BYTE;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__LOAD_HWORD;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__LOAD_WORD;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__LOAB_BYTE_U;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__LOAD_HWORD_U;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__BEQ;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__BNE;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__BLT;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__BGE;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__BLTU;
constexpr CData/*2:0*/ Vtop___024root::R32__DOT__u_control_unit__DOT__BGEU;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_ADD;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_SUB;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_XOR;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_OR;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_AND;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_SLL;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_SRL;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_SRA;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_SLT;
constexpr CData/*3:0*/ Vtop___024root::R32__DOT__u_ALU__DOT__OP_SLTU;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
