// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSource_UInt32.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__full));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__index = (7U 
                                                & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                   ^ 
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__PVT__widx_gray) 
                                                       >> 1U))));
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (0U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (1U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (2U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (3U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (4U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (5U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (6U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
    if (((IData)(vlSelfRef.__PVT___widx_T_1) & (7U 
                                                == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__index)))) {
        vlSelfRef.__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram;
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__1(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__widx_widx_bin;
    __Vdly__widx_widx_bin = 0;
    // Body
    __Vdly__widx_widx_bin = vlSelfRef.__PVT__widx_widx_bin;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented 
            = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (0xfU & ((IData)(vlSelfRef.__PVT__widx_widx_bin) 
                           + (IData)(vlSelfRef.__PVT___widx_T_1)))
                : 0U);
        vlSelfRef.__PVT__unnamedblk2__DOT__widx = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented)) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented) 
                                                          >> 1U))));
        __Vdly__widx_widx_bin = vlSelfRef.__PVT__unnamedblk2__DOT__widx_incremented;
        vlSelfRef.__PVT__ready_reg = ((IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__widx) 
                                         != (0xcU ^ 
                                             ((((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
        vlSelfRef.__PVT__widx_gray = vlSelfRef.__PVT__unnamedblk2__DOT__widx;
    }
    vlSelfRef.__PVT__widx_widx_bin = __Vdly__widx_widx_bin;
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                     >> 3U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                     >> 2U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                     >> 1U)));
    vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray)));
    vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__2(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__full));
}
