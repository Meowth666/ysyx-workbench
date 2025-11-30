// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_RX.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_RX___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__PVT__io_txc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__widx_gray = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__widx_gray = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    if (vlSelfRef.io_rxc_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_RX___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__0(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__first = (0U == (IData)(vlSelfRef.__PVT__first_count));
    vlSelfRef.io_rxc_source__DOT____Vcellinp__sink_extend__reset 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    vlSelfRef.__PVT__io_txc_source__DOT__io_enq_ready_0 
        = ((IData)(vlSelfRef.__PVT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__io_rxc_source__DOT__io_enq_ready_0 
        = ((IData)(vlSelfRef.__PVT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__formatValid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                    & (0U == (IData)(vlSelfRef.__PVT__first_count)));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match));
    vlSelfRef.__VdfgRegularize_h55037780_0_0 = (7U 
                                                & ((IData)(vlSelfRef.__PVT__formatValid)
                                                    ? vlSelfRef.__PVT__b2c_data
                                                    : (IData)(vlSelfRef.__PVT__format_r)));
    vlSelfRef.__PVT__hqa_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & ((IData)(1U) 
                                            << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)));
    vlSelfRef.__PVT__hqb_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 1U));
    vlSelfRef.__PVT__hqc_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 2U));
    vlSelfRef.__PVT__hqd_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 3U));
    vlSelfRef.__PVT__hqe_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 4U));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqa_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqb_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqc_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqd_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqe_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_out_valid));
}

VL_ATTR_COLD void VysyxSoCFull_RX___eval_initial__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___eval_initial__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__PVT__io_txc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__widx_gray = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ready_reg = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__widx_gray = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    if (vlSelfRef.io_rxc_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_RX___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__0(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__first = (0U == (IData)(vlSelfRef.__PVT__first_count));
    vlSelfRef.io_rxc_source__DOT____Vcellinp__sink_extend__reset 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    vlSelfRef.__PVT__io_txc_source__DOT__io_enq_ready_0 
        = ((IData)(vlSelfRef.__PVT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__io_rxc_source__DOT__io_enq_ready_0 
        = ((IData)(vlSelfRef.__PVT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelfRef.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__formatValid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                    & (0U == (IData)(vlSelfRef.__PVT__first_count)));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match));
    vlSelfRef.__VdfgRegularize_h55037780_0_0 = (7U 
                                                & ((IData)(vlSelfRef.__PVT__formatValid)
                                                    ? vlSelfRef.__PVT__b2c_data
                                                    : (IData)(vlSelfRef.__PVT__format_r)));
    vlSelfRef.__PVT__hqa_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & ((IData)(1U) 
                                            << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)));
    vlSelfRef.__PVT__hqb_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 1U));
    vlSelfRef.__PVT__hqc_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 2U));
    vlSelfRef.__PVT__hqd_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 3U));
    vlSelfRef.__PVT__hqe_io_enq_valid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                                            >> 4U));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqa_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqb_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqc_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqd_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__hqe_io_enq_valid)
            : (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_out_valid));
}
