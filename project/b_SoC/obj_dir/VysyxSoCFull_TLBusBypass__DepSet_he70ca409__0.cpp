// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1;
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T;
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = 0;
    SData/*11:0*/ __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9;
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 = 0;
    CData/*5:0*/ __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 = 0;
    SData/*11:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    IData/*26:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    SData/*11:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    QData/*63:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*7:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1);
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__r_counter_3 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__stall_counter;
    __Vdly__bar__DOT__stall_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0;
    CData/*0:0*/ __Vdly__error__DOT__idle;
    __Vdly__error__DOT__idle = 0;
    SData/*9:0*/ __Vdly__error__DOT__r_counter;
    __Vdly__error__DOT__r_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__a_last_counter;
    __Vdly__error__DOT__a_last_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__beatsLeft;
    __Vdly__error__DOT__beatsLeft = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes_1;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes_1);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<5>/*159:0*/ __Vtemp_52;
    VlWide<5>/*159:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    // Body
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSelfRef.__PVT__error__DOT__idle) 
                                  | (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7917: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error: Assertion failed at Error.scala:34\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7917, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7919: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7919, "", false);
    }
    __Vdly__error__DOT__r_counter = vlSelfRef.__PVT__error__DOT__r_counter;
    __Vdly__error__DOT__idle = vlSelfRef.__PVT__error__DOT__idle;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__a_last_counter = vlSelfRef.__PVT__error__DOT__a_last_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__beatsLeft = vlSelfRef.__PVT__error__DOT__beatsLeft;
    __Vdly__bar__DOT__r_counter = vlSelfRef.__PVT__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter_3 = vlSelfRef.__PVT__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__stall_counter = vlSelfRef.__PVT__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xfffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                     & (~ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (4U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                      << 2U) | (0xfffffffcU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 1U) 
                                               & ((~ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address) 
                                                  << 2U)))))) 
           | ((2U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                      | (IData)((1U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address)))) 
                     << 1U)) | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                | (0U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (5U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (7U & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        >> 1U)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__error__DOT__muxState_1)) 
                 | (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[0U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           << 3U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[1U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           >> 0x1dU);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[2U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[3U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
           & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes, 
                        ((QData)((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)) 
                         << 2U));
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7349: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7349, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7351: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7351, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7355: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7355, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7357: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7357, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7361: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7361, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7363: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7363, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7367: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7367, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7369: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7369, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7379: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7379, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7381: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7381, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7385: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7385, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7387: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7387, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7391: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7391, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7393: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7393, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7397: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7397, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7399: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7399, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7403: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7403, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7405: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7405, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7419: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7419, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7421: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7421, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7425: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7425, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7427: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7427, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7437: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7437, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7439: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7439, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7443: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7443, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7445: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7445, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7455: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7455, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7457: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7457, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7461: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7461, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7463: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7463, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7467: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7467, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7469: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7469, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7473: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7473, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7475: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7475, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7479: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7479, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7481: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7481, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7485: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7485, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7487: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7487, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7491: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7491, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7493: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7493, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7497: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7497, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7499: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7499, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7509: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7509, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7511: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7511, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7515: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7515, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7517: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7517, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7521: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7521, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7523: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7523, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7527: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7527, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7529: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7529, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7533: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7533, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7535: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7535, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT__muxState_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7539: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7539, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7541: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7541, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7545: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7545, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7547: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7547, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7551: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7551, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7553: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7553, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7557: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7557, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7559: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7559, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7563: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7563, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7565: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7565, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (0U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7570: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7570, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7572: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7572, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (1U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7576: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7576, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7578: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7578, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (2U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7583: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7583, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7585: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7585, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7589: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7589, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7591: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7591, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7595: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7597, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7601: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7603: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7603, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (0U != ((((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                   ^ vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U]) 
                                  | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U]) 
                                 | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U]) 
                                | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7607: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7609: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7609, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7613: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7615: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7615, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7619: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7621: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7621, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7625: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7627: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7627, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT__muxState_1) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7631: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7633: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7633, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7638: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7638, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7640: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7640, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY(((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7645: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7645, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7647: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7647, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7653: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7653, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7655: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7655, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7659: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7659, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7661: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7661, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7667: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7669: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7669, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7674: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7674, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7676: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7676, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))) 
                        & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7681: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7681, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7683: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7683, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7689: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7689, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7691: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7691, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7696: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7696, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7698: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7698, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7703: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7705: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7705, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7711: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7711, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7713: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7713, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0x1fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                    & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
           & (3U == (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                     >> 0x1eU)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = ((3U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         >> 1U))) & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                                     >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((3U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
              >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (0U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                        >> 1U)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_denied)) 
                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source)) 
           << 2U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
           & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6457: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6457, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6459, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6463: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6463, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6465: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6465, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6469: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6469, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6471: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6471, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6475: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6475, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6477: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6477, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6481: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6481, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6483, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6487: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6487, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6489: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6489, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6493: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6493, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6495: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6495, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6499: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6499, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6501: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6501, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6505: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6505, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6507, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6511: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6511, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6513: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6513, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6517: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6517, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6519: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6519, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6523: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6523, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6525: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6525, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6529: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6529, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6531, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6535: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6535, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6537: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6537, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6541: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6541, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6543: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6543, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6547: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6547, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6549: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6549, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6553: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6553, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6555, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6559: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6559, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6561: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6561, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6565: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6565, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6567: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6567, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6571: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6571, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6573: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6573, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6577: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6577, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6579, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6583: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6583, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6585: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6585, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6589: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6589, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6591: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6591, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6595: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6601: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6603, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6607: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6609: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6609, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6613: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6615: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6615, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6619: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6621: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6621, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6625: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6627, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6631: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6637: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6637, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6639: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6639, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6643: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6643, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6645: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6645, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6649: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6649, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6651, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6655: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6661: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6663: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6663, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6667: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6669: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6669, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6673: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6673, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6675, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6679: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6681: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6681, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6685: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6685, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6687: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6687, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6691: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6691, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6693: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6693, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6697: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6697, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6699: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6699, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6703: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6705: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6705, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6709: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6709, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6711: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6711, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6715: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6715, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6717: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6717, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6721: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6721, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6723, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6727: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6727, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6729: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6729, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6733: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6735: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6735, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6739: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6739, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6741: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6741, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6745: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6745, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6747: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6747, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6751: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6751, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6753: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6753, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6757: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6759: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6759, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__bar__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6763: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6765: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6765, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6769: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6771: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6771, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6775: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6777: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6777, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6781: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6783: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6783, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6787: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6789: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6789, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6793: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6795: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6795, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6799: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6801: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6801, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6806: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6806, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6808: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6808, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6813: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6813, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6815: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6815, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6821: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6821, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6823: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6823, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6827: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6827, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6829: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6829, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6835: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6837: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6837, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6842: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6842, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6844: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6844, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6849: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6849, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6851: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6851, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6857: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6857, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6859: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6859, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6864: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6864, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6866: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6866, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6871: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6873: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6873, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6879: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6879, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6881: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6881, "", false);
    }
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size)));
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_ready) 
         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter));
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 
        = ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
            ? (7U & (~ ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9) 
                        >> 2U))) : 0U);
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3));
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 
        = (0x3fU & (((IData)(vlSelfRef.__PVT__bar__DOT__flight) 
                     + (3U & (((((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                                   >> 2U)) & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                                                 >> 1U))) 
                              + ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first))))) 
                    - ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                       & ((1U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3)) 
                          | (0U == (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3))))));
    if (((IData)(vlSelfRef.__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(__PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10)))) {
        vlSelfRef.__PVT__bar__DOT__bypass_reg = vlSelfRef.io_bypass;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__idle = 1U;
        __Vdly__error__DOT__r_counter = 0U;
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        __Vdly__error__DOT__a_last_counter = 0U;
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = 0U;
        vlSelfRef.__PVT__error__DOT__state_1 = 0U;
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        vlSelfRef.__PVT__bar__DOT__flight = 0U;
        __Vdly__bar__DOT__r_counter = 0U;
        __Vdly__bar__DOT__r_counter_3 = 0U;
        __Vdly__bar__DOT__stall_counter = 0U;
    } else {
        vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
               & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
        __Vdly__error__DOT__idle = ((~ ((IData)(vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) 
                                        & (4U == (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode)))) 
                                    & (IData)(vlSelfRef.__PVT__error__DOT__idle));
        if (vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) {
            __Vdly__error__DOT__r_counter = (0x3ffU 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__da_first)
                                                 ? (IData)(vlSelfRef.__PVT__error__DOT__r_beats1)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__error__DOT__r_counter) 
                                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        if (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
             & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid))) {
            __Vdly__error__DOT__a_last_counter = (0x3ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter))
                                                      ? (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__error__DOT__a_last_counter) 
                                                      - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = (0x3ffU & (
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__idle_1) 
                                                    & (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__error__DOT__winner_1) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))) {
            vlSelfRef.__PVT__error__DOT__state_1 = vlSelfRef.__PVT__error__DOT__winner_1;
        }
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        if (__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) {
            vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__bar__DOT__r_counter = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                    >> 2U)))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter) 
                                                  - (IData)(1U))));
            __Vdly__bar__DOT__stall_counter = (7U & 
                                               ((IData)(vlSelfRef.__PVT__bar__DOT__stall_first)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                   >> 2U)))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__bar__DOT__stall_counter) 
                                                 - (IData)(1U))));
        }
        if (__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) {
            __Vdly__bar__DOT__r_counter_3 = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)
                                                    ? (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3) 
                                                    - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__flight = __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    }
    vlSelfRef.__PVT__bar__DOT__r_counter = __Vdly__bar__DOT__r_counter;
    vlSelfRef.__PVT__bar__DOT__r_counter_3 = __Vdly__bar__DOT__r_counter_3;
    vlSelfRef.__PVT__bar__DOT__stall_counter = __Vdly__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid));
    if (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__denied 
            = vlSelfRef.__PVT__error__DOT__muxState_1;
    }
    if (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U] 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U] = 0U;
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[0U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               << 3U);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[1U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               >> 0x1dU);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[3U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[4U] = 0U;
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        __Vtemp_18[0U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          << 2U);
        __Vtemp_18[1U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          >> 0x1eU);
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_19, __Vtemp_16, __Vtemp_18);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_19[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_19[4U]);
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) {
            __Vtemp_21[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                    << 1U));
            __Vtemp_29[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_21[0U] = 0U;
            __Vtemp_29[0U] = 0U;
        }
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 0U;
        __Vtemp_21[3U] = 0U;
        __Vtemp_21[4U] = 0U;
        __Vtemp_23[0U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          << 2U);
        __Vtemp_23[1U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          >> 0x1eU);
        __Vtemp_23[2U] = 0U;
        __Vtemp_23[3U] = 0U;
        __Vtemp_23[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_24, __Vtemp_21, __Vtemp_23);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_24[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_24[4U]);
        __Vtemp_26[0U] = 0xffU;
        __Vtemp_26[1U] = 0U;
        __Vtemp_26[2U] = 0U;
        __Vtemp_26[3U] = 0U;
        __Vtemp_26[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_27, __Vtemp_26, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_27[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_27[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_27[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_27[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_27[4U]);
        __Vtemp_29[1U] = 0U;
        __Vtemp_29[2U] = 0U;
        __Vtemp_29[3U] = 0U;
        __Vtemp_29[4U] = 0U;
        __Vtemp_31[0U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          << 3U);
        __Vtemp_31[1U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          >> 0x1dU);
        __Vtemp_31[2U] = 0U;
        __Vtemp_31[3U] = 0U;
        __Vtemp_31[4U] = 0U;
        VL_SHIFTL_WWW(132,132,132, __Vtemp_32, __Vtemp_29, __Vtemp_31);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_32[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_32[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_32[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_32[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (0xfU & __Vtemp_32[4U]);
        __Vtemp_34[0U] = 0xffU;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_34[3U] = 0U;
        __Vtemp_34[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_35, __Vtemp_34, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_35[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_35[4U]);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        if (__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                                     >> 2U))
                                                    : 0U)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__error__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__error__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))
                               : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                                             : 0U))));
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog));
        __Vdly__error__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U]
                      : 0U)));
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                                     >> 2U)))));
            __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                  ? 0U : (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                             >> 2U)))
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_51[0U] = 0xfU;
        __Vtemp_51[1U] = 0U;
        __Vtemp_51[2U] = 0U;
        __Vtemp_51[3U] = 0U;
        __Vtemp_51[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_52[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_52[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_52[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_52[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_52[4U]);
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) {
            __Vtemp_54[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                    << 1U));
            __Vtemp_60[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_54[0U] = 0U;
            __Vtemp_60[0U] = 0U;
        }
        __Vtemp_54[1U] = 0U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
        __Vtemp_54[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_55, __Vtemp_54, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_55[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_55[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_55[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_55[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_55[4U]);
        __Vtemp_57[0U] = 0xfU;
        __Vtemp_57[1U] = 0U;
        __Vtemp_57[2U] = 0U;
        __Vtemp_57[3U] = 0U;
        __Vtemp_57[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_58, __Vtemp_57, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_58[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_58[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_58[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_58[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_58[4U]);
        __Vtemp_60[1U] = 0U;
        __Vtemp_60[2U] = 0U;
        __Vtemp_60[3U] = 0U;
        __Vtemp_60[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_61[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_61[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_61[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_61[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_61[4U]);
        __Vtemp_63[0U] = 0xfU;
        __Vtemp_63[1U] = 0U;
        __Vtemp_63[2U] = 0U;
        __Vtemp_63[3U] = 0U;
        __Vtemp_63[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_64[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_64[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_64[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_64[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_64[4U]);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)));
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)));
        if (__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
                                                ? (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                    >> 2U))
                                                : 0U)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__bar__DOT__monitor__DOT__inflight = 
            (0xffffU & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight) 
                         | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source))
                             : 0U)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                           ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source))
                                           : 0U))));
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__watchdog = 
            (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
              | (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
              ? 0U : ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog));
        __Vdly__bar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source))
                      : 0U)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                      : 0ULL)));
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                ? 0U
                                                : (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                    >> 2U)))));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_param;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_sink;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__error__DOT__da_first = (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter));
    vlSelfRef.__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft));
    vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3 
        = ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight 
        = __Vdly__error__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
        = __Vdly__error__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1 
        = __Vdly__error__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
        = __Vdly__error__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight 
        = __Vdly__bar__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
        = __Vdly__bar__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
        = __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))) {
        vlSelfRef.auto_node_out_out_d_bits_size = (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U));
        vlSelfRef.auto_node_out_out_d_bits_opcode = 
            (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                   >> 3U));
    } else {
        vlSelfRef.auto_node_out_out_d_bits_size = (7U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_3));
        vlSelfRef.auto_node_out_out_d_bits_opcode = 
            (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_1));
    }
    vlSelfRef.auto_node_out_out_d_bits_source = (0xfU 
                                                 & (((0xf00U 
                                                      & ((0xfedcba98U 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source), 2U))) 
                                                         << 8U)) 
                                                     | (((0x17U 
                                                          >= 
                                                          (0x1fU 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source))))
                                                          ? 
                                                         (7U 
                                                          & (0xfac688U 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_source)))))
                                                          : 0U) 
                                                        << 4U)) 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,5,32, 
                                                                     (7U 
                                                                      & ((0U 
                                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                                                                          ? 
                                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                          >> 0xdU)
                                                                          : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_4))), 2U))));
    vlSelfRef.__PVT__error__DOT__da_bits_opcode = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                                    ? 
                                                   (7U 
                                                    & (0x911240U 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                                    : 0U);
    vlSelfRef.__PVT__error__DOT__a_last_beats1 = ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & (~ 
                                                      (0x3ffU 
                                                       & (((IData)(0xfffU) 
                                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                                          >> 2U)))));
    vlSelfRef.auto_node_out_out_d_bits_corrupt = (IData)(
                                                         (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                           >> 2U) 
                                                          & (IData)(vlSelfRef.auto_node_out_out_d_bits_opcode)));
    vlSelfRef.__PVT__error__DOT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                              ? (0x3ffU 
                                                 & (~ 
                                                    (0x3ffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                                        >> 2U))))
                                              : 0U);
    vlSelfRef.__PVT__error__DOT__a_last = ((1U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter)) 
                                           | (0U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__2(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_bits_sink = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                                                ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)
                                                    ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)
                                                    : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__sink_r))
                                                : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid) 
                                           & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bar__DOT____VdfgRegularize_h1049f2a8_0_1;
    bar__DOT____VdfgRegularize_h1049f2a8_0_1 = 0;
    // Body
    vlSelfRef.io_bypass = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                                 | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelfRef.__PVT__bar__DOT__bypass = ((IData)(vlSelfRef.__PVT__bar__DOT__in_reset)
                                          ? (IData)(vlSelfRef.io_bypass)
                                          : (IData)(vlSelfRef.__PVT__bar__DOT__bypass_reg));
    vlSelfRef.__PVT__bar__DOT__stall = (((IData)(vlSelfRef.__PVT__bar__DOT__bypass) 
                                         != (IData)(vlSelfRef.io_bypass)) 
                                        & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter)));
    bar__DOT____VdfgRegularize_h1049f2a8_0_1 = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__stall)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.auto_node_out_out_a_valid = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(bar__DOT____VdfgRegularize_h1049f2a8_0_1));
    vlSelfRef.__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgRegularize_h1049f2a8_0_1) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__winner_1 = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__a_last) 
                                                & (IData)(vlSelfRef.__PVT__error__DOT__idle)));
    vlSelfRef.__PVT__error__DOT__muxState_1 = ((0U 
                                                == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))
                                                ? (IData)(vlSelfRef.__PVT__error__DOT__winner_1)
                                                : (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3) 
                                                   & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
    if (vlSelfRef.__PVT__error__DOT__muxState_1) {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode));
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelfRef.__PVT__error__DOT__da_bits_opcode;
    } else {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__2(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_ready = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready));
    vlSelfRef.__PVT___bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__da_ready = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                             & (IData)(vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3));
    vlSelfRef.__PVT__error__DOT__nodeIn_a_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__error__DOT__a_last)) 
                                                      | ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
                                                         & (((1U 
                                                              == (IData)(vlSelfRef.__PVT__error__DOT__r_counter)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.__PVT__error__DOT__r_beats1))) 
                                                            & (IData)(vlSelfRef.__PVT__error__DOT__idle)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
           & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__3(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1;
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T;
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = 0;
    SData/*11:0*/ __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9;
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 = 0;
    CData/*5:0*/ __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 = 0;
    SData/*11:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    IData/*26:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    SData/*11:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    QData/*63:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*7:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1);
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__r_counter_3 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__stall_counter;
    __Vdly__bar__DOT__stall_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0;
    CData/*0:0*/ __Vdly__error__DOT__idle;
    __Vdly__error__DOT__idle = 0;
    SData/*9:0*/ __Vdly__error__DOT__r_counter;
    __Vdly__error__DOT__r_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__a_last_counter;
    __Vdly__error__DOT__a_last_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__beatsLeft;
    __Vdly__error__DOT__beatsLeft = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes_1;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes_1);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<5>/*159:0*/ __Vtemp_52;
    VlWide<5>/*159:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    // Body
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSelfRef.__PVT__error__DOT__idle) 
                                  | (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7917: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error: Assertion failed at Error.scala:34\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7917, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7919: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7919, "", false);
    }
    __Vdly__error__DOT__r_counter = vlSelfRef.__PVT__error__DOT__r_counter;
    __Vdly__error__DOT__idle = vlSelfRef.__PVT__error__DOT__idle;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__a_last_counter = vlSelfRef.__PVT__error__DOT__a_last_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__beatsLeft = vlSelfRef.__PVT__error__DOT__beatsLeft;
    __Vdly__bar__DOT__r_counter = vlSelfRef.__PVT__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter_3 = vlSelfRef.__PVT__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__stall_counter = vlSelfRef.__PVT__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xfffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                     & (~ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (4U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                      << 2U) | (0xfffffffcU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 1U) 
                                               & ((~ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address) 
                                                  << 2U)))))) 
           | ((2U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                      | (IData)((1U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address)))) 
                     << 1U)) | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                | (0U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (5U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (7U & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        >> 1U)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__error__DOT__muxState_1)) 
                 | (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[0U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           << 3U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[1U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           >> 0x1dU);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[2U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[3U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
           & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes, 
                        ((QData)((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)) 
                         << 2U));
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7349: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7349, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7351: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7351, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7355: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7355, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7357: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7357, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7361: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7361, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7363: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7363, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7367: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7367, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7369: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7369, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7379: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7379, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7381: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7381, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7385: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7385, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7387: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7387, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7391: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7391, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7393: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7393, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7397: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7397, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7399: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7399, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7403: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7403, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7405: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7405, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7419: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7419, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7421: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7421, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7425: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7425, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7427: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7427, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7437: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7437, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7439: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7439, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7443: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7443, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7445: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7445, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7455: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7455, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7457: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7457, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7461: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7461, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7463: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7463, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7467: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7467, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7469: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7469, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7473: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7473, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7475: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7475, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7479: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7479, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7481: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7481, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7485: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7485, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7487: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7487, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7491: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7491, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7493: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7493, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7497: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7497, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7499: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7499, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7509: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7509, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7511: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7511, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7515: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7515, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7517: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7517, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7521: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7521, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7523: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7523, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7527: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7527, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7529: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7529, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7533: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7533, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7535: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7535, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT__muxState_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7539: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7539, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7541: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7541, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7545: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7545, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7547: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7547, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7551: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7551, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7553: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7553, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7557: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7557, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7559: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7559, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7563: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7563, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7565: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7565, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (0U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7570: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7570, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7572: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7572, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (1U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7576: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7576, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7578: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7578, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (2U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7583: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7583, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7585: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7585, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7589: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7589, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7591: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7591, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7595: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7597, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7601: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7603: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7603, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (0U != ((((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                   ^ vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U]) 
                                  | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U]) 
                                 | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U]) 
                                | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7607: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7609: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7609, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7613: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7615: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7615, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7619: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7621: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7621, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7625: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7627: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7627, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT__muxState_1) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7631: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7633: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7633, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7638: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7638, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7640: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7640, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY(((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7645: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7645, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7647: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7647, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7653: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7653, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7655: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7655, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7659: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7659, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7661: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7661, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7667: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7669: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7669, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7674: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7674, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7676: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7676, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))) 
                        & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7681: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7681, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7683: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7683, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7689: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7689, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7691: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7691, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7696: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7696, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7698: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7698, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7703: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7705: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7705, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7711: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7711, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7713: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7713, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0x1fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                    & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                    & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address)))));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
           & (3U == (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                     >> 0x1eU)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = ((3U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         >> 1U))) & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                                     >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((3U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
           & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
              >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (0U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                        >> 1U)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_denied)) 
                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source)) 
           << 2U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
           & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6457: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6457, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6459, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6463: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6463, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6465: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6465, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6469: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6469, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6471: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6471, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6475: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6475, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6477: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6477, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6481: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6481, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6483, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6487: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6487, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6489: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6489, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6493: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6493, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6495: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6495, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6499: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6499, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6501: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6501, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6505: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6505, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6507, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6511: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6511, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6513: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6513, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6517: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6517, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6519: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6519, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6523: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6523, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6525: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6525, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6529: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6529, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6531, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6535: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6535, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6537: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6537, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6541: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6541, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6543: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6543, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6547: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6547, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6549: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6549, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6553: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6553, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6555, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6559: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6559, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6561: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6561, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6565: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6565, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6567: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6567, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6571: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6571, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6573: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6573, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6577: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6577, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6579, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6583: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6583, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6585: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6585, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6589: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6589, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6591: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6591, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6595: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6601: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6603, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6607: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6609: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6609, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6613: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6615: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6615, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6619: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6621: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6621, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6625: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6627, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6631: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6637: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6637, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6639: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6639, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6643: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6643, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6645: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6645, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6649: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6649, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6651, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6655: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6661: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6663: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6663, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6667: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6669: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6669, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6673: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6673, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6675, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6679: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6681: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6681, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6685: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6685, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6687: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6687, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6691: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6691, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6693: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6693, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6697: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6697, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6699: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6699, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6703: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6705: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6705, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6709: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6709, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6711: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6711, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6715: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6715, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6717: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6717, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6721: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6721, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6723, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6727: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6727, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6729: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6729, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6733: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6735: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6735, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6739: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6739, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6741: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6741, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6745: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6745, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6747: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6747, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6751: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6751, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6753: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6753, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6757: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6759: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6759, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__bar__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6763: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6765: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6765, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6769: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6771: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6771, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6775: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6777: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6777, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6781: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6783: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6783, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6787: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6789: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6789, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6793: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6795: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6795, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6799: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6801: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6801, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6806: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6806, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6808: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6808, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6813: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6813, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6815: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6815, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6821: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6821, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6823: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6823, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6827: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6827, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6829: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6829, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6835: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6837: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6837, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6842: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6842, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6844: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6844, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6849: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6849, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6851: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6851, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6857: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6857, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6859: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6859, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6864: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6864, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6866: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6866, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6871: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6873: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6873, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6879: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6879, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6881: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6881, "", false);
    }
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size)));
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_ready) 
         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter));
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 
        = ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
            ? (7U & (~ ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9) 
                        >> 2U))) : 0U);
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3));
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 
        = (0x3fU & (((IData)(vlSelfRef.__PVT__bar__DOT__flight) 
                     + (3U & (((((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                                   >> 2U)) & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode) 
                                                 >> 1U))) 
                              + ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first))))) 
                    - ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                       & ((1U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3)) 
                          | (0U == (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3))))));
    if (((IData)(vlSelfRef.__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(__PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10)))) {
        vlSelfRef.__PVT__bar__DOT__bypass_reg = vlSelfRef.io_bypass;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__idle = 1U;
        __Vdly__error__DOT__r_counter = 0U;
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        __Vdly__error__DOT__a_last_counter = 0U;
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = 0U;
        vlSelfRef.__PVT__error__DOT__state_1 = 0U;
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        vlSelfRef.__PVT__bar__DOT__flight = 0U;
        __Vdly__bar__DOT__r_counter = 0U;
        __Vdly__bar__DOT__r_counter_3 = 0U;
        __Vdly__bar__DOT__stall_counter = 0U;
    } else {
        vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
               & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
        __Vdly__error__DOT__idle = ((~ ((IData)(vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) 
                                        & (4U == (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode)))) 
                                    & (IData)(vlSelfRef.__PVT__error__DOT__idle));
        if (vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) {
            __Vdly__error__DOT__r_counter = (0x3ffU 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__da_first)
                                                 ? (IData)(vlSelfRef.__PVT__error__DOT__r_beats1)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__error__DOT__r_counter) 
                                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        if (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
             & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid))) {
            __Vdly__error__DOT__a_last_counter = (0x3ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter))
                                                      ? (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__error__DOT__a_last_counter) 
                                                      - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = (0x3ffU & (
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__idle_1) 
                                                    & (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__error__DOT__winner_1) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))) {
            vlSelfRef.__PVT__error__DOT__state_1 = vlSelfRef.__PVT__error__DOT__winner_1;
        }
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        if (__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) {
            vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__bar__DOT__r_counter = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                    >> 2U)))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter) 
                                                  - (IData)(1U))));
            __Vdly__bar__DOT__stall_counter = (7U & 
                                               ((IData)(vlSelfRef.__PVT__bar__DOT__stall_first)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                   >> 2U)))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__bar__DOT__stall_counter) 
                                                 - (IData)(1U))));
        }
        if (__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) {
            __Vdly__bar__DOT__r_counter_3 = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)
                                                    ? (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3) 
                                                    - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__flight = __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    }
    vlSelfRef.__PVT__bar__DOT__r_counter = __Vdly__bar__DOT__r_counter;
    vlSelfRef.__PVT__bar__DOT__r_counter_3 = __Vdly__bar__DOT__r_counter_3;
    vlSelfRef.__PVT__bar__DOT__stall_counter = __Vdly__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid));
    if (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__denied 
            = vlSelfRef.__PVT__error__DOT__muxState_1;
    }
    if (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U] 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U] = 0U;
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[0U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               << 3U);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[1U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               >> 0x1dU);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[3U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[4U] = 0U;
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        __Vtemp_18[0U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          << 2U);
        __Vtemp_18[1U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          >> 0x1eU);
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_19, __Vtemp_16, __Vtemp_18);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_19[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_19[4U]);
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) {
            __Vtemp_21[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                    << 1U));
            __Vtemp_29[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_21[0U] = 0U;
            __Vtemp_29[0U] = 0U;
        }
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 0U;
        __Vtemp_21[3U] = 0U;
        __Vtemp_21[4U] = 0U;
        __Vtemp_23[0U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          << 2U);
        __Vtemp_23[1U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          >> 0x1eU);
        __Vtemp_23[2U] = 0U;
        __Vtemp_23[3U] = 0U;
        __Vtemp_23[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_24, __Vtemp_21, __Vtemp_23);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_24[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_24[4U]);
        __Vtemp_26[0U] = 0xffU;
        __Vtemp_26[1U] = 0U;
        __Vtemp_26[2U] = 0U;
        __Vtemp_26[3U] = 0U;
        __Vtemp_26[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_27, __Vtemp_26, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_27[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_27[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_27[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_27[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_27[4U]);
        __Vtemp_29[1U] = 0U;
        __Vtemp_29[2U] = 0U;
        __Vtemp_29[3U] = 0U;
        __Vtemp_29[4U] = 0U;
        __Vtemp_31[0U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          << 3U);
        __Vtemp_31[1U] = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
                          >> 0x1dU);
        __Vtemp_31[2U] = 0U;
        __Vtemp_31[3U] = 0U;
        __Vtemp_31[4U] = 0U;
        VL_SHIFTL_WWW(132,132,132, __Vtemp_32, __Vtemp_29, __Vtemp_31);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_32[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_32[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_32[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_32[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (0xfU & __Vtemp_32[4U]);
        __Vtemp_34[0U] = 0xffU;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_34[3U] = 0U;
        __Vtemp_34[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_35, __Vtemp_34, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_35[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_35[4U]);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        if (__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                                     >> 2U))
                                                    : 0U)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__error__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__error__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))
                               : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                                             : 0U))));
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog));
        __Vdly__error__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U]
                      : 0U)));
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                                     >> 2U)))));
            __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                  ? 0U : (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                             >> 2U)))
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_51[0U] = 0xfU;
        __Vtemp_51[1U] = 0U;
        __Vtemp_51[2U] = 0U;
        __Vtemp_51[3U] = 0U;
        __Vtemp_51[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_52[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_52[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_52[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_52[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_52[4U]);
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) {
            __Vtemp_54[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode) 
                                    << 1U));
            __Vtemp_60[0U] = (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_54[0U] = 0U;
            __Vtemp_60[0U] = 0U;
        }
        __Vtemp_54[1U] = 0U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
        __Vtemp_54[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_55, __Vtemp_54, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_55[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_55[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_55[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_55[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_55[4U]);
        __Vtemp_57[0U] = 0xfU;
        __Vtemp_57[1U] = 0U;
        __Vtemp_57[2U] = 0U;
        __Vtemp_57[3U] = 0U;
        __Vtemp_57[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_58, __Vtemp_57, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_58[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_58[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_58[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_58[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_58[4U]);
        __Vtemp_60[1U] = 0U;
        __Vtemp_60[2U] = 0U;
        __Vtemp_60[3U] = 0U;
        __Vtemp_60[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_61[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_61[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_61[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_61[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_61[4U]);
        __Vtemp_63[0U] = 0xfU;
        __Vtemp_63[1U] = 0U;
        __Vtemp_63[2U] = 0U;
        __Vtemp_63[3U] = 0U;
        __Vtemp_63[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_64[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_64[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_64[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_64[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_64[4U]);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)));
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode)));
        if (__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
                                                ? (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                    >> 2U))
                                                : 0U)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__bar__DOT__monitor__DOT__inflight = 
            (0xffffU & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight) 
                         | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source))
                             : 0U)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                           ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source))
                                           : 0U))));
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__watchdog = 
            (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
              | (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
              ? 0U : ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog));
        __Vdly__bar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source))
                      : 0U)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                      : 0ULL)));
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                ? 0U
                                                : (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                    >> 2U)))));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_param;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_sink;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__error__DOT__da_first = (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter));
    vlSelfRef.__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft));
    vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3 
        = ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight 
        = __Vdly__error__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
        = __Vdly__error__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1 
        = __Vdly__error__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
        = __Vdly__error__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight 
        = __Vdly__bar__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
        = __Vdly__bar__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
        = __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))) {
        vlSelfRef.auto_node_out_out_d_bits_size = (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U));
        vlSelfRef.auto_node_out_out_d_bits_opcode = 
            (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                   >> 3U));
    } else {
        vlSelfRef.auto_node_out_out_d_bits_size = (7U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_3));
        vlSelfRef.auto_node_out_out_d_bits_opcode = 
            (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_1));
    }
    vlSelfRef.auto_node_out_out_d_bits_source = (0xfU 
                                                 & (((0xf00U 
                                                      & ((0xfedcba98U 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_source), 2U))) 
                                                         << 8U)) 
                                                     | (((0x17U 
                                                          >= 
                                                          (0x1fU 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_source))))
                                                          ? 
                                                         (7U 
                                                          & (0xfac688U 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_source)))))
                                                          : 0U) 
                                                        << 4U)) 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,5,32, 
                                                                     (7U 
                                                                      & ((0U 
                                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
                                                                          ? 
                                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                          >> 0xdU)
                                                                          : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_4))), 2U))));
    vlSelfRef.__PVT__error__DOT__da_bits_opcode = (
                                                   (0x17U 
                                                    >= 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))))
                                                    ? 
                                                   (7U 
                                                    & (0x911240U 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode)))))
                                                    : 0U);
    vlSelfRef.__PVT__error__DOT__a_last_beats1 = ((4U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & (~ 
                                                      (0x3ffU 
                                                       & (((IData)(0xfffU) 
                                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                                          >> 2U)))));
    vlSelfRef.auto_node_out_out_d_bits_corrupt = (IData)(
                                                         (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                           >> 2U) 
                                                          & (IData)(vlSelfRef.auto_node_out_out_d_bits_opcode)));
    vlSelfRef.__PVT__error__DOT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                              ? (0x3ffU 
                                                 & (~ 
                                                    (0x3ffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size)) 
                                                        >> 2U))))
                                              : 0U);
    vlSelfRef.__PVT__error__DOT__a_last = ((1U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter)) 
                                           | (0U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__2(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_bits_sink = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                                                ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)
                                                    ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)
                                                    : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__sink_r))
                                                : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid) 
                                           & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bar__DOT____VdfgRegularize_h1049f2a8_0_1;
    bar__DOT____VdfgRegularize_h1049f2a8_0_1 = 0;
    // Body
    vlSelfRef.io_bypass = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                                 | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelfRef.__PVT__bar__DOT__bypass = ((IData)(vlSelfRef.__PVT__bar__DOT__in_reset)
                                          ? (IData)(vlSelfRef.io_bypass)
                                          : (IData)(vlSelfRef.__PVT__bar__DOT__bypass_reg));
    vlSelfRef.__PVT__bar__DOT__stall = (((IData)(vlSelfRef.__PVT__bar__DOT__bypass) 
                                         != (IData)(vlSelfRef.io_bypass)) 
                                        & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter)));
    bar__DOT____VdfgRegularize_h1049f2a8_0_1 = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__stall)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.auto_node_out_out_a_valid = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(bar__DOT____VdfgRegularize_h1049f2a8_0_1));
    vlSelfRef.__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgRegularize_h1049f2a8_0_1) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__winner_1 = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__a_last) 
                                                & (IData)(vlSelfRef.__PVT__error__DOT__idle)));
    vlSelfRef.__PVT__error__DOT__muxState_1 = ((0U 
                                                == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))
                                                ? (IData)(vlSelfRef.__PVT__error__DOT__winner_1)
                                                : (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3) 
                                                   & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
    if (vlSelfRef.__PVT__error__DOT__muxState_1) {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelfRef.__PVT__error__DOT__da_bits_opcode;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode));
    } else {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__2(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_ready = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready));
    vlSelfRef.__PVT___bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__da_ready = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                             & (IData)(vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3));
    vlSelfRef.__PVT__error__DOT__nodeIn_a_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__error__DOT__a_last)) 
                                                      | ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
                                                         & (((1U 
                                                              == (IData)(vlSelfRef.__PVT__error__DOT__r_counter)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.__PVT__error__DOT__r_beats1))) 
                                                            & (IData)(vlSelfRef.__PVT__error__DOT__idle)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
           & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__3(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)));
}
