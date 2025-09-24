// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clock__0 
        = vlSelfRef.tb__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__reset__0 
        = vlSelfRef.tb__DOT__reset;
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtb__ConstPool__TABLE_hb8a01c3f_0;

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2 
        = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg];
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
        = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg];
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address = 0U;
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a = 0U;
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
        if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                              >> 6U)))) {
                    if ((0x20U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                        if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1;
                                        }
                                    }
                                }
                            }
                        }
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
                    } else {
                        if ((0x10U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                        if ((1U & vlSelfRef.tb__DOT__u_SoC__DOT__instruction)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a 
                                                = vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1;
                                        }
                                    }
                                }
                            }
                        }
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
                if ((1U & (~ (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg)))) {
                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = 1U;
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
    } else {
        if ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
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
                                        } else if (
                                                   (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 
                                                    < vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2)) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = 1U;
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
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
                                            = (0x1fU 
                                               & (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
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
                                            << 0xcU) 
                                           | (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                              >> 0x14U));
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 
                                        = (0x1fU & 
                                           (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                            >> 0xfU));
                                    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd 
                                        = (0x1fU & 
                                           (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
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
                                    = (((- (IData)(
                                                   (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       (((0x1000U & 
                                          (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
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
                                        = (0x1fU & 
                                           (vlSelfRef.tb__DOT__u_SoC__DOT__instruction 
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
                                            = ((1U 
                                                & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                                ? 4U
                                                : 3U);
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                        if ((0U == (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                            vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = 6U;
                                        } else if (
                                                   (0x20U 
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
                                            ? 4U : 3U)
                                        : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                            ? ((0U 
                                                == 
                                                (0x7fU 
                                                 & (vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm 
                                                    >> 5U)))
                                                ? 6U
                                                : 7U)
                                            : 2U)) : 
                                   ((2U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                     ? ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                         ? 9U : 8U)
                                     : ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                         ? 5U : 0U)));
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
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state))) {
                vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = 0U;
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error) 
                     << 4U) | (((IData)(vlSelfRef.tb__DOT__reset) 
                                << 3U) | (IData)(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state)));
    vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__next_state 
        = Vtb__ConstPool__TABLE_hb8a01c3f_0[__Vtableidx1];
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vm_traceActivitySetAll\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15416580966322914461ull);
    vlSelf->tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3335164965398888254ull);
    vlSelf->tb__DOT__u_SoC__DOT__rom_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 494661082907565154ull);
    vlSelf->tb__DOT__u_SoC__DOT__data_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8354264621505723141ull);
    vlSelf->tb__DOT__u_SoC__DOT__mem_error_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13705070985196501259ull);
    vlSelf->tb__DOT__u_SoC__DOT__mem_error_rom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4254180232621941102ull);
    vlSelf->tb__DOT__u_SoC__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8752548772645209249ull);
    vlSelf->tb__DOT__u_SoC__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4761205989345043392ull);
    vlSelf->tb__DOT__u_SoC__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12600955654888775584ull);
    vlSelf->tb__DOT__u_SoC__DOT__instruction_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5432131848226518443ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13989269389604614688ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10003024616548530644ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16043478595750768945ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6203233449090530478ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4390266240538539162ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3211620292596259517ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9327463557194523829ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1020906530500614175ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4145980415456905016ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10681159327823253666ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1046387363007842677ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8024076960020914292ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1579908007828880694ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 922474805377421756ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 172754628814740575ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13908546703605611182ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13509698058686061059ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1154038975698854854ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16177661568367875177ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 626805592890817782ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10331906891067825200ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11301994904425754371ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 522866836344026299ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15773849635213212824ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4914122326793908534ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 559200624670406871ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14238849254484267795ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6325502568702688329ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11721582543153148015ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14554134763409042631ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 222662225949495568ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15606322375883757610ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 637368339486074243ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15040889617406021307ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3704009714703092347ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 397738915356133701ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14280113705191994411ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17094325115607476054ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4553234839039027099ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15355175312011513788ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3523370991226947282ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10833903743257032264ull);
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3562559311042968924ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2144046138264060984ull);
    }
    vlSelf->tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 210766618841458392ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__ROM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17868970130146880290ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13688716738560906485ull);
    }
    vlSelf->tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 279059534405365809ull);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17899691967413488854ull);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10178742492967878930ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
