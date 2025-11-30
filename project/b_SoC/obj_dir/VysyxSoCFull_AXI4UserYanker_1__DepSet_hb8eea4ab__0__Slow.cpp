// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AXI4UserYanker_1.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_AXI4UserYanker_1___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__0(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full) {
        vlSelfRef.auto_in_awqos = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram[0U] 
                                           >> 0xcU));
        vlSelfRef.auto_in_awprot = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram[0U] 
                                          >> 0x10U));
        vlSelfRef.auto_in_awcache = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram[0U] 
                                             >> 0x13U));
        vlSelfRef.auto_in_awburst = (3U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram[0U] 
                                           >> 0x18U));
        vlSelfRef.auto_in_awlock = (1U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram[0U] 
                                          >> 0x17U));
    } else {
        vlSelfRef.auto_in_awqos = 0U;
        vlSelfRef.auto_in_awprot = 1U;
        vlSelfRef.auto_in_awcache = 0U;
        vlSelfRef.auto_in_awburst = 1U;
        vlSelfRef.auto_in_awlock = 0U;
    }
    vlSelfRef.auto_in_rlast = (1U & ((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                              [vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                              >> 1U)) 
                                     & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                               [vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1])));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value));
    vlSelfRef.auto_in_rresp = (3U & (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                             [vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                             >> 2U)));
    vlSelfRef.auto_in_rid = (0xfU & (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                             [vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                             >> 0x24U)));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.auto_in_bid = (0xfU & (vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                     [vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                     >> 3U));
    vlSelfRef.auto_in_bvalid = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4buf_auto_in_becho_real_last));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__full = 
        ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match) 
         & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full));
}
