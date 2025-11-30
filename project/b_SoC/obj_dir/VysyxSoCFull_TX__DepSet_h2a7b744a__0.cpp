// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TX.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__0(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__0\n"); );
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
    IData/*19:0*/ __Vdly__tx_e;
    __Vdly__tx_e = 0;
    CData/*0:0*/ __Vdly__ioX_first_4;
    __Vdly__ioX_first_4 = 0;
    IData/*19:0*/ __Vdly__tx_c;
    __Vdly__tx_c = 0;
    CData/*0:0*/ __Vdly__ioX_first_2;
    __Vdly__ioX_first_2 = 0;
    IData/*19:0*/ __Vdly__tx_b;
    __Vdly__tx_b = 0;
    CData/*0:0*/ __Vdly__ioX_first_1;
    __Vdly__ioX_first_1 = 0;
    IData/*19:0*/ __Vdly__tx_a;
    __Vdly__tx_a = 0;
    CData/*0:0*/ __Vdly__ioX_first;
    __Vdly__ioX_first = 0;
    IData/*19:0*/ __Vdly__rx_e;
    __Vdly__rx_e = 0;
    IData/*19:0*/ __Vdly__rx_d;
    __Vdly__rx_d = 0;
    CData/*1:0*/ __Vdly__xmit;
    __Vdly__xmit = 0;
    IData/*19:0*/ __Vdly__rx_c;
    __Vdly__rx_c = 0;
    IData/*19:0*/ __Vdly__rx_b;
    __Vdly__rx_b = 0;
    IData/*19:0*/ __Vdly__rx_a;
    __Vdly__rx_a = 0;
    IData/*19:0*/ __Vdly__tx_d;
    __Vdly__tx_d = 0;
    CData/*0:0*/ __Vdly__ioX_first_3;
    __Vdly__ioX_first_3 = 0;
    // Body
    vlSelfRef.__Vdly__qb_q__DOT__valid_0 = vlSelfRef.__PVT__qb_q__DOT__valid_0;
    vlSelfRef.__Vdly__qb_q__DOT__valid_1 = vlSelfRef.__PVT__qb_q__DOT__valid_1;
    vlSelfRef.__Vdly__qc_q__DOT__valid_0 = vlSelfRef.__PVT__qc_q__DOT__valid_0;
    vlSelfRef.__Vdly__qc_q__DOT__valid_1 = vlSelfRef.__PVT__qc_q__DOT__valid_1;
    vlSelfRef.__Vdly__qe_q__DOT__valid_0 = vlSelfRef.__PVT__qe_q__DOT__valid_0;
    vlSelfRef.__Vdly__qe_q__DOT__valid_1 = vlSelfRef.__PVT__qe_q__DOT__valid_1;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__send) 
                         != (0U != ((IData)(vlSelfRef.__PVT__grant) 
                                    & (IData)(vlSelfRef.__PVT__requests)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:14237: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.tx: Assertion failed at TX.scala:106\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 14237, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:14239: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.tx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 14239, "", false);
    }
    vlSelfRef.__Vdly__qa_q__DOT__valid_0 = vlSelfRef.__PVT__qa_q__DOT__valid_0;
    vlSelfRef.__Vdly__qd_q__DOT__valid_0 = vlSelfRef.__PVT__qd_q__DOT__valid_0;
    vlSelfRef.__Vdly__qa_q__DOT__valid_1 = vlSelfRef.__PVT__qa_q__DOT__valid_1;
    vlSelfRef.__Vdly__qd_q__DOT__valid_1 = vlSelfRef.__PVT__qd_q__DOT__valid_1;
    vlSelfRef.__Vdly__rxQ__DOT__valid_1 = vlSelfRef.__PVT__rxQ__DOT__valid_1;
    vlSelfRef.__Vdly__rxQ__DOT__valid_0 = vlSelfRef.__PVT__rxQ__DOT__valid_0;
    __Vdly__xmit = vlSelfRef.__PVT__xmit;
    __Vdly__ioX_first_2 = vlSelfRef.__PVT__ioX_first_2;
    __Vdly__ioX_first_1 = vlSelfRef.__PVT__ioX_first_1;
    __Vdly__tx_c = vlSelfRef.__PVT__tx_c;
    __Vdly__tx_b = vlSelfRef.__PVT__tx_b;
    __Vdly__ioX_first_4 = vlSelfRef.__PVT__ioX_first_4;
    __Vdly__tx_e = vlSelfRef.__PVT__tx_e;
    __Vdly__ioX_first = vlSelfRef.__PVT__ioX_first;
    __Vdly__tx_a = vlSelfRef.__PVT__tx_a;
    __Vdly__ioX_first_3 = vlSelfRef.__PVT__ioX_first_3;
    __Vdly__tx_d = vlSelfRef.__PVT__tx_d;
    __Vdly__rx_e = vlSelfRef.__PVT__rx_e;
    __Vdly__rx_d = vlSelfRef.__PVT__rx_d;
    __Vdly__rx_c = vlSelfRef.__PVT__rx_c;
    __Vdly__rx_b = vlSelfRef.__PVT__rx_b;
    __Vdly__rx_a = vlSelfRef.__PVT__rx_a;
    vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0;
    if (vlSymsp->TOP.reset) {
        __Vdly__xmit = 0U;
        __Vdly__tx_c = 0U;
        __Vdly__ioX_first_2 = 1U;
        __Vdly__tx_b = 0U;
        __Vdly__ioX_first_1 = 1U;
        __Vdly__tx_e = 0U;
        __Vdly__ioX_first_4 = 1U;
        __Vdly__tx_a = 0U;
        __Vdly__ioX_first = 1U;
        __Vdly__tx_d = 0U;
        __Vdly__ioX_first_3 = 1U;
        __Vdly__rx_e = 0U;
        __Vdly__rx_d = 0U;
        __Vdly__rx_c = 0U;
        __Vdly__rx_b = 0U;
        __Vdly__rx_a = 0U;
        vlSelfRef.__PVT__state = 0U;
        vlSelfRef.__PVT__readys_mask = 0x3fU;
        vlSelfRef.__PVT__first = 1U;
    } else {
        if ((((IData)(vlSelfRef.__PVT__allowed) >> 5U) 
             & (IData)(vlSelfRef.__PVT__f_valid))) {
            __Vdly__xmit = 3U;
        } else if ((0U != (IData)(vlSelfRef.__PVT__xmit))) {
            __Vdly__xmit = (3U & ((IData)(vlSelfRef.__PVT__xmit) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_c_T 
            = ((IData)(vlSelfRef.__PVT__qc_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0));
        __Vdly__tx_c = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_c_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_2))
                                      ? vlSelfRef.__PVT__ioX_delta_2
                                      : vlSelfRef.__PVT__tx_c) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_c_T) {
            __Vdly__ioX_first_2 = vlSelfRef.__PVT__qc_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_bT 
            = ((IData)(vlSelfRef.__PVT__qb_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0));
        __Vdly__tx_b = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_bT) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_1))
                                      ? vlSelfRef.__PVT__ioX_delta_1
                                      : vlSelfRef.__PVT__tx_b) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            << 4U) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 0x1cU))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_bT) {
            __Vdly__ioX_first_1 = vlSelfRef.__PVT__qb_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_e_T 
            = ((IData)(vlSelfRef.__PVT__qe_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0));
        __Vdly__tx_e = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_e_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_4))
                                      ? vlSelfRef.__PVT__ioX_delta_4
                                      : vlSelfRef.__PVT__tx_e) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_e_T) {
            __Vdly__ioX_first_4 = vlSelfRef.__PVT__qe_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_a_T 
            = ((IData)(vlSelfRef.__PVT__qa_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0));
        __Vdly__tx_a = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_a_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first))
                                      ? vlSelfRef.__PVT__ioX_delta
                                      : vlSelfRef.__PVT__tx_a) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              >> 0x10U))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_a_T) {
            __Vdly__ioX_first = vlSelfRef.__PVT__qa_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_d_T 
            = ((IData)(vlSelfRef.__PVT__qd_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0));
        __Vdly__tx_d = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_d_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_3))
                                      ? vlSelfRef.__PVT__ioX_delta_3
                                      : vlSelfRef.__PVT__tx_d) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                            << 0xcU) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                              >> 0x14U))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_d_T) {
            __Vdly__ioX_first_3 = vlSelfRef.__PVT__qd_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_e
                            : (vlSelfRef.__PVT__rx_e 
                               & vlSelfRef.__PVT__mask_4)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                              : 0U)));
        __Vdly__rx_e = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_d
                            : (vlSelfRef.__PVT__rx_d 
                               & vlSelfRef.__PVT__mask_3)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & ((vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              << 0xcU) 
                                             | (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                >> 0x14U)))
                              : 0U)));
        __Vdly__rx_d = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_c
                            : (vlSelfRef.__PVT__rx_c 
                               & vlSelfRef.__PVT__mask_2)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                             >> 8U))
                              : 0U)));
        __Vdly__rx_c = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_b
                            : (vlSelfRef.__PVT__rx_b 
                               & vlSelfRef.__PVT__mask_1)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & ((vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              << 4U) 
                                             | (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                >> 0x1cU)))
                              : 0U)));
        __Vdly__rx_b = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z = (0x1fffffU 
                                                   & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                                                        ? vlSelfRef.__PVT__rx_a
                                                        : 
                                                       (vlSelfRef.__PVT__rx_a 
                                                        & vlSelfRef.__PVT__mask)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                                                        ? 
                                                       (0xfffffU 
                                                        & ((vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                            << 0x10U) 
                                                           | (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              >> 0x10U)))
                                                        : 0U)));
        __Vdly__rx_a = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z));
        if (vlSelfRef.__PVT__first) {
            vlSelfRef.__PVT__state = vlSelfRef.__PVT__winner;
        }
        if (((IData)(vlSelfRef.__PVT__first) & (0U 
                                                != (IData)(vlSelfRef.__PVT__requests)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T 
                = ((~ (IData)(vlSelfRef.__PVT___readys_readys_T_2)) 
                   & (IData)(vlSelfRef.__PVT__requests));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                   | (0x3eU & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                               << 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6 
                = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3) 
                   | (0x3cU & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3) 
                               << 2U)));
            vlSelfRef.__PVT__readys_mask = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6) 
                                            | (0x30U 
                                               & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6) 
                                                  << 4U)));
        }
        if (vlSelfRef.__PVT__send) {
            vlSelfRef.__PVT__first = (0U != ((IData)(vlSelfRef.__PVT__grant) 
                                             & ((((IData)(vlSelfRef.__PVT__rxQ__DOT__elts_0_last) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_last) 
                                                     << 4U) 
                                                    | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_last) 
                                                       << 3U))) 
                                                | (((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_last) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_last) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__elts_0_last))))));
        }
    }
    vlSelfRef.__PVT__xmit = __Vdly__xmit;
    vlSelfRef.__PVT__ioX_first_2 = __Vdly__ioX_first_2;
    vlSelfRef.__PVT__tx_c = __Vdly__tx_c;
    vlSelfRef.__PVT__ioX_first_1 = __Vdly__ioX_first_1;
    vlSelfRef.__PVT__tx_b = __Vdly__tx_b;
    vlSelfRef.__PVT__ioX_first_4 = __Vdly__ioX_first_4;
    vlSelfRef.__PVT__tx_e = __Vdly__tx_e;
    vlSelfRef.__PVT__ioX_first = __Vdly__ioX_first;
    vlSelfRef.__PVT__tx_a = __Vdly__tx_a;
    vlSelfRef.__PVT__ioX_first_3 = __Vdly__ioX_first_3;
    vlSelfRef.__PVT__tx_d = __Vdly__tx_d;
    vlSelfRef.__PVT__rx_e = __Vdly__rx_e;
    vlSelfRef.__PVT__rx_d = __Vdly__rx_d;
    vlSelfRef.__PVT__rx_c = __Vdly__rx_c;
    vlSelfRef.__PVT__rx_b = __Vdly__rx_b;
    vlSelfRef.__PVT__rx_a = __Vdly__rx_a;
    if (vlSelfRef.__PVT__txInc_sink__DOT__valid) {
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                        << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                      << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
            = ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b 
                << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                       << 0x28U) | 
                                      (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                        << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))) 
                                     >> 0x20U)));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffff0000U & vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b 
                  >> 4U));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffffU & vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a 
                  << 0x10U));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
            = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a 
                       >> 0x10U));
    }
    __PVT___GEN_15 = (0x3ffffU & ((vlSelfRef.__PVT__rx_e 
                                   >> 1U) | (vlSelfRef.__PVT__rx_e 
                                             >> 2U)));
    __PVT___GEN_11 = (0x3ffffU & ((vlSelfRef.__PVT__rx_d 
                                   >> 1U) | (vlSelfRef.__PVT__rx_d 
                                             >> 2U)));
    __PVT___GEN_7 = (0x3ffffU & ((vlSelfRef.__PVT__rx_c 
                                  >> 1U) | (vlSelfRef.__PVT__rx_c 
                                            >> 2U)));
    __PVT___GEN_3 = (0x3ffffU & ((vlSelfRef.__PVT__rx_b 
                                  >> 1U) | (vlSelfRef.__PVT__rx_b 
                                            >> 2U)));
    if (vlSelfRef.__PVT__rxInc_sink__DOT__valid) {
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                        << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                      << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
            = ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b 
                << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                       << 0x28U) | 
                                      (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                        << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))) 
                                     >> 0x20U)));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffff0000U & vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b 
                  >> 4U));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffffU & vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a 
                  << 0x10U));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
            = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a 
                       >> 0x10U));
    }
    __PVT___GEN = (0x3ffffU & ((vlSelfRef.__PVT__rx_a 
                                >> 1U) | (vlSelfRef.__PVT__rx_a 
                                          >> 2U)));
    __PVT___GEN_16 = (0x1ffffU & (__PVT___GEN_15 | 
                                  ((0x10000U & (vlSelfRef.__PVT__rx_e 
                                                >> 3U)) 
                                   | (0xffffU & (__PVT___GEN_15 
                                                 >> 2U)))));
    __PVT___GEN_12 = (0x1ffffU & (__PVT___GEN_11 | 
                                  ((0x10000U & (vlSelfRef.__PVT__rx_d 
                                                >> 3U)) 
                                   | (0xffffU & (__PVT___GEN_11 
                                                 >> 2U)))));
    __PVT___GEN_8 = (0x1ffffU & (__PVT___GEN_7 | ((0x10000U 
                                                   & (vlSelfRef.__PVT__rx_c 
                                                      >> 3U)) 
                                                  | (0xffffU 
                                                     & (__PVT___GEN_7 
                                                        >> 2U)))));
    __PVT___GEN_4 = (0x1ffffU & (__PVT___GEN_3 | ((0x10000U 
                                                   & (vlSelfRef.__PVT__rx_b 
                                                      >> 3U)) 
                                                  | (0xffffU 
                                                     & (__PVT___GEN_3 
                                                        >> 2U)))));
    __PVT___GEN_0 = (0x1ffffU & (__PVT___GEN | ((0x10000U 
                                                 & (vlSelfRef.__PVT__rx_a 
                                                    >> 3U)) 
                                                | (0xffffU 
                                                   & (__PVT___GEN 
                                                      >> 2U)))));
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
    __PVT___GEN_9 = (0x7fffU & (__PVT___GEN_8 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_c 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN_7 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_8 
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
    __PVT___GEN_1 = (0x7fffU & (__PVT___GEN_0 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_a 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_0 
                                                          >> 4U))))));
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
    vlSelfRef.__PVT__msbOH_4 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_e 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_e) 
                                                     | vlSelfRef.__PVT__mask_4)))));
    vlSelfRef.__PVT__msbOH_3 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_d 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_d) 
                                                     | vlSelfRef.__PVT__mask_3)))));
    vlSelfRef.__PVT__msbOH_2 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_c 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_c) 
                                                     | vlSelfRef.__PVT__mask_2)))));
    vlSelfRef.__PVT__msbOH_1 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_b 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_b) 
                                                     | vlSelfRef.__PVT__mask_1)))));
    vlSelfRef.__PVT__msbOH = (0xfffffU & (~ ((0x80000U 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__rx_a 
                                                   >> 0x13U)) 
                                                 << 0x13U)) 
                                             | (0x7ffffU 
                                                & ((~ vlSelfRef.__PVT__rx_a) 
                                                   | vlSelfRef.__PVT__mask)))));
    vlSelfRef.__PVT___msb_T_54 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_4 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_4));
    vlSelfRef.__PVT___msb_T_41 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_3 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_3));
    vlSelfRef.__PVT___msb_T_28 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_2 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_2));
    vlSelfRef.__PVT___msb_T_15 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_1 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_1));
    vlSelfRef.__PVT___msb_T_2 = (0x7fffU & ((0xfU & 
                                             (vlSelfRef.__PVT__msbOH 
                                              >> 0x10U)) 
                                            | vlSelfRef.__PVT__msbOH));
    vlSelfRef.__PVT___msb_T_56 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_54) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_54)));
    vlSelfRef.__PVT___msb_T_43 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_41) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_41)));
    vlSelfRef.__PVT___msb_T_30 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_28) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_28)));
    vlSelfRef.__PVT___msb_T_17 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_15) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_15)));
    vlSelfRef.__PVT___msb_T_4 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_2) 
                                           >> 8U) | (IData)(vlSelfRef.__PVT___msb_T_2)));
    vlSelfRef.__PVT___msb_T_58 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_56) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_56)));
    vlSelfRef.__PVT___msb_T_45 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_43) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_43)));
    vlSelfRef.__PVT___msb_T_32 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_30) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_30)));
    vlSelfRef.__PVT___msb_T_19 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_17) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_17)));
    vlSelfRef.__PVT___msb_T_6 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_4) 
                                        >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_4)));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__1(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_c2b_send_REG_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__io_c2b_send_REG));
    vlSelfRef.__PVT__io_c2b_send_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && (IData)(vlSelfRef.__PVT__send));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__2(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    SData/*9:0*/ __PVT___GEN_19;
    __PVT___GEN_19 = 0;
    SData/*8:0*/ __PVT___GEN_20;
    __PVT___GEN_20 = 0;
    CData/*0:0*/ __PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__io_c2b_data_REG_2 = (((((((1U 
                                                & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                ? vlSelfRef.__PVT__io_c2b_data_REG_1_0
                                                : 0U) 
                                              | ((2U 
                                                  & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                  ? vlSelfRef.__PVT__io_c2b_data_REG_1_1
                                                  : 0U)) 
                                             | ((4U 
                                                 & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                 ? vlSelfRef.__PVT__io_c2b_data_REG_1_2
                                                 : 0U)) 
                                            | ((8U 
                                                & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                ? vlSelfRef.__PVT__io_c2b_data_REG_1_3
                                                : 0U)) 
                                           | ((0x10U 
                                               & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                               ? vlSelfRef.__PVT__io_c2b_data_REG_1_4
                                               : 0U)) 
                                          | ((0x20U 
                                              & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                              ? vlSelfRef.__PVT__io_c2b_data_REG_1_5
                                              : 0U));
    vlSelfRef.__PVT__io_c2b_data_REG = vlSelfRef.__PVT__grant;
    vlSelfRef.__PVT__io_c2b_data_REG_1_5 = vlSelfRef.__PVT__rxQ__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_1 = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_2 = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_0 = vlSelfRef.__PVT__ioX_cq__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_4 = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_3 = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_data;
    __PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 
        = (1U & (~ (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)));
    if (((IData)(vlSelfRef.__Vcellinp__rxQ__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1) 
             | (IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__rxQ__DOT__valid_1) {
            vlSelfRef.__PVT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__PVT__rxQ__DOT__elts_1_data;
            vlSelfRef.__PVT__rxQ__DOT__elts_0_beats 
                = vlSelfRef.__PVT__rxQ__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__Vcellinp__rxQ__io_enq_bits_data;
            vlSelfRef.__PVT__rxQ__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__rxQ__DOT__elts_0_last = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1))) 
                                                  || (IData)(vlSelfRef.__PVT__rxQ__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__Vcellinp__rxQ__io_deq_ready)
          ? ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1))
          : ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0)))) {
        vlSelfRef.__PVT__rxQ__DOT__elts_1_data = vlSelfRef.__Vcellinp__rxQ__io_enq_bits_data;
        vlSelfRef.__PVT__rxQ__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__rxQ__DOT__elts_1_beats = 1U;
    }
    __PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_1)));
    if (((2U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__qb_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__qb_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qb_q__DOT__elts_0_beats;
        }
    }
    if (((2U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_data 
            = vlSelfRef.__PVT__qb_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_last 
            = vlSelfRef.__PVT__qb_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qb_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_2)));
    if (((4U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__qc_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__qc_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qc_q__DOT__elts_0_beats;
        }
    }
    if (((4U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_data 
            = vlSelfRef.__PVT__qc_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_last 
            = vlSelfRef.__PVT__qc_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qc_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow)));
    if (((1U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__qa_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__qa_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qa_q__DOT__elts_0_beats;
        }
    }
    if (((1U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq__DOT__elts_1_data = vlSelfRef.__PVT__qa_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq__DOT__elts_1_last = vlSelfRef.__PVT__qa_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qa_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_4)));
    if (((0x10U & (IData)(vlSelfRef.__PVT__allowed))
          ? ((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1) 
             | (IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__qe_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__qe_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qe_q__DOT__elts_0_beats;
        }
    }
    if (((0x10U & (IData)(vlSelfRef.__PVT__allowed))
          ? ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_data 
            = vlSelfRef.__PVT__qe_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_last 
            = vlSelfRef.__PVT__qe_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qe_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_3)));
    if (((8U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__qd_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__qd_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qd_q__DOT__elts_0_beats;
        }
    }
    if (((8U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_data 
            = vlSelfRef.__PVT__qd_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_last 
            = vlSelfRef.__PVT__qd_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qd_q__DOT__elts_0_beats;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__rxQ__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__rxQ__DOT__valid_1 = 0U;
    } else if (vlSelfRef.__Vcellinp__rxQ__io_deq_ready) {
        vlSelfRef.__Vdly__rxQ__DOT__valid_0 = ((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1) 
                                               | (IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4));
        vlSelfRef.__Vdly__rxQ__DOT__valid_1 = ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                                               & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1));
    } else {
        vlSelfRef.__Vdly__rxQ__DOT__valid_0 = ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                                               | (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0));
        vlSelfRef.__Vdly__rxQ__DOT__valid_1 = (((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                                                & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0)) 
                                               | (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1));
    }
    vlSelfRef.__PVT__rxQ__DOT__valid_1 = vlSelfRef.__Vdly__rxQ__DOT__valid_1;
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
    vlSelfRef.__PVT__rxQ__DOT__valid_0 = vlSelfRef.__Vdly__rxQ__DOT__valid_0;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0;
        if ((4U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0;
        if ((1U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_0;
        if ((0x10U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0;
        if ((8U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1));
        }
    }
    vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1;
    vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0;
    __PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__qb_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1) 
             | (IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qb_q__DOT__valid_1) {
            vlSelfRef.__PVT__qb_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qb_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qb_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qb_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qb_q__DOT__elts_0_data = 1U;
            vlSelfRef.__PVT__qb_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__qb_q__DOT__elts_0_last = ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1) 
                                                   && (IData)(vlSelfRef.__PVT__qb_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__qb_q_io_deq_ready)
          ? ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1))
          : ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qb_q__DOT__elts_1_data = 1U;
        vlSelfRef.__PVT__qb_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__qb_q__DOT__elts_1_beats = 3U;
    }
    __PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__qc_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1) 
             | (IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qc_q__DOT__valid_1) {
            vlSelfRef.__PVT__qc_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qc_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qc_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qc_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qc_q__DOT__elts_0_data = 2U;
            vlSelfRef.__PVT__qc_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__qc_q__DOT__elts_0_last = ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1) 
                                                   && (IData)(vlSelfRef.__PVT__qc_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__qc_q_io_deq_ready)
          ? ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1))
          : ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qc_q__DOT__elts_1_data = 2U;
        vlSelfRef.__PVT__qc_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__qc_q__DOT__elts_1_beats = 3U;
    }
    __PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1)) 
           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
    if (((IData)(vlSelfRef.__PVT__qa_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1) 
             | (IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qa_q__DOT__valid_1) {
            vlSelfRef.__PVT__qa_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qa_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__qa_q__DOT__elts_1_last;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qa_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qa_q__DOT__elts_0_data 
                = vlSelfRef.io_sa_bits_data;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_last 
                = vlSelfRef.io_sa_bits_last;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.io_sa_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__qa_q_io_deq_ready)
          ? ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1))
          : ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qa_q__DOT__elts_1_data = vlSelfRef.io_sa_bits_data;
        vlSelfRef.__PVT__qa_q__DOT__elts_1_last = vlSelfRef.io_sa_bits_last;
        vlSelfRef.__PVT__qa_q__DOT__elts_1_beats = vlSelfRef.io_sa_bits_beats;
    }
    __PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__qe_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1) 
             | (IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qe_q__DOT__valid_1) {
            vlSelfRef.__PVT__qe_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qe_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qe_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qe_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qe_q__DOT__elts_0_data 
                = (4U | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                           & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                           ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                           : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                          [0U]) << 0x10U));
            vlSelfRef.__PVT__qe_q__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__qe_q__DOT__elts_0_last = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1))) 
                                                   || (IData)(vlSelfRef.__PVT__qe_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__qe_q_io_deq_ready)
          ? ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1))
          : ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qe_q__DOT__elts_1_data = (4U 
                                                   | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                                        & (0U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                                        ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                                        : 
                                                       vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                                       [0U]) 
                                                      << 0x10U));
        vlSelfRef.__PVT__qe_q__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__qe_q__DOT__elts_1_beats = 1U;
    }
    vlSelfRef.__PVT__allowReturn = (1U & (~ (((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0) 
                                              | ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0) 
                                                 | ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                                    | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0))))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__xmit)))));
    __PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1)) 
           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid_0));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__qb_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qb_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qc_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qc_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qa_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qa_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qe_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qe_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qd_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qd_q__DOT__valid_1 = 0U;
    } else {
        if (vlSelfRef.__PVT__qb_q_io_deq_ready) {
            vlSelfRef.__Vdly__qb_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1) 
                 | (IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qb_q__DOT__valid_1 = 
                ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qb_q__DOT__valid_0 = 
                ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0));
            vlSelfRef.__Vdly__qb_q__DOT__valid_1 = 
                (((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qc_q_io_deq_ready) {
            vlSelfRef.__Vdly__qc_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1) 
                 | (IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qc_q__DOT__valid_1 = 
                ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qc_q__DOT__valid_0 = 
                ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0));
            vlSelfRef.__Vdly__qc_q__DOT__valid_1 = 
                (((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qa_q_io_deq_ready) {
            vlSelfRef.__Vdly__qa_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1) 
                 | (IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qa_q__DOT__valid_1 = 
                ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qa_q__DOT__valid_0 = 
                ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0));
            vlSelfRef.__Vdly__qa_q__DOT__valid_1 = 
                (((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qe_q_io_deq_ready) {
            vlSelfRef.__Vdly__qe_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1) 
                 | (IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qe_q__DOT__valid_1 = 
                ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qe_q__DOT__valid_0 = 
                ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0));
            vlSelfRef.__Vdly__qe_q__DOT__valid_1 = 
                (((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qd_q_io_deq_ready) {
            vlSelfRef.__Vdly__qd_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1) 
                 | (IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qd_q__DOT__valid_1 = 
                ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qd_q__DOT__valid_0 = 
                ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0));
            vlSelfRef.__Vdly__qd_q__DOT__valid_1 = 
                (((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1));
        }
    }
    if (((IData)(vlSelfRef.__PVT__qd_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1) 
             | (IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qd_q__DOT__valid_1) {
            vlSelfRef.__PVT__qd_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qd_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__qd_q__DOT__elts_1_last;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qd_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qd_q__DOT__elts_0_data 
                = vlSelfRef.io_sd_bits_data;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_last 
                = vlSelfRef.io_sd_bits_last;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.io_sd_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__qd_q_io_deq_ready)
          ? ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1))
          : ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qd_q__DOT__elts_1_data = vlSelfRef.io_sd_bits_data;
        vlSelfRef.__PVT__qd_q__DOT__elts_1_last = vlSelfRef.io_sd_bits_last;
        vlSelfRef.__PVT__qd_q__DOT__elts_1_beats = vlSelfRef.io_sd_bits_beats;
    }
    vlSelfRef.__PVT__qb_q__DOT__valid_1 = vlSelfRef.__Vdly__qb_q__DOT__valid_1;
    vlSelfRef.__PVT__qb_q__DOT__valid_0 = vlSelfRef.__Vdly__qb_q__DOT__valid_0;
    vlSelfRef.__PVT__qc_q__DOT__valid_1 = vlSelfRef.__Vdly__qc_q__DOT__valid_1;
    vlSelfRef.__PVT__qc_q__DOT__valid_0 = vlSelfRef.__Vdly__qc_q__DOT__valid_0;
    vlSelfRef.io_sa_bits_last = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelfRef.io_sa_bits_beats = (0x1fU & ((IData)(3U) 
                                           + (((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                ? 0U
                                                : (
                                                   (0x1eU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)))) 
                                              + ((1U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                  ? 
                                                 (((6U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)) 
                                                   << 1U) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size) 
                                                         >> 1U))))
                                                  : 0U))));
    vlSelfRef.__PVT__qa_q__DOT__valid_0 = vlSelfRef.__Vdly__qa_q__DOT__valid_0;
    __Vtemp_2[0U] = ((((0x2fU >= (0x3fU & ((IData)(3U) 
                                           * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source))))
                        ? (7U & (IData)((0xfac688fac688ULL 
                                         >> (0x3fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source))))))
                        : 0U) << 0x10U) | ((0x6000U 
                                            & ((0xaaaa5555U 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source), 1U))) 
                                               << 0xdU)) 
                                           | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size) 
                                                << 9U) 
                                               | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                                    ? 
                                                   (7U 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                                       >> 0xcU))
                                                    : 0U) 
                                                  << 6U)) 
                                              | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode) 
                                                 << 3U))));
    __Vtemp_2[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                      ? ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                          << 0x1bU) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                       >> 5U)) : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address);
    __Vtemp_2[2U] = (IData)(((QData)((IData)(((1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                               ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                               : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                             << 0x20U));
    __Vtemp_2[3U] = (IData)((((QData)((IData)(((1U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                              << 0x20U) >> 0x20U));
    vlSelfRef.io_sa_bits_data = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U)))
                                   ? 0U : (__Vtemp_2[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))) 
                                 | (__Vtemp_2[(3U & 
                                               (VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U) 
                                                >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))));
    vlSelfRef.__PVT__qa_q__DOT__valid_1 = vlSelfRef.__Vdly__qa_q__DOT__valid_1;
    vlSelfRef.__PVT__qe_q__DOT__valid_1 = vlSelfRef.__Vdly__qe_q__DOT__valid_1;
    vlSelfRef.__PVT__qe_q__DOT__valid_0 = vlSelfRef.__Vdly__qe_q__DOT__valid_0;
    vlSelfRef.__PVT__f_valid = ((IData)(vlSelfRef.__PVT__allowReturn) 
                                & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0));
    vlSelfRef.io_sd_bits_last = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelfRef.__PVT__qd_q__DOT__valid_0 = vlSelfRef.__Vdly__qd_q__DOT__valid_0;
    vlSelfRef.io_sd_bits_beats = (0x1fU & ((IData)(1U) 
                                           + (((1U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode))
                                                ? (
                                                   (0x1eU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size)) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size)))
                                                : 0U) 
                                              + (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelfRef.__PVT__qd_q__DOT__valid_1 = vlSelfRef.__Vdly__qd_q__DOT__valid_1;
    vlSelfRef.__PVT__ioX_delta_1 = (0x1fffffU & (vlSelfRef.__PVT__tx_b 
                                                 - (IData)(vlSelfRef.__PVT__qb_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_2 = (0x1fffffU & (vlSelfRef.__PVT__tx_c 
                                                 - (IData)(vlSelfRef.__PVT__qc_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta = (0x1fffffU & (vlSelfRef.__PVT__tx_a 
                                               - (IData)(vlSelfRef.__PVT__qa_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_4 = (0x1fffffU & (vlSelfRef.__PVT__tx_e 
                                                 - (IData)(vlSelfRef.__PVT__qe_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__requests = ((((IData)(vlSelfRef.__PVT__f_valid) 
                                   << 5U) | (((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                     << 2U) | (((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0))));
    vlSelfRef.__PVT__ioX_delta_3 = (0x1fffffU & (vlSelfRef.__PVT__tx_d 
                                                 - (IData)(vlSelfRef.__PVT__qd_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_allow_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_1)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_1)));
    vlSelfRef.__PVT__ioX_allow_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_2)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_2)));
    vlSelfRef.__PVT__ioX_allow = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first)) 
                                        | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta)));
    vlSelfRef.__PVT__ioX_allow_4 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_4)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_4)));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__requests));
    vlSelfRef.__PVT__ioX_allow_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_3)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_3)));
    vlSelfRef.__PVT__qb_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_1));
    vlSelfRef.__PVT__qc_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_2));
    vlSelfRef.__PVT__qa_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow));
    vlSelfRef.__PVT__qe_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_4));
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
    vlSelfRef.__PVT__qd_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_3));
    __PVT___GEN_20 = (0x1ffU & ((IData)(__PVT___GEN_19) 
                                | ((0x100U & ((IData)(__PVT___readys_filter_T_1) 
                                              << 3U)) 
                                   | (0xffU & ((IData)(__PVT___GEN_19) 
                                               >> 2U)))));
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
    vlSelfRef.__PVT___readys_readys_T_2 = (0x3fU & 
                                           (((IData)(vlSelfRef.__PVT__readys_unready) 
                                             >> 6U) 
                                            & (IData)(vlSelfRef.__PVT__readys_unready)));
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
    vlSelfRef.__Vcellinp__rxQ__io_deq_ready = ((IData)(vlSelfRef.__PVT__allowReturn) 
                                               & ((IData)(vlSelfRef.__PVT__allowed) 
                                                  >> 5U));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__3(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx));
    vlSelfRef.__PVT__txInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__rxInc_sink__DOT__valid_reg = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__valid));
    vlSelfRef.__PVT__txInc_sink__DOT__valid_reg = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__valid));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__txInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
    vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__4(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__5(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__6(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__txInc_sink__DOT__ridx_gray = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__rxInc_sink__DOT__ridx_gray = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx));
    vlSelfRef.__PVT__txInc_sink__DOT__ridx = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                              & ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx_ridx_bin) 
                                                 + (IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__rxInc_sink__DOT__ridx = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                              & ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx_ridx_bin) 
                                                 + (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)));
    vlSelfRef.__PVT__txInc_sink__DOT__valid = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                               & ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx) 
                                                  != (IData)(vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelfRef.__PVT__rxInc_sink__DOT__valid = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                               & ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx) 
                                                  != (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__0(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header;
    __Vtemp_2[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                     & (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                >> 0x22U)));
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                            ? (IData)(
                                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                       >> 1U))
                                                            : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                             ? (IData)(
                                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                        >> 1U))
                                                             : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                             >> 0x20U));
    vlSelfRef.io_sd_bits_data = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
                                   ? 0U : (__Vtemp_2[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
                                 | (__Vtemp_2[(3U & 
                                               (VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                                                >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__7(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_c2b_rst_reg__DOT__reg_0 = vlSymsp->TOP.reset;
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__0(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__0\n"); );
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
    IData/*19:0*/ __Vdly__tx_e;
    __Vdly__tx_e = 0;
    CData/*0:0*/ __Vdly__ioX_first_4;
    __Vdly__ioX_first_4 = 0;
    IData/*19:0*/ __Vdly__tx_c;
    __Vdly__tx_c = 0;
    CData/*0:0*/ __Vdly__ioX_first_2;
    __Vdly__ioX_first_2 = 0;
    IData/*19:0*/ __Vdly__tx_b;
    __Vdly__tx_b = 0;
    CData/*0:0*/ __Vdly__ioX_first_1;
    __Vdly__ioX_first_1 = 0;
    IData/*19:0*/ __Vdly__tx_a;
    __Vdly__tx_a = 0;
    CData/*0:0*/ __Vdly__ioX_first;
    __Vdly__ioX_first = 0;
    IData/*19:0*/ __Vdly__rx_e;
    __Vdly__rx_e = 0;
    IData/*19:0*/ __Vdly__rx_d;
    __Vdly__rx_d = 0;
    CData/*1:0*/ __Vdly__xmit;
    __Vdly__xmit = 0;
    IData/*19:0*/ __Vdly__rx_c;
    __Vdly__rx_c = 0;
    IData/*19:0*/ __Vdly__rx_b;
    __Vdly__rx_b = 0;
    IData/*19:0*/ __Vdly__rx_a;
    __Vdly__rx_a = 0;
    IData/*19:0*/ __Vdly__tx_d;
    __Vdly__tx_d = 0;
    CData/*0:0*/ __Vdly__ioX_first_3;
    __Vdly__ioX_first_3 = 0;
    // Body
    vlSelfRef.__Vdly__qb_q__DOT__valid_0 = vlSelfRef.__PVT__qb_q__DOT__valid_0;
    vlSelfRef.__Vdly__qb_q__DOT__valid_1 = vlSelfRef.__PVT__qb_q__DOT__valid_1;
    vlSelfRef.__Vdly__qc_q__DOT__valid_0 = vlSelfRef.__PVT__qc_q__DOT__valid_0;
    vlSelfRef.__Vdly__qc_q__DOT__valid_1 = vlSelfRef.__PVT__qc_q__DOT__valid_1;
    vlSelfRef.__Vdly__qe_q__DOT__valid_0 = vlSelfRef.__PVT__qe_q__DOT__valid_0;
    vlSelfRef.__Vdly__qe_q__DOT__valid_1 = vlSelfRef.__PVT__qe_q__DOT__valid_1;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__send) 
                         != (0U != ((IData)(vlSelfRef.__PVT__grant) 
                                    & (IData)(vlSelfRef.__PVT__requests)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:14237: Assertion failed in %NysyxSoCFull.fpga.chiplink.tx: Assertion failed at TX.scala:106\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 14237, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:14239: Assertion failed in %NysyxSoCFull.fpga.chiplink.tx\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 14239, "", false);
    }
    vlSelfRef.__Vdly__qa_q__DOT__valid_0 = vlSelfRef.__PVT__qa_q__DOT__valid_0;
    vlSelfRef.__Vdly__qd_q__DOT__valid_0 = vlSelfRef.__PVT__qd_q__DOT__valid_0;
    vlSelfRef.__Vdly__qa_q__DOT__valid_1 = vlSelfRef.__PVT__qa_q__DOT__valid_1;
    vlSelfRef.__Vdly__qd_q__DOT__valid_1 = vlSelfRef.__PVT__qd_q__DOT__valid_1;
    vlSelfRef.__Vdly__rxQ__DOT__valid_1 = vlSelfRef.__PVT__rxQ__DOT__valid_1;
    vlSelfRef.__Vdly__rxQ__DOT__valid_0 = vlSelfRef.__PVT__rxQ__DOT__valid_0;
    __Vdly__xmit = vlSelfRef.__PVT__xmit;
    __Vdly__ioX_first_2 = vlSelfRef.__PVT__ioX_first_2;
    __Vdly__ioX_first_1 = vlSelfRef.__PVT__ioX_first_1;
    __Vdly__tx_c = vlSelfRef.__PVT__tx_c;
    __Vdly__tx_b = vlSelfRef.__PVT__tx_b;
    __Vdly__ioX_first_4 = vlSelfRef.__PVT__ioX_first_4;
    __Vdly__tx_e = vlSelfRef.__PVT__tx_e;
    __Vdly__ioX_first = vlSelfRef.__PVT__ioX_first;
    __Vdly__tx_a = vlSelfRef.__PVT__tx_a;
    __Vdly__ioX_first_3 = vlSelfRef.__PVT__ioX_first_3;
    __Vdly__tx_d = vlSelfRef.__PVT__tx_d;
    __Vdly__rx_e = vlSelfRef.__PVT__rx_e;
    __Vdly__rx_d = vlSelfRef.__PVT__rx_d;
    __Vdly__rx_c = vlSelfRef.__PVT__rx_c;
    __Vdly__rx_b = vlSelfRef.__PVT__rx_b;
    __Vdly__rx_a = vlSelfRef.__PVT__rx_a;
    vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 = vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1;
    vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0;
    vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 = vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0;
    if (vlSymsp->TOP.reset) {
        __Vdly__xmit = 0U;
        __Vdly__tx_c = 0U;
        __Vdly__ioX_first_2 = 1U;
        __Vdly__tx_b = 0U;
        __Vdly__ioX_first_1 = 1U;
        __Vdly__tx_e = 0U;
        __Vdly__ioX_first_4 = 1U;
        __Vdly__tx_a = 0U;
        __Vdly__ioX_first = 1U;
        __Vdly__tx_d = 0U;
        __Vdly__ioX_first_3 = 1U;
        __Vdly__rx_e = 0U;
        __Vdly__rx_d = 0U;
        __Vdly__rx_c = 0U;
        __Vdly__rx_b = 0U;
        __Vdly__rx_a = 0U;
        vlSelfRef.__PVT__state = 0U;
        vlSelfRef.__PVT__readys_mask = 0x3fU;
        vlSelfRef.__PVT__first = 1U;
    } else {
        if ((((IData)(vlSelfRef.__PVT__allowed) >> 5U) 
             & (IData)(vlSelfRef.__PVT__f_valid))) {
            __Vdly__xmit = 3U;
        } else if ((0U != (IData)(vlSelfRef.__PVT__xmit))) {
            __Vdly__xmit = (3U & ((IData)(vlSelfRef.__PVT__xmit) 
                                  - (IData)(1U)));
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_c_T 
            = ((IData)(vlSelfRef.__PVT__qc_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0));
        __Vdly__tx_c = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_c_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_2))
                                      ? vlSelfRef.__PVT__ioX_delta_2
                                      : vlSelfRef.__PVT__tx_c) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_c_T) {
            __Vdly__ioX_first_2 = vlSelfRef.__PVT__qc_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_bT 
            = ((IData)(vlSelfRef.__PVT__qb_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0));
        __Vdly__tx_b = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_bT) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_1))
                                      ? vlSelfRef.__PVT__ioX_delta_1
                                      : vlSelfRef.__PVT__tx_b) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            << 4U) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 0x1cU))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_bT) {
            __Vdly__ioX_first_1 = vlSelfRef.__PVT__qb_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_e_T 
            = ((IData)(vlSelfRef.__PVT__qe_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0));
        __Vdly__tx_e = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_e_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_4))
                                      ? vlSelfRef.__PVT__ioX_delta_4
                                      : vlSelfRef.__PVT__tx_e) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_e_T) {
            __Vdly__ioX_first_4 = vlSelfRef.__PVT__qe_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_a_T 
            = ((IData)(vlSelfRef.__PVT__qa_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0));
        __Vdly__tx_a = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_a_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first))
                                      ? vlSelfRef.__PVT__ioX_delta
                                      : vlSelfRef.__PVT__tx_a) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              >> 0x10U))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_a_T) {
            __Vdly__ioX_first = vlSelfRef.__PVT__qa_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_d_T 
            = ((IData)(vlSelfRef.__PVT__qd_q_io_deq_ready) 
               & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0));
        __Vdly__tx_d = (0xfffffU & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_d_T) 
                                      & (IData)(vlSelfRef.__PVT__ioX_first_3))
                                      ? vlSelfRef.__PVT__ioX_delta_3
                                      : vlSelfRef.__PVT__tx_d) 
                                    + ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0)
                                        ? ((vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                            << 0xcU) 
                                           | (vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                              >> 0x14U))
                                        : 0U)));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___ioX_tx_d_T) {
            __Vdly__ioX_first_3 = vlSelfRef.__PVT__qd_q__DOT__elts_0_last;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_e
                            : (vlSelfRef.__PVT__rx_e 
                               & vlSelfRef.__PVT__mask_4)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                              : 0U)));
        __Vdly__rx_e = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_4));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_d
                            : (vlSelfRef.__PVT__rx_d 
                               & vlSelfRef.__PVT__mask_3)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & ((vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              << 0xcU) 
                                             | (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                >> 0x14U)))
                              : 0U)));
        __Vdly__rx_d = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_3));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_c
                            : (vlSelfRef.__PVT__rx_c 
                               & vlSelfRef.__PVT__mask_2)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                             >> 8U))
                              : 0U)));
        __Vdly__rx_c = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_2));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1 = 
            (0x1fffffU & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                            ? vlSelfRef.__PVT__rx_b
                            : (vlSelfRef.__PVT__rx_b 
                               & vlSelfRef.__PVT__mask_1)) 
                          + ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                              ? (0xfffffU & ((vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              << 4U) 
                                             | (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                >> 0x1cU)))
                              : 0U)));
        __Vdly__rx_b = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z_1));
        vlSelfRef.__PVT__unnamedblk1__DOT__rx_z = (0x1fffffU 
                                                   & (((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)
                                                        ? vlSelfRef.__PVT__rx_a
                                                        : 
                                                       (vlSelfRef.__PVT__rx_a 
                                                        & vlSelfRef.__PVT__mask)) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0)
                                                        ? 
                                                       (0xfffffU 
                                                        & ((vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                            << 0x10U) 
                                                           | (vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              >> 0x10U)))
                                                        : 0U)));
        __Vdly__rx_a = ((0x100000U & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z)
                         ? 0xfffffU : (0xfffffU & vlSelfRef.__PVT__unnamedblk1__DOT__rx_z));
        if (vlSelfRef.__PVT__first) {
            vlSelfRef.__PVT__state = vlSelfRef.__PVT__winner;
        }
        if (((IData)(vlSelfRef.__PVT__first) & (0U 
                                                != (IData)(vlSelfRef.__PVT__requests)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T 
                = ((~ (IData)(vlSelfRef.__PVT___readys_readys_T_2)) 
                   & (IData)(vlSelfRef.__PVT__requests));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                   | (0x3eU & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                               << 1U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6 
                = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3) 
                   | (0x3cU & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_3) 
                               << 2U)));
            vlSelfRef.__PVT__readys_mask = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6) 
                                            | (0x30U 
                                               & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T_6) 
                                                  << 4U)));
        }
        if (vlSelfRef.__PVT__send) {
            vlSelfRef.__PVT__first = (0U != ((IData)(vlSelfRef.__PVT__grant) 
                                             & ((((IData)(vlSelfRef.__PVT__rxQ__DOT__elts_0_last) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_last) 
                                                     << 4U) 
                                                    | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_last) 
                                                       << 3U))) 
                                                | (((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_last) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_last) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__elts_0_last))))));
        }
    }
    vlSelfRef.__PVT__xmit = __Vdly__xmit;
    vlSelfRef.__PVT__ioX_first_2 = __Vdly__ioX_first_2;
    vlSelfRef.__PVT__tx_c = __Vdly__tx_c;
    vlSelfRef.__PVT__ioX_first_1 = __Vdly__ioX_first_1;
    vlSelfRef.__PVT__tx_b = __Vdly__tx_b;
    vlSelfRef.__PVT__ioX_first_4 = __Vdly__ioX_first_4;
    vlSelfRef.__PVT__tx_e = __Vdly__tx_e;
    vlSelfRef.__PVT__ioX_first = __Vdly__ioX_first;
    vlSelfRef.__PVT__tx_a = __Vdly__tx_a;
    vlSelfRef.__PVT__ioX_first_3 = __Vdly__ioX_first_3;
    vlSelfRef.__PVT__tx_d = __Vdly__tx_d;
    vlSelfRef.__PVT__rx_e = __Vdly__rx_e;
    vlSelfRef.__PVT__rx_d = __Vdly__rx_d;
    vlSelfRef.__PVT__rx_c = __Vdly__rx_c;
    vlSelfRef.__PVT__rx_b = __Vdly__rx_b;
    vlSelfRef.__PVT__rx_a = __Vdly__rx_a;
    if (vlSelfRef.__PVT__txInc_sink__DOT__valid) {
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                        << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                      << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
            = ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b 
                << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                       << 0x28U) | 
                                      (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                        << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))) 
                                     >> 0x20U)));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffff0000U & vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b 
                  >> 4U));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffffU & vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a 
                  << 0x10U));
        vlSelfRef.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
            = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a 
                       >> 0x10U));
    }
    __PVT___GEN_15 = (0x3ffffU & ((vlSelfRef.__PVT__rx_e 
                                   >> 1U) | (vlSelfRef.__PVT__rx_e 
                                             >> 2U)));
    __PVT___GEN_11 = (0x3ffffU & ((vlSelfRef.__PVT__rx_d 
                                   >> 1U) | (vlSelfRef.__PVT__rx_d 
                                             >> 2U)));
    __PVT___GEN_7 = (0x3ffffU & ((vlSelfRef.__PVT__rx_c 
                                  >> 1U) | (vlSelfRef.__PVT__rx_c 
                                            >> 2U)));
    __PVT___GEN_3 = (0x3ffffU & ((vlSelfRef.__PVT__rx_b 
                                  >> 1U) | (vlSelfRef.__PVT__rx_b 
                                            >> 2U)));
    if (vlSelfRef.__PVT__rxInc_sink__DOT__valid) {
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                        << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                      << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
            = ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b 
                << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                       << 0x28U) | 
                                      (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                        << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))) 
                                     >> 0x20U)));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffff0000U & vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b 
                  >> 4U));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
            = ((0xffffU & vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]) 
               | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a 
                  << 0x10U));
        vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
            = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a 
                       >> 0x10U));
    }
    __PVT___GEN = (0x3ffffU & ((vlSelfRef.__PVT__rx_a 
                                >> 1U) | (vlSelfRef.__PVT__rx_a 
                                          >> 2U)));
    __PVT___GEN_16 = (0x1ffffU & (__PVT___GEN_15 | 
                                  ((0x10000U & (vlSelfRef.__PVT__rx_e 
                                                >> 3U)) 
                                   | (0xffffU & (__PVT___GEN_15 
                                                 >> 2U)))));
    __PVT___GEN_12 = (0x1ffffU & (__PVT___GEN_11 | 
                                  ((0x10000U & (vlSelfRef.__PVT__rx_d 
                                                >> 3U)) 
                                   | (0xffffU & (__PVT___GEN_11 
                                                 >> 2U)))));
    __PVT___GEN_8 = (0x1ffffU & (__PVT___GEN_7 | ((0x10000U 
                                                   & (vlSelfRef.__PVT__rx_c 
                                                      >> 3U)) 
                                                  | (0xffffU 
                                                     & (__PVT___GEN_7 
                                                        >> 2U)))));
    __PVT___GEN_4 = (0x1ffffU & (__PVT___GEN_3 | ((0x10000U 
                                                   & (vlSelfRef.__PVT__rx_b 
                                                      >> 3U)) 
                                                  | (0xffffU 
                                                     & (__PVT___GEN_3 
                                                        >> 2U)))));
    __PVT___GEN_0 = (0x1ffffU & (__PVT___GEN | ((0x10000U 
                                                 & (vlSelfRef.__PVT__rx_a 
                                                    >> 3U)) 
                                                | (0xffffU 
                                                   & (__PVT___GEN 
                                                      >> 2U)))));
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
    __PVT___GEN_9 = (0x7fffU & (__PVT___GEN_8 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_c 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN_7 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_8 
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
    __PVT___GEN_1 = (0x7fffU & (__PVT___GEN_0 | ((0x4000U 
                                                  & (vlSelfRef.__PVT__rx_a 
                                                     >> 5U)) 
                                                 | ((0x2000U 
                                                     & (__PVT___GEN 
                                                        >> 4U)) 
                                                    | (0x1fffU 
                                                       & (__PVT___GEN_0 
                                                          >> 4U))))));
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
    vlSelfRef.__PVT__msbOH_4 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_e 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_e) 
                                                     | vlSelfRef.__PVT__mask_4)))));
    vlSelfRef.__PVT__msbOH_3 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_d 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_d) 
                                                     | vlSelfRef.__PVT__mask_3)))));
    vlSelfRef.__PVT__msbOH_2 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_c 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_c) 
                                                     | vlSelfRef.__PVT__mask_2)))));
    vlSelfRef.__PVT__msbOH_1 = (0xfffffU & (~ ((0x80000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__rx_b 
                                                     >> 0x13U)) 
                                                   << 0x13U)) 
                                               | (0x7ffffU 
                                                  & ((~ vlSelfRef.__PVT__rx_b) 
                                                     | vlSelfRef.__PVT__mask_1)))));
    vlSelfRef.__PVT__msbOH = (0xfffffU & (~ ((0x80000U 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__rx_a 
                                                   >> 0x13U)) 
                                                 << 0x13U)) 
                                             | (0x7ffffU 
                                                & ((~ vlSelfRef.__PVT__rx_a) 
                                                   | vlSelfRef.__PVT__mask)))));
    vlSelfRef.__PVT___msb_T_54 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_4 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_4));
    vlSelfRef.__PVT___msb_T_41 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_3 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_3));
    vlSelfRef.__PVT___msb_T_28 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_2 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_2));
    vlSelfRef.__PVT___msb_T_15 = (0x7fffU & ((0xfU 
                                              & (vlSelfRef.__PVT__msbOH_1 
                                                 >> 0x10U)) 
                                             | vlSelfRef.__PVT__msbOH_1));
    vlSelfRef.__PVT___msb_T_2 = (0x7fffU & ((0xfU & 
                                             (vlSelfRef.__PVT__msbOH 
                                              >> 0x10U)) 
                                            | vlSelfRef.__PVT__msbOH));
    vlSelfRef.__PVT___msb_T_56 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_54) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_54)));
    vlSelfRef.__PVT___msb_T_43 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_41) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_41)));
    vlSelfRef.__PVT___msb_T_30 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_28) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_28)));
    vlSelfRef.__PVT___msb_T_17 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_15) 
                                            >> 8U) 
                                           | (IData)(vlSelfRef.__PVT___msb_T_15)));
    vlSelfRef.__PVT___msb_T_4 = (0x7fU & (((IData)(vlSelfRef.__PVT___msb_T_2) 
                                           >> 8U) | (IData)(vlSelfRef.__PVT___msb_T_2)));
    vlSelfRef.__PVT___msb_T_58 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_56) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_56)));
    vlSelfRef.__PVT___msb_T_45 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_43) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_43)));
    vlSelfRef.__PVT___msb_T_32 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_30) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_30)));
    vlSelfRef.__PVT___msb_T_19 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_17) 
                                         >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_17)));
    vlSelfRef.__PVT___msb_T_6 = (7U & (((IData)(vlSelfRef.__PVT___msb_T_4) 
                                        >> 4U) | (IData)(vlSelfRef.__PVT___msb_T_4)));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__2(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    SData/*9:0*/ __PVT___GEN_19;
    __PVT___GEN_19 = 0;
    SData/*8:0*/ __PVT___GEN_20;
    __PVT___GEN_20 = 0;
    CData/*0:0*/ __PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    CData/*0:0*/ __PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4;
    __PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__io_c2b_data_REG_2 = (((((((1U 
                                                & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                ? vlSelfRef.__PVT__io_c2b_data_REG_1_0
                                                : 0U) 
                                              | ((2U 
                                                  & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                  ? vlSelfRef.__PVT__io_c2b_data_REG_1_1
                                                  : 0U)) 
                                             | ((4U 
                                                 & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                 ? vlSelfRef.__PVT__io_c2b_data_REG_1_2
                                                 : 0U)) 
                                            | ((8U 
                                                & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                                ? vlSelfRef.__PVT__io_c2b_data_REG_1_3
                                                : 0U)) 
                                           | ((0x10U 
                                               & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                               ? vlSelfRef.__PVT__io_c2b_data_REG_1_4
                                               : 0U)) 
                                          | ((0x20U 
                                              & (IData)(vlSelfRef.__PVT__io_c2b_data_REG))
                                              ? vlSelfRef.__PVT__io_c2b_data_REG_1_5
                                              : 0U));
    vlSelfRef.__PVT__io_c2b_data_REG = vlSelfRef.__PVT__grant;
    vlSelfRef.__PVT__io_c2b_data_REG_1_5 = vlSelfRef.__PVT__rxQ__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_1 = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_2 = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_0 = vlSelfRef.__PVT__ioX_cq__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_4 = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_data;
    vlSelfRef.__PVT__io_c2b_data_REG_1_3 = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_data;
    __PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4 
        = (1U & (~ (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1)));
    if (((IData)(vlSelfRef.__Vcellinp__rxQ__io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1) 
             | (IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__rxQ__DOT__valid_1) {
            vlSelfRef.__PVT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__PVT__rxQ__DOT__elts_1_data;
            vlSelfRef.__PVT__rxQ__DOT__elts_0_beats 
                = vlSelfRef.__PVT__rxQ__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__rxQ__DOT__elts_0_data 
                = vlSelfRef.__Vcellinp__rxQ__io_enq_bits_data;
            vlSelfRef.__PVT__rxQ__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__rxQ__DOT__elts_0_last = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1))) 
                                                  || (IData)(vlSelfRef.__PVT__rxQ__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__Vcellinp__rxQ__io_deq_ready)
          ? ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1))
          : ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0)))) {
        vlSelfRef.__PVT__rxQ__DOT__elts_1_data = vlSelfRef.__Vcellinp__rxQ__io_enq_bits_data;
        vlSelfRef.__PVT__rxQ__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__rxQ__DOT__elts_1_beats = 1U;
    }
    __PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_1)));
    if (((2U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_data 
                = vlSelfRef.__PVT__qb_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_last 
                = vlSelfRef.__PVT__qb_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qb_q__DOT__elts_0_beats;
        }
    }
    if (((2U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_data 
            = vlSelfRef.__PVT__qb_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_last 
            = vlSelfRef.__PVT__qb_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_1__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qb_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_2)));
    if (((4U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_data 
                = vlSelfRef.__PVT__qc_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_last 
                = vlSelfRef.__PVT__qc_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qc_q__DOT__elts_0_beats;
        }
    }
    if (((4U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_data 
            = vlSelfRef.__PVT__qc_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_last 
            = vlSelfRef.__PVT__qc_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_2__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qc_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow)));
    if (((1U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_data 
                = vlSelfRef.__PVT__qa_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_last 
                = vlSelfRef.__PVT__qa_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qa_q__DOT__elts_0_beats;
        }
    }
    if (((1U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq__DOT__elts_1_data = vlSelfRef.__PVT__qa_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq__DOT__elts_1_last = vlSelfRef.__PVT__qa_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qa_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_4)));
    if (((0x10U & (IData)(vlSelfRef.__PVT__allowed))
          ? ((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1) 
             | (IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_data 
                = vlSelfRef.__PVT__qe_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_last 
                = vlSelfRef.__PVT__qe_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qe_q__DOT__elts_0_beats;
        }
    }
    if (((0x10U & (IData)(vlSelfRef.__PVT__allowed))
          ? ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_data 
            = vlSelfRef.__PVT__qe_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_last 
            = vlSelfRef.__PVT__qe_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_4__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qe_q__DOT__elts_0_beats;
    }
    __PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1)) 
           & ((IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0) 
              & (IData)(vlSelfRef.__PVT__ioX_allow_3)));
    if (((8U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1) 
          | (IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1) {
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_data;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_last;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_data 
                = vlSelfRef.__PVT__qd_q__DOT__elts_0_data;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_last 
                = vlSelfRef.__PVT__qd_q__DOT__elts_0_last;
            vlSelfRef.__PVT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qd_q__DOT__elts_0_beats;
        }
    }
    if (((8U & (IData)(vlSelfRef.__PVT__allowed)) ? 
         ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
          & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1))
          : ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0)))) {
        vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_data 
            = vlSelfRef.__PVT__qd_q__DOT__elts_0_data;
        vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_last 
            = vlSelfRef.__PVT__qd_q__DOT__elts_0_last;
        vlSelfRef.__PVT__ioX_cq_3__DOT__elts_1_beats 
            = vlSelfRef.__PVT__qd_q__DOT__elts_0_beats;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__rxQ__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__rxQ__DOT__valid_1 = 0U;
    } else if (vlSelfRef.__Vcellinp__rxQ__io_deq_ready) {
        vlSelfRef.__Vdly__rxQ__DOT__valid_0 = ((IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1) 
                                               | (IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4));
        vlSelfRef.__Vdly__rxQ__DOT__valid_1 = ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                                               & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1));
    } else {
        vlSelfRef.__Vdly__rxQ__DOT__valid_0 = ((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                                               | (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0));
        vlSelfRef.__Vdly__rxQ__DOT__valid_1 = (((IData)(__PVT__rxQ__DOT__unnamedblk1__DOT___valid_1_T_4) 
                                                & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0)) 
                                               | (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_1));
    }
    vlSelfRef.__PVT__rxQ__DOT__valid_1 = vlSelfRef.__Vdly__rxQ__DOT__valid_1;
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
    vlSelfRef.__PVT__rxQ__DOT__valid_0 = vlSelfRef.__Vdly__rxQ__DOT__valid_0;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 = 0U;
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0;
        vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_1__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_1__DOT__valid_0;
        if ((4U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_2__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_2__DOT__valid_0;
        if ((1U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq__DOT__valid_0;
        if ((0x10U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_4__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1));
        }
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_1;
        vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_4__DOT__valid_0;
        if ((8U & (IData)(vlSelfRef.__PVT__allowed))) {
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 
                = ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1) 
                   | (IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 
                = ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0 
                = ((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0));
            vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1 
                = (((IData)(__PVT__ioX_cq_3__DOT__unnamedblk1__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0)) 
                   | (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1));
        }
    }
    vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1 = vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_1;
    vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0 = vlSelfRef.__Vdly__ioX_cq_3__DOT__valid_0;
    __PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__qb_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1) 
             | (IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qb_q__DOT__valid_1) {
            vlSelfRef.__PVT__qb_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qb_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qb_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qb_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qb_q__DOT__elts_0_data = 1U;
            vlSelfRef.__PVT__qb_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__qb_q__DOT__elts_0_last = ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1) 
                                                   && (IData)(vlSelfRef.__PVT__qb_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__qb_q_io_deq_ready)
          ? ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1))
          : ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qb_q__DOT__elts_1_data = 1U;
        vlSelfRef.__PVT__qb_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__qb_q__DOT__elts_1_beats = 3U;
    }
    __PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__qc_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1) 
             | (IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qc_q__DOT__valid_1) {
            vlSelfRef.__PVT__qc_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qc_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qc_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qc_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qc_q__DOT__elts_0_data = 2U;
            vlSelfRef.__PVT__qc_q__DOT__elts_0_beats = 3U;
        }
        vlSelfRef.__PVT__qc_q__DOT__elts_0_last = ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1) 
                                                   && (IData)(vlSelfRef.__PVT__qc_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__qc_q_io_deq_ready)
          ? ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1))
          : ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qc_q__DOT__elts_1_data = 2U;
        vlSelfRef.__PVT__qc_q__DOT__elts_1_last = 0U;
        vlSelfRef.__PVT__qc_q__DOT__elts_1_beats = 3U;
    }
    __PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1)) 
           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
    if (((IData)(vlSelfRef.__PVT__qa_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1) 
             | (IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qa_q__DOT__valid_1) {
            vlSelfRef.__PVT__qa_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qa_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__qa_q__DOT__elts_1_last;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qa_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qa_q__DOT__elts_0_data 
                = vlSelfRef.io_sa_bits_data;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_last 
                = vlSelfRef.io_sa_bits_last;
            vlSelfRef.__PVT__qa_q__DOT__elts_0_beats 
                = vlSelfRef.io_sa_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__qa_q_io_deq_ready)
          ? ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1))
          : ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qa_q__DOT__elts_1_data = vlSelfRef.io_sa_bits_data;
        vlSelfRef.__PVT__qa_q__DOT__elts_1_last = vlSelfRef.io_sa_bits_last;
        vlSelfRef.__PVT__qa_q__DOT__elts_1_beats = vlSelfRef.io_sa_bits_beats;
    }
    __PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4 = 0U;
    if (((IData)(vlSelfRef.__PVT__qe_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1) 
             | (IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qe_q__DOT__valid_1) {
            vlSelfRef.__PVT__qe_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qe_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qe_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qe_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qe_q__DOT__elts_0_data 
                = (4U | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                           & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                           ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                           : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                          [0U]) << 0x10U));
            vlSelfRef.__PVT__qe_q__DOT__elts_0_beats = 1U;
        }
        vlSelfRef.__PVT__qe_q__DOT__elts_0_last = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1))) 
                                                   || (IData)(vlSelfRef.__PVT__qe_q__DOT__elts_1_last));
    }
    if (((IData)(vlSelfRef.__PVT__qe_q_io_deq_ready)
          ? ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1))
          : ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qe_q__DOT__elts_1_data = (4U 
                                                   | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                                        & (0U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                                        ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                                        : 
                                                       vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                                       [0U]) 
                                                      << 0x10U));
        vlSelfRef.__PVT__qe_q__DOT__elts_1_last = 1U;
        vlSelfRef.__PVT__qe_q__DOT__elts_1_beats = 1U;
    }
    vlSelfRef.__PVT__allowReturn = (1U & (~ (((IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0) 
                                              | ((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0) 
                                                 | ((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                                    | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                       | (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0))))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__xmit)))));
    __PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.io_sd_valid));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__qb_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qb_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qc_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qc_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qa_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qa_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qe_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qe_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__qd_q__DOT__valid_0 = 0U;
        vlSelfRef.__Vdly__qd_q__DOT__valid_1 = 0U;
    } else {
        if (vlSelfRef.__PVT__qb_q_io_deq_ready) {
            vlSelfRef.__Vdly__qb_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1) 
                 | (IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qb_q__DOT__valid_1 = 
                ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qb_q__DOT__valid_0 = 
                ((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0));
            vlSelfRef.__Vdly__qb_q__DOT__valid_1 = 
                (((IData)(__PVT__qb_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qb_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qc_q_io_deq_ready) {
            vlSelfRef.__Vdly__qc_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1) 
                 | (IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qc_q__DOT__valid_1 = 
                ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qc_q__DOT__valid_0 = 
                ((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0));
            vlSelfRef.__Vdly__qc_q__DOT__valid_1 = 
                (((IData)(__PVT__qc_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qc_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qa_q_io_deq_ready) {
            vlSelfRef.__Vdly__qa_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1) 
                 | (IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qa_q__DOT__valid_1 = 
                ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qa_q__DOT__valid_0 = 
                ((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0));
            vlSelfRef.__Vdly__qa_q__DOT__valid_1 = 
                (((IData)(__PVT__qa_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qa_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qe_q_io_deq_ready) {
            vlSelfRef.__Vdly__qe_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1) 
                 | (IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qe_q__DOT__valid_1 = 
                ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qe_q__DOT__valid_0 = 
                ((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0));
            vlSelfRef.__Vdly__qe_q__DOT__valid_1 = 
                (((IData)(__PVT__qe_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qe_q__DOT__valid_1));
        }
        if (vlSelfRef.__PVT__qd_q_io_deq_ready) {
            vlSelfRef.__Vdly__qd_q__DOT__valid_0 = 
                ((IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1) 
                 | (IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4));
            vlSelfRef.__Vdly__qd_q__DOT__valid_1 = 
                ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1));
        } else {
            vlSelfRef.__Vdly__qd_q__DOT__valid_0 = 
                ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                 | (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0));
            vlSelfRef.__Vdly__qd_q__DOT__valid_1 = 
                (((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
                  & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0)) 
                 | (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1));
        }
    }
    if (((IData)(vlSelfRef.__PVT__qd_q_io_deq_ready)
          ? ((IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1) 
             | (IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4))
          : ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0))))) {
        if (vlSelfRef.__PVT__qd_q__DOT__valid_1) {
            vlSelfRef.__PVT__qd_q__DOT__elts_0_data 
                = vlSelfRef.__PVT__qd_q__DOT__elts_1_data;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_last 
                = vlSelfRef.__PVT__qd_q__DOT__elts_1_last;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.__PVT__qd_q__DOT__elts_1_beats;
        } else {
            vlSelfRef.__PVT__qd_q__DOT__elts_0_data 
                = vlSelfRef.io_sd_bits_data;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_last 
                = vlSelfRef.io_sd_bits_last;
            vlSelfRef.__PVT__qd_q__DOT__elts_0_beats 
                = vlSelfRef.io_sd_bits_beats;
        }
    }
    if (((IData)(vlSelfRef.__PVT__qd_q_io_deq_ready)
          ? ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_1))
          : ((IData)(__PVT__qd_q__DOT__unnamedblk1__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.__PVT__qd_q__DOT__valid_0)))) {
        vlSelfRef.__PVT__qd_q__DOT__elts_1_data = vlSelfRef.io_sd_bits_data;
        vlSelfRef.__PVT__qd_q__DOT__elts_1_last = vlSelfRef.io_sd_bits_last;
        vlSelfRef.__PVT__qd_q__DOT__elts_1_beats = vlSelfRef.io_sd_bits_beats;
    }
    vlSelfRef.__PVT__qb_q__DOT__valid_1 = vlSelfRef.__Vdly__qb_q__DOT__valid_1;
    vlSelfRef.__PVT__qb_q__DOT__valid_0 = vlSelfRef.__Vdly__qb_q__DOT__valid_0;
    vlSelfRef.__PVT__qc_q__DOT__valid_1 = vlSelfRef.__Vdly__qc_q__DOT__valid_1;
    vlSelfRef.__PVT__qc_q__DOT__valid_0 = vlSelfRef.__Vdly__qc_q__DOT__valid_0;
    vlSelfRef.io_sa_bits_last = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelfRef.io_sa_bits_beats = (0x1fU & ((IData)(3U) 
                                           + (((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                ? 0U
                                                : (
                                                   (0x1eU 
                                                    & (((IData)(1U) 
                                                        << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)))) 
                                              + ((1U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                  ? 
                                                 (((6U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)) 
                                                   << 1U) 
                                                  | (3U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size) 
                                                         >> 1U))))
                                                  : 0U))));
    vlSelfRef.__PVT__qa_q__DOT__valid_0 = vlSelfRef.__Vdly__qa_q__DOT__valid_0;
    __Vtemp_2[0U] = ((((0x2fU >= (0x3fU & ((IData)(3U) 
                                           * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source))))
                        ? (7U & (IData)((0xfac688fac688ULL 
                                         >> (0x3fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source))))))
                        : 0U) << 0x10U) | ((0x6000U 
                                            & ((0xaaaa5555U 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source), 1U))) 
                                               << 0xdU)) 
                                           | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size) 
                                                << 9U) 
                                               | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                                    ? 
                                                   (7U 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                                       >> 0xcU))
                                                    : 0U) 
                                                  << 6U)) 
                                              | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode) 
                                                 << 3U))));
    __Vtemp_2[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                      ? ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                          << 0x1bU) | (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                       >> 5U)) : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address);
    __Vtemp_2[2U] = (IData)(((QData)((IData)(((1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                               ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                               : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                             << 0x20U));
    __Vtemp_2[3U] = (IData)((((QData)((IData)(((1U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                              << 0x20U) >> 0x20U));
    vlSelfRef.io_sa_bits_data = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U)))
                                   ? 0U : (__Vtemp_2[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))) 
                                 | (__Vtemp_2[(3U & 
                                               (VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U) 
                                                >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state), 5U))));
    vlSelfRef.__PVT__qa_q__DOT__valid_1 = vlSelfRef.__Vdly__qa_q__DOT__valid_1;
    vlSelfRef.__PVT__qe_q__DOT__valid_1 = vlSelfRef.__Vdly__qe_q__DOT__valid_1;
    vlSelfRef.__PVT__qe_q__DOT__valid_0 = vlSelfRef.__Vdly__qe_q__DOT__valid_0;
    vlSelfRef.__PVT__f_valid = ((IData)(vlSelfRef.__PVT__allowReturn) 
                                & (IData)(vlSelfRef.__PVT__rxQ__DOT__valid_0));
    vlSelfRef.io_sd_bits_last = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelfRef.__PVT__qd_q__DOT__valid_0 = vlSelfRef.__Vdly__qd_q__DOT__valid_0;
    vlSelfRef.io_sd_bits_beats = (0x1fU & ((IData)(1U) 
                                           + (((1U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode))
                                                ? (
                                                   (0x1eU 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size))) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size)))
                                                : 0U) 
                                              + (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelfRef.io_sd_valid = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                             | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_d_valid));
    vlSelfRef.__PVT__qd_q__DOT__valid_1 = vlSelfRef.__Vdly__qd_q__DOT__valid_1;
    vlSelfRef.__PVT__ioX_delta_1 = (0x1fffffU & (vlSelfRef.__PVT__tx_b 
                                                 - (IData)(vlSelfRef.__PVT__qb_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_2 = (0x1fffffU & (vlSelfRef.__PVT__tx_c 
                                                 - (IData)(vlSelfRef.__PVT__qc_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta = (0x1fffffU & (vlSelfRef.__PVT__tx_a 
                                               - (IData)(vlSelfRef.__PVT__qa_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_delta_4 = (0x1fffffU & (vlSelfRef.__PVT__tx_e 
                                                 - (IData)(vlSelfRef.__PVT__qe_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__requests = ((((IData)(vlSelfRef.__PVT__f_valid) 
                                   << 5U) | (((IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_0) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_0) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_0) 
                                     << 2U) | (((IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_0) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_0))));
    vlSelfRef.__PVT__ioX_delta_3 = (0x1fffffU & (vlSelfRef.__PVT__tx_d 
                                                 - (IData)(vlSelfRef.__PVT__qd_q__DOT__elts_0_beats)));
    vlSelfRef.__PVT__ioX_allow_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_1)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_1)));
    vlSelfRef.__PVT__ioX_allow_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_2)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_2)));
    vlSelfRef.__PVT__ioX_allow = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first)) 
                                        | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta)));
    vlSelfRef.__PVT__ioX_allow_4 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_4)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_4)));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__requests));
    vlSelfRef.__PVT__ioX_allow_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__ioX_first_3)) 
                                          | VL_LTS_III(21, 0x1fffffU, vlSelfRef.__PVT__ioX_delta_3)));
    vlSelfRef.__PVT__qb_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_1__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_1));
    vlSelfRef.__PVT__qc_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_2__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_2));
    vlSelfRef.__PVT__qa_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow));
    vlSelfRef.__PVT__qe_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_4__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_4));
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
    vlSelfRef.__PVT__qd_q_io_deq_ready = ((~ (IData)(vlSelfRef.__PVT__ioX_cq_3__DOT__valid_1)) 
                                          & (IData)(vlSelfRef.__PVT__ioX_allow_3));
    __PVT___GEN_20 = (0x1ffU & ((IData)(__PVT___GEN_19) 
                                | ((0x100U & ((IData)(__PVT___readys_filter_T_1) 
                                              << 3U)) 
                                   | (0xffU & ((IData)(__PVT___GEN_19) 
                                               >> 2U)))));
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
    vlSelfRef.__PVT___readys_readys_T_2 = (0x3fU & 
                                           (((IData)(vlSelfRef.__PVT__readys_unready) 
                                             >> 6U) 
                                            & (IData)(vlSelfRef.__PVT__readys_unready)));
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
    vlSelfRef.__Vcellinp__rxQ__io_deq_ready = ((IData)(vlSelfRef.__PVT__allowReturn) 
                                               & ((IData)(vlSelfRef.__PVT__allowed) 
                                                  >> 5U));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__3(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__ridx));
    vlSelfRef.__PVT__txInc_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__ridx));
    vlSelfRef.__PVT__rxInc_sink__DOT__valid_reg = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__valid));
    vlSelfRef.__PVT__txInc_sink__DOT__valid_reg = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__valid));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelfRef.__PVT__txInc_sink__DOT__valid_reg));
    vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
    vlSelfRef.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__4(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__5(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset))) 
           && (IData)(vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
    vlSelfRef.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.io_rxc_source__DOT____Vcellinp__sink_extend__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_TX___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__0(VysyxSoCFull_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header;
    __Vtemp_2[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                     & (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                >> 0x22U)));
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                            ? (IData)(
                                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                       >> 1U))
                                                            : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                             ? (IData)(
                                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                        >> 1U))
                                                             : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                             >> 0x20U));
    vlSelfRef.io_sd_bits_data = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
                                   ? 0U : (__Vtemp_2[
                                           (((IData)(0x1fU) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
                                 | (__Vtemp_2[(3U & 
                                               (VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                                                >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))));
}
