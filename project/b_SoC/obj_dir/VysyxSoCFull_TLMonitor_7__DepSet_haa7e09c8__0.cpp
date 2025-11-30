// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLMonitor_7.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __PVT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__unnamedblk1__DOT___GEN_6;
    __PVT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_7;
    __PVT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_8;
    __PVT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_9;
    __PVT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_10;
    __PVT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_11;
    __PVT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_12;
    __PVT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_13;
    __PVT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_14;
    __PVT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_15;
    __PVT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_16;
    __PVT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_17;
    __PVT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_18;
    __PVT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_19;
    __PVT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_20;
    __PVT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_21;
    __PVT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_22;
    __PVT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_23;
    __PVT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_24;
    __PVT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_25;
    __PVT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_26;
    __PVT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_27;
    __PVT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_28;
    __PVT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_29;
    __PVT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_30;
    __PVT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___GEN_31;
    __PVT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___same_cycle_resp_T_1;
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_32;
    __PVT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_33;
    __PVT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_34;
    __PVT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_35;
    __PVT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_36;
    __PVT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_37;
    __PVT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_38;
    __PVT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_39;
    __PVT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk2__DOT___d_first_T_2;
    __PVT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    SData/*15:0*/ __Vdly__inflight;
    __Vdly__inflight = 0;
    QData/*63:0*/ __Vdly__inflight_opcodes;
    __Vdly__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__inflight_sizes;
    __Vdly__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__d_first_counter_1;
    __Vdly__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__watchdog;
    __Vdly__watchdog = 0;
    SData/*15:0*/ __Vdly__inflight_1;
    __Vdly__inflight_1 = 0;
    QData/*63:0*/ __Vdly__inflight_sizes_1;
    __Vdly__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__d_first_counter_2;
    __Vdly__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__watchdog_1;
    __Vdly__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__a_first_counter_1;
    __Vdly__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vdly__d_first_counter = vlSelfRef.__PVT__d_first_counter;
    __Vdly__inflight = vlSelfRef.__PVT__inflight;
    __Vdly__inflight_opcodes = vlSelfRef.__PVT__inflight_opcodes;
    __Vdly__inflight_sizes = vlSelfRef.__PVT__inflight_sizes;
    __Vdly__watchdog = vlSelfRef.__PVT__watchdog;
    __Vdly__inflight_1 = vlSelfRef.__PVT__inflight_1;
    __Vdly__inflight_sizes_1 = vlSelfRef.__PVT__inflight_sizes_1;
    __Vdly__watchdog_1 = vlSelfRef.__PVT__watchdog_1;
    __Vdly__d_first_counter_1 = vlSelfRef.__PVT__d_first_counter_1;
    __Vdly__d_first_counter_2 = vlSelfRef.__PVT__d_first_counter_2;
    __Vdly__a_first_counter = vlSelfRef.__PVT__a_first_counter;
    __Vdly__a_first_counter_1 = vlSelfRef.__PVT__a_first_counter_1;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = (0xfffU 
                                                   & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__unnamedblk1__DOT___GEN_6 = (0x1fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                & (~ (IData)(__PVT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask = (((8U 
                                                 & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                     << 3U) 
                                                    | (0xfffffff8U 
                                                       & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                           << 2U) 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                             << 3U))))) 
                                                | (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                    | (1U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                     | (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__unnamedblk1__DOT___GEN_7 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                       & (3U == (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                 >> 0x1eU)));
    __PVT__unnamedblk1__DOT___GEN_8 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                        & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                       & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_9 = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__unnamedblk1__DOT___GEN_10 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_11 = ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                                   >> 1U))) 
                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_12 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_13 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                        != (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask));
    __PVT__unnamedblk1__DOT___GEN_14 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_15 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_16 = ((3U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_17 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_18 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_19 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_20 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_21 = (0U == (3U & 
                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                                                >> 1U)));
    __PVT__unnamedblk1__DOT___GEN_22 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_23 = (2U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param)));
    __PVT__unnamedblk1__DOT___GEN_24 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_25 = (1U & ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                  >> 2U)) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt)));
    __PVT__unnamedblk1__DOT___GEN_26 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_27 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_28 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_31 = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)) 
                                        << 2U);
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
         & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
    vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? (0xffffU & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source)))
            : 0U);
    __PVT__unnamedblk1__DOT___GEN_32 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                        & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1)));
    __PVT__unnamedblk1__DOT___GEN_33 = ((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)));
    vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)));
    __PVT__unnamedblk1__DOT___GEN_34 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp)) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_35 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_36 = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                          & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_29 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__a_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_30 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__d_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 
        VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_opcodes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10239: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10239, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10241: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10241, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10245: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10245, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10247: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10247, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10251: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10251, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10253: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10253, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10257: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10257, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10259: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10259, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10263: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10263, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10265: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10265, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10269: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10269, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10271: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10271, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10275: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10275, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10277: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10277, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10281: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10281, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10283: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10283, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10287: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10287, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10289: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10289, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10293: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10293, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10295: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10295, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10299: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10299, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10301: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10301, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10305: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10305, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10307: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10307, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10311: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10311, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10313: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10313, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10317: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10317, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10319: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10319, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10323: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10323, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10325: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10325, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10329: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10329, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10331: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10331, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10335: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10335, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10337: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10337, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10341: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10341, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10343: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10343, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10347: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10347, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10349: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10349, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10353: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10353, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10355: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10355, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10359: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10359, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10361: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10361, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10365: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10365, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10367: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10367, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10371: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10371, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10373: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10373, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10377: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10377, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10379: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10379, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10383: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10383, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10385: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10385, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10389: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10389, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10391: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10391, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10395: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10395, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10397: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10397, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10401: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10401, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10403: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10403, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10407: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10407, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10409: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10409, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10413: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10413, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10415: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10415, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10419: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10419, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10421: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10421, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10425: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10425, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10427: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10427, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10431: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10431, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10433: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10433, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                         >> 2U))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10437: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10437, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10439: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10439, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10443: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10443, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10445: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10445, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10449: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10449, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10451: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10451, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10455: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10455, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10457: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10457, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10461: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10461, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10463: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10463, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10467: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10467, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10469: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10469, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10473: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10473, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10475: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10475, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10479: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10479, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10481: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10481, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10485: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10485, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10487: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10487, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10491: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10491, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10493: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10493, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10497: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10497, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10499: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10499, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10503: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10503, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10505: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10505, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10509: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10509, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10511: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10511, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10515: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10515, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10517: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10517, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10521: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10521, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10523: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10523, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10527: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10527, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10529: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10529, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10533: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10533, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10535: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10535, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10539: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10539, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10541: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10541, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10545: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10545, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10547: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10547, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10551: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10551, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10553: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10553, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param)) 
                         != (IData)(vlSelfRef.__PVT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10557: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10557, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10559: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10559, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10563: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10563, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10565: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10565, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10569: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10569, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10571: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10571, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10575: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10575, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10577: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10577, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                >> 2U)) != (IData)(vlSelfRef.__PVT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10581: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10581, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10583: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10583, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_37 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT___GEN_1) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10588: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10588, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10590: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10590, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_38 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10595: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10597, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10603: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10603, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10605: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10605, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10609: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10609, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10611: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10611, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U))))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(
                                                                   (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10617: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10617, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10619: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10619, "", false);
    }
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10624: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10624, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10626: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10626, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10631: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10633: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10633, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready) 
                                   != ((IData)(__PVT__unnamedblk1__DOT___GEN_33)
                                        ? (0xffffU 
                                           & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)))
                                        : 0U)) | (0U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10639: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10639, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10641: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10641, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog 
                                     < vlSelfRef.__PVT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10647: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10647, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10649: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10649, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_39 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight_1), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10654: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10654, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10656: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10656, "", false);
    }
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes_1, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10661: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10663: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10663, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog_1 
                                     < vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10669: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10669, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10671: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10671, "", false);
    }
    __PVT__unnamedblk2__DOT___d_first_T_2 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__d_first_counter = 0U;
        __Vdly__inflight = 0U;
        __Vdly__inflight_opcodes = 0ULL;
        __Vdly__inflight_sizes = 0ULL;
        __Vdly__d_first_counter_1 = 0U;
        __Vdly__watchdog = 0U;
        __Vdly__inflight_1 = 0U;
        __Vdly__inflight_sizes_1 = 0ULL;
        __Vdly__d_first_counter_2 = 0U;
        __Vdly__watchdog_1 = 0U;
        __Vdly__a_first_counter = 0U;
        __Vdly__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT___GEN_1) {
            __Vtemp_7[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_7[0U] = 0U;
            __Vtemp_13[0U] = 0U;
        }
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_7[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)));
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)));
        if (__PVT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__d_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__d_first_counter) 
                                                 - (IData)(1U))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                   >> 2U))
                                                  : 0U)));
            __Vdly__d_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__d_first_1)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_1) 
                                                   - (IData)(1U))));
            __Vdly__d_first_counter_2 = (7U & ((IData)(vlSelfRef.__PVT__d_first_2)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_2) 
                                                   - (IData)(1U))));
            __Vdly__watchdog_1 = 0U;
        } else {
            __Vdly__watchdog_1 = ((IData)(1U) + vlSelfRef.__PVT__watchdog_1);
        }
        __Vdly__inflight = (0xffffU & (((IData)(vlSelfRef.__PVT__inflight) 
                                        | ((IData)(vlSelfRef.__PVT___GEN_1)
                                            ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))
                                            : 0U)) 
                                       & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                              ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source))
                                              : 0U))));
        __Vdly__inflight_opcodes = ((vlSelfRef.__PVT__inflight_opcodes 
                                     | ((IData)(vlSelfRef.__PVT___GEN_1)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                         : 0ULL)) & 
                                    (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                         : 0ULL)));
        __Vdly__inflight_sizes = ((vlSelfRef.__PVT__inflight_sizes 
                                   | ((IData)(vlSelfRef.__PVT___GEN_1)
                                       ? (((QData)((IData)(
                                                           vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__watchdog = (((IData)(vlSelfRef.__PVT___a_first_T_1) 
                             | (IData)(__PVT__unnamedblk2__DOT___d_first_T_2))
                             ? 0U : ((IData)(1U) + vlSelfRef.__PVT__watchdog));
        __Vdly__inflight_1 = ((IData)(vlSelfRef.__PVT__inflight_1) 
                              & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                     ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source))
                                     : 0U)));
        __Vdly__inflight_sizes_1 = (vlSelfRef.__PVT__inflight_sizes_1 
                                    & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                           : 0ULL)));
        if (vlSelfRef.__PVT___a_first_T_1) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__a_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__a_first_counter) 
                                                 - (IData)(1U))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                   >> 2U)))));
            __Vdly__a_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__a_first_1)
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                     >> 2U)))
                                                : ((IData)(vlSelfRef.__PVT__a_first_counter_1) 
                                                   - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__d_first_counter))))) {
        vlSelfRef.__PVT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode;
        vlSelfRef.__PVT__param_1 = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size;
        vlSelfRef.__PVT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source;
        vlSelfRef.__PVT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink;
        vlSelfRef.__PVT__denied = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                         >> 2U));
    }
    if (((IData)(vlSelfRef.__PVT___a_first_T_1) & (~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__a_first_counter))))) {
        vlSelfRef.__PVT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__size = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__address = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelfRef.__PVT__inflight = __Vdly__inflight;
    vlSelfRef.__PVT__inflight_opcodes = __Vdly__inflight_opcodes;
    vlSelfRef.__PVT__inflight_sizes = __Vdly__inflight_sizes;
    vlSelfRef.__PVT__watchdog = __Vdly__watchdog;
    vlSelfRef.__PVT__inflight_1 = __Vdly__inflight_1;
    vlSelfRef.__PVT__inflight_sizes_1 = __Vdly__inflight_sizes_1;
    vlSelfRef.__PVT__watchdog_1 = __Vdly__watchdog_1;
    vlSelfRef.__PVT__d_first_counter_1 = __Vdly__d_first_counter_1;
    vlSelfRef.__PVT__d_first_counter_2 = __Vdly__d_first_counter_2;
    vlSelfRef.__PVT__a_first_counter = __Vdly__a_first_counter;
    vlSelfRef.__PVT__a_first_counter_1 = __Vdly__a_first_counter_1;
    vlSelfRef.__PVT__d_first_1 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1));
    vlSelfRef.__PVT__d_first_2 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2));
    vlSelfRef.__PVT__a_first_1 = (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___a_first_T_1 = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
    vlSelfRef.__PVT___GEN_1 = ((IData)(vlSelfRef.__PVT___a_first_T_1) 
                               & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __PVT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__unnamedblk1__DOT___GEN_6;
    __PVT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_7;
    __PVT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_8;
    __PVT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_9;
    __PVT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_10;
    __PVT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_11;
    __PVT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_12;
    __PVT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_13;
    __PVT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_14;
    __PVT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_15;
    __PVT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_16;
    __PVT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_17;
    __PVT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_18;
    __PVT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_19;
    __PVT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_20;
    __PVT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_21;
    __PVT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_22;
    __PVT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_23;
    __PVT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_24;
    __PVT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_25;
    __PVT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_26;
    __PVT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_27;
    __PVT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_28;
    __PVT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_29;
    __PVT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_30;
    __PVT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___GEN_31;
    __PVT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___same_cycle_resp_T_1;
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_32;
    __PVT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_33;
    __PVT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_34;
    __PVT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_35;
    __PVT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_36;
    __PVT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_37;
    __PVT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_38;
    __PVT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_39;
    __PVT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk2__DOT___d_first_T_2;
    __PVT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    SData/*15:0*/ __Vdly__inflight;
    __Vdly__inflight = 0;
    QData/*63:0*/ __Vdly__inflight_opcodes;
    __Vdly__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__inflight_sizes;
    __Vdly__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__d_first_counter_1;
    __Vdly__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__watchdog;
    __Vdly__watchdog = 0;
    SData/*15:0*/ __Vdly__inflight_1;
    __Vdly__inflight_1 = 0;
    QData/*63:0*/ __Vdly__inflight_sizes_1;
    __Vdly__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__d_first_counter_2;
    __Vdly__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__watchdog_1;
    __Vdly__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__a_first_counter_1;
    __Vdly__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vdly__d_first_counter = vlSelfRef.__PVT__d_first_counter;
    __Vdly__inflight = vlSelfRef.__PVT__inflight;
    __Vdly__inflight_opcodes = vlSelfRef.__PVT__inflight_opcodes;
    __Vdly__inflight_sizes = vlSelfRef.__PVT__inflight_sizes;
    __Vdly__watchdog = vlSelfRef.__PVT__watchdog;
    __Vdly__inflight_1 = vlSelfRef.__PVT__inflight_1;
    __Vdly__inflight_sizes_1 = vlSelfRef.__PVT__inflight_sizes_1;
    __Vdly__watchdog_1 = vlSelfRef.__PVT__watchdog_1;
    __Vdly__d_first_counter_1 = vlSelfRef.__PVT__d_first_counter_1;
    __Vdly__d_first_counter_2 = vlSelfRef.__PVT__d_first_counter_2;
    __Vdly__a_first_counter = vlSelfRef.__PVT__a_first_counter;
    __Vdly__a_first_counter_1 = vlSelfRef.__PVT__a_first_counter_1;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = (0xfffU 
                                                   & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__unnamedblk1__DOT___GEN_6 = (0x1fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                & (~ (IData)(__PVT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask = (((8U 
                                                 & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                     << 3U) 
                                                    | (0xfffffff8U 
                                                       & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                           << 2U) 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                             << 3U))))) 
                                                | (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                    | (1U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                     | (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__unnamedblk1__DOT___GEN_7 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                       & (3U == (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                 >> 0x1eU)));
    __PVT__unnamedblk1__DOT___GEN_8 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                        & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                       & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_9 = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__unnamedblk1__DOT___GEN_10 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_11 = ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                                   >> 1U))) 
                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_12 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_13 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                        != (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask));
    __PVT__unnamedblk1__DOT___GEN_14 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_15 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_16 = ((3U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_17 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_18 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_19 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_20 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_21 = (0U == (3U & 
                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                                                >> 1U)));
    __PVT__unnamedblk1__DOT___GEN_22 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_23 = (2U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param)));
    __PVT__unnamedblk1__DOT___GEN_24 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_25 = (1U & ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                  >> 2U)) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt)));
    __PVT__unnamedblk1__DOT___GEN_26 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_27 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_28 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_31 = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)) 
                                        << 2U);
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
         & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
    vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? (0xffffU & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source)))
            : 0U);
    __PVT__unnamedblk1__DOT___GEN_32 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                        & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1)));
    __PVT__unnamedblk1__DOT___GEN_33 = ((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)));
    vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)));
    __PVT__unnamedblk1__DOT___GEN_34 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp)) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_35 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_36 = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                          & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_29 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__a_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_30 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__d_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 
        VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_opcodes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10239: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10239, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10241: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10241, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10245: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10245, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10247: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10247, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10251: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10251, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10253: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10253, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10257: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10257, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10259: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10259, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10263: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10263, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10265: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10265, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10269: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10269, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10271: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10271, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10275: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10275, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10277: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10277, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10281: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10281, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10283: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10283, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10287: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10287, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10289: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10289, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10293: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10293, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10295: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10295, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10299: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10299, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10301: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10301, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10305: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10305, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10307: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10307, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10311: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10311, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10313: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10313, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10317: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10317, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10319: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10319, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10323: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10323, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10325: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10325, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10329: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10329, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10331: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10331, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10335: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10335, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10337: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10337, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10341: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10341, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10343: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10343, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10347: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10347, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10349: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10349, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10353: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10353, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10355: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10355, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10359: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10359, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10361: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10361, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10365: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10365, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10367: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10367, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10371: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10371, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10373: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10373, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10377: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10377, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10379: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10379, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10383: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10383, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10385: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10385, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10389: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10389, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10391: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10391, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10395: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10395, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10397: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10397, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10401: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10401, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10403: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10403, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10407: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10407, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10409: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10409, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10413: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10413, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10415: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10415, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10419: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10419, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10421: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10421, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10425: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10425, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10427: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10427, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10431: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10431, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10433: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10433, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                         >> 2U))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10437: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10437, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10439: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10439, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10443: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10443, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10445: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10445, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10449: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10449, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10451: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10451, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10455: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10455, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10457: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10457, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10461: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10461, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10463: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10463, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10467: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10467, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10469: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10469, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10473: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10473, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10475: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10475, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10479: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10479, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10481: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10481, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10485: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10485, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10487: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10487, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10491: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10491, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10493: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10493, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10497: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10497, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10499: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10499, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10503: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10503, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10505: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10505, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10509: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10509, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10511: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10511, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10515: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10515, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10517: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10517, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10521: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10521, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10523: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10523, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10527: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10527, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10529: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10529, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10533: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10533, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10535: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10535, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10539: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10539, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10541: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10541, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10545: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10545, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10547: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10547, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10551: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10551, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10553: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10553, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param)) 
                         != (IData)(vlSelfRef.__PVT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10557: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10557, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10559: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10559, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10563: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10563, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10565: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10565, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10569: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10569, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10571: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10571, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10575: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10575, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10577: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10577, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                >> 2U)) != (IData)(vlSelfRef.__PVT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10581: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10581, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10583: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10583, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_37 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT___GEN_1) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10588: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10588, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10590: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10590, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_38 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10595: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10597: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10597, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10603: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10603, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10605: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10605, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10609: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10609, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10611: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10611, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U))))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(
                                                                   (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10617: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10617, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10619: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10619, "", false);
    }
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10624: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10624, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10626: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10626, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10631: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10633: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10633, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready) 
                                   != ((IData)(__PVT__unnamedblk1__DOT___GEN_33)
                                        ? (0xffffU 
                                           & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)))
                                        : 0U)) | (0U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10639: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10639, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10641: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10641, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog 
                                     < vlSelfRef.__PVT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10647: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10647, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10649: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10649, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_39 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight_1), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10654: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10654, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10656: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10656, "", false);
    }
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes_1, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10661: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10663: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10663, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog_1 
                                     < vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10669: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10669, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10671: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10671, "", false);
    }
    __PVT__unnamedblk2__DOT___d_first_T_2 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__d_first_counter = 0U;
        __Vdly__inflight = 0U;
        __Vdly__inflight_opcodes = 0ULL;
        __Vdly__inflight_sizes = 0ULL;
        __Vdly__d_first_counter_1 = 0U;
        __Vdly__watchdog = 0U;
        __Vdly__inflight_1 = 0U;
        __Vdly__inflight_sizes_1 = 0ULL;
        __Vdly__d_first_counter_2 = 0U;
        __Vdly__watchdog_1 = 0U;
        __Vdly__a_first_counter = 0U;
        __Vdly__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT___GEN_1) {
            __Vtemp_7[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_7[0U] = 0U;
            __Vtemp_13[0U] = 0U;
        }
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_7[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)));
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode)));
        if (__PVT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__d_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__d_first_counter) 
                                                 - (IData)(1U))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                   >> 2U))
                                                  : 0U)));
            __Vdly__d_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__d_first_1)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_1) 
                                                   - (IData)(1U))));
            __Vdly__d_first_counter_2 = (7U & ((IData)(vlSelfRef.__PVT__d_first_2)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_2) 
                                                   - (IData)(1U))));
            __Vdly__watchdog_1 = 0U;
        } else {
            __Vdly__watchdog_1 = ((IData)(1U) + vlSelfRef.__PVT__watchdog_1);
        }
        __Vdly__inflight = (0xffffU & (((IData)(vlSelfRef.__PVT__inflight) 
                                        | ((IData)(vlSelfRef.__PVT___GEN_1)
                                            ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))
                                            : 0U)) 
                                       & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                              ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source))
                                              : 0U))));
        __Vdly__inflight_opcodes = ((vlSelfRef.__PVT__inflight_opcodes 
                                     | ((IData)(vlSelfRef.__PVT___GEN_1)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                         : 0ULL)) & 
                                    (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                         : 0ULL)));
        __Vdly__inflight_sizes = ((vlSelfRef.__PVT__inflight_sizes 
                                   | ((IData)(vlSelfRef.__PVT___GEN_1)
                                       ? (((QData)((IData)(
                                                           vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__watchdog = (((IData)(vlSelfRef.__PVT___a_first_T_1) 
                             | (IData)(__PVT__unnamedblk2__DOT___d_first_T_2))
                             ? 0U : ((IData)(1U) + vlSelfRef.__PVT__watchdog));
        __Vdly__inflight_1 = ((IData)(vlSelfRef.__PVT__inflight_1) 
                              & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                     ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source))
                                     : 0U)));
        __Vdly__inflight_sizes_1 = (vlSelfRef.__PVT__inflight_sizes_1 
                                    & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                           : 0ULL)));
        if (vlSelfRef.__PVT___a_first_T_1) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__a_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__a_first_counter) 
                                                 - (IData)(1U))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                   >> 2U)))));
            __Vdly__a_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__a_first_1)
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                     >> 2U)))
                                                : ((IData)(vlSelfRef.__PVT__a_first_counter_1) 
                                                   - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__d_first_counter))))) {
        vlSelfRef.__PVT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode;
        vlSelfRef.__PVT__param_1 = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size;
        vlSelfRef.__PVT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source;
        vlSelfRef.__PVT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink;
        vlSelfRef.__PVT__denied = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                         >> 2U));
    }
    if (((IData)(vlSelfRef.__PVT___a_first_T_1) & (~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__a_first_counter))))) {
        vlSelfRef.__PVT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__size = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__address = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelfRef.__PVT__inflight = __Vdly__inflight;
    vlSelfRef.__PVT__inflight_opcodes = __Vdly__inflight_opcodes;
    vlSelfRef.__PVT__inflight_sizes = __Vdly__inflight_sizes;
    vlSelfRef.__PVT__watchdog = __Vdly__watchdog;
    vlSelfRef.__PVT__inflight_1 = __Vdly__inflight_1;
    vlSelfRef.__PVT__inflight_sizes_1 = __Vdly__inflight_sizes_1;
    vlSelfRef.__PVT__watchdog_1 = __Vdly__watchdog_1;
    vlSelfRef.__PVT__d_first_counter_1 = __Vdly__d_first_counter_1;
    vlSelfRef.__PVT__d_first_counter_2 = __Vdly__d_first_counter_2;
    vlSelfRef.__PVT__a_first_counter = __Vdly__a_first_counter;
    vlSelfRef.__PVT__a_first_counter_1 = __Vdly__a_first_counter_1;
    vlSelfRef.__PVT__d_first_1 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1));
    vlSelfRef.__PVT__d_first_2 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2));
    vlSelfRef.__PVT__a_first_1 = (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___a_first_T_1 = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
    vlSelfRef.__PVT___GEN_1 = ((IData)(vlSelfRef.__PVT___a_first_T_1) 
                               & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
}
