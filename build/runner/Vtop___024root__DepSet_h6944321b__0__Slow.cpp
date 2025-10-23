// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clock__0 = vlSelfRef.i_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__i_reset__0 = vlSelfRef.i_reset;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/mwd/Developer/HDL/R32/src/R32.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge i_reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge i_reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->i_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10835381810676359556ull);
    vlSelf->i_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1027386206985746985ull);
    vlSelf->o_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10575267321788861999ull);
    vlSelf->i_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1509224006989681203ull);
    vlSelf->o_instruction_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10832628679185765011ull);
    vlSelf->o_rom_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7498767232380365374ull);
    vlSelf->o_data_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3979842535666103851ull);
    vlSelf->o_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7774304367285062135ull);
    vlSelf->i_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9289791593721341457ull);
    vlSelf->o_data_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18151557260059160965ull);
    vlSelf->o_data_rw_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7071779328470162074ull);
    vlSelf->R32__DOT__i_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13137046091240650437ull);
    vlSelf->R32__DOT__i_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5207300756248585570ull);
    vlSelf->R32__DOT__o_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13340968735449103054ull);
    vlSelf->R32__DOT__i_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17112152152654038375ull);
    vlSelf->R32__DOT__o_instruction_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1132622133690665546ull);
    vlSelf->R32__DOT__o_rom_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14330701772437441051ull);
    vlSelf->R32__DOT__o_data_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6461434782365049037ull);
    vlSelf->R32__DOT__o_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18034507504699557989ull);
    vlSelf->R32__DOT__i_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9290943089079401137ull);
    vlSelf->R32__DOT__o_data_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6673740920909573211ull);
    vlSelf->R32__DOT__o_data_rw_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7064420905975298809ull);
    vlSelf->R32__DOT__jalr_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8534477632862148112ull);
    vlSelf->R32__DOT__branch_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17131070517324269282ull);
    vlSelf->R32__DOT__done_executing_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9132540035365965734ull);
    vlSelf->R32__DOT__reg_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3954512610545420506ull);
    vlSelf->R32__DOT__alu_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9719098081257176090ull);
    vlSelf->R32__DOT__reg_read_sel_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12677511717351634151ull);
    vlSelf->R32__DOT__reg_read_sel_2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5812527049397535767ull);
    vlSelf->R32__DOT__reg_write_sel = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3507490852638748906ull);
    vlSelf->R32__DOT__program_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3197035034019174612ull);
    vlSelf->R32__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3535955076470996218ull);
    vlSelf->R32__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14356296697085105040ull);
    vlSelf->R32__DOT__alu_operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17460837483773654899ull);
    vlSelf->R32__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10570183893944774027ull);
    vlSelf->R32__DOT__reg_read_line_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5980699046297892906ull);
    vlSelf->R32__DOT__reg_read_line_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13080388456952162106ull);
    vlSelf->R32__DOT__reg_write_line = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11337323850747794446ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 570927071328161277ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12307895612827957411ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_program_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14674325736502825917ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_done_executing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7817077987254714690ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7889496765945478765ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2300132618089511678ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17510791064924221548ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_ready_rom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9478092516366629669ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_address_rom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14949876100000229779ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10291576048340482680ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_reg_read_select1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10209960314770879975ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_reg_read_select2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11566111781373662655ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_reg_write_select = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2868677518398246221ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_reg_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3248341378919095236ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_reg_read_line_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12994831679764659449ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_reg_read_line_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3542336128455297085ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_reg_write_line = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4502804370803090694ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5707884544708121633ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_ALU_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2837167427936184096ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_ALU_operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 74700429262467298ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3788276527005356764ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_data_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12458860240489919211ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_data_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14418998039021992500ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3832365459721269790ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_data_rw_lines = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7459278913982088927ull);
    vlSelf->R32__DOT__u_control_unit__DOT__i_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6501712175602841253ull);
    vlSelf->R32__DOT__u_control_unit__DOT__o_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7696343811590657510ull);
    vlSelf->R32__DOT__u_control_unit__DOT__current_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15565240056477691961ull);
    vlSelf->R32__DOT__u_control_unit__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13779126248814685986ull);
    vlSelf->R32__DOT__u_control_unit__DOT__ALU_op_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16656143636357811641ull);
    vlSelf->R32__DOT__u_control_unit__DOT__data_rw_lines_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17114031033667827147ull);
    vlSelf->R32__DOT__u_control_unit__DOT__rs1_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1333329920650869778ull);
    vlSelf->R32__DOT__u_control_unit__DOT__rs2_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16619360033134839213ull);
    vlSelf->R32__DOT__u_control_unit__DOT__rsd_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16521358792790352518ull);
    vlSelf->R32__DOT__u_control_unit__DOT__imm_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4683448512166425290ull);
    vlSelf->R32__DOT__u_control_unit__DOT__effective_address_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2428794142039704075ull);
    vlSelf->R32__DOT__u_control_unit__DOT__just_branched_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7655058744092498927ull);
    vlSelf->R32__DOT__u_control_unit__DOT__error_flag_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18095796752371915017ull);
    vlSelf->R32__DOT__u_control_unit__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16631588641687814043ull);
    vlSelf->R32__DOT__u_control_unit__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3812009344568029590ull);
    vlSelf->R32__DOT__u_control_unit__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12288870156783708355ull);
    vlSelf->R32__DOT__u_control_unit__DOT__rsd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18039185310163959835ull);
    vlSelf->R32__DOT__u_control_unit__DOT__ALU_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4425812824846720104ull);
    vlSelf->R32__DOT__u_control_unit__DOT__data_rw_lines = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15489000358061824458ull);
    vlSelf->R32__DOT__u_control_unit__DOT__effective_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12624684633903750801ull);
    vlSelf->R32__DOT__u_control_unit__DOT__just_branched_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7580827787657914718ull);
    vlSelf->R32__DOT__u_control_unit__DOT__error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3805946312448911513ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16277290354987049389ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 992383242821528526ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__funct7_field = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9428163690641336320ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk3__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7440544841302166797ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk1__DOT__unnamedblk4__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16945838314609402567ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk5__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8342664725325911911ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9861440940859654519ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__byte_address = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5944457235510225373ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk6__DOT__hword_address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4421739773682203251ull);
    vlSelf->R32__DOT__u_control_unit__DOT__output_logic__DOT__unnamedblk7__DOT__funct3_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13829511556393276366ull);
    vlSelf->R32__DOT__u_ALU__DOT__i_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6018156347170804797ull);
    vlSelf->R32__DOT__u_ALU__DOT__i_operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12206983195523351039ull);
    vlSelf->R32__DOT__u_ALU__DOT__i_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5692577078750806732ull);
    vlSelf->R32__DOT__u_ALU__DOT__o_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7954357349465582919ull);
    vlSelf->R32__DOT__u_ALU__DOT__unnamedblk1__DOT__shift_amt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 978834890665969430ull);
    vlSelf->R32__DOT__u_program_counter__DOT__i_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8976275976040517910ull);
    vlSelf->R32__DOT__u_program_counter__DOT__i_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1883158698722250721ull);
    vlSelf->R32__DOT__u_program_counter__DOT__i_done_executing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 193690346050028948ull);
    vlSelf->R32__DOT__u_program_counter__DOT__i_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2420298471725087267ull);
    vlSelf->R32__DOT__u_program_counter__DOT__i_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10418756166324579948ull);
    vlSelf->R32__DOT__u_program_counter__DOT__i_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9211972655579250816ull);
    vlSelf->R32__DOT__u_program_counter__DOT__o_currentCount = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15672458317486975036ull);
    vlSelf->R32__DOT__u_program_counter__DOT__currentCountReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10141958875129669025ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7012321999615067080ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14203169941203320778ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_reg_read_select1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14738550641087994349ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_reg_read_select2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6633163514485959266ull);
    vlSelf->R32__DOT__u_register_file__DOT__o_reg_output1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11001322306062742750ull);
    vlSelf->R32__DOT__u_register_file__DOT__o_reg_output2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 518195124456211977ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_reg_write_sel = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 962080647665883794ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_reg_write_input = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7264244994438344120ull);
    vlSelf->R32__DOT__u_register_file__DOT__i_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2685205141568382491ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->R32__DOT__u_register_file__DOT__register_file_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4753770985533616767ull);
    }
    vlSelf->R32__DOT__u_register_file__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 662745642022662372ull);
    vlSelf->__Vtrigprevexpr___TOP__i_clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16120774774097976054ull);
    vlSelf->__Vtrigprevexpr___TOP__i_reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8406957762364126415ull);
}
