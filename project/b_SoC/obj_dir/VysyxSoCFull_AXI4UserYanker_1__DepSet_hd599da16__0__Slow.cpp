// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AXI4UserYanker_1.h"

VL_ATTR_COLD void VysyxSoCFull_AXI4UserYanker_1___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___eval_initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq = 0U;
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq = 0U;
}

VL_ATTR_COLD void VysyxSoCFull_AXI4UserYanker_1___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__0(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__full = 
        ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match) 
         & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match));
}

VL_ATTR_COLD void VysyxSoCFull_AXI4UserYanker_1___ctor_var_reset(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->auto_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13215858840451109300ull);
    vlSelf->auto_in_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9176855788709790237ull);
    vlSelf->auto_in_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7516599203430087276ull);
    vlSelf->auto_in_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7003673864945561369ull);
    vlSelf->auto_in_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13296948089738055172ull);
    vlSelf->auto_in_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15793790785235368928ull);
    vlSelf->auto_in_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12726784593344531711ull);
    vlSelf->auto_in_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6458152924223285448ull);
    vlSelf->auto_in_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6493344670366888733ull);
    vlSelf->auto_in_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17068534674529003051ull);
    vlSelf->auto_in_awqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15887155300571661274ull);
    vlSelf->auto_in_awecho_tl_state_size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6708574029945782209ull);
    vlSelf->auto_in_awecho_tl_state_source = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 276073867915507092ull);
    vlSelf->auto_in_awecho_extra_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4494036321066261746ull);
    vlSelf->auto_in_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8420209346593268191ull);
    vlSelf->auto_in_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11099926429497373821ull);
    vlSelf->auto_in_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7136054980340920590ull);
    vlSelf->auto_in_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9908884342745776659ull);
    vlSelf->auto_in_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4741831192862506633ull);
    vlSelf->auto_in_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 280459765528648762ull);
    vlSelf->auto_in_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5295483927866091178ull);
    vlSelf->auto_in_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4586561698293002083ull);
    vlSelf->auto_in_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17285283792831475653ull);
    vlSelf->auto_in_becho_tl_state_size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6479339342489805341ull);
    vlSelf->auto_in_becho_tl_state_source = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4691796485631178390ull);
    vlSelf->auto_in_becho_extra_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4381770815031375786ull);
    vlSelf->auto_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12917031138231482946ull);
    vlSelf->auto_in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13011022393166944598ull);
    vlSelf->auto_in_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3657750868204606605ull);
    vlSelf->auto_in_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5829570316126378596ull);
    vlSelf->auto_in_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6032429451730560069ull);
    vlSelf->auto_in_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1202254305079220919ull);
    vlSelf->auto_in_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6465010521688537368ull);
    vlSelf->auto_in_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13165826532917115727ull);
    vlSelf->auto_in_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10748475709087496870ull);
    vlSelf->auto_in_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12481232511948917319ull);
    vlSelf->auto_in_arqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5289623479026967575ull);
    vlSelf->auto_in_arecho_tl_state_size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4182755826843388310ull);
    vlSelf->auto_in_arecho_tl_state_source = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7354128163838021093ull);
    vlSelf->auto_in_arecho_extra_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9782117013125314025ull);
    vlSelf->auto_in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9301054137174195105ull);
    vlSelf->auto_in_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4831971193480809732ull);
    vlSelf->auto_in_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3399717838995028115ull);
    vlSelf->auto_in_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6724396083457607555ull);
    vlSelf->auto_in_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10722165405379131206ull);
    vlSelf->auto_in_recho_tl_state_size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15703042411603151410ull);
    vlSelf->auto_in_recho_tl_state_source = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 871533965079247103ull);
    vlSelf->auto_in_recho_extra_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17644034758295385762ull);
    vlSelf->auto_in_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13440528369901508574ull);
    vlSelf->auto_out_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16943278882262967345ull);
    vlSelf->auto_out_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861665229029712113ull);
    vlSelf->auto_out_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11569765208885983579ull);
    vlSelf->auto_out_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13785905572714421900ull);
    vlSelf->auto_out_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5534674347641988628ull);
    vlSelf->auto_out_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14946707699011439701ull);
    vlSelf->auto_out_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 220657315612921002ull);
    vlSelf->auto_out_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13346992410410139012ull);
    vlSelf->auto_out_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14131388866199901338ull);
    vlSelf->auto_out_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14322764921418206780ull);
    vlSelf->auto_out_awqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8633386068932702638ull);
    vlSelf->auto_out_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3989294955381250535ull);
    vlSelf->auto_out_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3101725526938671756ull);
    vlSelf->auto_out_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15284027244900388038ull);
    vlSelf->auto_out_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9873652301076993360ull);
    vlSelf->auto_out_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10028396000138373612ull);
    vlSelf->auto_out_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 945603938390377823ull);
    vlSelf->auto_out_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698648970112306209ull);
    vlSelf->auto_out_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6321337652159177594ull);
    vlSelf->auto_out_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3909999223880837862ull);
    vlSelf->auto_out_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4404591880904968357ull);
    vlSelf->auto_out_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12491928769187474234ull);
    vlSelf->auto_out_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13555423694699118538ull);
    vlSelf->auto_out_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5648717190837267456ull);
    vlSelf->auto_out_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7327308096313608433ull);
    vlSelf->auto_out_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10905230393097617367ull);
    vlSelf->auto_out_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1161169590863799724ull);
    vlSelf->auto_out_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6286741108737482919ull);
    vlSelf->auto_out_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2417885843583962508ull);
    vlSelf->auto_out_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4233526461825118305ull);
    vlSelf->auto_out_arqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15510248610942248827ull);
    vlSelf->auto_out_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9261038555460497644ull);
    vlSelf->auto_out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6098062364597854500ull);
    vlSelf->auto_out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10070055723627290627ull);
    vlSelf->auto_out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14337772436349105358ull);
    vlSelf->auto_out_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1659535978909375797ull);
    vlSelf->auto_out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5704211418329746880ull);
    vlSelf->__PVT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13941176474183087529ull);
    vlSelf->__PVT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11159791247364043609ull);
    vlSelf->__PVT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338569265171470966ull);
    vlSelf->__PVT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8541558446311346903ull);
    vlSelf->__VdfgRegularize_h4b3c4204_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13777702674846441370ull);
    vlSelf->__VdfgRegularize_h99d36c0c_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4312063385765385785ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6683500182819134693ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7884414263960615698ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14919047204792575329ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1054000311183567371ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8419845149222902004ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14554828334683720207ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6613779371308257057ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11885065147935938180ull);
    vlSelf->__PVT__Queue17_BundleMap__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17719693982686488205ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4150715831590926907ull);
    }
    vlSelf->Queue17_BundleMap__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13385794666750361372ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12380604700466701725ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 536749692617717930ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10005896882562917226ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11576417590467031224ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5656569073717113494ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 77114886347090477ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192201366243572080ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1453963591022607832ull);
    vlSelf->__PVT__Queue17_BundleMap_1__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6851737877164440386ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13900645566281441855ull);
    }
    vlSelf->Queue17_BundleMap_1__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15321063868592579273ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5882065430479045687ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4589439347029167628ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11082716429449381833ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13175277395371515974ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15432464886174898710ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3737618542183560347ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9313318546982958371ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15826959824007799182ull);
    vlSelf->__PVT__Queue17_BundleMap_2__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17736595304207384223ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7496263451084900402ull);
    }
    vlSelf->Queue17_BundleMap_2__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14062980530227215463ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13592929043439476161ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14450106462859425829ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1523755380540509161ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5182269263475513131ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15637221008121714652ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11807380756703018866ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15229707517286115114ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15291587133504840190ull);
    vlSelf->__PVT__Queue17_BundleMap_3__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5989710949794627560ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16855110750261173590ull);
    }
    vlSelf->Queue17_BundleMap_3__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1246740593185600071ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4849806995887223145ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 971332644902848020ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12634228036023675485ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17409451973380523011ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3629248771204609289ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011292596277122093ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17851723006634570212ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8009707345893121280ull);
    vlSelf->__PVT__Queue17_BundleMap_4__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8843929673720093142ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3819261908990089030ull);
    }
    vlSelf->Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14272960708582320672ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5119276140780524243ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7815348674339346837ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3119879814198400905ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16037316554984483877ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10096370597299004284ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10518370679296346026ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7099414238908623644ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11789954010575300169ull);
    vlSelf->__PVT__Queue17_BundleMap_5__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16676785971164307329ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16015622474242425650ull);
    }
    vlSelf->Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13839692732639129380ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17134654514690478998ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2696041788779747892ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15363702038552843158ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13233920995787446490ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5282751142598097864ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1575103406417313926ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16757529597839164143ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16058379345275890604ull);
    vlSelf->__PVT__Queue17_BundleMap_6__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 462519331167063817ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8073548578506499674ull);
    }
    vlSelf->Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16641368524903896605ull);
    vlSelf->__PVT__Queue1_BundleMap__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14751983603316793262ull);
    vlSelf->__PVT__Queue1_BundleMap__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5834305534690527985ull);
    vlSelf->__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562310932988902978ull);
    vlSelf->__PVT__Queue1_BundleMap_1__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14873565319316499160ull);
    vlSelf->__PVT__Queue1_BundleMap_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3577369493900619198ull);
    vlSelf->__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6766367312136492211ull);
    vlSelf->__PVT__Queue1_BundleMap_2__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1685298426709115606ull);
    vlSelf->__PVT__Queue1_BundleMap_2__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14454953236782248697ull);
    vlSelf->__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10733541795335411398ull);
    vlSelf->__PVT__Queue1_BundleMap_3__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11680192611702754597ull);
    vlSelf->__PVT__Queue1_BundleMap_3__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7635811430324008721ull);
    vlSelf->__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4566120362797099228ull);
    vlSelf->__PVT__Queue1_BundleMap_4__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15171318994275707345ull);
    vlSelf->__PVT__Queue1_BundleMap_4__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3170805292442890198ull);
    vlSelf->__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771833876848984817ull);
    vlSelf->__PVT__Queue1_BundleMap_5__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8179946178201419005ull);
    vlSelf->__PVT__Queue1_BundleMap_5__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12366905978817238088ull);
    vlSelf->__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10740669780298209304ull);
    vlSelf->__PVT__Queue1_BundleMap_6__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14402485971935818051ull);
    vlSelf->__PVT__Queue1_BundleMap_6__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5875212980484373043ull);
    vlSelf->__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15988493072966252136ull);
    vlSelf->__PVT__Queue1_BundleMap_7__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14494393328154155533ull);
    vlSelf->__PVT__Queue1_BundleMap_7__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14305859031015890870ull);
    vlSelf->__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16801713286155860507ull);
    vlSelf->__PVT__Queue1_BundleMap_8__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2902322256581149501ull);
    vlSelf->__PVT__Queue1_BundleMap_8__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2509059377849377477ull);
    vlSelf->__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 47423132472868743ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11662947932290969872ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17450175835174643408ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1852310716696185392ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7649554682773218041ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14690945300837782119ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16089756493722467560ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4032424679154598441ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2444539843564285940ull);
    vlSelf->__PVT__Queue17_BundleMap_7__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9728118502555963027ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9060457121543821567ull);
    }
    vlSelf->Queue17_BundleMap_7__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6391829152455615917ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18409590137546983715ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10867482202279563018ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18257986091010856856ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6624800902779374462ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16494997942774584956ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15969615427543668134ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099672569057614929ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8258445186970554459ull);
    vlSelf->__PVT__Queue17_BundleMap_8__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7196252253598625387ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8746534154821178105ull);
    }
    vlSelf->Queue17_BundleMap_8__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8099430451097437456ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13322003521538648685ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14736987947963432102ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4876992444315746301ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7853415275205946459ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6124521398665576570ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13310597653321769505ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17510703323301865646ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8724685885566832513ull);
    vlSelf->__PVT__Queue17_BundleMap_9__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18075817893357641799ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3266242323841995797ull);
    }
    vlSelf->Queue17_BundleMap_9__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5050503418412604346ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8915619948700754977ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8023164356041981915ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14823258880070746561ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894397430908381190ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2680993745189180272ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4976420415399230426ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12682181725621770251ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16634986185783713321ull);
    vlSelf->Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15028828246857718347ull);
    vlSelf->__PVT__Queue17_BundleMap_10__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8496044236979013826ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6099375131145511683ull);
    }
    vlSelf->Queue17_BundleMap_10__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2399074739638764929ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17755984678897093255ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1237441398151962309ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14784849680686802137ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16799674594843367636ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15562248608166529369ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9831474612174895546ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8700433977438404979ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16366059774489712135ull);
    vlSelf->__PVT__Queue17_BundleMap_11__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2402203937414221364ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5025767694029777654ull);
    }
    vlSelf->Queue17_BundleMap_11__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4133283930194114405ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10085477084575240158ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1527983590844549609ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4848409979280747340ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1672664708625704020ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15167794983900292735ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5531741453086029735ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5690649915180947488ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3450386777445642282ull);
    vlSelf->__PVT__Queue17_BundleMap_12__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5804930604029865935ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6079427887256693598ull);
    }
    vlSelf->Queue17_BundleMap_12__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18391258964566186917ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 831975847796232928ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1287682005064992457ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8362890508663216017ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17872107691619829029ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15235786380910951415ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5376343886948121593ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10941838295653009308ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6518356933544855079ull);
    vlSelf->__PVT__Queue17_BundleMap_13__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13153498609448892701ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11720137948184858245ull);
    }
    vlSelf->Queue17_BundleMap_13__DOT__ram_ext__DOT____Vlvbound_hc544554c__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9746090961483814715ull);
    vlSelf->__PVT__Queue1_BundleMap_9__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9638910930576872944ull);
    vlSelf->__PVT__Queue1_BundleMap_9__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11163086661287156032ull);
    vlSelf->__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12156347372415235955ull);
    vlSelf->__PVT__Queue1_BundleMap_10__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5540705114066455578ull);
    vlSelf->__PVT__Queue1_BundleMap_10__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2845212132120346231ull);
    vlSelf->__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4531339711901312634ull);
    vlSelf->__PVT__Queue1_BundleMap_11__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 531667390445992535ull);
    vlSelf->__PVT__Queue1_BundleMap_11__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1726336045565950376ull);
    vlSelf->__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12420421656877113787ull);
    vlSelf->__PVT__Queue1_BundleMap_12__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17111164476224231318ull);
    vlSelf->__PVT__Queue1_BundleMap_12__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15026699298965246491ull);
    vlSelf->__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10112528463413252394ull);
    vlSelf->__PVT__Queue1_BundleMap_13__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11779123379928467712ull);
    vlSelf->__PVT__Queue1_BundleMap_13__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6302739085049832471ull);
    vlSelf->__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5865714060149309742ull);
    vlSelf->__PVT__Queue1_BundleMap_14__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6537998065021628055ull);
    vlSelf->__PVT__Queue1_BundleMap_14__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3437774214392423783ull);
    vlSelf->__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11408310330507672916ull);
    vlSelf->__PVT__Queue1_BundleMap_15__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4448995761710558091ull);
    vlSelf->__PVT__Queue1_BundleMap_15__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073144684180857894ull);
    vlSelf->__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3660991251365993861ull);
    vlSelf->__PVT__Queue1_BundleMap_16__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8953396864453218648ull);
    vlSelf->__PVT__Queue1_BundleMap_16__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10509416961183946992ull);
    vlSelf->__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7561286139998475319ull);
    vlSelf->__PVT__Queue1_BundleMap_17__DOT__ram = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11206846309518304337ull);
    vlSelf->__PVT__Queue1_BundleMap_17__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3096743037251411548ull);
    vlSelf->__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18336394287720673482ull);
}
