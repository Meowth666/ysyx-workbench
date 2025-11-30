// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__idle = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.auto_anon_in_a_bits_mask = (0xfU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                                    ? 
                                                   (((8U 
                                                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                                << 2U) 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                                  << 3U))))) 
                                                     | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                         | (2U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                          | (0U 
                                                             == 
                                                             (3U 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))))
                                                    : 0U) 
                                                  | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                       ? (IData)(
                                                                 (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                  >> 1U))
                                                       : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_strb))
                                                      : 0U)));
    vlSelfRef.auto_anon_in_a_bits_data = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                           ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                               ? (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                          >> 5U))
                                               : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_data)
                                           : 0U);
    vlSelfRef.auto_anon_in_a_bits_size = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_3)
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9)
                                            : 0U));
    vlSelfRef.auto_anon_in_a_bits_source = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                              ? (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arid) 
                                                  << 3U) 
                                                 | (6U 
                                                    & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arid)
                                                         ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                                       << 1U)))
                                              : 0U) 
                                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                ? (1U 
                                                   | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awid) 
                                                       << 3U) 
                                                      | (6U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awid)
                                                              ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                              : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                            << 1U))))
                                                : 0U));
    vlSelfRef.auto_anon_in_a_bits_opcode = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1));
    vlSelfRef.auto_anon_in_a_bits_address = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                               ? vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr
                                               : 0U) 
                                             | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                 ? 
                                                (((6U 
                                                   > 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi)) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9))) 
                                                  & ((0U 
                                                      == 
                                                      ((0xffffeU 
                                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr 
                                                           >> 0xcU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr 
                                                              >> 0xcU))))) 
                                                     | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr 
                                                        >> 0x1eU)))
                                                  ? vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr
                                                  : 
                                                 (0x1000U 
                                                  | (3U 
                                                     & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr)))
                                                 : 0U));
}

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_out_1_d_bits_denied = ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__beatsLeft))
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__winner_1)
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__state_1));
    vlSelfRef.auto_anon_out_1_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__VdfgRegularize_h6c8fa2cb_0_3) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__winner_1));
    vlSelfRef.auto_anon_in_a_valid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_0_d_bits_param = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                               ? 0U
                                               : (3U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param)));
    if (vlSelfRef.auto_anon_out_1_d_bits_denied) {
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 
            (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__da_bits_opcode));
        vlSelfRef.auto_anon_out_1_d_bits_size = (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)));
        vlSelfRef.auto_anon_out_1_d_bits_source = (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q__DOT__ram 
                                                              >> 0x32U)));
        vlSelfRef.auto_anon_out_1_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__da_bits_opcode;
    } else {
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_size = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_source = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_opcode = 0U;
    }
    vlSelfRef.auto_anon_out_1_a_valid = ((~ (vlSelfRef.auto_anon_in_a_bits_address 
                                             >> 0x1eU)) 
                                         & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_0_a_valid = ((IData)(vlSelfRef.auto_anon_in_a_valid) 
                                         & (vlSelfRef.auto_anon_in_a_bits_address 
                                            >> 0x1eU));
}

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__2(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass) {
        vlSelfRef.auto_anon_out_0_d_bits_sink = 0U;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19));
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelfRef.auto_anon_out_0_d_bits_sink = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                      >> 2U));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size));
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode;
    }
    vlSelfRef.__PVT__readys_valid = (((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                      << 1U) | (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__readys_valid));
    vlSelfRef.__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                               << 1U)) 
                                        | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                   << 1U)) 
                                            | (IData)(vlSelfRef.auto_anon_out_1_d_valid)) 
                                           | (IData)(__PVT___readys_filter_T_1))) 
                                       | ((IData)(vlSelfRef.__PVT__readys_mask) 
                                          << 2U));
    vlSelfRef.__PVT__readys_readys = (3U & (~ (((IData)(vlSelfRef.__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__PVT__readys_unready))));
    vlSelfRef.__PVT__winner_1 = (((IData)(vlSelfRef.__PVT__readys_readys) 
                                  >> 1U) & (IData)(vlSelfRef.auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__winner_0 = ((IData)(vlSelfRef.__PVT__readys_readys) 
                                 & (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
        vlSelfRef.auto_anon_in_d_valid = ((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                          | (IData)(vlSelfRef.auto_anon_out_1_d_valid));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__winner_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__winner_0;
    } else {
        vlSelfRef.auto_anon_in_d_valid = (((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                           & (IData)(vlSelfRef.__PVT__state_0)) 
                                          | ((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                             & (IData)(vlSelfRef.__PVT__state_1)));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__state_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__state_0;
    }
    if (vlSelfRef.__PVT__muxState_0) {
        vlSelfRef.auto_anon_in_d_bits_param = vlSelfRef.auto_anon_out_0_d_bits_param;
        vlSelfRef.auto_anon_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                               ? 0U
                                               : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelfRef.auto_anon_in_d_bits_param = 0U;
        vlSelfRef.auto_anon_in_d_bits_data = 0U;
    }
    vlSelfRef.auto_anon_in_d_bits_sink = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_sink)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1) 
                                           << 5U));
    vlSelfRef.auto_anon_in_d_bits_corrupt = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                              & (IData)(vlSelfRef.auto_anon_out_0_d_bits_corrupt)) 
                                             | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                                & (IData)(vlSelfRef.auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.auto_anon_in_d_bits_denied = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                             & (IData)(vlSelfRef.auto_anon_out_0_d_bits_denied)) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                               & (IData)(vlSelfRef.auto_anon_out_1_d_bits_denied)));
    vlSelfRef.auto_anon_in_d_bits_size = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_size)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1)
                                            ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_size)
                                            : 0U));
    vlSelfRef.auto_anon_in_d_bits_source = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_source)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_source)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_bits_opcode = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_opcode)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_opcode)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_ready = (1U & ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                                             ? (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full))
                                             : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full))));
    vlSelfRef.auto_anon_out_1_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? ((IData)(vlSelfRef.__PVT__readys_readys) 
                                                >> 1U)
                                             : (IData)(vlSelfRef.__PVT__state_1)));
    vlSelfRef.auto_anon_out_0_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? (IData)(vlSelfRef.__PVT__readys_readys)
                                             : (IData)(vlSelfRef.__PVT__state_0)));
}

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__idle = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.auto_anon_in_a_bits_data = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                           ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                               ? (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                          >> 5U))
                                               : 0U)
                                           : 0U);
    vlSelfRef.auto_anon_in_a_bits_source = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                              ? (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arid) 
                                                  << 3U) 
                                                 | (6U 
                                                    & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arid)
                                                         ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_1)
                                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_0)) 
                                                       << 1U)))
                                              : 0U) 
                                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                ? (1U 
                                                   | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awid) 
                                                       << 3U) 
                                                      | (6U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awid)
                                                              ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                                                              : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)) 
                                                            << 1U))))
                                                : 0U));
    vlSelfRef.auto_anon_in_a_bits_opcode = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1));
    vlSelfRef.auto_anon_in_a_bits_size = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_3)
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9)
                                            : 0U));
    vlSelfRef.auto_anon_in_a_bits_address = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                               ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr
                                               : 0U) 
                                             | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                 ? 
                                                (((6U 
                                                   > 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi)) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9))) 
                                                  & ((0U 
                                                      == 
                                                      ((0xffffeU 
                                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr 
                                                           >> 0xcU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr 
                                                              >> 0xcU))))) 
                                                     | (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr 
                                                        >> 0x1eU)))
                                                  ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr
                                                  : 
                                                 (0x1000U 
                                                  | (3U 
                                                     & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr)))
                                                 : 0U));
    vlSelfRef.auto_anon_in_a_bits_mask = (0xfU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                                    ? 
                                                   (((8U 
                                                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                                                << 2U) 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                                                  << 3U))))) 
                                                     | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                         | (2U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                          | (0U 
                                                             == 
                                                             (3U 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)))))
                                                    : 0U) 
                                                  | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                       ? (IData)(
                                                                 (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                  >> 1U))
                                                       : 0U)
                                                      : 0U)));
}

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_out_1_d_bits_denied = ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__beatsLeft))
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__winner_1)
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__state_1));
    vlSelfRef.auto_anon_out_1_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__VdfgRegularize_h6c8fa2cb_0_3) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__winner_1));
    vlSelfRef.auto_anon_in_a_valid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__stall)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_0_d_bits_param = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                               ? 0U
                                               : (3U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param)));
    if (vlSelfRef.auto_anon_out_1_d_bits_denied) {
        vlSelfRef.auto_anon_out_1_d_bits_size = (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)));
        vlSelfRef.auto_anon_out_1_d_bits_source = (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q__DOT__ram 
                                                              >> 0x32U)));
        vlSelfRef.auto_anon_out_1_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_bits_opcode;
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 
            (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_bits_opcode));
    } else {
        vlSelfRef.auto_anon_out_1_d_bits_size = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_source = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_opcode = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 0U;
    }
    vlSelfRef.auto_anon_out_1_a_valid = ((~ (vlSelfRef.auto_anon_in_a_bits_address 
                                             >> 0x1eU)) 
                                         & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_0_a_valid = ((IData)(vlSelfRef.auto_anon_in_a_valid) 
                                         & (vlSelfRef.auto_anon_in_a_bits_address 
                                            >> 0x1eU));
}

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__2(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass) {
        vlSelfRef.auto_anon_out_0_d_bits_sink = 0U;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19));
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelfRef.auto_anon_out_0_d_bits_sink = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                      >> 2U));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size));
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt;
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode;
    }
    vlSelfRef.__PVT__readys_valid = (((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                      << 1U) | (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__readys_valid));
    vlSelfRef.__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                               << 1U)) 
                                        | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                   << 1U)) 
                                            | (IData)(vlSelfRef.auto_anon_out_1_d_valid)) 
                                           | (IData)(__PVT___readys_filter_T_1))) 
                                       | ((IData)(vlSelfRef.__PVT__readys_mask) 
                                          << 2U));
    vlSelfRef.__PVT__readys_readys = (3U & (~ (((IData)(vlSelfRef.__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__PVT__readys_unready))));
    vlSelfRef.__PVT__winner_1 = (((IData)(vlSelfRef.__PVT__readys_readys) 
                                  >> 1U) & (IData)(vlSelfRef.auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__winner_0 = ((IData)(vlSelfRef.__PVT__readys_readys) 
                                 & (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
        vlSelfRef.auto_anon_in_d_valid = ((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                          | (IData)(vlSelfRef.auto_anon_out_1_d_valid));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__winner_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__winner_0;
    } else {
        vlSelfRef.auto_anon_in_d_valid = (((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                           & (IData)(vlSelfRef.__PVT__state_0)) 
                                          | ((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                             & (IData)(vlSelfRef.__PVT__state_1)));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__state_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__state_0;
    }
    vlSelfRef.auto_anon_in_d_bits_param = ((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_param)
                                            : 0U);
    vlSelfRef.auto_anon_in_d_bits_sink = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_sink)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1) 
                                           << 5U));
    vlSelfRef.auto_anon_in_d_bits_size = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_size)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1)
                                            ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_size)
                                            : 0U));
    vlSelfRef.auto_anon_in_d_bits_corrupt = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                              & (IData)(vlSelfRef.auto_anon_out_0_d_bits_corrupt)) 
                                             | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                                & (IData)(vlSelfRef.auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.auto_anon_in_d_bits_denied = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                             & (IData)(vlSelfRef.auto_anon_out_0_d_bits_denied)) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                               & (IData)(vlSelfRef.auto_anon_out_1_d_bits_denied)));
    vlSelfRef.auto_anon_in_d_bits_source = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_source)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_source)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_bits_opcode = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_opcode)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_opcode)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_ready = (1U & ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                                             ? (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full))
                                             : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full))));
    vlSelfRef.auto_anon_out_1_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? ((IData)(vlSelfRef.__PVT__readys_readys) 
                                                >> 1U)
                                             : (IData)(vlSelfRef.__PVT__state_1)));
    vlSelfRef.auto_anon_out_0_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? (IData)(vlSelfRef.__PVT__readys_readys)
                                             : (IData)(vlSelfRef.__PVT__state_0)));
}
