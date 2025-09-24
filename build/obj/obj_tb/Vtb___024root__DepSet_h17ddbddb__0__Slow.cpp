// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

extern const VlWide<11>/*351:0*/ Vtb__ConstPool__CONST_he79dc635_0;

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.fst"});
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 32, 512, 0, VL_CVT_PACK_STR_NW(11, Vtb__ConstPool__CONST_he79dc635_0)
                 ,  &(vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__ROM)
                 , 0, ~0ULL);
    vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k)) {
        vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM[(0x3ffU 
                                                            & vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k)] = 0U;
        vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
