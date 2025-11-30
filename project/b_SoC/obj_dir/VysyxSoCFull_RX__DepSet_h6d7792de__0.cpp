// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSource_UInt32.h"
#include "VysyxSoCFull_RX.h"

VL_INLINE_OPT void VysyxSoCFull_RX___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__0(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready)));
    vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready)));
    vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready)));
    vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready)));
    vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready)));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_flow = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty) 
                                                   & (IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ren = ((IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                               & ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__full) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty))) 
                                                     | (0U 
                                                        != 
                                                        (0xfU 
                                                         & (((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                                                             - (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)) 
                                                            >> 1U))))));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_flow = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty) 
                                                   & (IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ren = ((IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                               & ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__full) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty))) 
                                                     | (0U 
                                                        != 
                                                        (0xfU 
                                                         & (((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                                                             - (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)) 
                                                            >> 1U))))));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_flow = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty) 
                                                   & (IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ren = ((IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                               & ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__full) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty))) 
                                                     | (0U 
                                                        != 
                                                        (0xfU 
                                                         & (((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                                                             - (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)) 
                                                            >> 1U))))));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_flow = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty) 
                                                   & (IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ren = ((IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                               & ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__full) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty))) 
                                                     | (0U 
                                                        != 
                                                        (0xfU 
                                                         & (((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                                                             - (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)) 
                                                            >> 1U))))));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_flow = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty) 
                                                   & (IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ren = ((IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                               & ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__full) 
                                                  | ((~ 
                                                      ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty))) 
                                                     | (0U 
                                                        != 
                                                        (0xfU 
                                                         & (((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                                                             - (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)) 
                                                            >> 1U))))));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq = ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__full)) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqa_io_enq_valid)));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq = ((IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq = ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__full)) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqb_io_enq_valid)));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq = ((IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq = ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__full)) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqc_io_enq_valid)));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq = ((IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq = ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__full)) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqd_io_enq_valid)));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq = ((IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq = ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__full)) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqe_io_enq_valid)));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq = ((IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_flow)) 
                                                     & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0)));
}
