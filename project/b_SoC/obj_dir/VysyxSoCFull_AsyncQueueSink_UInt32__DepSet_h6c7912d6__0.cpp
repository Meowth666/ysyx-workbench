// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSink_UInt32.h"

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx = ((8U & (IData)(vlSelfRef.__PVT__ridx_incremented)) 
                             | (IData)(vlSelfRef.__PVT___index_T));
    vlSelfRef.__PVT__valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlSelfRef.__PVT__ridx) 
                                 != ((((IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                       << 3U) | ((IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSelfRef.io_deq_ready) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
}
