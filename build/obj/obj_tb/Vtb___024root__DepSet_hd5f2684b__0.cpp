// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb/tb.sv", 
                                         49);
    vlSelfRef.tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x5b8d80ULL, 
                                         nullptr, "tb/tb.sv", 
                                         51);
    vlSelfRef.tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x5b8d80ULL, 
                                         nullptr, "tb/tb.sv", 
                                         53);
    vlSelfRef.tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x5b8d80ULL, 
                                         nullptr, "tb/tb.sv", 
                                         55);
    VL_FINISH_MT("tb/tb.sv", 59, "");
}

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtb__ConstPool__TABLE_hb8a01c3f_0;

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error) 
                     << 4U) | (((IData)(vlSelfRef.tb__DOT__reset) 
                                << 3U) | (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state)));
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__next_state 
        = Vtb__ConstPool__TABLE_hb8a01c3f_0[__Vtableidx1];
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg;
    __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v0;
    __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v32;
    __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v32 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33;
    __VdlyVal__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33;
    __VdlyDim0__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33;
    __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 = 0;
    // Body
    __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
        = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg;
    __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v0 = 0U;
    __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v32 = 0U;
    __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 = 0U;
    if (vlSelfRef.tb__DOT__reset) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg = 0U;
        __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v0 = 1U;
    } else {
        if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag) {
            __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg;
        } else if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag) {
            __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
                = (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
                   + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg);
        } else if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag) {
            __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
                = ((IData)(4U) + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg);
        }
        if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable) {
            if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg))) {
                __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v32 = 1U;
            } else {
                __VdlyVal__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 
                    = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line;
                __VdlyDim0__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 
                    = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg;
                __VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33 = 1U;
            }
        }
    }
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
        = __Vdly__tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg;
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v0) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[1U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[2U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[3U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[4U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[5U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[6U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[7U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[8U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[9U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0xaU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0xbU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0xcU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0xdU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0xeU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0xfU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x10U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x11U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x12U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x13U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x14U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x15U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x16U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x17U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x18U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x19U] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x1aU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x1bU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x1cU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x1dU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x1eU] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0x1fU] = 0U;
    }
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v32) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0U] = 0U;
    }
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[__VdlyDim0__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33] 
            = __VdlyVal__tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array__v33;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0;
    __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0;
    __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1;
    __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1;
    __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2;
    __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 = 0;
    SData/*9:0*/ __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2;
    __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3;
    __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 = 0;
    SData/*9:0*/ __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3;
    __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 = 0;
    // Body
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 = 0U;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 = 0U;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 = 0U;
    __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 = 0U;
    if ((1U & (~ (((~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__data_rw)) 
                   & (0x800U <= VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U))) 
                  & (0x1800U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)))))) {
        if ((((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__data_rw) 
              & (0x200U <= VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U))) 
             & (0x600U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg))) {
                __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 
                    = (0xffU & vlSelfRef.tb__DOT__u_SoC__DOT__data_out);
                __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 
                    = (0x3ffU & ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                                  >> 2U) - (IData)(0x200U)));
                __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg))) {
                __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 
                    = (0xffU & (vlSelfRef.tb__DOT__u_SoC__DOT__data_out 
                                >> 8U));
                __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 
                    = (0x3ffU & ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                                  >> 2U) - (IData)(0x200U)));
                __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg))) {
                __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 
                    = (0xffU & (vlSelfRef.tb__DOT__u_SoC__DOT__data_out 
                                >> 0x10U));
                __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 
                    = (0x3ffU & ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                                  >> 2U) - (IData)(0x200U)));
                __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg))) {
                __VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 
                    = (vlSelfRef.tb__DOT__u_SoC__DOT__data_out 
                       >> 0x18U);
                __VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 
                    = (0x3ffU & ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                                  >> 2U) - (IData)(0x200U)));
                __VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3 = 1U;
            }
        }
    }
    if (((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready) 
         & (0x800U > vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address))) {
        vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_rom = 0U;
    } else if ((0U != vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address)) {
        vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_rom = 1U;
    }
    if ((((~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__data_rw)) 
          & (0x800U <= VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U))) 
         & (0x1800U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)))) {
        vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_ram = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__data_in = vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM
            [(0x3ffU & ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                         >> 2U) - (IData)(0x200U)))];
    } else if ((((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__data_rw) 
                 & (0x200U <= VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U))) 
                & (0x600U > VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)))) {
        vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_ram = 0U;
    }
    if ((((0U != VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)) 
          & (0x200U >= VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U))) 
         & (0x600U < VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)))) {
        vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_ram = 1U;
    }
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM[__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0] 
            = ((0xffffff00U & vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM
                [__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0]) 
               | (IData)(__VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v0));
    }
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM[__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1] 
            = ((0xffff00ffU & vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM
                [__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1]) 
               | ((IData)(__VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM[__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2] 
            = ((0xff00ffffU & vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM
                [__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2]) 
               | ((IData)(__VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM[__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3] 
            = ((0xffffffU & vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM
                [__VdlyDim0__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3]) 
               | ((IData)(__VdlyVal__tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb__DOT__reset) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state = 0U;
    } else {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg 
            = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines;
        if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error;
        }
        if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        }
        if ((1U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg = 0U;
        }
        if ((2U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg 
                = ((0x67U == (0x7fU & vlSelfRef.tb__DOT__u_SoC__DOT__instruction))
                    ? (0xfffffffeU & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                      + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm))
                    : vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm);
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op;
        }
        if ((3U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg 
                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines;
        }
        if ((4U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        }
        if ((5U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            if (vlSelfRef.tb__DOT__reset) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg = 0U;
            }
        }
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state 
            = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__next_state;
    }
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2 
        = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg];
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
        = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg];
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = 0U;
    if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg)))) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = 1U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__3\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready) 
         & (0x800U > vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address))) {
        vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
            = vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__ROM
            [(0x1ffU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address 
                        >> 2U))];
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__4\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
                vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready = 1U;
                vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address 
                    = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg;
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready = 0U;
                vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                              >> 6U)))) {
                    if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address 
                                                = (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                                   + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg);
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address 
                                                = (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                                   + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg);
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address 
                                                = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address 
                                                                   >> 0xbU)))) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address 
                                                         >> 2U)));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt 
        = (0x1fU & vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b);
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
            ? ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                ? 0U : ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                         ? 0U : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                                  ? (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                                     < vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b)
                                  : VL_LTS_III(32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b))))
            : ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                ? ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a, (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt))
                        : (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           >> (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt)))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                        ? (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           << (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt))
                        : (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           & vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b)))
                : ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                        ? (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           | vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b)
                        : (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           ^ vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode))
                        ? (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           - vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b)
                        : (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                           + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b)))));
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2 = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__data_rw = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__data_out = 0U;
    if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state)))) {
                if ((0x40U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag = 0U;
                                        }
                                    }
                                }
                            }
                            if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((0x40U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
            if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 0U;
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & (~ vlSelfRef.tb__DOT__u_SoC__DOT__instruction))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 0U;
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
            if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & (~ vlSelfRef.tb__DOT__u_SoC__DOT__instruction))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                            = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result;
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field 
                        = (7U & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                 >> 0xcU));
                    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error)))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__data_rw = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__data_out 
                            = (0xffU & vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2);
                    } else if ((1U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__data_out 
                            = (0xffffU & vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2);
                    } else if ((2U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__data_out 
                            = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2;
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
            if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & (~ vlSelfRef.tb__DOT__u_SoC__DOT__instruction))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                        = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result;
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field 
                    = (7U & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                             >> 0xcU));
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address 
                    = (3U & vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg);
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address 
                    = (1U & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg 
                             >> 1U));
                if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                            if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                    = (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                = (0xffffU & vlSelfRef.tb__DOT__u_SoC__DOT__data_in);
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                            = ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                    ? (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                       >> 0x18U) : 
                                   (0xffU & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                             >> 0x10U)))
                                : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                    ? (0xffU & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                >> 8U))
                                    : (0xffU & vlSelfRef.tb__DOT__u_SoC__DOT__data_in)));
                    }
                } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                            = vlSelfRef.tb__DOT__u_SoC__DOT__data_in;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                        if (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                = (((- (IData)((vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                >> 0x1fU))) 
                                    << 0x10U) | (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                 >> 0x10U));
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                            = (((- (IData)((1U & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.tb__DOT__u_SoC__DOT__data_in));
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                        = ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                            ? ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? (((- (IData)((vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                >> 0x1fU))) 
                                    << 8U) | (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                              >> 0x18U))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                   >> 0x17U)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                 >> 0x10U))))
                            : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                 >> 8U)))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.tb__DOT__u_SoC__DOT__data_in 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelfRef.tb__DOT__u_SoC__DOT__data_in))));
                }
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            if ((0x40U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag = 1U;
                                    }
                                }
                            }
                        }
                        if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                                    }
                                }
                            }
                        } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                                }
                            }
                        }
                    }
                    if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                        = ((IData)(4U) 
                                           + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg);
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                } else {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                                }
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                    = ((IData)(4U) 
                                       + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg);
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                    = (0xfffffffeU 
                                       & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                          + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg));
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field 
                                = (7U & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                         >> 0xcU));
                            if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                    if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                        if ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                             >= vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                        }
                                    } else if ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                                < vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                    if (VL_GTES_III(32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                    }
                                } else if (VL_LTS_III(32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                if ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                     != vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                }
                            } else if ((vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                        == vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                                }
                            }
                        } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                            }
                        }
                    }
                    if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                    = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg;
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result;
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines 
                            = (0xfU & ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg) 
                                       << (3U & vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg)));
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                                = (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg 
                                   + vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg);
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line 
                            = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result;
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 0xfU;
                    vlSelfRef.tb__DOT__u_SoC__DOT__data_rw = 0U;
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode 
                = (0x7fU & vlSelfRef.tb__DOT__u_SoC__DOT__instruction);
            if ((0x40U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((0x20U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((0x10U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                                        = (0x1fU & 
                                           (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 7U));
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                        = ((((- (IData)(
                                                        (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | (0x100000U 
                                               & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                  >> 0xbU))) 
                                           | (((0xff000U 
                                                & vlSelfRef.tb__DOT__u_SoC__DOT__instruction) 
                                               | (0x800U 
                                                  & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                    >> 0x14U))));
                                } else {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                                }
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 0x14U));
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                                    = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                >> 0xfU));
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                                    = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                >> 7U));
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                = (((- (IData)((vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                >> 0x1fU))) 
                                    << 0xdU) | (((0x1000U 
                                                  & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                     >> 0x13U)) 
                                                 | (0x800U 
                                                    & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                       << 4U))) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                         >> 7U)))));
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                                = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0xfU));
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2 
                                = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0x14U));
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x20U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((0x10U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelfRef.tb__DOT__u_SoC__DOT__instruction);
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                                    = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                >> 7U));
                            } else {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field 
                                = (7U & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                         >> 0xcU));
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field 
                                = (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                   >> 0x19U);
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                                = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0xfU));
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2 
                                = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0x14U));
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                                = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 7U));
                            if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op 
                                        = ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                            ? 4U : 3U);
                                } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                    if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 6U;
                                    } else if ((0x20U 
                                                == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 7U;
                                    }
                                } else {
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 2U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op 
                                    = ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                        ? 9U : 8U);
                            } else if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 5U;
                            } else if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 0U;
                            } else if ((0x20U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 1U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field 
                            = (7U & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                     >> 0xcU));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                            = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 0xfU));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2 
                            = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 0x14U));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                            = (((- (IData)((vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                  >> 7U))));
                        if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 1U;
                        } else if ((1U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 3U;
                        } else if ((2U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 0xfU;
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                = (0xfffff000U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction);
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                                = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 7U));
                        } else {
                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field 
                            = (7U & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                     >> 0xcU));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                            = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 0xfU));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                            = (((- (IData)((vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0x14U));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                            = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 7U));
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op 
                            = ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                ? ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                    ? ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                        ? 4U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                     ? ((0U == (0x7fU 
                                                & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                                   >> 5U)))
                                         ? 6U : 7U)
                                     : 2U)) : ((2U 
                                                & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                    ? 5U
                                                    : 0U)));
                    } else {
                        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                        = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                    >> 0xfU));
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                        = (((- (IData)((vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                        >> 0x14U));
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                        = (0x1fU & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                    >> 7U));
                } else {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = 1U;
            }
        }
    } else {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
        if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.tb__DOT__u_SoC__DOT__data_rw = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
        } else {
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 0U;
            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
        }
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb.sv", 11, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
