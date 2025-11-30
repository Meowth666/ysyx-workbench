// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u.h"

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1\n"); );
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

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___ctor_var_reset(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->auto_anon_in_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14088303429798224610ull);
    vlSelf->auto_anon_in_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15983931589679506436ull);
    vlSelf->auto_anon_in_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6678325975747231040ull);
    vlSelf->auto_anon_in_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10636315396123339327ull);
    vlSelf->auto_anon_in_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 54603296649921020ull);
    vlSelf->auto_anon_in_a_bits_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6691912331324758228ull);
    vlSelf->auto_anon_in_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7912513815564674889ull);
    vlSelf->auto_anon_in_a_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17603043260199467444ull);
    vlSelf->auto_anon_in_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15001452243129264105ull);
    vlSelf->auto_anon_in_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13129729452166795030ull);
    vlSelf->auto_anon_in_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 185592589082533355ull);
    vlSelf->auto_anon_in_d_bits_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13529542314901230437ull);
    vlSelf->auto_anon_in_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7264317476980709663ull);
    vlSelf->auto_anon_in_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5489706445621532413ull);
    vlSelf->auto_anon_in_d_bits_sink = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 794677709413562815ull);
    vlSelf->auto_anon_in_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1311431718492010269ull);
    vlSelf->auto_anon_in_d_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12875855137688308013ull);
    vlSelf->auto_anon_in_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1513989176984444556ull);
    vlSelf->auto_anon_out_1_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17491105485609050204ull);
    vlSelf->auto_anon_out_1_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10684959999576014316ull);
    vlSelf->auto_anon_out_1_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17575027085306497841ull);
    vlSelf->auto_anon_out_1_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12861864303375669944ull);
    vlSelf->auto_anon_out_1_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10554174524717033331ull);
    vlSelf->auto_anon_out_1_a_bits_address = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3321792649656490994ull);
    vlSelf->auto_anon_out_1_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14656671782076433854ull);
    vlSelf->auto_anon_out_1_a_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8308182413029123899ull);
    vlSelf->auto_anon_out_1_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10446798009050851824ull);
    vlSelf->auto_anon_out_1_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3390448483130449990ull);
    vlSelf->auto_anon_out_1_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14530949058727041050ull);
    vlSelf->auto_anon_out_1_d_bits_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17333782099803215299ull);
    vlSelf->auto_anon_out_1_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14660408416340188361ull);
    vlSelf->auto_anon_out_1_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1701718492969026884ull);
    vlSelf->auto_anon_out_1_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15001949565841098559ull);
    vlSelf->auto_anon_out_1_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18075096899806564914ull);
    vlSelf->auto_anon_out_0_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3921219316860095830ull);
    vlSelf->auto_anon_out_0_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2563209668363840680ull);
    vlSelf->auto_anon_out_0_a_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12487221057853820594ull);
    vlSelf->auto_anon_out_0_a_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8308921887875876707ull);
    vlSelf->auto_anon_out_0_a_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14048128685227244077ull);
    vlSelf->auto_anon_out_0_a_bits_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16038173330867323939ull);
    vlSelf->auto_anon_out_0_a_bits_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2306380368506450510ull);
    vlSelf->auto_anon_out_0_a_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8218639902848817142ull);
    vlSelf->auto_anon_out_0_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12369359141983080045ull);
    vlSelf->auto_anon_out_0_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15486324519896894291ull);
    vlSelf->auto_anon_out_0_d_bits_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6446243958440475002ull);
    vlSelf->auto_anon_out_0_d_bits_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16115357293286777724ull);
    vlSelf->auto_anon_out_0_d_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3868447278923878310ull);
    vlSelf->auto_anon_out_0_d_bits_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1482400131125208116ull);
    vlSelf->auto_anon_out_0_d_bits_sink = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4655259329752213159ull);
    vlSelf->auto_anon_out_0_d_bits_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11418329711410693949ull);
    vlSelf->auto_anon_out_0_d_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8315791852027364744ull);
    vlSelf->auto_anon_out_0_d_bits_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10940729854619206868ull);
    vlSelf->__PVT__beatsLeft = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8796258565968706635ull);
    vlSelf->__PVT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18406021956006436741ull);
    vlSelf->__PVT__readys_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9178580328483932933ull);
    vlSelf->__PVT__readys_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16685753292686603104ull);
    vlSelf->__PVT__readys_unready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3154445831125181429ull);
    vlSelf->__PVT__readys_readys = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13009787296592934143ull);
    vlSelf->__PVT__winner_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9207048580013920031ull);
    vlSelf->__PVT__winner_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467358568887072371ull);
    vlSelf->__PVT__state_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10363878936996352214ull);
    vlSelf->__PVT__state_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10470767838807816508ull);
    vlSelf->__PVT__muxState_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1545750027025611232ull);
    vlSelf->__PVT__muxState_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2730377342578648720ull);
    vlSelf->__PVT__unnamedblk1__DOT__latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13738163569700156415ull);
    vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T_3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5673684248469831121ull);
    vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14375282986818963542ull);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9060222114578333884ull);
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13752129944717166544ull);
    vlSelf->__PVT__monitor__DOT__a_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14597553674920192908ull);
    vlSelf->__PVT__monitor__DOT__opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7893344942997501556ull);
    vlSelf->__PVT__monitor__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 898747652449423152ull);
    vlSelf->__PVT__monitor__DOT__source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5650757721681867455ull);
    vlSelf->__PVT__monitor__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1703460285002050959ull);
    vlSelf->__PVT__monitor__DOT__d_first_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5055916172068891562ull);
    vlSelf->__PVT__monitor__DOT__opcode_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5895822486564409666ull);
    vlSelf->__PVT__monitor__DOT__param_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7644719661973761716ull);
    vlSelf->__PVT__monitor__DOT__size_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14070254713899024532ull);
    vlSelf->__PVT__monitor__DOT__source_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11685055908122665152ull);
    vlSelf->__PVT__monitor__DOT__sink = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8793788601969036497ull);
    vlSelf->__PVT__monitor__DOT__denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4380404703227648086ull);
    vlSelf->__PVT__monitor__DOT__inflight = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17444134150539226404ull);
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1312488397141860497ull);
    vlSelf->__PVT__monitor__DOT__inflight_sizes = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17970537921940740309ull);
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11781005566047554677ull);
    vlSelf->__PVT__monitor__DOT__a_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11059860619057143359ull);
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11404100919619212230ull);
    vlSelf->__PVT__monitor__DOT__d_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476615984904740448ull);
    vlSelf->__PVT__monitor__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13780793938672797973ull);
    vlSelf->__PVT__monitor__DOT__watchdog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8521509654293736276ull);
    vlSelf->__PVT__monitor__DOT__inflight_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9165136181300295818ull);
    vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1496821894341896836ull);
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4710233743945775794ull);
    vlSelf->__PVT__monitor__DOT__d_first_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17860192951611666298ull);
    vlSelf->__PVT__monitor__DOT__watchdog_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6455327841761840999ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14251881232324175375ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340886973001374090ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8719989862672034528ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6689578879574361500ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44, __VscopeHash, 17231351207028408441ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11048650627486570178ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46, __VscopeHash, 17105286142177954053ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3359570896462388064ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5, __VscopeHash, 13169548428539758396ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1, __VscopeHash, 14124606893907262006ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5, __VscopeHash, 8460124041229170163ull);
    VL_SCOPED_RAND_RESET_W(131, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1, __VscopeHash, 14024003138620966563ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11, __VscopeHash, 7769864765581749266ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14298668262906697137ull);
    vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18407247957936084061ull);
    vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9004713568643935358ull);
    vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5245612212189263196ull);
}
