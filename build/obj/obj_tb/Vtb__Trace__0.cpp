// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_program_counter__DOT__currentCountReg),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[4]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[5]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[6]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[7]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[8]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[9]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[10]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[11]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[12]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[13]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[14]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[15]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[16]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[17]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[18]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[19]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[20]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[21]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[22]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[23]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[24]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[25]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[26]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[27]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[28]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[29]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[30]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__register_file_array[31]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+34,(vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_ram));
        bufp->chgBit(oldp+35,(vlSelfRef.tb__DOT__u_SoC__DOT__mem_error_rom));
        bufp->chgIData(oldp+36,(vlSelfRef.tb__DOT__u_SoC__DOT__data_in),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+37,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error_flag_reg));
        bufp->chgCData(oldp+38,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines_reg),4);
        bufp->chgIData(oldp+39,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg),32);
        bufp->chgBit(oldp+40,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__done_executing_flag));
        bufp->chgCData(oldp+41,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1_reg),5);
        bufp->chgCData(oldp+42,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2_reg),5);
        bufp->chgCData(oldp+43,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd_reg),5);
        bufp->chgIData(oldp+44,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm_reg),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_1),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_read_line_2),32);
        bufp->chgCData(oldp+47,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__current_state),3);
        bufp->chgCData(oldp+48,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op_reg),4);
        bufp->chgBit(oldp+49,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_reg));
        bufp->chgIData(oldp+50,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address_reg, 2U)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+51,(vlSelfRef.tb__DOT__u_SoC__DOT__rom_ready));
        bufp->chgBit(oldp+52,(vlSelfRef.tb__DOT__u_SoC__DOT__data_rw));
        bufp->chgIData(oldp+53,(vlSelfRef.tb__DOT__u_SoC__DOT__data_out),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb__DOT__u_SoC__DOT__instruction_address),32);
        bufp->chgBit(oldp+55,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__jalr_flag));
        bufp->chgBit(oldp+56,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__branch_flag));
        bufp->chgBit(oldp+57,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_enable));
        bufp->chgCData(oldp+58,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_opcode),4);
        bufp->chgIData(oldp+59,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_a),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_operand_b),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__alu_result),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__reg_write_line),32);
        bufp->chgCData(oldp+63,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt),5);
        bufp->chgCData(oldp+64,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs1),5);
        bufp->chgCData(oldp+65,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rs2),5);
        bufp->chgIData(oldp+66,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__imm),32);
        bufp->chgCData(oldp+67,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__rsd),5);
        bufp->chgCData(oldp+68,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__ALU_op),4);
        bufp->chgCData(oldp+69,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__data_rw_lines),4);
        bufp->chgIData(oldp+70,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__effective_address),32);
        bufp->chgBit(oldp+71,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__just_branched_flag));
        bufp->chgBit(oldp+72,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__error));
        bufp->chgCData(oldp+73,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode),7);
        bufp->chgCData(oldp+74,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field),3);
        bufp->chgCData(oldp+75,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field),7);
        bufp->chgCData(oldp+76,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field),3);
        bufp->chgCData(oldp+77,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field),3);
        bufp->chgCData(oldp+78,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field),3);
        bufp->chgCData(oldp+79,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field),3);
        bufp->chgCData(oldp+80,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address),2);
        bufp->chgBit(oldp+81,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address));
        bufp->chgCData(oldp+82,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field),3);
    }
    bufp->chgBit(oldp+83,(vlSelfRef.tb__DOT__clock));
    bufp->chgBit(oldp+84,(vlSelfRef.tb__DOT__reset));
    bufp->chgCData(oldp+85,((0xffU & vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__RAM
                             [0U])),8);
    bufp->chgIData(oldp+86,(vlSelfRef.tb__DOT__u_SoC__DOT__instruction),32);
    bufp->chgCData(oldp+87,(vlSelfRef.tb__DOT__u_SoC__DOT__u_R32__DOT__u_control_unit__DOT__next_state),3);
    bufp->chgIData(oldp+88,(vlSelfRef.tb__DOT__u_SoC__DOT__u_ROM_RAM__DOT__intial_clear__DOT__k),32);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
