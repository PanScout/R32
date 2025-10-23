// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hb8a01c3f_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.o_error = vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg;
    vlSelfRef.R32__DOT__o_error = vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_error 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg;
    vlSelfRef.o_data_address = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg;
    vlSelfRef.R32__DOT__o_data_address = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_address 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg;
    vlSelfRef.o_data_rw_strobe = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    vlSelfRef.R32__DOT__o_data_rw_strobe = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw_lines 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    vlSelfRef.R32__DOT__u_program_counter__DOT__o_currentCount 
        = vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_read_select1 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_read_select2 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_imm 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_select 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg;
    vlSelfRef.R32__DOT__u_register_file__DOT__o_reg_output1 
        = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg];
    vlSelfRef.R32__DOT__u_register_file__DOT__o_reg_output2 
        = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg];
    vlSelfRef.R32__DOT__i_instruction = vlSelfRef.i_instruction;
    vlSelfRef.R32__DOT__i_data = vlSelfRef.i_data;
    vlSelfRef.R32__DOT__reg_read_sel_1 = vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg;
    vlSelfRef.R32__DOT__reg_read_sel_2 = vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg;
    vlSelfRef.R32__DOT__imm = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
    vlSelfRef.R32__DOT__reg_write_sel = vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
    vlSelfRef.R32__DOT__i_clock = vlSelfRef.i_clock;
    vlSelfRef.R32__DOT__i_reset = vlSelfRef.i_reset;
    vlSelfRef.R32__DOT__program_count = vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode = 0U;
    vlSelfRef.R32__DOT__reg_read_line_2 = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg];
    vlSelfRef.R32__DOT__reg_read_line_1 = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg];
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_instruction 
        = vlSelfRef.R32__DOT__i_instruction;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_data 
        = vlSelfRef.R32__DOT__i_data;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_read_select1 
        = vlSelfRef.R32__DOT__reg_read_sel_1;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_read_select2 
        = vlSelfRef.R32__DOT__reg_read_sel_2;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_imm 
        = vlSelfRef.R32__DOT__imm;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_write_sel 
        = vlSelfRef.R32__DOT__reg_write_sel;
    if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom 
                = (1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state));
        }
    }
    vlSelfRef.o_rom_ready = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom;
    vlSelfRef.R32__DOT__o_rom_ready = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom;
    if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state)))) {
                if ((1U & (~ (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg)))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing = 1U;
                }
                if ((0x40U & vlSelfRef.i_instruction)) {
                    if ((0x20U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr = 0U;
                                        }
                                    }
                                }
                            }
                            if ((8U & vlSelfRef.i_instruction)) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x20U & vlSelfRef.i_instruction)) {
                    if ((0x10U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelfRef.i_instruction)) {
                    if ((1U & (~ (vlSelfRef.i_instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.i_instruction)) {
                            if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.i_instruction 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.i_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.R32__DOT__done_executing_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing;
        vlSelfRef.R32__DOT__jalr_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing = 0U;
            }
        }
        vlSelfRef.R32__DOT__done_executing_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing;
        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                if ((0x40U & vlSelfRef.i_instruction)) {
                    if ((0x20U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr = 1U;
                                        }
                                    }
                                }
                            }
                            if ((8U & vlSelfRef.i_instruction)) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x20U & vlSelfRef.i_instruction)) {
                    if ((0x10U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                    }
                                }
                            } else if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelfRef.i_instruction)) {
                    if ((1U & (~ (vlSelfRef.i_instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.i_instruction)) {
                            if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                }
                            }
                        } else if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
        } else {
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
        }
        vlSelfRef.R32__DOT__jalr_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr;
    }
    vlSelfRef.R32__DOT__reg_write_enable = vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_clock 
        = vlSelfRef.R32__DOT__i_clock;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_clock 
        = vlSelfRef.R32__DOT__i_clock;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_clock 
        = vlSelfRef.R32__DOT__i_clock;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reset 
        = vlSelfRef.R32__DOT__i_reset;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_reset 
        = vlSelfRef.R32__DOT__i_reset;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reset 
        = vlSelfRef.R32__DOT__i_reset;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_program_counter 
        = vlSelfRef.R32__DOT__program_count;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                if ((1U & (~ (vlSelfRef.i_instruction 
                              >> 6U)))) {
                    if ((0x20U & vlSelfRef.i_instruction)) {
                        if ((0x10U & vlSelfRef.i_instruction)) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.R32__DOT__alu_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                                = vlSelfRef.R32__DOT__reg_read_line_2;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b 
                                                = vlSelfRef.R32__DOT__reg_read_line_2;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                        } else {
                                            vlSelfRef.R32__DOT__alu_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                                = vlSelfRef.R32__DOT__reg_read_line_2;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                        }
                                    } else {
                                        vlSelfRef.R32__DOT__alu_opcode 
                                            = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                            = vlSelfRef.R32__DOT__reg_read_line_2;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                            = vlSelfRef.R32__DOT__reg_read_line_1;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                    }
                                } else {
                                    vlSelfRef.R32__DOT__alu_opcode 
                                        = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                        = vlSelfRef.R32__DOT__reg_read_line_2;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                        = vlSelfRef.R32__DOT__reg_read_line_1;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                }
                            } else {
                                vlSelfRef.R32__DOT__alu_opcode 
                                    = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                    = vlSelfRef.R32__DOT__reg_read_line_2;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                    = vlSelfRef.R32__DOT__reg_read_line_1;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__alu_opcode 
                                = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                = vlSelfRef.R32__DOT__reg_read_line_2;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                = vlSelfRef.R32__DOT__reg_read_line_1;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                        }
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                = (vlSelfRef.R32__DOT__reg_read_line_1 
                                                   + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x10U & vlSelfRef.i_instruction)) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.R32__DOT__alu_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                                = vlSelfRef.R32__DOT__reg_read_line_2;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                        } else {
                                            vlSelfRef.R32__DOT__alu_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                                = vlSelfRef.R32__DOT__reg_read_line_2;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                        }
                                    } else {
                                        vlSelfRef.R32__DOT__alu_opcode 
                                            = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                            = vlSelfRef.R32__DOT__reg_read_line_2;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                            = vlSelfRef.R32__DOT__reg_read_line_1;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                    }
                                } else {
                                    vlSelfRef.R32__DOT__alu_opcode 
                                        = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                        = vlSelfRef.R32__DOT__reg_read_line_2;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                        = vlSelfRef.R32__DOT__reg_read_line_1;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                                }
                            } else {
                                vlSelfRef.R32__DOT__alu_opcode 
                                    = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                    = vlSelfRef.R32__DOT__reg_read_line_2;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                    = vlSelfRef.R32__DOT__reg_read_line_1;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__alu_opcode 
                                = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                                = vlSelfRef.R32__DOT__reg_read_line_2;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                                = vlSelfRef.R32__DOT__reg_read_line_1;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                        }
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                = (vlSelfRef.R32__DOT__reg_read_line_1 
                                                   + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg);
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                                   >> 0xbU)))) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                         >> 2U)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelfRef.R32__DOT__alu_opcode 
                        = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                        = vlSelfRef.R32__DOT__reg_read_line_2;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                        = vlSelfRef.R32__DOT__reg_read_line_1;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
                }
            } else {
                vlSelfRef.R32__DOT__alu_opcode = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
                vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                    = vlSelfRef.R32__DOT__reg_read_line_2;
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
                vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                    = vlSelfRef.R32__DOT__reg_read_line_1;
                vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
            }
        } else {
            vlSelfRef.R32__DOT__alu_opcode = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
                = vlSelfRef.R32__DOT__reg_read_line_2;
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
                = vlSelfRef.R32__DOT__reg_read_line_1;
            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom 
                = ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))
                    ? vlSelfRef.R32__DOT__program_count
                    : 0U);
        }
    } else {
        vlSelfRef.R32__DOT__alu_opcode = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
        vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
            = vlSelfRef.R32__DOT__reg_read_line_2;
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
            = vlSelfRef.R32__DOT__reg_read_line_1;
        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
    }
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_done_executing 
        = vlSelfRef.R32__DOT__done_executing_flag;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_jalr 
        = vlSelfRef.R32__DOT__jalr_flag;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_write_enable 
        = vlSelfRef.R32__DOT__reg_write_enable;
    vlSelfRef.o_instruction_address = vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom;
    vlSelfRef.R32__DOT__o_instruction_address = vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom;
    vlSelfRef.R32__DOT__u_ALU__DOT__i_opcode = vlSelfRef.R32__DOT__alu_opcode;
    vlSelfRef.R32__DOT__alu_operand_b = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b;
    vlSelfRef.R32__DOT__alu_operand_a = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a;
    vlSelfRef.R32__DOT__u_ALU__DOT__i_operand_b = vlSelfRef.R32__DOT__alu_operand_b;
    vlSelfRef.R32__DOT__u_ALU__DOT__i_operand_a = vlSelfRef.R32__DOT__alu_operand_a;
    vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt 
        = (0x1fU & vlSelfRef.R32__DOT__alu_operand_b);
    vlSelfRef.R32__DOT__u_ALU__DOT__o_result = ((8U 
                                                 & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    < vlSelfRef.R32__DOT__alu_operand_b)
                                                    : 
                                                   VL_LTS_III(32, vlSelfRef.R32__DOT__alu_operand_a, vlSelfRef.R32__DOT__alu_operand_b))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.R32__DOT__alu_operand_a, (IData)(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt))
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    >> (IData)(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    << (IData)(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt))
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    & vlSelfRef.R32__DOT__alu_operand_b)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    | vlSelfRef.R32__DOT__alu_operand_b)
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    ^ vlSelfRef.R32__DOT__alu_operand_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    - vlSelfRef.R32__DOT__alu_operand_b)
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    + vlSelfRef.R32__DOT__alu_operand_b)))));
    vlSelfRef.R32__DOT__alu_result = vlSelfRef.R32__DOT__u_ALU__DOT__o_result;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_ALU_result 
        = vlSelfRef.R32__DOT__alu_result;
    vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__imm = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__rsd = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data = 0U;
    if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((0x40U & vlSelfRef.i_instruction)) {
            if ((0x20U & vlSelfRef.i_instruction)) {
                if ((0x10U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((8U & vlSelfRef.i_instruction)) {
                    if ((4U & vlSelfRef.i_instruction)) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((4U & vlSelfRef.i_instruction)) {
                    if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ vlSelfRef.i_instruction))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((0x20U & vlSelfRef.i_instruction)) {
            if ((0x10U & vlSelfRef.i_instruction)) {
                if ((8U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.i_instruction)) {
                    if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ vlSelfRef.i_instruction))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = vlSelfRef.R32__DOT__alu_result;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & vlSelfRef.i_instruction)) {
                if ((1U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field 
                        = (7U & (vlSelfRef.i_instruction 
                                 >> 0xcU));
                    if ((1U & (~ (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__error)))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data 
                            = (0xffU & vlSelfRef.R32__DOT__reg_read_line_2);
                    } else if ((1U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data 
                            = (0xffffU & vlSelfRef.R32__DOT__reg_read_line_2);
                    } else if ((2U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data 
                            = vlSelfRef.R32__DOT__reg_read_line_2;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((0x10U & vlSelfRef.i_instruction)) {
            if ((8U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.i_instruction)) {
                if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & (~ vlSelfRef.i_instruction))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((2U & vlSelfRef.i_instruction)) {
                if ((1U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                        = vlSelfRef.R32__DOT__alu_result;
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((8U & vlSelfRef.i_instruction)) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((4U & vlSelfRef.i_instruction)) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((2U & vlSelfRef.i_instruction)) {
            if ((1U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field 
                    = (7U & (vlSelfRef.i_instruction 
                             >> 0xcU));
                vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address 
                    = (3U & vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg);
                vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address 
                    = (1U & (vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg 
                             >> 1U));
                if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                            if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                    = (vlSelfRef.i_data 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = (0xffffU & vlSelfRef.i_data);
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                    ? (vlSelfRef.i_data 
                                       >> 0x18U) : 
                                   (0xffU & (vlSelfRef.i_data 
                                             >> 0x10U)))
                                : ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                    ? (0xffU & (vlSelfRef.i_data 
                                                >> 8U))
                                    : (0xffU & vlSelfRef.i_data)));
                    }
                } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = vlSelfRef.i_data;
                    }
                } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                        if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = (((- (IData)((vlSelfRef.i_data 
                                                >> 0x1fU))) 
                                    << 0x10U) | (vlSelfRef.i_data 
                                                 >> 0x10U));
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = (((- (IData)((1U & (vlSelfRef.i_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.i_data));
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                        = ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                            ? ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? (((- (IData)((vlSelfRef.i_data 
                                                >> 0x1fU))) 
                                    << 8U) | (vlSelfRef.i_data 
                                              >> 0x18U))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.i_data 
                                                   >> 0x17U)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.i_data 
                                                 >> 0x10U))))
                            : ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.i_data 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.i_data 
                                                 >> 8U)))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.i_data 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelfRef.i_data))));
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if ((0x40U & vlSelfRef.i_instruction)) {
                if ((0x20U & vlSelfRef.i_instruction)) {
                    if ((0x10U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((8U & vlSelfRef.i_instruction)) {
                        if ((4U & vlSelfRef.i_instruction)) {
                            if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                        = ((IData)(4U) 
                                           + vlSelfRef.R32__DOT__program_count);
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                } else {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                                }
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((4U & vlSelfRef.i_instruction)) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                    = ((IData)(4U) 
                                       + vlSelfRef.R32__DOT__program_count);
                                vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                    = (0xfffffffeU 
                                       & (vlSelfRef.R32__DOT__reg_read_line_1 
                                          + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg));
                                vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & vlSelfRef.i_instruction)) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field 
                                = (7U & (vlSelfRef.i_instruction 
                                         >> 0xcU));
                            if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                        if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                             >= vlSelfRef.R32__DOT__reg_read_line_2)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                        }
                                    } else if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                                < vlSelfRef.R32__DOT__reg_read_line_2)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                    if (VL_GTES_III(32, vlSelfRef.R32__DOT__reg_read_line_1, vlSelfRef.R32__DOT__reg_read_line_2)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                    }
                                } else if (VL_LTS_III(32, vlSelfRef.R32__DOT__reg_read_line_1, vlSelfRef.R32__DOT__reg_read_line_2)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                     != vlSelfRef.R32__DOT__reg_read_line_2)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                }
                            } else if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                        == vlSelfRef.R32__DOT__reg_read_line_2)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x20U & vlSelfRef.i_instruction)) {
                if ((0x10U & vlSelfRef.i_instruction)) {
                    if ((8U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((4U & vlSelfRef.i_instruction)) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                    = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & vlSelfRef.i_instruction)) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = vlSelfRef.R32__DOT__alu_result;
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((8U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines 
                            = (0xfU & ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg) 
                                       << (3U & vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg)));
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x10U & vlSelfRef.i_instruction)) {
                if ((8U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.i_instruction)) {
                    if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & vlSelfRef.i_instruction)) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = (vlSelfRef.R32__DOT__program_count 
                                   + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg);
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = vlSelfRef.R32__DOT__alu_result;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & vlSelfRef.i_instruction)) {
                if ((1U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0xfU;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 0U;
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else {
            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode 
                = (0x7fU & vlSelfRef.i_instruction);
            if ((0x40U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((0x20U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((0x10U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                        = (0x1fU & 
                                           (vlSelfRef.i_instruction 
                                            >> 7U));
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                        = ((((- (IData)(
                                                        (vlSelfRef.i_instruction 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | (0x100000U 
                                               & (vlSelfRef.i_instruction 
                                                  >> 0xbU))) 
                                           | (((0xff000U 
                                                & vlSelfRef.i_instruction) 
                                               | (0x800U 
                                                  & (vlSelfRef.i_instruction 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.i_instruction 
                                                    >> 0x14U))));
                                } else {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                                }
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelfRef.i_instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.i_instruction 
                                        >> 0x14U));
                                vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                                    = (0x1fU & (vlSelfRef.i_instruction 
                                                >> 0xfU));
                                vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                    = (0x1fU & (vlSelfRef.i_instruction 
                                                >> 7U));
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                = (((- (IData)((vlSelfRef.i_instruction 
                                                >> 0x1fU))) 
                                    << 0xdU) | (((0x1000U 
                                                  & (vlSelfRef.i_instruction 
                                                     >> 0x13U)) 
                                                 | (0x800U 
                                                    & (vlSelfRef.i_instruction 
                                                       << 4U))) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.i_instruction 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.i_instruction 
                                                         >> 7U)))));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0xfU));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0x14U));
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x20U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((0x10U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelfRef.i_instruction);
                                vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                    = (0x1fU & (vlSelfRef.i_instruction 
                                                >> 7U));
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field 
                                = (7U & (vlSelfRef.i_instruction 
                                         >> 0xcU));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field 
                                = (vlSelfRef.i_instruction 
                                   >> 0x19U);
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0xfU));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0x14U));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 7U));
                            if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op 
                                        = ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                            ? 4U : 3U);
                                } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                    if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 6U;
                                    } else if ((0x20U 
                                                == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 7U;
                                    }
                                } else {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 2U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op 
                                    = ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                        ? 9U : 8U);
                            } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 5U;
                            } else if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 0U;
                            } else if ((0x20U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field 
                            = (7U & (vlSelfRef.i_instruction 
                                     >> 0xcU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 0xfU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 0x14U));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                            = (((- (IData)((vlSelfRef.i_instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.i_instruction 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.i_instruction 
                                                  >> 7U))));
                        if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 1U;
                        } else if ((1U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 3U;
                        } else if ((2U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0xfU;
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                = (0xfffff000U & vlSelfRef.i_instruction);
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 7U));
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field 
                            = (7U & (vlSelfRef.i_instruction 
                                     >> 0xcU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 0xfU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                            = (((- (IData)((vlSelfRef.i_instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.i_instruction 
                                            >> 0x14U));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 7U));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op 
                            = ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                ? ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                    ? ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                        ? 4U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                     ? ((0U == (0x7fU 
                                                & (vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                                   >> 5U)))
                                         ? 6U : 7U)
                                     : 2U)) : ((2U 
                                                & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                    ? 5U
                                                    : 0U)));
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                        = (0x1fU & (vlSelfRef.i_instruction 
                                    >> 0xfU));
                    vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                        = (((- (IData)((vlSelfRef.i_instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelfRef.i_instruction 
                                        >> 0x14U));
                    vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                        = (0x1fU & (vlSelfRef.i_instruction 
                                    >> 7U));
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
    } else {
        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__imm = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rsd = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
    }
    vlSelfRef.R32__DOT__reg_write_line = vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line;
    vlSelfRef.R32__DOT__branch_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch;
    vlSelfRef.o_data_rw = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw;
    vlSelfRef.R32__DOT__o_data_rw = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw;
    vlSelfRef.o_data = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data;
    vlSelfRef.R32__DOT__o_data = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data;
    __Vtableidx1 = (((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__error) 
                     << 4U) | (((IData)(vlSelfRef.i_reset) 
                                << 3U) | (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state)));
    vlSelfRef.R32__DOT__u_control_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_hb8a01c3f_0[__Vtableidx1];
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_write_input 
        = vlSelfRef.R32__DOT__reg_write_line;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_branch 
        = vlSelfRef.R32__DOT__branch_flag;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg;
    __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg = 0;
    CData/*0:0*/ __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v0;
    __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v0 = 0;
    CData/*0:0*/ __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v32;
    __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v32 = 0;
    IData/*31:0*/ __VdlyVal__R32__DOT__u_register_file__DOT__register_file_array__v33;
    __VdlyVal__R32__DOT__u_register_file__DOT__register_file_array__v33 = 0;
    CData/*4:0*/ __VdlyDim0__R32__DOT__u_register_file__DOT__register_file_array__v33;
    __VdlyDim0__R32__DOT__u_register_file__DOT__register_file_array__v33 = 0;
    CData/*0:0*/ __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v33;
    __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v33 = 0;
    // Body
    __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg 
        = vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg;
    __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v0 = 0U;
    __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v32 = 0U;
    __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v33 = 0U;
    if (vlSelfRef.i_reset) {
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg = 0U;
        __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v0 = 1U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__current_state = 0U;
    } else {
        if (vlSelfRef.R32__DOT__jalr_flag) {
            __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg 
                = vlSelfRef.R32__DOT__imm;
        } else if (vlSelfRef.R32__DOT__branch_flag) {
            __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg 
                = (vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg 
                   + vlSelfRef.R32__DOT__imm);
        } else if (vlSelfRef.R32__DOT__done_executing_flag) {
            __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg 
                = ((IData)(4U) + vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg);
        }
        if (vlSelfRef.R32__DOT__reg_write_enable) {
            if ((0U == (IData)(vlSelfRef.R32__DOT__reg_write_sel))) {
                __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v32 = 1U;
            } else {
                __VdlyVal__R32__DOT__u_register_file__DOT__register_file_array__v33 
                    = vlSelfRef.R32__DOT__reg_write_line;
                __VdlyDim0__R32__DOT__u_register_file__DOT__register_file_array__v33 
                    = vlSelfRef.R32__DOT__reg_write_sel;
                __VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v33 = 1U;
            }
        }
        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg 
            = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines;
        if (vlSelfRef.R32__DOT__u_control_unit__DOT__error) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__error;
        }
        if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        }
        if ((1U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg = 0U;
        }
        if ((2U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__rs1;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__rs2;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__rsd;
            vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg 
                = ((0x67U == (0x7fU & vlSelfRef.i_instruction))
                    ? (0xfffffffeU & (vlSelfRef.R32__DOT__reg_read_line_1 
                                      + vlSelfRef.R32__DOT__u_control_unit__DOT__imm))
                    : vlSelfRef.R32__DOT__u_control_unit__DOT__imm);
            vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op;
        }
        if ((3U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag;
            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address;
            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg 
                = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines;
        }
        if ((4U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg = 0U;
        }
        if ((5U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if (vlSelfRef.i_reset) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg = 0U;
            }
        }
        vlSelfRef.R32__DOT__u_control_unit__DOT__current_state 
            = vlSelfRef.R32__DOT__u_control_unit__DOT__next_state;
    }
    vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg 
        = __Vdly__R32__DOT__u_program_counter__DOT__currentCountReg;
    if (__VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v0) {
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[1U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[2U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[3U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[4U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[5U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[6U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[7U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[8U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[9U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0xaU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0xbU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0xcU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0xdU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0xeU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0xfU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x10U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x11U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x12U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x13U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x14U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x15U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x16U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x17U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x18U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x19U] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x1aU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x1bU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x1cU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x1dU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x1eU] = 0U;
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0x1fU] = 0U;
    }
    if (__VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v32) {
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0U] = 0U;
    }
    if (__VdlySet__R32__DOT__u_register_file__DOT__register_file_array__v33) {
        vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[__VdlyDim0__R32__DOT__u_register_file__DOT__register_file_array__v33] 
            = __VdlyVal__R32__DOT__u_register_file__DOT__register_file_array__v33;
    }
    vlSelfRef.R32__DOT__u_program_counter__DOT__o_currentCount 
        = vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg;
    vlSelfRef.R32__DOT__program_count = vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_select 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg;
    vlSelfRef.R32__DOT__reg_write_sel = vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg;
    vlSelfRef.o_error = vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg;
    vlSelfRef.R32__DOT__o_error = vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_error 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg;
    vlSelfRef.o_data_rw_strobe = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    vlSelfRef.R32__DOT__o_data_rw_strobe = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw_lines 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg;
    vlSelfRef.o_data_address = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg;
    vlSelfRef.R32__DOT__o_data_address = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_address 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_imm 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
    vlSelfRef.R32__DOT__imm = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_read_select2 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg;
    vlSelfRef.R32__DOT__u_register_file__DOT__o_reg_output2 
        = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg];
    vlSelfRef.R32__DOT__reg_read_sel_2 = vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg;
    vlSelfRef.R32__DOT__reg_read_line_2 = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg];
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_read_select1 
        = vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg;
    vlSelfRef.R32__DOT__u_register_file__DOT__o_reg_output1 
        = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg];
    vlSelfRef.R32__DOT__reg_read_sel_1 = vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg;
    vlSelfRef.R32__DOT__reg_read_line_1 = vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array
        [vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg];
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_program_counter 
        = vlSelfRef.R32__DOT__program_count;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_write_sel 
        = vlSelfRef.R32__DOT__reg_write_sel;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_imm 
        = vlSelfRef.R32__DOT__imm;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_read_select2 
        = vlSelfRef.R32__DOT__reg_read_sel_2;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2 
        = vlSelfRef.R32__DOT__reg_read_line_2;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_read_select1 
        = vlSelfRef.R32__DOT__reg_read_sel_1;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1 
        = vlSelfRef.R32__DOT__reg_read_line_1;
    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                if ((1U & (~ (vlSelfRef.i_instruction 
                              >> 6U)))) {
                    if ((0x20U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                = (vlSelfRef.R32__DOT__reg_read_line_1 
                                                   + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg);
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x10U & vlSelfRef.i_instruction)) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b 
                                                = vlSelfRef.R32__DOT__reg_read_line_2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                = (vlSelfRef.R32__DOT__reg_read_line_1 
                                                   + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg);
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                                   >> 0xbU)))) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address 
                                                         >> 2U)));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x10U & vlSelfRef.i_instruction)) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.i_instruction 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a 
                                                = vlSelfRef.R32__DOT__reg_read_line_1;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b 
                                                = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom = 1U;
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom 
                    = vlSelfRef.R32__DOT__program_count;
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom = 0U;
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom = 0U;
            }
        }
    }
    vlSelfRef.o_rom_ready = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom;
    vlSelfRef.R32__DOT__o_rom_ready = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom;
    if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state)))) {
                if ((1U & (~ (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg)))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing = 1U;
                }
                if ((0x40U & vlSelfRef.i_instruction)) {
                    if ((0x20U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr = 0U;
                                        }
                                    }
                                }
                            }
                            if ((8U & vlSelfRef.i_instruction)) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                        }
                                    }
                                }
                            } else if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x20U & vlSelfRef.i_instruction)) {
                    if ((0x10U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelfRef.i_instruction)) {
                    if ((1U & (~ (vlSelfRef.i_instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.i_instruction)) {
                            if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.i_instruction 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.i_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.R32__DOT__done_executing_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing;
        vlSelfRef.R32__DOT__jalr_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing = 0U;
            }
        }
        vlSelfRef.R32__DOT__done_executing_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing;
        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
                if ((0x40U & vlSelfRef.i_instruction)) {
                    if ((0x20U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.i_instruction 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr = 1U;
                                        }
                                    }
                                }
                            }
                            if ((8U & vlSelfRef.i_instruction)) {
                                if ((4U & vlSelfRef.i_instruction)) {
                                    if ((2U & vlSelfRef.i_instruction)) {
                                        if ((1U & vlSelfRef.i_instruction)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x20U & vlSelfRef.i_instruction)) {
                    if ((0x10U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ (vlSelfRef.i_instruction 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.i_instruction)) {
                                if ((2U & vlSelfRef.i_instruction)) {
                                    if ((1U & vlSelfRef.i_instruction)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                    }
                                }
                            } else if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelfRef.i_instruction)) {
                    if ((1U & (~ (vlSelfRef.i_instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.i_instruction)) {
                            if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                                }
                            }
                        } else if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
        } else {
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable = 0U;
        }
        vlSelfRef.R32__DOT__jalr_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr;
    }
    vlSelfRef.R32__DOT__reg_write_enable = vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable;
    vlSelfRef.o_instruction_address = vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom;
    vlSelfRef.R32__DOT__o_instruction_address = vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom;
    vlSelfRef.R32__DOT__alu_opcode = vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode;
    vlSelfRef.R32__DOT__alu_operand_a = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a;
    vlSelfRef.R32__DOT__alu_operand_b = vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_done_executing 
        = vlSelfRef.R32__DOT__done_executing_flag;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_jalr 
        = vlSelfRef.R32__DOT__jalr_flag;
    vlSelfRef.R32__DOT__u_register_file__DOT__i_write_enable 
        = vlSelfRef.R32__DOT__reg_write_enable;
    vlSelfRef.R32__DOT__u_ALU__DOT__i_opcode = vlSelfRef.R32__DOT__alu_opcode;
    vlSelfRef.R32__DOT__u_ALU__DOT__i_operand_a = vlSelfRef.R32__DOT__alu_operand_a;
    vlSelfRef.R32__DOT__u_ALU__DOT__i_operand_b = vlSelfRef.R32__DOT__alu_operand_b;
    vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt 
        = (0x1fU & vlSelfRef.R32__DOT__alu_operand_b);
    vlSelfRef.R32__DOT__u_ALU__DOT__o_result = ((8U 
                                                 & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    < vlSelfRef.R32__DOT__alu_operand_b)
                                                    : 
                                                   VL_LTS_III(32, vlSelfRef.R32__DOT__alu_operand_a, vlSelfRef.R32__DOT__alu_operand_b))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.R32__DOT__alu_operand_a, (IData)(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt))
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    >> (IData)(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    << (IData)(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt))
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    & vlSelfRef.R32__DOT__alu_operand_b)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    | vlSelfRef.R32__DOT__alu_operand_b)
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    ^ vlSelfRef.R32__DOT__alu_operand_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.R32__DOT__alu_opcode))
                                                    ? 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    - vlSelfRef.R32__DOT__alu_operand_b)
                                                    : 
                                                   (vlSelfRef.R32__DOT__alu_operand_a 
                                                    + vlSelfRef.R32__DOT__alu_operand_b)))));
    vlSelfRef.R32__DOT__alu_result = vlSelfRef.R32__DOT__u_ALU__DOT__o_result;
    vlSelfRef.R32__DOT__u_control_unit__DOT__i_ALU_result 
        = vlSelfRef.R32__DOT__alu_result;
    vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__imm = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__rsd = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 0U;
    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data = 0U;
    if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((0x40U & vlSelfRef.i_instruction)) {
            if ((0x20U & vlSelfRef.i_instruction)) {
                if ((0x10U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((8U & vlSelfRef.i_instruction)) {
                    if ((4U & vlSelfRef.i_instruction)) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((4U & vlSelfRef.i_instruction)) {
                    if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ vlSelfRef.i_instruction))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((0x20U & vlSelfRef.i_instruction)) {
            if ((0x10U & vlSelfRef.i_instruction)) {
                if ((8U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.i_instruction)) {
                    if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & (~ vlSelfRef.i_instruction))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = vlSelfRef.R32__DOT__alu_result;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & vlSelfRef.i_instruction)) {
                if ((1U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field 
                        = (7U & (vlSelfRef.i_instruction 
                                 >> 0xcU));
                    if ((1U & (~ (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__error)))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data 
                            = (0xffU & vlSelfRef.R32__DOT__reg_read_line_2);
                    } else if ((1U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data 
                            = (0xffffU & vlSelfRef.R32__DOT__reg_read_line_2);
                    } else if ((2U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data 
                            = vlSelfRef.R32__DOT__reg_read_line_2;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((0x10U & vlSelfRef.i_instruction)) {
            if ((8U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.i_instruction)) {
                if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & (~ vlSelfRef.i_instruction))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((2U & vlSelfRef.i_instruction)) {
                if ((1U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                        = vlSelfRef.R32__DOT__alu_result;
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else if ((8U & vlSelfRef.i_instruction)) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((4U & vlSelfRef.i_instruction)) {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        } else if ((2U & vlSelfRef.i_instruction)) {
            if ((1U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field 
                    = (7U & (vlSelfRef.i_instruction 
                             >> 0xcU));
                vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address 
                    = (3U & vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg);
                vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address 
                    = (1U & (vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg 
                             >> 1U));
                if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                            if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                    = (vlSelfRef.i_data 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = (0xffffU & vlSelfRef.i_data);
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                    ? (vlSelfRef.i_data 
                                       >> 0x18U) : 
                                   (0xffU & (vlSelfRef.i_data 
                                             >> 0x10U)))
                                : ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                    ? (0xffU & (vlSelfRef.i_data 
                                                >> 8U))
                                    : (0xffU & vlSelfRef.i_data)));
                    }
                } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = vlSelfRef.i_data;
                    }
                } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field))) {
                    if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                        if (vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = (((- (IData)((vlSelfRef.i_data 
                                                >> 0x1fU))) 
                                    << 0x10U) | (vlSelfRef.i_data 
                                                 >> 0x10U));
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = (((- (IData)((1U & (vlSelfRef.i_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.i_data));
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                        = ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                            ? ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? (((- (IData)((vlSelfRef.i_data 
                                                >> 0x1fU))) 
                                    << 8U) | (vlSelfRef.i_data 
                                              >> 0x18U))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.i_data 
                                                   >> 0x17U)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.i_data 
                                                 >> 0x10U))))
                            : ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.i_data 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.i_data 
                                                 >> 8U)))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.i_data 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelfRef.i_data))));
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else {
            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
            if ((0x40U & vlSelfRef.i_instruction)) {
                if ((0x20U & vlSelfRef.i_instruction)) {
                    if ((0x10U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((8U & vlSelfRef.i_instruction)) {
                        if ((4U & vlSelfRef.i_instruction)) {
                            if ((2U & vlSelfRef.i_instruction)) {
                                if ((1U & vlSelfRef.i_instruction)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                        = ((IData)(4U) 
                                           + vlSelfRef.R32__DOT__program_count);
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                } else {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                                }
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((4U & vlSelfRef.i_instruction)) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                    = ((IData)(4U) 
                                       + vlSelfRef.R32__DOT__program_count);
                                vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                    = (0xfffffffeU 
                                       & (vlSelfRef.R32__DOT__reg_read_line_1 
                                          + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg));
                                vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & vlSelfRef.i_instruction)) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field 
                                = (7U & (vlSelfRef.i_instruction 
                                         >> 0xcU));
                            if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                        if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                             >= vlSelfRef.R32__DOT__reg_read_line_2)) {
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                            vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                        }
                                    } else if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                                < vlSelfRef.R32__DOT__reg_read_line_2)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                    if (VL_GTES_III(32, vlSelfRef.R32__DOT__reg_read_line_1, vlSelfRef.R32__DOT__reg_read_line_2)) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                    }
                                } else if (VL_LTS_III(32, vlSelfRef.R32__DOT__reg_read_line_1, vlSelfRef.R32__DOT__reg_read_line_2)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field))) {
                                if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                     != vlSelfRef.R32__DOT__reg_read_line_2)) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                                }
                            } else if ((vlSelfRef.R32__DOT__reg_read_line_1 
                                        == vlSelfRef.R32__DOT__reg_read_line_2)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 1U;
                                vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x20U & vlSelfRef.i_instruction)) {
                if ((0x10U & vlSelfRef.i_instruction)) {
                    if ((8U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((4U & vlSelfRef.i_instruction)) {
                        if ((2U & vlSelfRef.i_instruction)) {
                            if ((1U & vlSelfRef.i_instruction)) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                    = vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg;
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & vlSelfRef.i_instruction)) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = vlSelfRef.R32__DOT__alu_result;
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((8U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines 
                            = (0xfU & ((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg) 
                                       << (3U & vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg)));
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x10U & vlSelfRef.i_instruction)) {
                if ((8U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & vlSelfRef.i_instruction)) {
                    if ((2U & vlSelfRef.i_instruction)) {
                        if ((1U & vlSelfRef.i_instruction)) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                                = (vlSelfRef.R32__DOT__program_count 
                                   + vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg);
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & vlSelfRef.i_instruction)) {
                    if ((1U & vlSelfRef.i_instruction)) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line 
                            = vlSelfRef.R32__DOT__alu_result;
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & vlSelfRef.i_instruction)) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & vlSelfRef.i_instruction)) {
                if ((1U & vlSelfRef.i_instruction)) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0xfU;
                    vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 0U;
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        } else {
            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode 
                = (0x7fU & vlSelfRef.i_instruction);
            if ((0x40U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((0x20U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((0x10U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                        = (0x1fU & 
                                           (vlSelfRef.i_instruction 
                                            >> 7U));
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                        = ((((- (IData)(
                                                        (vlSelfRef.i_instruction 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | (0x100000U 
                                               & (vlSelfRef.i_instruction 
                                                  >> 0xbU))) 
                                           | (((0xff000U 
                                                & vlSelfRef.i_instruction) 
                                               | (0x800U 
                                                  & (vlSelfRef.i_instruction 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.i_instruction 
                                                    >> 0x14U))));
                                } else {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                                }
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelfRef.i_instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.i_instruction 
                                        >> 0x14U));
                                vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                                    = (0x1fU & (vlSelfRef.i_instruction 
                                                >> 0xfU));
                                vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                    = (0x1fU & (vlSelfRef.i_instruction 
                                                >> 7U));
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                = (((- (IData)((vlSelfRef.i_instruction 
                                                >> 0x1fU))) 
                                    << 0xdU) | (((0x1000U 
                                                  & (vlSelfRef.i_instruction 
                                                     >> 0x13U)) 
                                                 | (0x800U 
                                                    & (vlSelfRef.i_instruction 
                                                       << 4U))) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.i_instruction 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.i_instruction 
                                                         >> 7U)))));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0xfU));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0x14U));
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x20U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((0x10U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelfRef.i_instruction);
                                vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                    = (0x1fU & (vlSelfRef.i_instruction 
                                                >> 7U));
                            } else {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field 
                                = (7U & (vlSelfRef.i_instruction 
                                         >> 0xcU));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field 
                                = (vlSelfRef.i_instruction 
                                   >> 0x19U);
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0xfU));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 0x14U));
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 7U));
                            if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op 
                                        = ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                            ? 4U : 3U);
                                } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                    if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 6U;
                                    } else if ((0x20U 
                                                == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 7U;
                                    }
                                } else {
                                    vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 2U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op 
                                    = ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))
                                        ? 9U : 8U);
                            } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 5U;
                            } else if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 0U;
                            } else if ((0x20U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field))) {
                                vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 1U;
                            }
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field 
                            = (7U & (vlSelfRef.i_instruction 
                                     >> 0xcU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 0xfU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 0x14U));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                            = (((- (IData)((vlSelfRef.i_instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.i_instruction 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.i_instruction 
                                                  >> 7U))));
                        if ((0U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 1U;
                        } else if ((1U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 3U;
                        } else if ((2U == (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0xfU;
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                = (0xfffff000U & vlSelfRef.i_instruction);
                            vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                                = (0x1fU & (vlSelfRef.i_instruction 
                                            >> 7U));
                        } else {
                            vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                        }
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field 
                            = (7U & (vlSelfRef.i_instruction 
                                     >> 0xcU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 0xfU));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                            = (((- (IData)((vlSelfRef.i_instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelfRef.i_instruction 
                                            >> 0x14U));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                            = (0x1fU & (vlSelfRef.i_instruction 
                                        >> 7U));
                        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op 
                            = ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                ? ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                    ? ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                        ? 4U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                     ? ((0U == (0x7fU 
                                                & (vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                                                   >> 5U)))
                                         ? 6U : 7U)
                                     : 2U)) : ((2U 
                                                & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field))
                                                    ? 5U
                                                    : 0U)));
                    } else {
                        vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                    }
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((4U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            } else if ((2U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode))) {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 
                        = (0x1fU & (vlSelfRef.i_instruction 
                                    >> 0xfU));
                    vlSelfRef.R32__DOT__u_control_unit__DOT__imm 
                        = (((- (IData)((vlSelfRef.i_instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelfRef.i_instruction 
                                        >> 0x14U));
                    vlSelfRef.R32__DOT__u_control_unit__DOT__rsd 
                        = (0x1fU & (vlSelfRef.i_instruction 
                                    >> 7U));
                } else {
                    vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
                }
            } else {
                vlSelfRef.R32__DOT__u_control_unit__DOT__error = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state))) {
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
    } else {
        vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs1 = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rs2 = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__imm = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__rsd = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch = 0U;
        vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines = 0U;
    }
    vlSelfRef.R32__DOT__reg_write_line = vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line;
    vlSelfRef.R32__DOT__branch_flag = vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch;
    vlSelfRef.o_data_rw = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw;
    vlSelfRef.R32__DOT__o_data_rw = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw;
    vlSelfRef.o_data = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data;
    vlSelfRef.R32__DOT__o_data = vlSelfRef.R32__DOT__u_control_unit__DOT__o_data;
    __Vtableidx1 = (((IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__error) 
                     << 4U) | (((IData)(vlSelfRef.i_reset) 
                                << 3U) | (IData)(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state)));
    vlSelfRef.R32__DOT__u_control_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_hb8a01c3f_0[__Vtableidx1];
    vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_write_input 
        = vlSelfRef.R32__DOT__reg_write_line;
    vlSelfRef.R32__DOT__u_program_counter__DOT__i_branch 
        = vlSelfRef.R32__DOT__branch_flag;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/mwd/Developer/HDL/R32/src/R32.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/mwd/Developer/HDL/R32/src/R32.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/mwd/Developer/HDL/R32/src/R32.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.i_clock & 0xfeU)))) {
        Verilated::overWidthError("i_clock");}
    if (VL_UNLIKELY(((vlSelfRef.i_reset & 0xfeU)))) {
        Verilated::overWidthError("i_reset");}
}
#endif  // VL_DEBUG
