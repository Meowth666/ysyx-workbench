// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLBusBypass.h"

VL_ATTR_COLD void VysyxSoCFull_TLBusBypass___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp_3[0U] = 0x743d2564U;
    __Vtemp_3[1U] = 0x6d656f75U;
    __Vtemp_3[2U] = 0x6b5f7469U;
    __Vtemp_3[3U] = 0x656c696eU;
    __Vtemp_3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_3), 
                                vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_4[0U] = 0x743d2564U;
    __Vtemp_4[1U] = 0x6d656f75U;
    __Vtemp_4[2U] = 0x6b5f7469U;
    __Vtemp_4[3U] = 0x656c696eU;
    __Vtemp_4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_4), 
                                vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_TLBusBypass___ctor_var_reset(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->auto_node_out_out_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13930591195880482438ull);
    vlSelf->auto_node_out_out_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12054044472170795302ull);
    vlSelf->auto_node_out_out_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15539090943855200760ull);
    vlSelf->auto_node_out_out_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16937741536002340778ull);
    vlSelf->auto_node_out_out_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8068907857677790575ull);
    vlSelf->auto_node_out_out_a_bits_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3301426017756080158ull);
    vlSelf->auto_node_out_out_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15005054726563782647ull);
    vlSelf->auto_node_out_out_a_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9967424396136865547ull);
    vlSelf->auto_node_out_out_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 350526577122382641ull);
    vlSelf->auto_node_out_out_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12024424650428995259ull);
    vlSelf->auto_node_out_out_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10882646832853155652ull);
    vlSelf->auto_node_out_out_d_bits_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8952610233571952880ull);
    vlSelf->auto_node_out_out_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7647475250894541464ull);
    vlSelf->auto_node_out_out_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16873948521299911756ull);
    vlSelf->auto_node_out_out_d_bits_sink = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17883076153462857507ull);
    vlSelf->auto_node_out_out_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7914946955312801950ull);
    vlSelf->auto_node_out_out_d_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3426983700791837680ull);
    vlSelf->auto_node_out_out_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8997224199413208738ull);
    vlSelf->auto_node_in_in_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4653906332065746144ull);
    vlSelf->auto_node_in_in_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10056970829578458395ull);
    vlSelf->auto_node_in_in_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3605373470272415100ull);
    vlSelf->auto_node_in_in_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9229068889943810281ull);
    vlSelf->auto_node_in_in_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1114928426867545494ull);
    vlSelf->auto_node_in_in_a_bits_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8141876664373586711ull);
    vlSelf->auto_node_in_in_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9388110349022300715ull);
    vlSelf->auto_node_in_in_a_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1476139778501130886ull);
    vlSelf->auto_node_in_in_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9261976823269594640ull);
    vlSelf->auto_node_in_in_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1381969117427384338ull);
    vlSelf->auto_node_in_in_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2913611261515608597ull);
    vlSelf->auto_node_in_in_d_bits_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4101691450303850369ull);
    vlSelf->auto_node_in_in_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11862219693332559686ull);
    vlSelf->auto_node_in_in_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9256226692958190996ull);
    vlSelf->auto_node_in_in_d_bits_sink = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12045465805516627224ull);
    vlSelf->auto_node_in_in_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10124729869694048756ull);
    vlSelf->auto_node_in_in_d_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18054502153156602599ull);
    vlSelf->auto_node_in_in_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16605980637078081665ull);
    vlSelf->io_bypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14354869962856494716ull);
    vlSelf->__PVT___bar_auto_out_0_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3458171092707934883ull);
    vlSelf->__PVT___bar_auto_out_0_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1387526667536818919ull);
    vlSelf->__PVT__bar__DOT__in_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7495597781239540622ull);
    vlSelf->__PVT__bar__DOT__bypass_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13027963062719364596ull);
    vlSelf->__PVT__bar__DOT__bypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2491755247230392730ull);
    vlSelf->__PVT__bar__DOT__flight = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14618559327125901734ull);
    vlSelf->__PVT__bar__DOT__r_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11854950618161146612ull);
    vlSelf->__PVT__bar__DOT__r_counter_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12251268768946230094ull);
    vlSelf->__PVT__bar__DOT__stall_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13026905579185821310ull);
    vlSelf->__PVT__bar__DOT__stall_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15320099922876073330ull);
    vlSelf->__PVT__bar__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9640799273413368254ull);
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18318371735446348920ull);
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6571272746831904747ull);
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11523998855684298388ull);
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3301214309752472660ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18059326319739664704ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6257091072825193417ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9460644345135261275ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15051113092338076365ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6021318355608803389ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2491146447492256444ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4134030217600914070ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13484872640044786961ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 980097717722207827ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2120115922003391861ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1596645886877513097ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__sink = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16685993472619559306ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10885039705932794938ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1694916995827787070ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4521595490426007377ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7383657832228578465ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2420673761389723418ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11489092506186542390ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6845549160340042207ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10421153894226928669ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17245414310007563125ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11131745888287784924ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17495572293476007557ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12763005569729752845ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5121252740637322162ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089727064803427381ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16909409777714921246ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4015492627731177374ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940080116257603269ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9811761933766664577ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148186043703604891ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40, __VscopeHash, 5843520280204666536ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8492666380274761230ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42, __VscopeHash, 17432791666337305161ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1289820495293524521ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5, __VscopeHash, 7009683914901149756ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1, __VscopeHash, 15689617226677416093ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5, __VscopeHash, 1625785042797024378ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1, __VscopeHash, 15387392031154667812ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11, __VscopeHash, 7948899794576069300ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16131720697037952689ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5574800890633793626ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10406223877314501474ull);
    vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17396892249720954805ull);
    vlSelf->__PVT__error__DOT__da_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 501707651336308477ull);
    vlSelf->__PVT__error__DOT__da_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16064883506614033766ull);
    vlSelf->__PVT__error__DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10823336040777523294ull);
    vlSelf->__PVT__error__DOT__a_last_beats1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10942623176342587649ull);
    vlSelf->__PVT__error__DOT__a_last_counter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9747046512377329633ull);
    vlSelf->__PVT__error__DOT__a_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 224330040677518363ull);
    vlSelf->__PVT__error__DOT__r_beats1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10700987124242493565ull);
    vlSelf->__PVT__error__DOT__r_counter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4674325178703305061ull);
    vlSelf->__PVT__error__DOT__da_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8059621749968549453ull);
    vlSelf->__PVT__error__DOT__nodeIn_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11569048868505553425ull);
    vlSelf->__PVT__error__DOT__winner_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9549753823843355270ull);
    vlSelf->__PVT__error__DOT__beatsLeft = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14713590283312286381ull);
    vlSelf->__PVT__error__DOT__idle_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11656736514202028318ull);
    vlSelf->__PVT__error__DOT__state_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11930884362072597873ull);
    vlSelf->__PVT__error__DOT__muxState_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4437125344987095863ull);
    vlSelf->__PVT__error__DOT__nodeIn_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2427366056729704764ull);
    vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17867480928485431110ull);
    vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13558330338456257341ull);
    vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8989911367563953793ull);
    vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 509927589504451027ull);
    vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6527996248010495007ull);
    vlSelf->error__DOT____VdfgRegularize_he43761fa_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11365226869645075170ull);
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 464640997824672864ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13029151939154034689ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8569218670176198544ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3297298873687078284ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4830665803217823438ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT__address, __VscopeHash, 4008526409561454329ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17426484316691932720ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17467136262907325061ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__size_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15557299445453832365ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__source_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4228561375145898427ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2846940688729033045ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7146180589183483104ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1429770580342248138ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, __VscopeHash, 13019713438813267212ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3713864765234962196ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6162011855493009935ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11134270645718639128ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14613527113230703663ull);
    vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13781828020781825010ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9950405261287621504ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7188979236894867357ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __VscopeHash, 16938512486375937997ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4449156755470708166ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15675882223760482957ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10430296322567571141ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2762775093086884054ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026296470196271963ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17084273367719634472ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5310937461027322527ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6665370755391968887ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37, __VscopeHash, 13746280002998766487ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9972575953775061979ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5, __VscopeHash, 16268539178460521703ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1, __VscopeHash, 11235265426520147334ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5, __VscopeHash, 18264106384494205333ull);
    VL_SCOPED_RAND_RESET_W(132, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1, __VscopeHash, 1495268477289587506ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11, __VscopeHash, 14719799624143223375ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 2852672442039887700ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 8795807877463388842ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7830193461833764801ull);
    vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17877660483217388190ull);
}
