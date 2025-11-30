// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLFIFOFixer.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__unnamedblk1__DOT___stalls_id_T_4;
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = 0;
    SData/*11:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    CData/*0:0*/ __Vdly__flight_0;
    __Vdly__flight_0 = 0;
    CData/*0:0*/ __Vdly__flight_1;
    __Vdly__flight_1 = 0;
    CData/*0:0*/ __Vdly__flight_2;
    __Vdly__flight_2 = 0;
    CData/*0:0*/ __Vdly__flight_3;
    __Vdly__flight_3 = 0;
    CData/*0:0*/ __Vdly__flight_4;
    __Vdly__flight_4 = 0;
    CData/*0:0*/ __Vdly__flight_5;
    __Vdly__flight_5 = 0;
    CData/*0:0*/ __Vdly__flight_6;
    __Vdly__flight_6 = 0;
    CData/*0:0*/ __Vdly__flight_7;
    __Vdly__flight_7 = 0;
    CData/*0:0*/ __Vdly__flight_8;
    __Vdly__flight_8 = 0;
    CData/*0:0*/ __Vdly__flight_9;
    __Vdly__flight_9 = 0;
    CData/*0:0*/ __Vdly__flight_10;
    __Vdly__flight_10 = 0;
    CData/*0:0*/ __Vdly__flight_11;
    __Vdly__flight_11 = 0;
    CData/*0:0*/ __Vdly__flight_12;
    __Vdly__flight_12 = 0;
    CData/*0:0*/ __Vdly__flight_13;
    __Vdly__flight_13 = 0;
    CData/*0:0*/ __Vdly__flight_14;
    __Vdly__flight_14 = 0;
    CData/*0:0*/ __Vdly__flight_15;
    __Vdly__flight_15 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter_1;
    __Vdly__monitor__DOT__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vdly__monitor__DOT__d_first_counter = vlSelfRef.__PVT__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__inflight = vlSelfRef.__PVT__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight_opcodes = vlSelfRef.__PVT__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_sizes = vlSelfRef.__PVT__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__watchdog = vlSelfRef.__PVT__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__inflight_1 = vlSelfRef.__PVT__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__d_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_2 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__a_first_counter = vlSelfRef.__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__a_first_counter_1;
    __Vdly__d_first_counter = vlSelfRef.__PVT__d_first_counter;
    __Vdly__flight_0 = vlSelfRef.__PVT__flight_0;
    __Vdly__flight_1 = vlSelfRef.__PVT__flight_1;
    __Vdly__flight_2 = vlSelfRef.__PVT__flight_2;
    __Vdly__flight_3 = vlSelfRef.__PVT__flight_3;
    __Vdly__flight_4 = vlSelfRef.__PVT__flight_4;
    __Vdly__flight_5 = vlSelfRef.__PVT__flight_5;
    __Vdly__flight_6 = vlSelfRef.__PVT__flight_6;
    __Vdly__flight_7 = vlSelfRef.__PVT__flight_7;
    __Vdly__flight_8 = vlSelfRef.__PVT__flight_8;
    __Vdly__flight_9 = vlSelfRef.__PVT__flight_9;
    __Vdly__flight_10 = vlSelfRef.__PVT__flight_10;
    __Vdly__flight_11 = vlSelfRef.__PVT__flight_11;
    __Vdly__flight_12 = vlSelfRef.__PVT__flight_12;
    __Vdly__flight_13 = vlSelfRef.__PVT__flight_13;
    __Vdly__flight_14 = vlSelfRef.__PVT__flight_14;
    __Vdly__flight_15 = vlSelfRef.__PVT__flight_15;
    __Vdly__a_first_counter = vlSelfRef.__PVT__a_first_counter;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        (3U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                      >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (0U == ((0xffffeU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                             >> 0xcU)) | (1U & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                   >> 0xcU)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
         & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
            & (3U == (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                      >> 0x1eU))) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15565: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15565, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15567: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15567, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15571: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15571, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15573: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15573, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15577: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15577, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15579: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15579, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15583: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15583, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15585: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15585, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15589: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15589, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15591: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15591, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15595: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15597: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15597, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15601: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15603: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15603, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15607: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15609: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15609, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15613: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15615: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15615, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15619: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15621: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15621, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15625: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15627: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15627, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15631: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15633: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15633, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15637: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15637, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15639: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15639, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15643: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15643, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15645: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15645, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15649: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15649, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15651: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15651, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15655: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15657: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15657, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15661: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15663: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15663, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15667: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15669: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15669, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15673: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15673, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15675: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15675, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15679: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15681: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15681, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15685: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15685, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15687: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15687, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15691: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15691, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15693: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15693, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15697: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15697, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15699: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15699, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15703: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15705: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15705, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15709: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15709, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15711: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15711, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15715: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15715, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15717: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15717, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15721: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15721, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15723: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15723, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15727: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15727, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15729: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15729, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15733: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15735: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15735, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15739: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15739, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15741: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15741, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15745: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15745, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15747: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15747, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15751: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15751, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15753: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15753, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15757: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15759: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15759, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15763: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15765: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15765, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15769: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15771: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15771, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15775: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15777: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15777, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15781: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15783: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15783, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15787: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15789: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15789, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15793: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15795: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15795, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15799: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15801: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15801, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15805: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15805, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15807: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15807, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15811: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15811, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15813: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15813, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15817: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15817, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15819: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15819, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15823: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15823, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15825: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15825, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15829: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15829, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15831: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15831, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15835: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15837: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15837, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15841: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15841, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15843: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15843, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15847: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15847, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15849: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15849, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15853: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15853, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15855: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15855, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15859: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15859, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15861: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15861, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15865: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15865, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15867: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15867, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15871: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15873: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15873, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15877: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15877, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15879: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15879, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15883: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15883, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15885: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15885, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15889: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15889, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15891: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15891, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15895: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15895, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15897: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15897, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15901: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15901, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15903: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15903, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15907: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15907, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15909: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15909, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15913: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15913, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15915: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15915, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15919: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15919, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15921: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15921, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15926: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15926, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15928: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15928, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                            | (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15933: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15933, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15935: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15935, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15941: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15941, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15943: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15943, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15947: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15947, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15949: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15949, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U))))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(
                                                                   (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15955: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15955, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15957: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15957, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15962: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15962, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15964: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15964, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.auto_anon_in_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_ready)) 
                            | (IData)(vlSelfRef.auto_anon_in_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15969: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15969, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15971: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15971, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15977: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15977, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15979: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15979, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15984: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15984, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15986: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15986, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15991: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15991, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15993: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15993, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15999: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15999, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:16001: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16001, "", false);
    }
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = ((IData)(vlSelfRef.auto_anon_in_a_ready) 
                                               & (IData)(vlSelfRef.auto_anon_in_a_valid));
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 3U)))) {
        vlSelfRef.__PVT__stalls_id = vlSelfRef.__PVT__a_id;
    }
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
            >> 3U))) {
        vlSelfRef.__PVT__stalls_id_1 = vlSelfRef.__PVT__a_id;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__a_first_counter = 0U;
        __Vdly__d_first_counter = 0U;
        __Vdly__flight_0 = 0U;
        __Vdly__flight_1 = 0U;
        __Vdly__flight_2 = 0U;
        __Vdly__flight_3 = 0U;
        __Vdly__flight_4 = 0U;
        __Vdly__flight_5 = 0U;
        __Vdly__flight_6 = 0U;
        __Vdly__flight_7 = 0U;
        __Vdly__flight_8 = 0U;
        __Vdly__flight_9 = 0U;
        __Vdly__flight_10 = 0U;
        __Vdly__flight_11 = 0U;
        __Vdly__flight_12 = 0U;
        __Vdly__flight_13 = 0U;
        __Vdly__flight_14 = 0U;
        __Vdly__flight_15 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first 
            = (0U == (IData)(vlSelfRef.__PVT__d_first_counter));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
            = ((IData)(vlSelfRef.__PVT__a_first) & (IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
            = ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first) 
                 & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_ready)) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid));
        if (__PVT__unnamedblk1__DOT___stalls_id_T_4) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((IData)(vlSelfRef.__PVT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T) 
                                                   >> 2U)))
                                              : ((IData)(vlSelfRef.__PVT__a_first_counter) 
                                                 - (IData)(1U))));
        }
        if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_ready) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T) 
                                                   >> 2U))
                                                  : 0U)
                                              : ((IData)(vlSelfRef.__PVT__d_first_counter) 
                                                 - (IData)(1U))));
        }
        __Vdly__flight_0 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_0)));
        __Vdly__flight_1 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_1)));
        __Vdly__flight_2 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_2)));
        __Vdly__flight_3 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_3)));
        __Vdly__flight_4 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_4)));
        __Vdly__flight_5 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_5)));
        __Vdly__flight_6 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_6)));
        __Vdly__flight_7 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_7)));
        __Vdly__flight_8 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_8)));
        __Vdly__flight_9 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_9)));
        __Vdly__flight_10 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_10)));
        __Vdly__flight_11 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_11)));
        __Vdly__flight_12 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_12)));
        __Vdly__flight_13 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_13)));
        __Vdly__flight_14 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_14)));
        __Vdly__flight_15 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_15)));
    }
    vlSelfRef.__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelfRef.auto_anon_in_a_valid = ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
                                       ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T)
                                       : (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_arvalid) 
                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)) 
                                          | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1) 
                                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))));
    vlSelfRef.__PVT__flight_0 = __Vdly__flight_0;
    vlSelfRef.__PVT__flight_1 = __Vdly__flight_1;
    vlSelfRef.__PVT__flight_2 = __Vdly__flight_2;
    vlSelfRef.__PVT__flight_3 = __Vdly__flight_3;
    vlSelfRef.__PVT__flight_4 = __Vdly__flight_4;
    vlSelfRef.__PVT__flight_5 = __Vdly__flight_5;
    vlSelfRef.__PVT__flight_6 = __Vdly__flight_6;
    vlSelfRef.__PVT__flight_7 = __Vdly__flight_7;
    vlSelfRef.__PVT__flight_8 = __Vdly__flight_8;
    vlSelfRef.__PVT__flight_9 = __Vdly__flight_9;
    vlSelfRef.__PVT__flight_10 = __Vdly__flight_10;
    vlSelfRef.__PVT__flight_11 = __Vdly__flight_11;
    vlSelfRef.__PVT__flight_12 = __Vdly__flight_12;
    vlSelfRef.__PVT__flight_13 = __Vdly__flight_13;
    vlSelfRef.__PVT__flight_14 = __Vdly__flight_14;
    vlSelfRef.__PVT__flight_15 = __Vdly__flight_15;
    vlSelfRef.__PVT__a_first_counter = __Vdly__a_first_counter;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__monitor__DOT__d_first_counter = 0U;
        __Vdly__monitor__DOT__inflight = 0U;
        __Vdly__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__monitor__DOT__watchdog = 0U;
        __Vdly__monitor__DOT__inflight_1 = 0U;
        __Vdly__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__monitor__DOT__watchdog_1 = 0U;
        __Vdly__monitor__DOT__a_first_counter = 0U;
        __Vdly__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[4U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT__monitor__DOT___GEN_0) {
            __Vtemp_7[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_7[0U] = 0U;
            __Vtemp_13[0U] = 0U;
        }
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_7[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__monitor__DOT__watchdog_1 = ((IData)(1U) 
                                                + vlSelfRef.__PVT__monitor__DOT__watchdog_1);
        }
        __Vdly__monitor__DOT__inflight = (0xffffU & 
                                          (((IData)(vlSelfRef.__PVT__monitor__DOT__inflight) 
                                            | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0)
                                                ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))
                                                : 0U)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelfRef.__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__monitor__DOT__watchdog = (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                           | (IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelfRef.__PVT__monitor__DOT__watchdog));
        __Vdly__monitor__DOT__inflight_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1) 
                                            & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                   ? 
                                                  VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                                       : 0ULL)));
        if (vlSelfRef.__PVT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__param_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param;
        vlSelfRef.__PVT__monitor__DOT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source;
        vlSelfRef.__PVT__monitor__DOT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_sink;
        vlSelfRef.__PVT__monitor__DOT__denied = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__size = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__monitor__DOT__address = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__a_first = (0U == (IData)(vlSelfRef.__PVT__a_first_counter));
    vlSelfRef.__PVT__monitor__DOT__d_first_counter 
        = __Vdly__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__monitor__DOT__inflight = __Vdly__monitor__DOT__inflight;
    vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
        = __Vdly__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes = __Vdly__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__monitor__DOT__watchdog = __Vdly__monitor__DOT__watchdog;
    vlSelfRef.__PVT__monitor__DOT__inflight_1 = __Vdly__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
        = __Vdly__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__monitor__DOT__watchdog_1 = __Vdly__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_1 
        = __Vdly__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_2 
        = __Vdly__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter 
        = __Vdly__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter_1 
        = __Vdly__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__1(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__a_id = ((2U & ((~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                        >> 0x1eU)) 
                                    << 1U)) | (1U & 
                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                >> 0x1eU)));
    vlSelfRef.__PVT__stall = (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                                   >> 3U)) & ((0U == (IData)(vlSelfRef.__PVT__a_first_counter)) 
                                              & (((IData)(vlSelfRef.__PVT__flight_0) 
                                                  | ((IData)(vlSelfRef.__PVT__flight_1) 
                                                     | ((IData)(vlSelfRef.__PVT__flight_2) 
                                                        | ((IData)(vlSelfRef.__PVT__flight_3) 
                                                           | ((IData)(vlSelfRef.__PVT__flight_4) 
                                                              | ((IData)(vlSelfRef.__PVT__flight_5) 
                                                                 | ((IData)(vlSelfRef.__PVT__flight_6) 
                                                                    | (IData)(vlSelfRef.__PVT__flight_7)))))))) 
                                                 & ((0U 
                                                     == (IData)(vlSelfRef.__PVT__a_id)) 
                                                    | ((IData)(vlSelfRef.__PVT__stalls_id) 
                                                       != (IData)(vlSelfRef.__PVT__a_id)))))) 
                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                                  >> 3U) & ((0U == (IData)(vlSelfRef.__PVT__a_first_counter)) 
                                            & (((IData)(vlSelfRef.__PVT__flight_8) 
                                                | ((IData)(vlSelfRef.__PVT__flight_9) 
                                                   | ((IData)(vlSelfRef.__PVT__flight_10) 
                                                      | ((IData)(vlSelfRef.__PVT__flight_11) 
                                                         | ((IData)(vlSelfRef.__PVT__flight_12) 
                                                            | ((IData)(vlSelfRef.__PVT__flight_13) 
                                                               | ((IData)(vlSelfRef.__PVT__flight_14) 
                                                                  | (IData)(vlSelfRef.__PVT__flight_15)))))))) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__a_id)) 
                                                  | ((IData)(vlSelfRef.__PVT__stalls_id_1) 
                                                     != (IData)(vlSelfRef.__PVT__a_id)))))));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_in_a_ready = ((~ (IData)(vlSelfRef.__PVT__stall)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_ready));
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelfRef.auto_anon_in_a_ready) 
                                                   & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__unnamedblk1__DOT___stalls_id_T_4;
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = 0;
    SData/*11:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    CData/*0:0*/ __Vdly__flight_0;
    __Vdly__flight_0 = 0;
    CData/*0:0*/ __Vdly__flight_1;
    __Vdly__flight_1 = 0;
    CData/*0:0*/ __Vdly__flight_2;
    __Vdly__flight_2 = 0;
    CData/*0:0*/ __Vdly__flight_3;
    __Vdly__flight_3 = 0;
    CData/*0:0*/ __Vdly__flight_4;
    __Vdly__flight_4 = 0;
    CData/*0:0*/ __Vdly__flight_5;
    __Vdly__flight_5 = 0;
    CData/*0:0*/ __Vdly__flight_6;
    __Vdly__flight_6 = 0;
    CData/*0:0*/ __Vdly__flight_7;
    __Vdly__flight_7 = 0;
    CData/*0:0*/ __Vdly__flight_8;
    __Vdly__flight_8 = 0;
    CData/*0:0*/ __Vdly__flight_9;
    __Vdly__flight_9 = 0;
    CData/*0:0*/ __Vdly__flight_10;
    __Vdly__flight_10 = 0;
    CData/*0:0*/ __Vdly__flight_11;
    __Vdly__flight_11 = 0;
    CData/*0:0*/ __Vdly__flight_12;
    __Vdly__flight_12 = 0;
    CData/*0:0*/ __Vdly__flight_13;
    __Vdly__flight_13 = 0;
    CData/*0:0*/ __Vdly__flight_14;
    __Vdly__flight_14 = 0;
    CData/*0:0*/ __Vdly__flight_15;
    __Vdly__flight_15 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter_1;
    __Vdly__monitor__DOT__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vdly__monitor__DOT__d_first_counter = vlSelfRef.__PVT__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__inflight = vlSelfRef.__PVT__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight_opcodes = vlSelfRef.__PVT__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_sizes = vlSelfRef.__PVT__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__watchdog = vlSelfRef.__PVT__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__inflight_1 = vlSelfRef.__PVT__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__d_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_2 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__a_first_counter = vlSelfRef.__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__a_first_counter_1;
    __Vdly__d_first_counter = vlSelfRef.__PVT__d_first_counter;
    __Vdly__flight_0 = vlSelfRef.__PVT__flight_0;
    __Vdly__flight_1 = vlSelfRef.__PVT__flight_1;
    __Vdly__flight_2 = vlSelfRef.__PVT__flight_2;
    __Vdly__flight_3 = vlSelfRef.__PVT__flight_3;
    __Vdly__flight_4 = vlSelfRef.__PVT__flight_4;
    __Vdly__flight_5 = vlSelfRef.__PVT__flight_5;
    __Vdly__flight_6 = vlSelfRef.__PVT__flight_6;
    __Vdly__flight_7 = vlSelfRef.__PVT__flight_7;
    __Vdly__flight_8 = vlSelfRef.__PVT__flight_8;
    __Vdly__flight_9 = vlSelfRef.__PVT__flight_9;
    __Vdly__flight_10 = vlSelfRef.__PVT__flight_10;
    __Vdly__flight_11 = vlSelfRef.__PVT__flight_11;
    __Vdly__flight_12 = vlSelfRef.__PVT__flight_12;
    __Vdly__flight_13 = vlSelfRef.__PVT__flight_13;
    __Vdly__flight_14 = vlSelfRef.__PVT__flight_14;
    __Vdly__flight_15 = vlSelfRef.__PVT__flight_15;
    __Vdly__a_first_counter = vlSelfRef.__PVT__a_first_counter;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        (3U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                      >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (0U == ((0xffffeU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                             >> 0xcU)) | (1U & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                   >> 0xcU)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
         & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
            & (3U == (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                      >> 0x1eU))) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
            & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15565: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15565, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15567: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15567, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15571: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15571, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15573: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15573, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15577: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15577, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15579: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15579, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15583: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15583, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15585: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15585, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15589: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15589, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15591: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15591, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15595: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15597: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15597, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15601: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15603: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15603, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15607: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15609: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15609, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15613: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15615: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15615, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15619: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15621: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15621, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15625: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15627: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15627, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15631: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15633: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15633, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15637: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15637, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15639: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15639, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15643: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15643, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15645: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15645, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15649: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15649, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15651: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15651, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15655: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15657: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15657, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15661: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15663: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15663, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15667: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15669: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15669, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15673: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15673, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15675: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15675, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15679: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15681: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15681, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15685: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15685, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15687: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15687, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15691: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15691, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15693: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15693, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15697: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15697, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15699: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15699, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15703: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15705: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15705, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15709: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15709, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15711: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15711, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15715: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15715, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15717: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15717, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15721: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15721, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15723: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15723, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15727: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15727, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15729: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15729, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15733: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15735: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15735, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15739: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15739, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15741: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15741, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15745: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15745, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15747: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15747, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15751: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15751, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15753: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15753, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15757: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15759: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15759, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15763: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15765: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15765, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15769: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15771: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15771, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15775: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15777: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15777, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15781: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15783: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15783, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15787: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15789: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15789, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15793: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15795: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15795, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15799: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15801: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15801, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15805: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15805, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15807: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15807, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15811: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15811, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15813: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15813, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15817: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15817, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15819: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15819, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15823: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15823, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15825: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15825, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15829: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15829, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15831: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15831, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15835: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15837: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15837, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15841: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15841, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15843: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15843, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15847: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15847, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15849: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15849, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15853: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15853, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15855: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15855, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15859: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15859, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15861: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15861, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15865: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15865, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15867: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15867, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15871: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15873: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15873, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15877: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15877, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15879: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15879, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15883: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15883, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15885: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15885, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15889: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15889, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15891: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15891, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15895: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15895, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15897: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15897, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15901: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15901, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15903: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15903, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15907: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15907, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15909: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15909, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15913: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15913, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15915: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15915, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15919: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15919, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15921: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15921, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15926: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15926, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15928: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15928, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                            | (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15933: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15933, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15935: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15935, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15941: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15941, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15943: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15943, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15947: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15947, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15949: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15949, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U))))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(
                                                                   (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15955: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15955, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15957: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15957, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15962: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15962, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15964: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15964, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.auto_anon_in_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_ready)) 
                            | (IData)(vlSelfRef.auto_anon_in_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15969: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15969, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15971: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15971, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15977: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15977, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15979: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15979, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15984: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15984, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15986: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15986, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15991: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15991, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:15993: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15993, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:15999: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15999, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:16001: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16001, "", false);
    }
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = ((IData)(vlSelfRef.auto_anon_in_a_ready) 
                                               & (IData)(vlSelfRef.auto_anon_in_a_valid));
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 3U)))) {
        vlSelfRef.__PVT__stalls_id = vlSelfRef.__PVT__a_id;
    }
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
            >> 3U))) {
        vlSelfRef.__PVT__stalls_id_1 = vlSelfRef.__PVT__a_id;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__a_first_counter = 0U;
        __Vdly__d_first_counter = 0U;
        __Vdly__flight_0 = 0U;
        __Vdly__flight_1 = 0U;
        __Vdly__flight_2 = 0U;
        __Vdly__flight_3 = 0U;
        __Vdly__flight_4 = 0U;
        __Vdly__flight_5 = 0U;
        __Vdly__flight_6 = 0U;
        __Vdly__flight_7 = 0U;
        __Vdly__flight_8 = 0U;
        __Vdly__flight_9 = 0U;
        __Vdly__flight_10 = 0U;
        __Vdly__flight_11 = 0U;
        __Vdly__flight_12 = 0U;
        __Vdly__flight_13 = 0U;
        __Vdly__flight_14 = 0U;
        __Vdly__flight_15 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first 
            = (0U == (IData)(vlSelfRef.__PVT__d_first_counter));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
            = ((IData)(vlSelfRef.__PVT__a_first) & (IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4));
        vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
            = ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first) 
                 & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_ready)) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid));
        if (__PVT__unnamedblk1__DOT___stalls_id_T_4) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((IData)(vlSelfRef.__PVT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T) 
                                                   >> 2U)))
                                              : ((IData)(vlSelfRef.__PVT__a_first_counter) 
                                                 - (IData)(1U))));
        }
        if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_ready) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T) 
                                                   >> 2U))
                                                  : 0U)
                                              : ((IData)(vlSelfRef.__PVT__d_first_counter) 
                                                 - (IData)(1U))));
        }
        __Vdly__flight_0 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_0)));
        __Vdly__flight_1 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_1)));
        __Vdly__flight_2 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_2)));
        __Vdly__flight_3 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_3)));
        __Vdly__flight_4 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_4)));
        __Vdly__flight_5 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_5)));
        __Vdly__flight_6 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_6)));
        __Vdly__flight_7 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_7)));
        __Vdly__flight_8 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_8)));
        __Vdly__flight_9 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                               | (IData)(vlSelfRef.__PVT__flight_9)));
        __Vdly__flight_10 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_10)));
        __Vdly__flight_11 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_11)));
        __Vdly__flight_12 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_12)));
        __Vdly__flight_13 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_13)));
        __Vdly__flight_14 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_14)));
        __Vdly__flight_15 = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))) 
                                | (IData)(vlSelfRef.__PVT__flight_15)));
    }
    vlSelfRef.__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelfRef.auto_anon_in_a_valid = ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
                                       ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___nodeOut_a_valid_T)
                                       : (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_out_arvalid) 
                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)) 
                                          | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1) 
                                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))));
    vlSelfRef.__PVT__flight_0 = __Vdly__flight_0;
    vlSelfRef.__PVT__flight_1 = __Vdly__flight_1;
    vlSelfRef.__PVT__flight_2 = __Vdly__flight_2;
    vlSelfRef.__PVT__flight_3 = __Vdly__flight_3;
    vlSelfRef.__PVT__flight_4 = __Vdly__flight_4;
    vlSelfRef.__PVT__flight_5 = __Vdly__flight_5;
    vlSelfRef.__PVT__flight_6 = __Vdly__flight_6;
    vlSelfRef.__PVT__flight_7 = __Vdly__flight_7;
    vlSelfRef.__PVT__flight_8 = __Vdly__flight_8;
    vlSelfRef.__PVT__flight_9 = __Vdly__flight_9;
    vlSelfRef.__PVT__flight_10 = __Vdly__flight_10;
    vlSelfRef.__PVT__flight_11 = __Vdly__flight_11;
    vlSelfRef.__PVT__flight_12 = __Vdly__flight_12;
    vlSelfRef.__PVT__flight_13 = __Vdly__flight_13;
    vlSelfRef.__PVT__flight_14 = __Vdly__flight_14;
    vlSelfRef.__PVT__flight_15 = __Vdly__flight_15;
    vlSelfRef.__PVT__a_first_counter = __Vdly__a_first_counter;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__monitor__DOT__d_first_counter = 0U;
        __Vdly__monitor__DOT__inflight = 0U;
        __Vdly__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__monitor__DOT__watchdog = 0U;
        __Vdly__monitor__DOT__inflight_1 = 0U;
        __Vdly__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__monitor__DOT__watchdog_1 = 0U;
        __Vdly__monitor__DOT__a_first_counter = 0U;
        __Vdly__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[4U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT__monitor__DOT___GEN_0) {
            __Vtemp_7[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_7[0U] = 0U;
            __Vtemp_13[0U] = 0U;
        }
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_7[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__monitor__DOT__watchdog_1 = ((IData)(1U) 
                                                + vlSelfRef.__PVT__monitor__DOT__watchdog_1);
        }
        __Vdly__monitor__DOT__inflight = (0xffffU & 
                                          (((IData)(vlSelfRef.__PVT__monitor__DOT__inflight) 
                                            | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0)
                                                ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))
                                                : 0U)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelfRef.__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__monitor__DOT__watchdog = (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                           | (IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelfRef.__PVT__monitor__DOT__watchdog));
        __Vdly__monitor__DOT__inflight_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1) 
                                            & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                   ? 
                                                  VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                                       : 0ULL)));
        if (vlSelfRef.__PVT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__param_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param;
        vlSelfRef.__PVT__monitor__DOT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source;
        vlSelfRef.__PVT__monitor__DOT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink;
        vlSelfRef.__PVT__monitor__DOT__denied = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__size = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__monitor__DOT__address = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__a_first = (0U == (IData)(vlSelfRef.__PVT__a_first_counter));
    vlSelfRef.__PVT__monitor__DOT__d_first_counter 
        = __Vdly__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__monitor__DOT__inflight = __Vdly__monitor__DOT__inflight;
    vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
        = __Vdly__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes = __Vdly__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__monitor__DOT__watchdog = __Vdly__monitor__DOT__watchdog;
    vlSelfRef.__PVT__monitor__DOT__inflight_1 = __Vdly__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
        = __Vdly__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__monitor__DOT__watchdog_1 = __Vdly__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_1 
        = __Vdly__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_2 
        = __Vdly__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter 
        = __Vdly__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter_1 
        = __Vdly__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__1(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__a_id = ((2U & ((~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                        >> 0x1eU)) 
                                    << 1U)) | (1U & 
                                               (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                >> 0x1eU)));
    vlSelfRef.__PVT__stall = (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                                   >> 3U)) & ((0U == (IData)(vlSelfRef.__PVT__a_first_counter)) 
                                              & (((IData)(vlSelfRef.__PVT__flight_0) 
                                                  | ((IData)(vlSelfRef.__PVT__flight_1) 
                                                     | ((IData)(vlSelfRef.__PVT__flight_2) 
                                                        | ((IData)(vlSelfRef.__PVT__flight_3) 
                                                           | ((IData)(vlSelfRef.__PVT__flight_4) 
                                                              | ((IData)(vlSelfRef.__PVT__flight_5) 
                                                                 | ((IData)(vlSelfRef.__PVT__flight_6) 
                                                                    | (IData)(vlSelfRef.__PVT__flight_7)))))))) 
                                                 & ((0U 
                                                     == (IData)(vlSelfRef.__PVT__a_id)) 
                                                    | ((IData)(vlSelfRef.__PVT__stalls_id) 
                                                       != (IData)(vlSelfRef.__PVT__a_id)))))) 
                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                                  >> 3U) & ((0U == (IData)(vlSelfRef.__PVT__a_first_counter)) 
                                            & (((IData)(vlSelfRef.__PVT__flight_8) 
                                                | ((IData)(vlSelfRef.__PVT__flight_9) 
                                                   | ((IData)(vlSelfRef.__PVT__flight_10) 
                                                      | ((IData)(vlSelfRef.__PVT__flight_11) 
                                                         | ((IData)(vlSelfRef.__PVT__flight_12) 
                                                            | ((IData)(vlSelfRef.__PVT__flight_13) 
                                                               | ((IData)(vlSelfRef.__PVT__flight_14) 
                                                                  | (IData)(vlSelfRef.__PVT__flight_15)))))))) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__a_id)) 
                                                  | ((IData)(vlSelfRef.__PVT__stalls_id_1) 
                                                     != (IData)(vlSelfRef.__PVT__a_id)))))));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_in_a_ready = ((~ (IData)(vlSelfRef.__PVT__stall)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_ready));
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelfRef.auto_anon_in_a_ready) 
                                                   & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
}
