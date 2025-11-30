// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSink_UInt32.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__3(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__4(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_gray = ((IData)(vlSymsp->TOP.reset)
                                   ? 0U : (IData)(vlSelfRef.__PVT__ridx));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
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

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_ready_0) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready_0) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
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

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8)))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__3(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_deq_ready = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                                    | ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
                                       & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0))));
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSelfRef.io_deq_ready) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
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

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_ready_0) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_deq_ready = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
                                    | ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
                                       & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__3(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0) 
                                                 & (IData)(vlSelfRef.io_deq_valid))))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
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

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__valid) {
        __Vtemp_6[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0;
        __Vtemp_6[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1;
        __Vtemp_6[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2;
        __Vtemp_6[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3;
        __Vtemp_6[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4;
        __Vtemp_6[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))) 
                                 >> 0x20U));
        vlSelfRef.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                               ^ (4U 
                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                     >> 1U))), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelfRef.__PVT___index_T) 
                                                               ^ 
                                                               (4U 
                                                                & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                   >> 1U))), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelfRef.__PVT___index_T) 
                                                                    ^ 
                                                                    (4U 
                                                                     & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                        >> 1U))), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelfRef.__PVT___index_T) 
                                                  ^ 
                                                  (4U 
                                                   & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                      >> 1U))), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelfRef.__PVT___index_T) 
                                                                 ^ 
                                                                 (4U 
                                                                  & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                                                     >> 1U))), 5U))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                       ? 0U : (IData)(vlSelfRef.__PVT__ridx_incremented));
    vlSelfRef.__PVT__valid_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT__valid));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 3U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx_incremented = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                          ? (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__ridx_ridx_bin) 
                                              + (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8)))
                                          : 0U);
    vlSelfRef.__PVT___index_T = (7U & ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                       ^ ((IData)(vlSelfRef.__PVT__ridx_incremented) 
                                          >> 1U)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__2(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}
