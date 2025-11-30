// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLMonitor_7.h"

VL_ATTR_COLD void VysyxSoCFull_TLMonitor_7___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor\n"); );
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
                                vlSelfRef.__PVT__plusarg_reader__DOT__myplus))) {
        vlSelfRef.__PVT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus))) {
        vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_TLMonitor_7___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__a_first_1 = (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1));
    vlSelfRef.__PVT__d_first_1 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1));
    vlSelfRef.__PVT__d_first_2 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2));
}

VL_ATTR_COLD void VysyxSoCFull_TLMonitor_7___ctor_var_reset(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_in_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1225250548196483135ull);
    vlSelf->io_in_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12822309645511214037ull);
    vlSelf->io_in_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16848033402218567475ull);
    vlSelf->io_in_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6516828491273497692ull);
    vlSelf->io_in_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8845923024049814760ull);
    vlSelf->io_in_a_bits_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5548376597256551439ull);
    vlSelf->io_in_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11376319074021705414ull);
    vlSelf->io_in_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10107676588665104217ull);
    vlSelf->io_in_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16549100856868562385ull);
    vlSelf->io_in_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15925900618143481523ull);
    vlSelf->io_in_d_bits_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12494438061567041340ull);
    vlSelf->io_in_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12317364737747908959ull);
    vlSelf->io_in_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8516774480836640577ull);
    vlSelf->io_in_d_bits_sink = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18142121352050309131ull);
    vlSelf->io_in_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10770164568810555833ull);
    vlSelf->io_in_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16767118657173882923ull);
    vlSelf->__PVT___a_first_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6862725860880641519ull);
    vlSelf->__PVT__a_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10173198950594404856ull);
    vlSelf->__PVT__opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17409787017080135397ull);
    vlSelf->__PVT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7387879788838415890ull);
    vlSelf->__PVT__source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10529155825645890926ull);
    vlSelf->__PVT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12021632533271657083ull);
    vlSelf->__PVT__d_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10660427844682082662ull);
    vlSelf->__PVT__opcode_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16571258323461047688ull);
    vlSelf->__PVT__param_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2265402347537294260ull);
    vlSelf->__PVT__size_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10650985655332272053ull);
    vlSelf->__PVT__source_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15560054219629271653ull);
    vlSelf->__PVT__sink = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4897909882119307049ull);
    vlSelf->__PVT__denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3475879537623109148ull);
    vlSelf->__PVT__inflight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5037533341608955382ull);
    vlSelf->__PVT__inflight_opcodes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3157831824982513259ull);
    vlSelf->__PVT__inflight_sizes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13653447537671988915ull);
    vlSelf->__PVT__a_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1360535462548476104ull);
    vlSelf->__PVT__a_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10266534712381624485ull);
    vlSelf->__PVT__d_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7741020625007371655ull);
    vlSelf->__PVT__d_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 969362831935028049ull);
    vlSelf->__PVT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15082464963531340106ull);
    vlSelf->__PVT__watchdog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7617787975954455418ull);
    vlSelf->__PVT__inflight_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16581853799692119122ull);
    vlSelf->__PVT__inflight_sizes_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9334142276852512482ull);
    vlSelf->__PVT__d_first_counter_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4301461014188675091ull);
    vlSelf->__PVT__d_first_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17841445720336709400ull);
    vlSelf->__PVT__watchdog_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2300132362807258923ull);
    vlSelf->__PVT__unnamedblk1__DOT__mask_sub_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 177393305096405362ull);
    vlSelf->__PVT__unnamedblk1__DOT__mask_sub_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14917419920981698276ull);
    vlSelf->__PVT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8755765315499547322ull);
    vlSelf->__PVT__unnamedblk1__DOT__a_set_wo_ready = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2046117011655707295ull);
    vlSelf->__PVT__unnamedblk1__DOT__same_cycle_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2831820836776005213ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40, __VscopeHash, 1673745071224602415ull);
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17481805059073384634ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42, __VscopeHash, 18176576108644572599ull);
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4480221275622921584ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5, __VscopeHash, 18048526008739175502ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1, __VscopeHash, 6343502385291404361ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5, __VscopeHash, 457015401456154823ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1, __VscopeHash, 12490578312000045875ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11, __VscopeHash, 10457348137813577804ull);
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17434872030148923342ull);
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2968652424895962135ull);
    vlSelf->__PVT__plusarg_reader__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4151832506930150295ull);
    vlSelf->__PVT__plusarg_reader_1__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2424914906754499607ull);
}
