// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.i_clock));
    bufp->chgBit(oldp+1,(vlSelfRef.i_reset));
    bufp->chgBit(oldp+2,(vlSelfRef.o_error));
    bufp->chgIData(oldp+3,(vlSelfRef.i_instruction),32);
    bufp->chgIData(oldp+4,(vlSelfRef.o_instruction_address),32);
    bufp->chgBit(oldp+5,(vlSelfRef.o_rom_ready));
    bufp->chgBit(oldp+6,(vlSelfRef.o_data_rw));
    bufp->chgIData(oldp+7,(vlSelfRef.o_data),32);
    bufp->chgIData(oldp+8,(vlSelfRef.i_data),32);
    bufp->chgIData(oldp+9,(vlSelfRef.o_data_address),32);
    bufp->chgCData(oldp+10,(vlSelfRef.o_data_rw_strobe),4);
    bufp->chgBit(oldp+11,(vlSelfRef.R32__DOT__i_clock));
    bufp->chgBit(oldp+12,(vlSelfRef.R32__DOT__i_reset));
    bufp->chgBit(oldp+13,(vlSelfRef.R32__DOT__o_error));
    bufp->chgIData(oldp+14,(vlSelfRef.R32__DOT__i_instruction),32);
    bufp->chgIData(oldp+15,(vlSelfRef.R32__DOT__o_instruction_address),32);
    bufp->chgBit(oldp+16,(vlSelfRef.R32__DOT__o_rom_ready));
    bufp->chgBit(oldp+17,(vlSelfRef.R32__DOT__o_data_rw));
    bufp->chgIData(oldp+18,(vlSelfRef.R32__DOT__o_data),32);
    bufp->chgIData(oldp+19,(vlSelfRef.R32__DOT__i_data),32);
    bufp->chgIData(oldp+20,(vlSelfRef.R32__DOT__o_data_address),32);
    bufp->chgCData(oldp+21,(vlSelfRef.R32__DOT__o_data_rw_strobe),4);
    bufp->chgBit(oldp+22,(vlSelfRef.R32__DOT__jalr_flag));
    bufp->chgBit(oldp+23,(vlSelfRef.R32__DOT__branch_flag));
    bufp->chgBit(oldp+24,(vlSelfRef.R32__DOT__done_executing_flag));
    bufp->chgBit(oldp+25,(vlSelfRef.R32__DOT__reg_write_enable));
    bufp->chgCData(oldp+26,(vlSelfRef.R32__DOT__alu_opcode),4);
    bufp->chgCData(oldp+27,(vlSelfRef.R32__DOT__reg_read_sel_1),5);
    bufp->chgCData(oldp+28,(vlSelfRef.R32__DOT__reg_read_sel_2),5);
    bufp->chgCData(oldp+29,(vlSelfRef.R32__DOT__reg_write_sel),5);
    bufp->chgIData(oldp+30,(vlSelfRef.R32__DOT__program_count),32);
    bufp->chgIData(oldp+31,(vlSelfRef.R32__DOT__imm),32);
    bufp->chgIData(oldp+32,(vlSelfRef.R32__DOT__alu_operand_a),32);
    bufp->chgIData(oldp+33,(vlSelfRef.R32__DOT__alu_operand_b),32);
    bufp->chgIData(oldp+34,(vlSelfRef.R32__DOT__alu_result),32);
    bufp->chgIData(oldp+35,(vlSelfRef.R32__DOT__reg_read_line_1),32);
    bufp->chgIData(oldp+36,(vlSelfRef.R32__DOT__reg_read_line_2),32);
    bufp->chgIData(oldp+37,(vlSelfRef.R32__DOT__reg_write_line),32);
    bufp->chgIData(oldp+38,(vlSelfRef.R32__DOT__u_ALU__DOT__i_operand_a),32);
    bufp->chgIData(oldp+39,(vlSelfRef.R32__DOT__u_ALU__DOT__i_operand_b),32);
    bufp->chgCData(oldp+40,(vlSelfRef.R32__DOT__u_ALU__DOT__i_opcode),4);
    bufp->chgIData(oldp+41,(vlSelfRef.R32__DOT__u_ALU__DOT__o_result),32);
    bufp->chgCData(oldp+42,(vlSelfRef.R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt),5);
    bufp->chgBit(oldp+43,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_clock));
    bufp->chgBit(oldp+44,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_reset));
    bufp->chgIData(oldp+45,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_program_counter),32);
    bufp->chgBit(oldp+46,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_done_executing));
    bufp->chgBit(oldp+47,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_branch));
    bufp->chgBit(oldp+48,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_jalr));
    bufp->chgIData(oldp+49,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_imm),32);
    bufp->chgBit(oldp+50,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_ready_rom));
    bufp->chgIData(oldp+51,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_address_rom),32);
    bufp->chgIData(oldp+52,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_instruction),32);
    bufp->chgCData(oldp+53,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_read_select1),5);
    bufp->chgCData(oldp+54,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_read_select2),5);
    bufp->chgCData(oldp+55,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_select),5);
    bufp->chgBit(oldp+56,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_enable));
    bufp->chgIData(oldp+57,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_1),32);
    bufp->chgIData(oldp+58,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_reg_read_line_2),32);
    bufp->chgIData(oldp+59,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_reg_write_line),32);
    bufp->chgCData(oldp+60,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_opcode),4);
    bufp->chgIData(oldp+61,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_a),32);
    bufp->chgIData(oldp+62,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_ALU_operand_b),32);
    bufp->chgIData(oldp+63,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_ALU_result),32);
    bufp->chgBit(oldp+64,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw));
    bufp->chgIData(oldp+65,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_address),32);
    bufp->chgIData(oldp+66,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_data),32);
    bufp->chgCData(oldp+67,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_data_rw_lines),4);
    bufp->chgIData(oldp+68,(vlSelfRef.R32__DOT__u_control_unit__DOT__i_data),32);
    bufp->chgBit(oldp+69,(vlSelfRef.R32__DOT__u_control_unit__DOT__o_error));
    bufp->chgCData(oldp+70,(vlSelfRef.R32__DOT__u_control_unit__DOT__current_state),3);
    bufp->chgCData(oldp+71,(vlSelfRef.R32__DOT__u_control_unit__DOT__next_state),3);
    bufp->chgCData(oldp+72,(vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op_reg),4);
    bufp->chgCData(oldp+73,(vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines_reg),4);
    bufp->chgCData(oldp+74,(vlSelfRef.R32__DOT__u_control_unit__DOT__rs1_reg),5);
    bufp->chgCData(oldp+75,(vlSelfRef.R32__DOT__u_control_unit__DOT__rs2_reg),5);
    bufp->chgCData(oldp+76,(vlSelfRef.R32__DOT__u_control_unit__DOT__rsd_reg),5);
    bufp->chgIData(oldp+77,(vlSelfRef.R32__DOT__u_control_unit__DOT__imm_reg),32);
    bufp->chgIData(oldp+78,(vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address_reg),32);
    bufp->chgBit(oldp+79,(vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_reg));
    bufp->chgBit(oldp+80,(vlSelfRef.R32__DOT__u_control_unit__DOT__error_flag_reg));
    bufp->chgCData(oldp+81,(vlSelfRef.R32__DOT__u_control_unit__DOT__rs1),5);
    bufp->chgCData(oldp+82,(vlSelfRef.R32__DOT__u_control_unit__DOT__rs2),5);
    bufp->chgIData(oldp+83,(vlSelfRef.R32__DOT__u_control_unit__DOT__imm),32);
    bufp->chgCData(oldp+84,(vlSelfRef.R32__DOT__u_control_unit__DOT__rsd),5);
    bufp->chgCData(oldp+85,(vlSelfRef.R32__DOT__u_control_unit__DOT__ALU_op),4);
    bufp->chgCData(oldp+86,(vlSelfRef.R32__DOT__u_control_unit__DOT__data_rw_lines),4);
    bufp->chgIData(oldp+87,(vlSelfRef.R32__DOT__u_control_unit__DOT__effective_address),32);
    bufp->chgBit(oldp+88,(vlSelfRef.R32__DOT__u_control_unit__DOT__just_branched_flag));
    bufp->chgBit(oldp+89,(vlSelfRef.R32__DOT__u_control_unit__DOT__error));
    bufp->chgCData(oldp+90,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode),7);
    bufp->chgCData(oldp+91,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field),3);
    bufp->chgCData(oldp+92,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field),7);
    bufp->chgCData(oldp+93,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field),3);
    bufp->chgCData(oldp+94,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field),3);
    bufp->chgCData(oldp+95,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field),3);
    bufp->chgCData(oldp+96,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field),3);
    bufp->chgCData(oldp+97,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address),2);
    bufp->chgBit(oldp+98,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address));
    bufp->chgCData(oldp+99,(vlSelfRef.R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field),3);
    bufp->chgBit(oldp+100,(vlSelfRef.R32__DOT__u_program_counter__DOT__i_clock));
    bufp->chgBit(oldp+101,(vlSelfRef.R32__DOT__u_program_counter__DOT__i_reset));
    bufp->chgBit(oldp+102,(vlSelfRef.R32__DOT__u_program_counter__DOT__i_done_executing));
    bufp->chgBit(oldp+103,(vlSelfRef.R32__DOT__u_program_counter__DOT__i_branch));
    bufp->chgBit(oldp+104,(vlSelfRef.R32__DOT__u_program_counter__DOT__i_jalr));
    bufp->chgIData(oldp+105,(vlSelfRef.R32__DOT__u_program_counter__DOT__i_imm),32);
    bufp->chgIData(oldp+106,(vlSelfRef.R32__DOT__u_program_counter__DOT__o_currentCount),32);
    bufp->chgIData(oldp+107,(vlSelfRef.R32__DOT__u_program_counter__DOT__currentCountReg),32);
    bufp->chgBit(oldp+108,(vlSelfRef.R32__DOT__u_register_file__DOT__i_clock));
    bufp->chgBit(oldp+109,(vlSelfRef.R32__DOT__u_register_file__DOT__i_reset));
    bufp->chgCData(oldp+110,(vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_read_select1),5);
    bufp->chgCData(oldp+111,(vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_read_select2),5);
    bufp->chgIData(oldp+112,(vlSelfRef.R32__DOT__u_register_file__DOT__o_reg_output1),32);
    bufp->chgIData(oldp+113,(vlSelfRef.R32__DOT__u_register_file__DOT__o_reg_output2),32);
    bufp->chgCData(oldp+114,(vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_write_sel),5);
    bufp->chgIData(oldp+115,(vlSelfRef.R32__DOT__u_register_file__DOT__i_reg_write_input),32);
    bufp->chgBit(oldp+116,(vlSelfRef.R32__DOT__u_register_file__DOT__i_write_enable));
    bufp->chgIData(oldp+117,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[0]),32);
    bufp->chgIData(oldp+118,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[1]),32);
    bufp->chgIData(oldp+119,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[2]),32);
    bufp->chgIData(oldp+120,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[3]),32);
    bufp->chgIData(oldp+121,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[4]),32);
    bufp->chgIData(oldp+122,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[5]),32);
    bufp->chgIData(oldp+123,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[6]),32);
    bufp->chgIData(oldp+124,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[7]),32);
    bufp->chgIData(oldp+125,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[8]),32);
    bufp->chgIData(oldp+126,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[9]),32);
    bufp->chgIData(oldp+127,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[10]),32);
    bufp->chgIData(oldp+128,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[11]),32);
    bufp->chgIData(oldp+129,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[12]),32);
    bufp->chgIData(oldp+130,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[13]),32);
    bufp->chgIData(oldp+131,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[14]),32);
    bufp->chgIData(oldp+132,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[15]),32);
    bufp->chgIData(oldp+133,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[16]),32);
    bufp->chgIData(oldp+134,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[17]),32);
    bufp->chgIData(oldp+135,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[18]),32);
    bufp->chgIData(oldp+136,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[19]),32);
    bufp->chgIData(oldp+137,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[20]),32);
    bufp->chgIData(oldp+138,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[21]),32);
    bufp->chgIData(oldp+139,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[22]),32);
    bufp->chgIData(oldp+140,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[23]),32);
    bufp->chgIData(oldp+141,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[24]),32);
    bufp->chgIData(oldp+142,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[25]),32);
    bufp->chgIData(oldp+143,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[26]),32);
    bufp->chgIData(oldp+144,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[27]),32);
    bufp->chgIData(oldp+145,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[28]),32);
    bufp->chgIData(oldp+146,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[29]),32);
    bufp->chgIData(oldp+147,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[30]),32);
    bufp->chgIData(oldp+148,(vlSelfRef.R32__DOT__u_register_file__DOT__register_file_array[31]),32);
    bufp->chgIData(oldp+149,(vlSelfRef.R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
