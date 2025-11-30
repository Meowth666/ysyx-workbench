// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TX.h"

VL_ATTR_COLD void VysyxSoCFull_TX___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__0(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ __PVT___GEN;
    __PVT___GEN = 0;
    IData/*16:0*/ __PVT___GEN_0;
    __PVT___GEN_0 = 0;
    SData/*14:0*/ __PVT___GEN_1;
    __PVT___GEN_1 = 0;
    SData/*10:0*/ __PVT___GEN_2;
    __PVT___GEN_2 = 0;
    IData/*17:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    IData/*16:0*/ __PVT___GEN_4;
    __PVT___GEN_4 = 0;
    SData/*14:0*/ __PVT___GEN_5;
    __PVT___GEN_5 = 0;
    SData/*10:0*/ __PVT___GEN_6;
    __PVT___GEN_6 = 0;
    IData/*17:0*/ __PVT___GEN_7;
    __PVT___GEN_7 = 0;
    IData/*16:0*/ __PVT___GEN_8;
    __PVT___GEN_8 = 0;
    SData/*14:0*/ __PVT___GEN_9;
    __PVT___GEN_9 = 0;
    SData/*10:0*/ __PVT___GEN_10;
    __PVT___GEN_10 = 0;
    IData/*17:0*/ __PVT___GEN_11;
    __PVT___GEN_11 = 0;
    IData/*16:0*/ __PVT___GEN_12;
    __PVT___GEN_12 = 0;
    SData/*14:0*/ __PVT___GEN_13;
    __PVT___GEN_13 = 0;
    SData/*10:0*/ __PVT___GEN_14;
    __PVT___GEN_14 = 0;
    IData/*17:0*/ __PVT___GEN_15;
    __PVT___GEN_15 = 0;
    IData/*16:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    SData/*14:0*/ __PVT___GEN_17;
    __PVT___GEN_17 = 0;
    SData/*10:0*/ __PVT___GEN_18;
    __PVT___GEN_18 = 0;
    CData/*5:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    SData/*9:0*/ __PVT___GEN_19;
    __PVT___GEN_19 = 0;
    SData/*8:0*/ __PVT___GEN_20;
    __PVT___GEN_20 = 0;
    // Body
    vlSelfRef.__PVT__ioX_delta = (0x1fffffU & (vlSelfRef.__PVT__tx_a 
                                               - (IData)(vlSelfRef.__PVT__qa_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_1 = (0x1fffffU & (vlSelfRef.__PVT__tx_b 
                                                 - (IData)(vlSelfRef.__PVT__qb_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_2 = (0x1fffffU & (vlSelfRef.__PVT__tx_c 
                                                 - (IData)(vlSelfRef.__PVT__qc_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_3 = (0x1fffffU & (vlSelfRef.__PVT__tx_d 
                                                 - (IData)(vlSelfRef.__PVT__qd_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_4 = (0x1fffffU & (vlSelfRef.__PVT__tx_e 
                                                 - (IData)(vlSelfRef.__PVT__qe_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__txInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__allowReturn = (1U & (~ (((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0) 
                                              | ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0) 
                                                 | ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                                    | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0))))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__xmit)))));
    __PVT___GEN = (0x3ffffU & ((vlSelfRef.__PVT__rx_a 
                                >> 1U) | (vlSelfRef.__PVT__rx_a 
                                          >> 2U)));
    __PVT___GEN_3 = (0x3ffffU & ((vlSelfRef.__PVT__rx_b 
                                  >> 1U) | (vlSelfRef.__PVT__rx_b 
                                            >> 2U)));
    __PVT___GEN_7 = (0x3ffffU & ((vlSelfRef.__PVT__rx_c 
                                  >> 1U) | (vlSelfRef.__PVT__rx_c 
                                            >> 2U)));
    __PVT___GEN_11 = (0x3ffffU & ((vlSelfRef.__PVT__rx_d 
                                   >> 1U) | (vlSelfRef.__PVT__rx_d 
                                             >> 2U)));
    __PVT___GEN_15 = (0x3ffffU & ((vlSelfRef.__PVT__rx_e 
                                   >> 1U) | (vlSelfRef.__PVT__rx_e 
                                             >> 2U)));
    vlSelfRef.__PVT__ioX_allow = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first)) 
                                        | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta)));
    vlSelfRef.__PVT__ioX_allow_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_1)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_1)));
    vlSelfRef.__PVT__ioX_allow_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_2)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_2)));
    vlSelfRef.__PVT__ioX_allow_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_3)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_3)));
    vlSelfRef.__PVT__ioX_allow_4 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_4)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_4)));
    vlSelfRef.__PVT__rxInc_sink__DOT__ridx = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                              & ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx_ridx_bin) 
                                                 + (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__txInc_sink__DOT__ridx = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                              & ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx_ridx_bin) 
                                                 + (IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__f_valid = ((IData)(vlSelfRef.__PVT__allowReturn) 
                                & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0));
    __PVT___GEN_0 = (0x1ffffU & (__PVT___GEN | ((0x10000U 
                                                 & (vlSelfRef.__PVT__rx_a 
                                                    >> 3U)) 
                                                | (0xffffU 
                                                   & (__PVT___GEN 
                                                      >> 2U)))));
    __PVT___GEN_4 = (0x1ffffU & (__PVT___GEN_3 | ((0x10000U 
                                                   & (vlSelfRef.__PVT__rx_b 
                                                      >> 3U)) 
                                                  | (0xffffU 
                                                     & (__PVT___GEN_3 
                                                        >> 2U)))));
    __PVT___GEN_8 = (0x1ffffU & (__PVT___GEN_7 | ((0x10000U 
                                                   & (vlSelfRef.__PVT__rx_c 
                                                      >> 3U)) 
                                                  | (0xffffU 
                                                     & (__PVT___GEN_7 
                                                        >> 2U)))));
    __PVT___GEN_12 = (0x1ffffU & (__PVT___GEN_11 | 
                                  ((0x10000U & (vlSelfRef.__PVT__rx_d 
                                                >> 3U)) 
                                   | (0xffffU & (__PVT___GEN_11 
                                                 >> 2U)))));
    __PVT___GEN_16 = (0x1ffffU & (__PVT___GEN_15 | 
                                  ((0x10000U & (vlSelfRef.__PVT__rx_e 
                                                >> 3U)) 
                                   | (0xffffU & (__PVT___GEN_15 
                                                 >> 2U)))));
    vlSelfRef.__PVT__qa_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow));
    vlSelfRef.__PVT__qb_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_1));
    vlSelfRef.__PVT__qc_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_2));
    vlSelfRef.__PVT__qd_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_3));
    vlSelfRef.__PVT__qe_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_4));
    vlSelfRef.__PVT__rxInc_sink__DOT__valid = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                               & ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx) 
                                                  != (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelfRef.__PVT__txInc_sink__DOT__valid = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                               & ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx) 
                                                  != (IData)(vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelfRef.__PVT__requests = ((((IData)(vlSelfRef.__PVT__f_valid) 
                                   << 5U) | (((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                     << 2U) | (((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0))));
    __PVT___GEN_1 = (0x7fffU & (__PVT___GEN_0 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_a 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_0 
                                                          >> 4U))))));
    __PVT___GEN_5 = (0x7fffU & (__PVT___GEN_4 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_b 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN_3 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_4 
                                                          >> 4U))))));
    __PVT___GEN_9 = (0x7fffU & (__PVT___GEN_8 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_c 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN_7 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_8 
                                                          >> 4U))))));
    __PVT___GEN_13 = (0x7fffU & (__PVT___GEN_12 | (
                                                   (0x4000U 
                                                    & (vlSelfRef.__PVT__rx_d 
                                                       >> 5U)) 
                                                   | ((0x2000U 
                                                       & (__PVT___GEN_11 
                                                          >> 4U)) 
                                                      | (0x1fffU 
                                                         & (__PVT___GEN_12 
                                                            >> 4U))))));
    __PVT___GEN_17 = (0x7fffU & (__PVT___GEN_16 | (
                                                   (0x4000U 
                                                    & (vlSelfRef.__PVT__rx_e 
                                                       >> 5U)) 
                                                   | ((0x2000U 
                                                       & (__PVT___GEN_15 
                                                          >> 4U)) 
                                                      | (0x1fffU 
                                                         & (__PVT___GEN_16 
                                                            >> 4U))))));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__requests));
    __PVT___GEN_2 = (0x7ffU & ((IData)(__PVT___GEN_1) 
                               | ((0x400U & (vlSelfRef.__PVT__rx_a 
                                             >> 9U)) 
                                  | ((0x200U & (__PVT___GEN 
                                                >> 8U)) 
                                     | ((0x180U & (__PVT___GEN_0 
                                                   >> 8U)) 
                                        | (0x7fU & 
                                           ((IData)(__PVT___GEN_1) 
                                            >> 8U)))))));
    __PVT___GEN_6 = (0x7ffU & ((IData)(__PVT___GEN_5) 
                               | ((0x400U & (vlSelfRef.__PVT__rx_b 
                                             >> 9U)) 
                                  | ((0x200U & (__PVT___GEN_3 
                                                >> 8U)) 
                                     | ((0x180U & (__PVT___GEN_4 
                                                   >> 8U)) 
                                        | (0x7fU & 
                                           ((IData)(__PVT___GEN_5) 
                                            >> 8U)))))));
    __PVT___GEN_10 = (0x7ffU & ((IData)(__PVT___GEN_9) 
                                | ((0x400U & (vlSelfRef.__PVT__rx_c 
                                              >> 9U)) 
                                   | ((0x200U & (__PVT___GEN_7 
                                                 >> 8U)) 
                                      | ((0x180U & 
                                          (__PVT___GEN_8 
                                           >> 8U)) 
                                         | (0x7fU & 
                                            ((IData)(__PVT___GEN_9) 
                                             >> 8U)))))));
    __PVT___GEN_14 = (0x7ffU & ((IData)(__PVT___GEN_13) 
                                | ((0x400U & (vlSelfRef.__PVT__rx_d 
                                              >> 9U)) 
                                   | ((0x200U & (__PVT___GEN_11 
                                                 >> 8U)) 
                                      | ((0x180U & 
                                          (__PVT___GEN_12 
                                           >> 8U)) 
                                         | (0x7fU & 
                                            ((IData)(__PVT___GEN_13) 
                                             >> 8U)))))));
    __PVT___GEN_18 = (0x7ffU & ((IData)(__PVT___GEN_17) 
                                | ((0x400U & (vlSelfRef.__PVT__rx_e 
                                              >> 9U)) 
                                   | ((0x200U & (__PVT___GEN_15 
                                                 >> 8U)) 
                                      | ((0x180U & 
                                          (__PVT___GEN_16 
                                           >> 8U)) 
                                         | (0x7fU & 
                                            ((IData)(__PVT___GEN_17) 
                                             >> 8U)))))));
    __PVT___GEN_19 = (((0x3e0U & ((IData)(__PVT___readys_filter_T_1) 
                                  << 5U)) | ((((IData)(vlSelfRef.__PVT__f_valid) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                    << 2U))) 
                                             | (((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0)))) 
                      | (((IData)(__PVT___readys_filter_T_1) 
                          << 4U) | ((((IData)(vlSelfRef.__PVT__f_valid) 
                                      << 3U) | ((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                        << 1U) | (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0)))));
    vlSelfRef.__PVT__mask = (((0x40000U & (vlSelfRef.__PVT__rx_a 
                                           >> 1U)) 
                              | ((0x20000U & __PVT___GEN) 
                                 | ((0x18000U & __PVT___GEN_0) 
                                    | (0x7800U & (IData)(__PVT___GEN_1))))) 
                             | ((0x7f8U & (IData)(__PVT___GEN_2)) 
                                | (7U & ((IData)(__PVT___GEN_2) 
                                         | ((4U & (vlSelfRef.__PVT__rx_a 
                                                   >> 0x11U)) 
                                            | ((2U 
                                                & (__PVT___GEN 
                                                   >> 0x10U)) 
                                               | (1U 
                                                  & (__PVT___GEN_0 
                                                     >> 0x10U))))))));
    vlSelfRef.__PVT__mask_1 = (((0x40000U & (vlSelfRef.__PVT__rx_b 
                                             >> 1U)) 
                                | ((0x20000U & __PVT___GEN_3) 
                                   | ((0x18000U & __PVT___GEN_4) 
                                      | (0x7800U & (IData)(__PVT___GEN_5))))) 
                               | ((0x7f8U & (IData)(__PVT___GEN_6)) 
                                  | (7U & ((IData)(__PVT___GEN_6) 
                                           | ((4U & 
                                               (vlSelfRef.__PVT__rx_b 
                                                >> 0x11U)) 
                                              | ((2U 
                                                  & (__PVT___GEN_3 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (__PVT___GEN_4 
                                                       >> 0x10U))))))));
    vlSelfRef.__PVT__mask_2 = (((0x40000U & (vlSelfRef.__PVT__rx_c 
                                             >> 1U)) 
                                | ((0x20000U & __PVT___GEN_7) 
                                   | ((0x18000U & __PVT___GEN_8) 
                                      | (0x7800U & (IData)(__PVT___GEN_9))))) 
                               | ((0x7f8U & (IData)(__PVT___GEN_10)) 
                                  | (7U & ((IData)(__PVT___GEN_10) 
                                           | ((4U & 
                                               (vlSelfRef.__PVT__rx_c 
                                                >> 0x11U)) 
                                              | ((2U 
                                                  & (__PVT___GEN_7 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (__PVT___GEN_8 
                                                       >> 0x10U))))))));
    vlSelfRef.__PVT__mask_3 = (((0x40000U & (vlSelfRef.__PVT__rx_d 
                                             >> 1U)) 
                                | ((0x20000U & __PVT___GEN_11) 
                                   | ((0x18000U & __PVT___GEN_12) 
                                      | (0x7800U & (IData)(__PVT___GEN_13))))) 
                               | ((0x7f8U & (IData)(__PVT___GEN_14)) 
                                  | (7U & ((IData)(__PVT___GEN_14) 
                                           | ((4U & 
                                               (vlSelfRef.__PVT__rx_d 
                                                >> 0x11U)) 
                                              | ((2U 
                                                  & (__PVT___GEN_11 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (__PVT___GEN_12 
                                                       >> 0x10U))))))));
    vlSelfRef.__PVT__mask_4 = (((0x40000U & (vlSelfRef.__PVT__rx_e 
                                             >> 1U)) 
                                | ((0x20000U & __PVT___GEN_15) 
                                   | ((0x18000U & __PVT___GEN_16) 
                                      | (0x7800U & (IData)(__PVT___GEN_17))))) 
                               | ((0x7f8U & (IData)(__PVT___GEN_18)) 
                                  | (7U & ((IData)(__PVT___GEN_18) 
                                           | ((4U & 
                                               (vlSelfRef.__PVT__rx_e 
                                                >> 0x11U)) 
                                              | ((2U 
                                                  & (__PVT___GEN_15 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (__PVT___GEN_16 
                                                       >> 0x10U))))))));
    __PVT___GEN_20 = (0x1ffU & ((IData)(__PVT___GEN_19) 
                                | ((0x100U & ((IData)(__PVT___readys_filter_T_1) 
                                              << 3U)) 
                                   | (0xffU & ((IData)(__PVT___GEN_19) 
                                               >> 2U)))));
    vlSelfRef.__PVT__msbOH = (0xfffffU & (~ ((0x80000U 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__rx_a 
                                                   >> 0x13U)) 
                                                 << 0x13U)) 
                                             | (0x7ffffU 
                                                & ((~ vlSelfRef.__PVT__rx_a) 
                                                   | vlSelfRef.__PVT__mask)))));
    vlSelfRef.__PVT__msbOH_1 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_b 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_b) 
                                                     | vlSelfRef.__PVT__mask_1)))));
    vlSelfRef.__PVT__msbOH_2 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_c 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_c) 
                                                     | vlSelfRef.__PVT__mask_2)))));
    vlSelfRef.__PVT__msbOH_3 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_d 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_d) 
                                                     | vlSelfRef.__PVT__mask_3)))));
    vlSelfRef.__PVT__msbOH_4 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_e 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_e) 
                                                     | vlSelfRef.__PVT__mask_4)))));
    vlSelfRef.__PVT__readys_unready = (((0x400U & ((IData)(__PVT___readys_filter_T_1) 
                                                   << 5U)) 
                                        | ((0x200U 
                                            & (IData)(__PVT___GEN_19)) 
                                           | ((0x180U 
                                               & (IData)(__PVT___GEN_20)) 
                                              | (0x7fU 
                                                 & ((IData)(__PVT___GEN_20) 
                                                    | ((0x40U 
                                                        & ((IData)(__PVT___readys_filter_T_1) 
                                                           << 1U)) 
                                                       | ((0x20U 
                                                           & ((IData)(__PVT___GEN_19) 
                                                              >> 4U)) 
                                                          | (0x1fU 
                                                             & ((IData)(__PVT___GEN_20) 
                                                                >> 4U))))))))) 
                                       | ((IData)(vlSelfRef.__PVT__readys_mask) 
                                          << 6U));
    vlSelfRef.__PVT___msb_T_2 = (0x7fffU & ((0xfU & 
                                             (vlSelfRef.__PVT__msbOH 
                                              >> 0x10U)) 
                                            | vlSelfRef.__PVT__msbOH));
    vlSelfRef.__PVT___msb_T_15 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_1 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_1));
    vlSelfRef.__PVT___msb_T_28 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_2 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_2));
    vlSelfRef.__PVT___msb_T_41 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_3 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_3));
    vlSelfRef.__PVT___msb_T_54 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_4 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_4));
    vlSelfRef.__PVT___readys_readys_T_2 = (0x3fU & 
                                           (((IData)(vlSelfRef.__PVT__readys_unready) 
                                             >> 6U) 
                                            & (IData)(vlSelfRef.__PVT__readys_unready)));
    vlSelfRef.__PVT___msb_T_4 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_2) 
                                           >> 8U) | (IData)(vlSelfRef.__PVT___msb_T_2)));
    vlSelfRef.__PVT___msb_T_17 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_15) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_15)));
    vlSelfRef.__PVT___msb_T_30 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_28) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_28)));
    vlSelfRef.__PVT___msb_T_43 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_41) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_41)));
    vlSelfRef.__PVT___msb_T_56 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_54) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_54)));
    vlSelfRef.__PVT__winner = ((~ (IData)(vlSelfRef.__PVT___readys_readys_T_2)) 
                               & (IData)(vlSelfRef.__PVT__requests));
    if (vlSelfRef.__PVT__first) {
        vlSelfRef.__PVT__send = vlSelfRef.__PVT__rxQ__DOT__valid_0;
        vlSelfRef.__PVT__allowed = (0x3fU & (~ (IData)(vlSelfRef.__PVT___readys_readys_T_2)));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__winner;
    } else {
        vlSelfRef.__PVT__send = (0U != ((IData)(vlSelfRef.__PVT__state) 
                                        & (IData)(vlSelfRef.__PVT__requests)));
        vlSelfRef.__PVT__allowed = (0x3fU & (IData)(vlSelfRef.__PVT__state));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__state;
    }
    vlSelfRef.__PVT___msb_T_6 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_4) 
                                        >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_4)));
    vlSelfRef.__PVT___msb_T_19 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_17) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_17)));
    vlSelfRef.__PVT___msb_T_32 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_30) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_30)));
    vlSelfRef.__PVT___msb_T_45 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_43) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_43)));
    vlSelfRef.__PVT___msb_T_58 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_56) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_56)));
    vlSelfRef.__Vcellinp__rxQ__io_deq_ready = ((IData)(vlSelfRef.__PVT__allowReturn) 
                                               & ((IData)(vlSelfRef.__PVT__allowed) 
                                                  >> 5U));
    vlSelfRef.__Vcellinp__rxQ__io_enq_bits_data = (5U 
                                                   | (((((((0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelfRef.__PVT__msbOH_4 
                                                                >> 0xfU))) 
                                                           << 0x1fU) 
                                                          | ((0U 
                                                              != 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT___msb_T_54) 
                                                                  >> 7U))) 
                                                             << 0x1eU)) 
                                                         | (((0U 
                                                              != 
                                                              (0xfU 
                                                               & ((IData)(vlSelfRef.__PVT___msb_T_56) 
                                                                  >> 3U))) 
                                                             << 0x1dU) 
                                                            | ((0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT___msb_T_58) 
                                                                    >> 1U))) 
                                                               << 0x1cU))) 
                                                        | ((((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (5U 
                                                                       & (IData)(vlSelfRef.__PVT___msb_T_58)))) 
                                                             << 0x1bU) 
                                                            | ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelfRef.__PVT__msbOH_3 
                                                                    >> 0xfU))) 
                                                               << 0x1aU)) 
                                                           | (((0U 
                                                                != 
                                                                (0xffU 
                                                                 & ((IData)(vlSelfRef.__PVT___msb_T_41) 
                                                                    >> 7U))) 
                                                               << 0x19U) 
                                                              | ((0U 
                                                                  != 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelfRef.__PVT___msb_T_43) 
                                                                      >> 3U))) 
                                                                 << 0x18U)))) 
                                                       | (((((0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT___msb_T_45) 
                                                                  >> 1U))) 
                                                             << 0x17U) 
                                                            | ((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (5U 
                                                                         & (IData)(vlSelfRef.__PVT___msb_T_45)))) 
                                                               << 0x16U)) 
                                                           | (((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelfRef.__PVT__msbOH_2 
                                                                    >> 0xfU))) 
                                                               << 0x15U) 
                                                              | ((0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelfRef.__PVT___msb_T_28) 
                                                                      >> 7U))) 
                                                                 << 0x14U))) 
                                                          | ((((0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelfRef.__PVT___msb_T_30) 
                                                                    >> 3U))) 
                                                               << 0x13U) 
                                                              | ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__PVT___msb_T_32) 
                                                                      >> 1U))) 
                                                                 << 0x12U)) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (5U 
                                                                           & (IData)(vlSelfRef.__PVT___msb_T_32)))) 
                                                                 << 0x11U) 
                                                                | ((0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.__PVT__msbOH_1 
                                                                        >> 0xfU))) 
                                                                   << 0x10U))))) 
                                                      | ((((((0U 
                                                              != 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT___msb_T_15) 
                                                                  >> 7U))) 
                                                             << 0xfU) 
                                                            | ((0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelfRef.__PVT___msb_T_17) 
                                                                    >> 3U))) 
                                                               << 0xeU)) 
                                                           | (((0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT___msb_T_19) 
                                                                    >> 1U))) 
                                                               << 0xdU) 
                                                              | ((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (5U 
                                                                           & (IData)(vlSelfRef.__PVT___msb_T_19)))) 
                                                                 << 0xcU))) 
                                                          | ((((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelfRef.__PVT__msbOH 
                                                                    >> 0xfU))) 
                                                               << 0xbU) 
                                                              | ((0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelfRef.__PVT___msb_T_2) 
                                                                      >> 7U))) 
                                                                 << 0xaU)) 
                                                             | (((0U 
                                                                  != 
                                                                  (0xfU 
                                                                   & ((IData)(vlSelfRef.__PVT___msb_T_4) 
                                                                      >> 3U))) 
                                                                 << 9U) 
                                                                | ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((IData)(vlSelfRef.__PVT___msb_T_6) 
                                                                        >> 1U))) 
                                                                   << 8U)))) 
                                                         | ((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (5U 
                                                                      & (IData)(vlSelfRef.__PVT___msb_T_6)))) 
                                                            << 7U))));
}

