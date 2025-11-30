// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSource_UInt32.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__PVT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    if (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___eval_initial__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___eval_initial__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__PVT__widx_widx_bin = 0U;
        vlSelfRef.__PVT__ready_reg = 0U;
        vlSelfRef.__PVT__widx_gray = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    if (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelfRef.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__full));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__0(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_enq_ready = ((IData)(vlSelfRef.__PVT__ready_reg) 
                                     & (IData)(vlSelfRef.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT___widx_T_1 = ((IData)(vlSelfRef.__PVT__io_enq_ready) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__full));
}
