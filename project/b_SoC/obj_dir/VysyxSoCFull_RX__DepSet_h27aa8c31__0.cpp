// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSource_UInt32.h"
#include "VysyxSoCFull_RX.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__0(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ __Vdly__rx_a;
    __Vdly__rx_a = 0;
    CData/*4:0*/ __Vdly__first_count;
    __Vdly__first_count = 0;
    IData/*19:0*/ __Vdly__tx_a;
    __Vdly__tx_a = 0;
    IData/*19:0*/ __Vdly__tx_b;
    __Vdly__tx_b = 0;
    IData/*19:0*/ __Vdly__tx_c;
    __Vdly__tx_c = 0;
    IData/*19:0*/ __Vdly__tx_d;
    __Vdly__tx_d = 0;
    IData/*19:0*/ __Vdly__tx_e;
    __Vdly__tx_e = 0;
    IData/*19:0*/ __Vdly__rx_b;
    __Vdly__rx_b = 0;
    IData/*19:0*/ __Vdly__rx_d;
    __Vdly__rx_d = 0;
    IData/*19:0*/ __Vdly__rx_c;
    __Vdly__rx_c = 0;
    IData/*19:0*/ __Vdly__rx_e;
    __Vdly__rx_e = 0;
    CData/*4:0*/ __Vdly__hqa__DOT__fq__DOT__enq_ptr;
    __Vdly__hqa__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqb__DOT__fq__DOT__enq_ptr;
    __Vdly__hqb__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqc__DOT__fq__DOT__enq_ptr;
    __Vdly__hqc__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqd__DOT__fq__DOT__enq_ptr;
    __Vdly__hqd__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqe__DOT__fq__DOT__enq_ptr;
    __Vdly__hqe__DOT__fq__DOT__enq_ptr = 0;
    // Body
    __Vdly__rx_a = vlSelfRef.__PVT__rx_a;
    __Vdly__rx_b = vlSelfRef.__PVT__rx_b;
    __Vdly__rx_d = vlSelfRef.__PVT__rx_d;
    __Vdly__rx_c = vlSelfRef.__PVT__rx_c;
    __Vdly__rx_e = vlSelfRef.__PVT__rx_e;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqa_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13131: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13131, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13133: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13133, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqb_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13137: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13137, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13139: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13139, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqc_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13143: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13143, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13145: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13145, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqd_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13149: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13149, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13151: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13151, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqe_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13155: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13155, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13157: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13157, "", false);
    }
    __Vdly__hqa__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr;
    __Vdly__hqb__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr;
    __Vdly__hqc__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr;
    __Vdly__hqd__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr;
    __Vdly__hqe__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__VdlySet__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full;
    __Vdly__tx_a = vlSelfRef.__PVT__tx_a;
    __Vdly__tx_b = vlSelfRef.__PVT__tx_b;
    __Vdly__tx_c = vlSelfRef.__PVT__tx_c;
    __Vdly__tx_d = vlSelfRef.__PVT__tx_d;
    __Vdly__tx_e = vlSelfRef.__PVT__tx_e;
    __Vdly__first_count = vlSelfRef.__PVT__first_count;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__rx_a = 0x20U;
        __Vdly__rx_b = 0x20U;
        __Vdly__rx_d = 0x20U;
        __Vdly__rx_c = 0x20U;
        __Vdly__rx_e = 0x20U;
        __Vdly__hqa__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqb__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqc__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqd__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqe__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr = 0U;
        vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full = 0U;
        __Vdly__first_count = 0U;
        __Vdly__tx_a = 0U;
        __Vdly__tx_b = 0U;
        __Vdly__tx_c = 0U;
        __Vdly__tx_d = 0U;
        __Vdly__tx_e = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_a_T 
            = ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z = (0x1fffffU 
                                                   & (vlSelfRef.__PVT__rx_a 
                                                      + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_a_T)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_bT 
            = ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_b + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_bT)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_d_T 
            = ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_d + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_d_T)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_c_T 
            = ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_c + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_c_T)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_e_T 
            = ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_e + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_e_T)));
        if (vlSelfRef.__PVT__io_rxc_source__DOT__io_enq_ready_0) {
            __Vdly__rx_a = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_a_T));
            __Vdly__rx_b = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_bT));
            __Vdly__rx_d = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_d_T));
            __Vdly__rx_c = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_c_T));
            __Vdly__rx_e = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_e_T));
        } else {
            __Vdly__rx_a = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z));
            __Vdly__rx_b = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1));
            __Vdly__rx_d = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3));
            __Vdly__rx_c = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2));
            __Vdly__rx_e = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4));
        }
        if (vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq) {
            __Vdly__hqa__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq) {
            __Vdly__hqb__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq) {
            __Vdly__hqc__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq) {
            __Vdly__hqd__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq) {
            __Vdly__hqe__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)));
        }
        if (((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__b2c_send) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1 
                = (0xffU & ((IData)(1U) << (7U & (vlSelfRef.__PVT__b2c_data 
                                                  >> 9U))));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats 
                = ((0x1eU & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1) 
                             >> 2U)) | (3U > (0xfU 
                                              & (vlSelfRef.__PVT__b2c_data 
                                                 >> 9U))));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
                = ((1U == (7U & (vlSelfRef.__PVT__b2c_data 
                                 >> 3U))) ? (((6U == 
                                               (7U 
                                                & (vlSelfRef.__PVT__b2c_data 
                                                   >> 9U))) 
                                              << 1U) 
                                             | (6U 
                                                > (0xfU 
                                                   & (vlSelfRef.__PVT__b2c_data 
                                                      >> 9U))))
                    : 0U);
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5 
                = (0x1fU & ((IData)(2U) + (((0x20U 
                                             & vlSelfRef.__PVT__b2c_data)
                                             ? 0U : (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                           + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                = (((QData)((IData)((0x3ffU & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5) 
                                                << 5U) 
                                               | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5))))) 
                    << 0x1eU) | (QData)((IData)((((0xf8000U 
                                                   & ((((8U 
                                                         & vlSelfRef.__PVT__b2c_data)
                                                         ? (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                         : 0U) 
                                                       + 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__b2c_data 
                                                             >> 3U))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__b2c_data 
                                                               >> 3U))))) 
                                                      << 0xfU)) 
                                                  | (0x7c00U 
                                                     & (((IData)(2U) 
                                                         + 
                                                         ((8U 
                                                           & vlSelfRef.__PVT__b2c_data)
                                                           ? (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                           : 0U)) 
                                                        << 0xaU))) 
                                                 | ((0x3e0U 
                                                     & (((IData)(2U) 
                                                         + 
                                                         (((0x20U 
                                                            & vlSelfRef.__PVT__b2c_data)
                                                            ? 0U
                                                            : (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                                          + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))) 
                                                        << 5U)) 
                                                    | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5))))));
            __Vdly__first_count = (0x1fU & ((IData)(vlSelfRef.__PVT__first)
                                             ? ((0x27U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (7U 
                                                      & vlSelfRef.__PVT__b2c_data))))
                                                 ? (IData)(
                                                           (vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(5U) 
                                                                * 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__b2c_data)))))
                                                 : 0U)
                                             : ((IData)(vlSelfRef.__PVT__first_count) 
                                                - (IData)(1U))));
            vlSelfRef.__PVT__unnamedblk1__DOT___txInc_T_1 
                = (1U & (((IData)(1U) << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                         >> 5U));
        } else {
            vlSelfRef.__PVT__unnamedblk1__DOT___txInc_T_1 = 0U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_a_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 7U)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_bT_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 0xcU)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_c_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 0x11U)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_d_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 0x16U)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_e_T_3 
            = ((IData)(1U) << (vlSelfRef.__PVT__b2c_data 
                               >> 0x1bU));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_T_1) {
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 7U))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_a_T_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 0xcU))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_bT_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 0x11U))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_c_T_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 0x16U))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_d_T_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e 
                = ((0x14U < (vlSelfRef.__PVT__b2c_data 
                             >> 0x1bU)) ? 0xfffffU : 
                   (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_e_T_3 
                                >> 1U)));
        } else {
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e = 0U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z = (0x1fffffU 
                                                   & (vlSelfRef.__PVT__tx_a 
                                                      + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_1 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_b + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_2 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_c + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_3 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_d + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_4 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_e + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e));
        if (vlSelfRef.__PVT__io_txc_source__DOT__io_enq_ready_0) {
            __Vdly__tx_a = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a);
            __Vdly__tx_b = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b);
            __Vdly__tx_c = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c);
            __Vdly__tx_d = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d);
            __Vdly__tx_e = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e);
        } else {
            __Vdly__tx_a = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z));
            __Vdly__tx_b = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_1)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_1));
            __Vdly__tx_c = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_2)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_2));
            __Vdly__tx_d = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_3)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_3));
            __Vdly__tx_e = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_4)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_4));
        }
    }
    if (vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqa__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqb__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqc__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqe__DOT__fq__DOT__ren;
    if (vlSelfRef.__PVT__formatValid) {
        vlSelfRef.__PVT__format_r = (7U & vlSelfRef.__PVT__b2c_data);
    }
    if (vlSelfRef.__PVT__io_txc_source__DOT__io_enq_ready_0) {
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_a 
            = vlSelfRef.__PVT__tx_a;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_b 
            = vlSelfRef.__PVT__tx_b;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_c 
            = vlSelfRef.__PVT__tx_c;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_d 
            = vlSelfRef.__PVT__tx_d;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_e 
            = vlSelfRef.__PVT__tx_e;
    }
    if (vlSelfRef.__PVT__io_rxc_source__DOT__io_enq_ready_0) {
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_a 
            = vlSelfRef.__PVT__rx_a;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_b 
            = vlSelfRef.__PVT__rx_b;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_c 
            = vlSelfRef.__PVT__rx_c;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_d 
            = vlSelfRef.__PVT__rx_d;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_e 
            = vlSelfRef.__PVT__rx_e;
    }
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr = __Vdly__hqa__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr = __Vdly__hqb__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr = __Vdly__hqc__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr = __Vdly__hqd__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr = __Vdly__hqe__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__first_count = __Vdly__first_count;
    vlSelfRef.__PVT__tx_a = __Vdly__tx_a;
    vlSelfRef.__PVT__tx_b = __Vdly__tx_b;
    vlSelfRef.__PVT__tx_c = __Vdly__tx_c;
    vlSelfRef.__PVT__tx_d = __Vdly__tx_d;
    vlSelfRef.__PVT__tx_e = __Vdly__tx_e;
    vlSelfRef.__PVT__rx_a = __Vdly__rx_a;
    vlSelfRef.__PVT__rx_b = __Vdly__rx_b;
    vlSelfRef.__PVT__rx_c = __Vdly__rx_c;
    vlSelfRef.__PVT__rx_d = __Vdly__rx_d;
    vlSelfRef.__PVT__rx_e = __Vdly__rx_e;
    vlSelfRef.__PVT__first = (0U == (IData)(vlSelfRef.__PVT__first_count));
    vlSelfRef.__PVT__b2c_send = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
                                 && (IData)(vlSelfRef.__PVT__b2c_send_REG));
    vlSelfRef.__PVT__formatValid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                    & (0U == (IData)(vlSelfRef.__PVT__first_count)));
    vlSelfRef.__PVT__b2c_send_REG = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG_1;
}