VL_ATTR_COLD void VysyxSoCFull_TX___ctor_var_reset(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_c2b_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13764895358717651429ull);
    vlSelf->io_c2b_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14555432393093771289ull);
    vlSelf->io_c2b_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12396394554402573519ull);
    vlSelf->io_c2b_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6069836192703041667ull);
    vlSelf->io_sa_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594224337924209145ull);
    vlSelf->io_sa_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14533022586158539015ull);
    vlSelf->io_sa_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5233829781614890892ull);
    vlSelf->io_sa_bits_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10756396311870995690ull);
    vlSelf->io_sa_bits_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15182976494007690341ull);
    vlSelf->io_sb_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7783281840407972185ull);
    vlSelf->io_sb_bits_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2388818339031280716ull);
    vlSelf->io_sc_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16978050566146416405ull);
    vlSelf->io_sc_bits_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 325551984415087695ull);
    vlSelf->io_sd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13705854933119262021ull);
    vlSelf->io_sd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218082914415141288ull);
    vlSelf->io_sd_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 991650716666110877ull);
    vlSelf->io_sd_bits_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16376643299884624281ull);
    vlSelf->io_sd_bits_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1495650560171879685ull);
    vlSelf->io_se_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14206094813061369913ull);
    vlSelf->io_rxc_mem_0_a = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11528902597153954005ull);
    vlSelf->io_rxc_mem_0_b = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5989906141580261729ull);
    vlSelf->io_rxc_mem_0_c = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10453730755467086675ull);
    vlSelf->io_rxc_mem_0_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4914734299893328135ull);
    vlSelf->io_rxc_mem_0_e = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7170579776921854065ull);
    vlSelf->io_rxc_ridx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5300061187051187991ull);
    vlSelf->io_rxc_widx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4061661909889269172ull);
    vlSelf->io_rxc_safe_ridx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14659927042801348117ull);
    vlSelf->io_rxc_safe_widx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592845821834683074ull);
    vlSelf->io_rxc_safe_source_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17923249392440836566ull);
    vlSelf->io_rxc_safe_sink_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12093113581793809849ull);
    vlSelf->io_txc_mem_0_a = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11293603696840117476ull);
    vlSelf->io_txc_mem_0_b = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3604337659444522706ull);
    vlSelf->io_txc_mem_0_c = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6335924010588923996ull);
    vlSelf->io_txc_mem_0_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13171632310564773848ull);
    vlSelf->io_txc_mem_0_e = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12073684967704194377ull);
    vlSelf->io_txc_ridx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17725249168029961926ull);
    vlSelf->io_txc_widx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9703713124667896849ull);
    vlSelf->io_txc_safe_ridx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8409249668182851018ull);
    vlSelf->io_txc_safe_widx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14058385398932158675ull);
    vlSelf->io_txc_safe_source_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4640560649738216232ull);
    vlSelf->io_txc_safe_sink_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7617395614173277752ull);
    vlSelf->__PVT__f_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10506264784915274336ull);
    vlSelf->__PVT__rx_a = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5052600430285204361ull);
    vlSelf->__PVT__rx_b = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13951855530867903219ull);
    vlSelf->__PVT__rx_c = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1282860366767601917ull);
    vlSelf->__PVT__rx_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7789133993535042210ull);
    vlSelf->__PVT__rx_e = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9992854066449161264ull);
    vlSelf->__PVT__tx_a = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17933557314456686601ull);
    vlSelf->__PVT__tx_b = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12418769044834420736ull);
    vlSelf->__PVT__tx_c = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11475573936404001818ull);
    vlSelf->__PVT__tx_d = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17475432041916471519ull);
    vlSelf->__PVT__tx_e = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3367976317874764999ull);
    vlSelf->__PVT__ioX_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17265768939701077093ull);
    vlSelf->__PVT__ioX_delta = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 4173227801612930946ull);
    vlSelf->__PVT__ioX_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 358578490462254862ull);
    vlSelf->__PVT__qa_q_io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14638909486851661823ull);
    vlSelf->__PVT__ioX_first_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9319680468517899424ull);
    vlSelf->__PVT__ioX_delta_1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 6383034060355767599ull);
    vlSelf->__PVT__ioX_allow_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16778931295037085872ull);
    vlSelf->__PVT__qb_q_io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7425743019337685254ull);
    vlSelf->__PVT__ioX_first_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3642595374875956106ull);
    vlSelf->__PVT__ioX_delta_2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 10568142419468455125ull);
    vlSelf->__PVT__ioX_allow_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18152791371422302438ull);
    vlSelf->__PVT__qc_q_io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5848392781465256660ull);
    vlSelf->__PVT__ioX_first_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15306150877490131058ull);
    vlSelf->__PVT__ioX_delta_3 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 1962387883049149028ull);
    vlSelf->__PVT__ioX_allow_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15156363734196198904ull);
    vlSelf->__PVT__qd_q_io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14459871682733391102ull);
    vlSelf->__PVT__ioX_first_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14215023214905997ull);
    vlSelf->__PVT__ioX_delta_4 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 14532107008204815990ull);
    vlSelf->__PVT__ioX_allow_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3799389948383130550ull);
    vlSelf->__PVT__qe_q_io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11820217985483866433ull);
    vlSelf->__PVT__mask = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 13980441125567301684ull);
    vlSelf->__PVT__msbOH = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5722208391955809522ull);
    vlSelf->__PVT___msb_T_2 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 199343033209143214ull);
    vlSelf->__PVT___msb_T_4 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14036929691910074150ull);
    vlSelf->__PVT___msb_T_6 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11782350623160189799ull);
    vlSelf->__PVT__mask_1 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 9557015162315851769ull);
    vlSelf->__PVT__msbOH_1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1311341774984102645ull);
    vlSelf->__PVT___msb_T_15 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3983718106651383476ull);
    vlSelf->__PVT___msb_T_17 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 167299855715204835ull);
    vlSelf->__PVT___msb_T_19 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3702565650155981780ull);
    vlSelf->__PVT__mask_2 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 12429115242772914260ull);
    vlSelf->__PVT__msbOH_2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3280341524613251410ull);
    vlSelf->__PVT___msb_T_28 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2308584751766622625ull);
    vlSelf->__PVT___msb_T_30 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12418865893704093696ull);
    vlSelf->__PVT___msb_T_32 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6040083862037756748ull);
    vlSelf->__PVT__mask_3 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 15160701593917247894ull);
    vlSelf->__PVT__msbOH_3 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7981370352607302011ull);
    vlSelf->__PVT___msb_T_41 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4032120929398108891ull);
    vlSelf->__PVT___msb_T_43 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6313540028171059943ull);
    vlSelf->__PVT___msb_T_45 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16491154598805199748ull);
    vlSelf->__PVT__mask_4 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4672293223726234131ull);
    vlSelf->__PVT__msbOH_4 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2300491100955748579ull);
    vlSelf->__PVT___msb_T_54 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12077292624379925533ull);
    vlSelf->__PVT___msb_T_56 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2677828257203089724ull);
    vlSelf->__PVT___msb_T_58 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8008271797041400616ull);
    vlSelf->__PVT__requests = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2409807035581595736ull);
    vlSelf->__PVT__xmit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12723179788594484732ull);
    vlSelf->__PVT__allowReturn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13575088452762289173ull);
    vlSelf->__PVT__first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784441483386310355ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__readys_mask = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16685753292686603104ull);
    vlSelf->__PVT__readys_unready = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3154445831125181429ull);
    vlSelf->__PVT___readys_readys_T_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9425387409702764368ull);
    vlSelf->__PVT__winner = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8465175376109391838ull);
    vlSelf->__PVT__grant = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 741988092961692266ull);
    vlSelf->__PVT__allowed = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 919145440768944202ull);
    vlSelf->__PVT__send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8051052176423456702ull);
    vlSelf->__PVT__io_c2b_send_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9475333507403790320ull);
    vlSelf->__PVT__io_c2b_send_REG_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1944867467252139671ull);
    vlSelf->__PVT__io_c2b_data_REG = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8283189053623114999ull);
    vlSelf->__PVT__io_c2b_data_REG_1_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5458428872308109571ull);
    vlSelf->__PVT__io_c2b_data_REG_1_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6521312644651524304ull);
    vlSelf->__PVT__io_c2b_data_REG_1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6586490312890935858ull);
    vlSelf->__PVT__io_c2b_data_REG_1_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16475352944001474690ull);
    vlSelf->__PVT__io_c2b_data_REG_1_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3236784822992366746ull);
    vlSelf->__PVT__io_c2b_data_REG_1_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6879101383372607991ull);
    vlSelf->__PVT__io_c2b_data_REG_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15639909867616520984ull);
    vlSelf->__Vcellinp__rxQ__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18051618889051687303ull);
    vlSelf->__Vcellinp__rxQ__io_enq_bits_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11357593459893233075ull);
    vlSelf->__PVT__unnamedblk1__DOT___ioX_tx_a_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4328507664748767519ull);
    vlSelf->__PVT__unnamedblk1__DOT___ioX_tx_bT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12325269392301520831ull);
    vlSelf->__PVT__unnamedblk1__DOT___ioX_tx_c_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3444977349475012605ull);
    vlSelf->__PVT__unnamedblk1__DOT___ioX_tx_d_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11172776906751819916ull);
    vlSelf->__PVT__unnamedblk1__DOT___ioX_tx_e_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8167817429294292600ull);
    vlSelf->__PVT__unnamedblk1__DOT__rx_z = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 8166084141472156724ull);
    vlSelf->__PVT__unnamedblk1__DOT__rx_z_1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 3999238471849278609ull);
    vlSelf->__PVT__unnamedblk1__DOT__rx_z_2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2459894269876395664ull);
    vlSelf->__PVT__unnamedblk1__DOT__rx_z_3 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 3362724173429064334ull);
    vlSelf->__PVT__unnamedblk1__DOT__rx_z_4 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 16604162223907620310ull);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9060222114578333884ull);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4289515081751204004ull);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1720375855344432717ull);
    vlSelf->__PVT__rxInc_sink__DOT__io_deq_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2946650046126669228ull);
    vlSelf->__PVT__rxInc_sink__DOT__ridx_ridx_bin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11972032954266829359ull);
    vlSelf->__PVT__rxInc_sink__DOT__ridx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4148498838577891438ull);
    vlSelf->__PVT__rxInc_sink__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1649118357357888779ull);
    vlSelf->__PVT__rxInc_sink__DOT__valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128755741040841277ull);
    vlSelf->__PVT__rxInc_sink__DOT__ridx_gray = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9622976825058680604ull);
    vlSelf->__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 444142615235465030ull);
    vlSelf->__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16168148825320421960ull);
    vlSelf->__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 534322661810121513ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg, __VscopeHash, 14110115751449834625ull);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6866309287784534116ull);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11145607005152891790ull);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10195121645513086563ull);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8087261087550004417ull);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6782063711413016055ull);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14291041843504522245ull);
    vlSelf->__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15022717087069927036ull);
    vlSelf->__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8936093049040595529ull);
    vlSelf->__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6235138193733056579ull);
    vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6619953132475298544ull);
    vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5096322028825698281ull);
    vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12941635403955588502ull);
    vlSelf->__PVT__txInc_sink__DOT__io_deq_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14321016959297247578ull);
    vlSelf->__PVT__txInc_sink__DOT__ridx_ridx_bin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15135954064835626828ull);
    vlSelf->__PVT__txInc_sink__DOT__ridx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5918999710181406873ull);
    vlSelf->__PVT__txInc_sink__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8745560887158242416ull);
    vlSelf->__PVT__txInc_sink__DOT__valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11877210262539502296ull);
    vlSelf->__PVT__txInc_sink__DOT__ridx_gray = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13812650109307048352ull);
    vlSelf->__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12901422487091516041ull);
    vlSelf->__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6974519249572950303ull);
    vlSelf->__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16969504526451867768ull);
    VL_SCOPED_RAND_RESET_W(100, vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg, __VscopeHash, 8606087084636718437ull);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4344764204558133461ull);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1243050482595284686ull);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16646982883821368778ull);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12973233561854326908ull);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5136976015097433295ull);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11999810517104062394ull);
    vlSelf->__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1766505513843689191ull);
    vlSelf->__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11396766163654797815ull);
    vlSelf->__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17554429952635117632ull);
    vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5773309426374740129ull);
    vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12503620650347290923ull);
    vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13935324641787366172ull);
    vlSelf->__PVT__qa_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5281931582979513913ull);
    vlSelf->__PVT__qa_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302063771614383015ull);
    vlSelf->__PVT__qa_q__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11385842196931281234ull);
    vlSelf->__PVT__qa_q__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13302307205009340126ull);
    vlSelf->__PVT__qa_q__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3358756122673157375ull);
    vlSelf->__PVT__qa_q__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14474816750725496128ull);
    vlSelf->__PVT__qa_q__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6108108006494363343ull);
    vlSelf->__PVT__qa_q__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1873254533904663896ull);
    vlSelf->__PVT__qb_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4500773209772740238ull);
    vlSelf->__PVT__qb_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8421252726499703028ull);
    vlSelf->__PVT__qb_q__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15583085773330032235ull);
    vlSelf->__PVT__qb_q__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11515458207856362141ull);
    vlSelf->__PVT__qb_q__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11515359842100495866ull);
    vlSelf->__PVT__qb_q__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4856854653403193830ull);
    vlSelf->__PVT__qb_q__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12639324502594277878ull);
    vlSelf->__PVT__qb_q__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10522697948884894895ull);
    vlSelf->__PVT__qc_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13084221548079690028ull);
    vlSelf->__PVT__qc_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7106592056183576579ull);
    vlSelf->__PVT__qc_q__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12587768424781170950ull);
    vlSelf->__PVT__qc_q__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1231828403929007601ull);
    vlSelf->__PVT__qc_q__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11766983137346797766ull);
    vlSelf->__PVT__qc_q__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 275107390425850900ull);
    vlSelf->__PVT__qc_q__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12150773441042727262ull);
    vlSelf->__PVT__qc_q__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4862117878715214662ull);
    vlSelf->__PVT__qd_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1878159832774167322ull);
    vlSelf->__PVT__qd_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16267766280845231910ull);
    vlSelf->__PVT__qd_q__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 797589880074773644ull);
    vlSelf->__PVT__qd_q__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4846477866798351956ull);
    vlSelf->__PVT__qd_q__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14689768634467761189ull);
    vlSelf->__PVT__qd_q__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10880314028091772701ull);
    vlSelf->__PVT__qd_q__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12217792491624589604ull);
    vlSelf->__PVT__qd_q__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1000310069876509063ull);
    vlSelf->__PVT__qe_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3328993431714750462ull);
    vlSelf->__PVT__qe_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5369587105327150471ull);
    vlSelf->__PVT__qe_q__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8510936650605989513ull);
    vlSelf->__PVT__qe_q__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14157215576187117586ull);
    vlSelf->__PVT__qe_q__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8329751637585194652ull);
    vlSelf->__PVT__qe_q__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16738801130400738270ull);
    vlSelf->__PVT__qe_q__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 247619810789636468ull);
    vlSelf->__PVT__qe_q__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11865042183365100614ull);
    vlSelf->__PVT__ioX_cq__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2200387174966771097ull);
    vlSelf->__PVT__ioX_cq__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6843950359164098567ull);
    vlSelf->__PVT__ioX_cq__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13329828150197545505ull);
    vlSelf->__PVT__ioX_cq__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7817903094080422921ull);
    vlSelf->__PVT__ioX_cq__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8503998059257881803ull);
    vlSelf->__PVT__ioX_cq__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17959609273029384288ull);
    vlSelf->__PVT__ioX_cq__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5372918415986247165ull);
    vlSelf->__PVT__ioX_cq__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10238254051892537403ull);
    vlSelf->__PVT__ioX_cq_1__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15349396824197661199ull);
    vlSelf->__PVT__ioX_cq_1__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5691354812683499281ull);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10970397022831320321ull);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7133592302385503878ull);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14776929427229289039ull);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14739998594132130618ull);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7654512674280332995ull);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11568032771626353074ull);
    vlSelf->__PVT__ioX_cq_2__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3784187878096916590ull);
    vlSelf->__PVT__ioX_cq_2__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17827658268766475840ull);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9282482735054993134ull);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12151445912095899796ull);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15279316762252968004ull);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13542935820857312648ull);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3137085209250083729ull);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11322776086752728649ull);
    vlSelf->__PVT__ioX_cq_3__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8096320761605552461ull);
    vlSelf->__PVT__ioX_cq_3__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9649001303195516799ull);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11813640890810351742ull);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1038824740535158189ull);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9533811528335476859ull);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9795086146067361691ull);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1907602655006606991ull);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 571583588379760154ull);
    vlSelf->__PVT__ioX_cq_4__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7879821736349471024ull);
    vlSelf->__PVT__ioX_cq_4__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13420774713227520783ull);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11429211723283580600ull);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12145170716183630257ull);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16310592396556055521ull);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14854138254638861028ull);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2867620895185464807ull);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11428585888551177014ull);
    vlSelf->__PVT__rxQ__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15070441492702222080ull);
    vlSelf->__PVT__rxQ__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12298419863814440271ull);
    vlSelf->__PVT__rxQ__DOT__elts_0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2084202033310427676ull);
    vlSelf->__PVT__rxQ__DOT__elts_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2672729756890088780ull);
    vlSelf->__PVT__rxQ__DOT__elts_0_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9413726974311955221ull);
    vlSelf->__PVT__rxQ__DOT__elts_1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15518219983552932701ull);
    vlSelf->__PVT__rxQ__DOT__elts_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5813329880120440413ull);
    vlSelf->__PVT__rxQ__DOT__elts_1_beats = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17305052599453421920ull);
    vlSelf->__PVT__io_c2b_rst_reg__DOT__reg_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4650938792468174239ull);
    vlSelf->__Vdly__qa_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9008406645636651291ull);
    vlSelf->__Vdly__qa_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16960845717223438137ull);
    vlSelf->__Vdly__qb_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5014767642085697708ull);
    vlSelf->__Vdly__qb_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8191738714361149545ull);
    vlSelf->__Vdly__qc_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800927138651565463ull);
    vlSelf->__Vdly__qc_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14949594182565390377ull);
    vlSelf->__Vdly__qd_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4912953975040093521ull);
    vlSelf->__Vdly__qd_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402732757062662353ull);
    vlSelf->__Vdly__qe_q__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 47057680582560185ull);
    vlSelf->__Vdly__qe_q__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5174983165338187181ull);
    vlSelf->__Vdly__ioX_cq__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17852276162761947411ull);
    vlSelf->__Vdly__ioX_cq__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4370296356631405059ull);
    vlSelf->__Vdly__ioX_cq_1__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7663106498891102141ull);
    vlSelf->__Vdly__ioX_cq_1__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10760192864071231182ull);
    vlSelf->__Vdly__ioX_cq_2__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7211908280167719275ull);
    vlSelf->__Vdly__ioX_cq_2__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 819104259244359121ull);
    vlSelf->__Vdly__ioX_cq_3__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14990774681421405595ull);
    vlSelf->__Vdly__ioX_cq_3__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12199852554441016390ull);
    vlSelf->__Vdly__ioX_cq_4__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6721792608153569557ull);
    vlSelf->__Vdly__ioX_cq_4__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2102588254823523546ull);
    vlSelf->__Vdly__rxQ__DOT__valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2707308260062961586ull);
    vlSelf->__Vdly__rxQ__DOT__valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5208581702544144690ull);
}
