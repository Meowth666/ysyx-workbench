// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLError.h"

VL_ATTR_COLD void VysyxSoCFull_TLError___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_TLError___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__da_first = (0U == (IData)(vlSelfRef.__PVT__r_counter));
    vlSelfRef.__PVT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__da_bits_opcode = ((0x17U >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                 >> 0x3cU))))))
                                        ? (7U & (0x911240U 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                 >> 0x3cU)))))))
                                        : 0U);
    vlSelfRef.__VdfgRegularize_h6c8fa2cb_0_3 = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__beatsLeft)) 
                                                | (IData)(vlSelfRef.__PVT__state_1));
    vlSelfRef.__PVT__a_last_beats1 = ((1U & (IData)(
                                                    (vlSelfRef.__PVT__a_q__DOT__ram 
                                                     >> 0x3eU)))
                                       ? 0U : (7U & 
                                               (~ (7U 
                                                   & (((IData)(0x1fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                   >> 0x36U)))) 
                                                      >> 2U)))));
    vlSelfRef.__PVT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__da_bits_opcode))
                                  ? (7U & (~ (7U & 
                                              (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U))))
                                  : 0U);
    vlSelfRef.__PVT__a_last = ((1U == (IData)(vlSelfRef.__PVT__a_last_counter)) 
                               | (0U == (IData)(vlSelfRef.__PVT__a_last_beats1)));
    vlSelfRef.__PVT__winner_1 = ((IData)(vlSelfRef.__PVT__a_q__DOT__full) 
                                 & ((IData)(vlSelfRef.__PVT__a_last) 
                                    & (IData)(vlSelfRef.__PVT__idle)));
}

VL_ATTR_COLD void VysyxSoCFull_TLError___ctor_var_reset(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->auto_in_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2868044631595565842ull);
    vlSelf->auto_in_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130299033711457835ull);
    vlSelf->auto_in_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10668890794695357383ull);
    vlSelf->auto_in_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6310578332688486372ull);
    vlSelf->auto_in_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4019073524030289764ull);
    vlSelf->auto_in_a_bits_address = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8178760610660100602ull);
    vlSelf->auto_in_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2829460714933064650ull);
    vlSelf->auto_in_a_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14261205101297209454ull);
    vlSelf->auto_in_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787519531301152761ull);
    vlSelf->auto_in_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14155015041982909940ull);
    vlSelf->auto_in_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7394225744049892423ull);
    vlSelf->auto_in_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1192860724447564472ull);
    vlSelf->auto_in_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16277275471381136087ull);
    vlSelf->auto_in_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15337584529595042696ull);
    vlSelf->auto_in_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 964985458495675229ull);
    vlSelf->__PVT__da_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17267114324739693087ull);
    vlSelf->__PVT__da_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15448467558783583046ull);
    vlSelf->__PVT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18406021956006436741ull);
    vlSelf->__PVT__a_last_beats1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9330753746182165046ull);
    vlSelf->__PVT__a_last_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7374655490701455325ull);
    vlSelf->__PVT__a_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14111044867808790984ull);
    vlSelf->__PVT__r_beats1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18053736217310406628ull);
    vlSelf->__PVT__r_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16449050708366137251ull);
    vlSelf->__PVT__da_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1610107917931731362ull);
    vlSelf->__PVT__a_q_io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231484506741467576ull);
    vlSelf->__PVT__winner_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467358568887072371ull);
    vlSelf->__PVT__beatsLeft = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8796258565968706635ull);
    vlSelf->__PVT__idle_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9474311064147484050ull);
    vlSelf->__PVT__state_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10470767838807816508ull);
    vlSelf->__PVT__unnamedblk1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18307699529615746668ull);
    vlSelf->__VdfgRegularize_h6c8fa2cb_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8248823517783931400ull);
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13752129944717166544ull);
    vlSelf->__PVT__monitor__DOT__a_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14597553674920192908ull);
    vlSelf->__PVT__monitor__DOT__opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7893344942997501556ull);
    vlSelf->__PVT__monitor__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 898747652449423152ull);
    vlSelf->__PVT__monitor__DOT__source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5650757721681867455ull);
    vlSelf->__PVT__monitor__DOT__address = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1703460285002050959ull);
    vlSelf->__PVT__monitor__DOT__d_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5055916172068891562ull);
    vlSelf->__PVT__monitor__DOT__opcode_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5895822486564409666ull);
    vlSelf->__PVT__monitor__DOT__param_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7644719661973761716ull);
    vlSelf->__PVT__monitor__DOT__size_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14070254713899024532ull);
    vlSelf->__PVT__monitor__DOT__source_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11685055908122665152ull);
    vlSelf->__PVT__monitor__DOT__denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4380404703227648086ull);
    vlSelf->__PVT__monitor__DOT__inflight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17444134150539226404ull);
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1312488397141860497ull);
    vlSelf->__PVT__monitor__DOT__inflight_sizes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17970537921940740309ull);
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11781005566047554677ull);
    vlSelf->__PVT__monitor__DOT__a_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11059860619057143359ull);
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11404100919619212230ull);
    vlSelf->__PVT__monitor__DOT__d_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476615984904740448ull);
    vlSelf->__PVT__monitor__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7980214294505486562ull);
    vlSelf->__PVT__monitor__DOT__watchdog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8521509654293736276ull);
    vlSelf->__PVT__monitor__DOT__inflight_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9165136181300295818ull);
    vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1496821894341896836ull);
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4710233743945775794ull);
    vlSelf->__PVT__monitor__DOT__d_first_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17860192951611666298ull);
    vlSelf->__PVT__monitor__DOT__watchdog_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6455327841761840999ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14251881232324175375ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340886973001374090ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8719989862672034528ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10545368877820142170ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6689578879574361500ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38, __VscopeHash, 4338116213471071423ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4888516314536555995ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40, __VscopeHash, 1281256937915063354ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4365360562781571530ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5, __VscopeHash, 13169548428539758396ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1, __VscopeHash, 14124606893907262006ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5, __VscopeHash, 8460124041229170163ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1, __VscopeHash, 14024003138620966563ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11, __VscopeHash, 7769864765581749266ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14298668262906697137ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18407247957936084061ull);
    vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9004713568643935358ull);
    vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5245612212189263196ull);
    vlSelf->__PVT__a_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 17084438687746244342ull);
    vlSelf->__PVT__a_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14650398970213564920ull);
    vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5417973938401168993ull);
}