VL_INLINE_OPT void VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__1(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_out_valid)
                                                ? vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0));
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    if (vlSelfRef.__VdlySet__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqe__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqb__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqc__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqd__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqa__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__b2c_data = vlSelfRef.__PVT__b2c_data_REG;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__VdfgRegularize_h55037780_0_0 = (7U 
                                                & ((IData)(vlSelfRef.__PVT__formatValid)
                                                    ? vlSelfRef.__PVT__b2c_data
                                                    : (IData)(vlSelfRef.__PVT__format_r)));
    vlSelfRef.__PVT__b2c_data_REG = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_2;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match));
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
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match));
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

VL_INLINE_OPT void VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__0(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ __Vdly__rx_a;
    __Vdly__rx_a = 0;
    CData/*4:0*/ __Vdly__first_count;
    __Vdly__first_count = 0;
    IData/*19:0*/ __Vdly__tx_a;
    __Vdly__tx_a = 0;
    IData/*19:0*/ __Vdly__tx_b;
    __Vdly__tx_b = 0;
    IData/*19:0*/ __Vdly__tx_c;
    __Vdly__tx_c = 0;
    IData/*19:0*/ __Vdly__tx_d;
    __Vdly__tx_d = 0;
    IData/*19:0*/ __Vdly__tx_e;
    __Vdly__tx_e = 0;
    IData/*19:0*/ __Vdly__rx_b;
    __Vdly__rx_b = 0;
    IData/*19:0*/ __Vdly__rx_d;
    __Vdly__rx_d = 0;
    IData/*19:0*/ __Vdly__rx_c;
    __Vdly__rx_c = 0;
    IData/*19:0*/ __Vdly__rx_e;
    __Vdly__rx_e = 0;
    CData/*4:0*/ __Vdly__hqa__DOT__fq__DOT__enq_ptr;
    __Vdly__hqa__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqb__DOT__fq__DOT__enq_ptr;
    __Vdly__hqb__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqc__DOT__fq__DOT__enq_ptr;
    __Vdly__hqc__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqd__DOT__fq__DOT__enq_ptr;
    __Vdly__hqd__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__hqe__DOT__fq__DOT__enq_ptr;
    __Vdly__hqe__DOT__fq__DOT__enq_ptr = 0;
    // Body
    __Vdly__rx_a = vlSelfRef.__PVT__rx_a;
    __Vdly__rx_b = vlSelfRef.__PVT__rx_b;
    __Vdly__rx_d = vlSelfRef.__PVT__rx_d;
    __Vdly__rx_c = vlSelfRef.__PVT__rx_c;
    __Vdly__rx_e = vlSelfRef.__PVT__rx_e;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqa_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13131: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13131, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13133: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13133, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqb_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13137: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13137, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13139: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13139, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqc_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13143: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13143, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13145: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13145, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqd_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13149: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13149, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13151: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13151, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__hqe_io_enq_valid)) 
                                  | (~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__full))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:13155: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed at RX.scala:56\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13155, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:13157: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13157, "", false);
    }
    __Vdly__hqa__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr;
    __Vdly__hqb__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr;
    __Vdly__hqc__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr;
    __Vdly__hqd__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr;
    __Vdly__hqe__DOT__fq__DOT__enq_ptr = vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr = vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__VdlySet__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__VdlySet__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full;
    vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full;
    __Vdly__tx_a = vlSelfRef.__PVT__tx_a;
    __Vdly__tx_b = vlSelfRef.__PVT__tx_b;
    __Vdly__tx_c = vlSelfRef.__PVT__tx_c;
    __Vdly__tx_d = vlSelfRef.__PVT__tx_d;
    __Vdly__tx_e = vlSelfRef.__PVT__tx_e;
    __Vdly__first_count = vlSelfRef.__PVT__first_count;
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        __Vdly__rx_a = 0x20U;
        __Vdly__rx_b = 0x20U;
        __Vdly__rx_d = 0x20U;
        __Vdly__rx_c = 0x20U;
        __Vdly__rx_e = 0x20U;
        __Vdly__hqa__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqb__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqc__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqd__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__hqe__DOT__fq__DOT__enq_ptr = 0U;
        vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr = 0U;
        vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full = 0U;
        __Vdly__first_count = 0U;
        __Vdly__tx_a = 0U;
        __Vdly__tx_b = 0U;
        __Vdly__tx_c = 0U;
        __Vdly__tx_d = 0U;
        __Vdly__tx_e = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_a_T 
            = ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z = (0x1fffffU 
                                                   & (vlSelfRef.__PVT__rx_a 
                                                      + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_a_T)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_bT 
            = ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_b + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_bT)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_d_T 
            = ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_d + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_d_T)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_c_T 
            = ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_c + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_c_T)));
        vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_e_T 
            = ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
               & (IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4 = 
            (0x1fffffU & (vlSelfRef.__PVT__rx_e + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_e_T)));
        if (vlSelfRef.__PVT__io_rxc_source__DOT__io_enq_ready_0) {
            __Vdly__rx_a = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_a_T));
            __Vdly__rx_b = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_bT));
            __Vdly__rx_d = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_d_T));
            __Vdly__rx_c = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_c_T));
            __Vdly__rx_e = (0xfffffU & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT___rxInc_e_T));
        } else {
            __Vdly__rx_a = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z));
            __Vdly__rx_b = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1));
            __Vdly__rx_d = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3));
            __Vdly__rx_c = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2));
            __Vdly__rx_e = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4));
        }
        if (vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq) {
            __Vdly__hqa__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq) {
            __Vdly__hqb__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq) {
            __Vdly__hqc__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq) {
            __Vdly__hqd__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq) {
            __Vdly__hqe__DOT__fq__DOT__enq_ptr = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq) {
            vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)));
        }
        if (((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq))) {
            vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full 
                = vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__b2c_send) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1 
                = (0xffU & ((IData)(1U) << (7U & (vlSelfRef.__PVT__b2c_data 
                                                  >> 9U))));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats 
                = ((0x1eU & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1) 
                             >> 2U)) | (3U > (0xfU 
                                              & (vlSelfRef.__PVT__b2c_data 
                                                 >> 9U))));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
                = ((1U == (7U & (vlSelfRef.__PVT__b2c_data 
                                 >> 3U))) ? (((6U == 
                                               (7U 
                                                & (vlSelfRef.__PVT__b2c_data 
                                                   >> 9U))) 
                                              << 1U) 
                                             | (6U 
                                                > (0xfU 
                                                   & (vlSelfRef.__PVT__b2c_data 
                                                      >> 9U))))
                    : 0U);
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5 
                = (0x1fU & ((IData)(2U) + (((0x20U 
                                             & vlSelfRef.__PVT__b2c_data)
                                             ? 0U : (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                           + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                = (((QData)((IData)((0x3ffU & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5) 
                                                << 5U) 
                                               | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5))))) 
                    << 0x1eU) | (QData)((IData)((((0xf8000U 
                                                   & ((((8U 
                                                         & vlSelfRef.__PVT__b2c_data)
                                                         ? (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                         : 0U) 
                                                       + 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__b2c_data 
                                                             >> 3U))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__b2c_data 
                                                               >> 3U))))) 
                                                      << 0xfU)) 
                                                  | (0x7c00U 
                                                     & (((IData)(2U) 
                                                         + 
                                                         ((8U 
                                                           & vlSelfRef.__PVT__b2c_data)
                                                           ? (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                           : 0U)) 
                                                        << 0xaU))) 
                                                 | ((0x3e0U 
                                                     & (((IData)(2U) 
                                                         + 
                                                         (((0x20U 
                                                            & vlSelfRef.__PVT__b2c_data)
                                                            ? 0U
                                                            : (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                                          + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))) 
                                                        << 5U)) 
                                                    | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5))))));
            __Vdly__first_count = (0x1fU & ((IData)(vlSelfRef.__PVT__first)
                                             ? ((0x27U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (7U 
                                                      & vlSelfRef.__PVT__b2c_data))))
                                                 ? (IData)(
                                                           (vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(5U) 
                                                                * 
                                                                (7U 
                                                                 & vlSelfRef.__PVT__b2c_data)))))
                                                 : 0U)
                                             : ((IData)(vlSelfRef.__PVT__first_count) 
                                                - (IData)(1U))));
            vlSelfRef.__PVT__unnamedblk1__DOT___txInc_T_1 
                = (1U & (((IData)(1U) << (IData)(vlSelfRef.__VdfgRegularize_h55037780_0_0)) 
                         >> 5U));
        } else {
            vlSelfRef.__PVT__unnamedblk1__DOT___txInc_T_1 = 0U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_a_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 7U)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_bT_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 0xcU)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_c_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 0x11U)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_d_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                        >> 0x16U)));
        vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_e_T_3 
            = ((IData)(1U) << (vlSelfRef.__PVT__b2c_data 
                               >> 0x1bU));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_T_1) {
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 7U))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_a_T_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 0xcU))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_bT_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 0x11U))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_c_T_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d 
                = ((0x14U < (0x1fU & (vlSelfRef.__PVT__b2c_data 
                                      >> 0x16U))) ? 0xfffffU
                    : (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_d_T_3 
                                   >> 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e 
                = ((0x14U < (vlSelfRef.__PVT__b2c_data 
                             >> 0x1bU)) ? 0xfffffU : 
                   (0xfffffU & (vlSelfRef.__PVT__unnamedblk1__DOT___txInc_out_e_T_3 
                                >> 1U)));
        } else {
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d = 0U;
            vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e = 0U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z = (0x1fffffU 
                                                   & (vlSelfRef.__PVT__tx_a 
                                                      + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_1 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_b + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_2 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_c + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_3 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_d + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d));
        vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_4 = 
            (0x1fffffU & (vlSelfRef.__PVT__tx_e + vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e));
        if (vlSelfRef.__PVT__io_txc_source__DOT__io_enq_ready_0) {
            __Vdly__tx_a = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_a);
            __Vdly__tx_b = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_b);
            __Vdly__tx_c = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_c);
            __Vdly__tx_d = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_d);
            __Vdly__tx_e = (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__txInc_e);
        } else {
            __Vdly__tx_a = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z));
            __Vdly__tx_b = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_1)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_1));
            __Vdly__tx_c = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_2)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_2));
            __Vdly__tx_d = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_3)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_3));
            __Vdly__tx_e = (0xfffffU & ((0x100000U 
                                         & vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_4)
                                         ? 0xfffffU
                                         : vlSelfRef.__PVT__unnamedblk1__DOT__tx_z_4));
        }
    }
    if (vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_enq) {
        vlSelfRef.__VdlyVal__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__b2c_data;
        vlSelfRef.__VdlyDim0__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr;
        vlSelfRef.__VdlySet__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqa__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqb__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqc__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqd__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_out_valid 
        = vlSelfRef.__PVT__hqe__DOT__fq__DOT__ren;
    if (vlSelfRef.__PVT__formatValid) {
        vlSelfRef.__PVT__format_r = (7U & vlSelfRef.__PVT__b2c_data);
    }
    if (vlSelfRef.__PVT__io_txc_source__DOT__io_enq_ready_0) {
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_a 
            = vlSelfRef.__PVT__tx_a;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_b 
            = vlSelfRef.__PVT__tx_b;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_c 
            = vlSelfRef.__PVT__tx_c;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_d 
            = vlSelfRef.__PVT__tx_d;
        vlSelfRef.__PVT__io_txc_source__DOT__mem_0_e 
            = vlSelfRef.__PVT__tx_e;
    }
    if (vlSelfRef.__PVT__io_rxc_source__DOT__io_enq_ready_0) {
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_a 
            = vlSelfRef.__PVT__rx_a;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_b 
            = vlSelfRef.__PVT__rx_b;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_c 
            = vlSelfRef.__PVT__rx_c;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_d 
            = vlSelfRef.__PVT__rx_d;
        vlSelfRef.__PVT__io_rxc_source__DOT__mem_0_e 
            = vlSelfRef.__PVT__rx_e;
    }
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr = __Vdly__hqa__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr = __Vdly__hqb__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr = __Vdly__hqc__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr = __Vdly__hqd__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr = __Vdly__hqe__DOT__fq__DOT__enq_ptr;
    vlSelfRef.__PVT__first_count = __Vdly__first_count;
    vlSelfRef.__PVT__tx_a = __Vdly__tx_a;
    vlSelfRef.__PVT__tx_b = __Vdly__tx_b;
    vlSelfRef.__PVT__tx_c = __Vdly__tx_c;
    vlSelfRef.__PVT__tx_d = __Vdly__tx_d;
    vlSelfRef.__PVT__tx_e = __Vdly__tx_e;
    vlSelfRef.__PVT__rx_a = __Vdly__rx_a;
    vlSelfRef.__PVT__rx_b = __Vdly__rx_b;
    vlSelfRef.__PVT__rx_c = __Vdly__rx_c;
    vlSelfRef.__PVT__rx_d = __Vdly__rx_d;
    vlSelfRef.__PVT__rx_e = __Vdly__rx_e;
    vlSelfRef.__PVT__first = (0U == (IData)(vlSelfRef.__PVT__first_count));
    vlSelfRef.__PVT__b2c_send = ((1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0))) 
                                 && (IData)(vlSelfRef.__PVT__b2c_send_REG));
    vlSelfRef.__PVT__formatValid = ((IData)(vlSelfRef.__PVT__b2c_send) 
                                    & (0U == (IData)(vlSelfRef.__PVT__first_count)));
    vlSelfRef.__PVT__b2c_send_REG = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG_1;
}

VL_INLINE_OPT void VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__1(VysyxSoCFull_RX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0));
    if (vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0));
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0) {
        vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full = 0U;
        vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
                 & (IData)(vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full)))) {
            vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full 
                = vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__ram 
            = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty)
                ? vlSelfRef.__PVT__b2c_data : ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
                                                ? vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory
                                               [vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
                                                : 0U));
    }
    if (vlSelfRef.__VdlySet__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqe__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqe__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqb__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqb__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqd__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqd__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqc__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqc__DOT__io_deq_q__DOT__full;
    if (vlSelfRef.__VdlySet__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory[vlSelfRef.__VdlyDim0__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelfRef.__VdlyVal__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__hqa__DOT__io_deq_q__DOT__full 
        = vlSelfRef.__Vdly__hqa__DOT__io_deq_q__DOT__full;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqe__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqb__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqd__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqc__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__hqa__DOT__fq__DOT__ren;
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__io_deq_valid_0)
                     ? (((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelfRef.__PVT__b2c_data = vlSelfRef.__PVT__b2c_data_REG;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqe__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqb__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqd__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqc__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr = vlSelfRef.__Vdly__hqa__DOT__fq__DOT__deq_ptr;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match = 
        ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__deq_ptr) 
         == (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelfRef.__VdfgRegularize_h55037780_0_0 = (7U 
                                                & ((IData)(vlSelfRef.__PVT__formatValid)
                                                    ? vlSelfRef.__PVT__b2c_data
                                                    : (IData)(vlSelfRef.__PVT__format_r)));
    vlSelfRef.__PVT__b2c_data_REG = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_2;
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqe__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqe__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqb__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqb__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqd__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqd__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqc__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqc__DOT__fq__DOT__ptr_match));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__full = ((IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                                & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full));
    vlSelfRef.__PVT__hqa__DOT__fq__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.__PVT__hqa__DOT__fq__DOT__ptr_match));
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
