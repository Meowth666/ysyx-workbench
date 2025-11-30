// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    CData/*2:0*/ __Vdly__beatsLeft;
    __Vdly__beatsLeft = 0;
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
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__winner_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__winner_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5260: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1: Assertion failed at Arbiter.scala:77\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5260, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5262: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5262, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ ((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                       | (IData)(vlSelfRef.auto_anon_out_1_d_valid))) 
                                   | (IData)(vlSelfRef.__PVT__winner_0)) 
                                  | (IData)(vlSelfRef.__PVT__winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5266: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1: Assertion failed at Arbiter.scala:79\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5266, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5268: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5268, "", false);
    }
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
    __Vdly__beatsLeft = vlSelfRef.__PVT__beatsLeft;
    __Vdly__monitor__DOT__a_first_counter = vlSelfRef.__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__a_first_counter_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSelfRef.auto_anon_in_a_bits_size)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSelfRef.auto_anon_in_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                    & (~ (vlSelfRef.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                    & (vlSelfRef.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSelfRef.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSelfRef.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelfRef.auto_anon_in_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSelfRef.auto_anon_in_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSelfRef.auto_anon_in_a_bits_address)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        (3U != (3U & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                      >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (0U == ((0xffffeU & (vlSelfRef.auto_anon_in_a_bits_address 
                             >> 0xcU)) | (1U & (~ (vlSelfRef.auto_anon_in_a_bits_address 
                                                   >> 0xcU)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
         & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((5U == (IData)(vlSelfRef.auto_anon_in_a_bits_size)) 
            & (3U == (vlSelfRef.auto_anon_in_a_bits_address 
                      >> 0x1eU))) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (6U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSelfRef.auto_anon_in_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (7U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSelfRef.auto_anon_in_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (4U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSelfRef.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (1U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSelfRef.auto_anon_in_a_bits_size)) 
            & (vlSelfRef.auto_anon_in_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (2U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (3U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (5U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (6U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (4U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSelfRef.auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSelfRef.auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (5U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSelfRef.auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (0U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (1U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (2U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSelfRef.auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSelfRef.auto_anon_in_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
              == (IData)(vlSelfRef.auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSelfRef.auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4599: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4599, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4601: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4601, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4605: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4605, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4607: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4607, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (0U != (3U & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4611: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4611, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4613: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4613, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4617: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4617, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4619: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4619, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4623: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4623, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4625: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4625, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4629: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4629, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4631: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4631, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4635: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4635, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4637: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4637, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (0U != (3U & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4641: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4641, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4643: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4643, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4647: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4647, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4649: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4649, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4653: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4653, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4655: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4655, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4659: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4659, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4661: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4661, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4665: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4665, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4667: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4667, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4671: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4671, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4673: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4673, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4677: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4677, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4679: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4679, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4683: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4683, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4685: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4685, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4689: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4689, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4691: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4691, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4695: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4695, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4697: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4697, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4701: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4701, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4703: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4703, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4707: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4707, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4709: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4709, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != ((IData)(vlSelfRef.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4713: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4713, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4715: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4715, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4719: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4719, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4721: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4721, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4725: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4725, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4727: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4727, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4731: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4731, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4733: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4733, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4737: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4737, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4739: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4739, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4743: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4743, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4745: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4745, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4749: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4749, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4751: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4751, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4755: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4755, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4757: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4757, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4761: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4761, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4763: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4763, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4767: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4767, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4769: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4769, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.auto_anon_in_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4773: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4773, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4775: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4775, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4779: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4779, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4781: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4781, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4785: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4785, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4787: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4787, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4791: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4791, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4793: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4793, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4797: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4797, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4799: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4799, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4803: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4803, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4805: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4805, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4809: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4809, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4811: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4811, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (3U == (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4815: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4815, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4817: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4817, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4821: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4821, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4823: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4823, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4827: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4827, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4829: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4829, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4833: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4833, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4835: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4835, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4839: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4839, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4841: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4841, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (3U == (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4845: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4845, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4847: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4847, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4851: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4851, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4853: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4853, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4857: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4857, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4859: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4859, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4863: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4863, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4865: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4865, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4869: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4869, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4871: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4871, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4875: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4875, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4877: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4877, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4881: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4881, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4883: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4883, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4887: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4887, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4889: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4889, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4893: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4893, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4895: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4895, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4899: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4899, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4901: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4901, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4905: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4905, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4907: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4907, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4911: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4911, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4913: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4913, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (vlSelfRef.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4917: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4917, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4919: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4919, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4923: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4923, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4925: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4925, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4929: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4929, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4931: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4931, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4935: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4935, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4937: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4937, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4941: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4941, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4943: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4943, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4947: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4947, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4949: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4949, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4953: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4953, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4955: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4955, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSelfRef.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4960: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4960, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4962: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4962, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSelfRef.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                            | (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4967: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4967, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4969: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4969, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & (~ (((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4975: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4975, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4977: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4977, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.auto_anon_in_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4981: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4981, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4983: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4983, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & (~ (((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
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
                                  : 0U)) | ((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4989: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4989, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4991: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4991, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4996: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4996, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4998: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4998, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.auto_anon_in_a_valid)) 
                         & ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
                            == (IData)(vlSelfRef.auto_anon_in_d_bits_source))) 
                        & (6U != (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSelfRef.auto_anon_in_d_ready)) 
                            | (IData)(vlSelfRef.auto_anon_in_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5003: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5003, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5005: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5005, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5011: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5011, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5013: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5013, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1), (IData)(vlSelfRef.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5018: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5018, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5020: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5020, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5025: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5025, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5027: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5027, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5033: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5033, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5035: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5035, "", false);
    }
    vlSelfRef.auto_anon_in_a_bits_data = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                           ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                               ? (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                          >> 5U))
                                               : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_data)
                                           : 0U);
    vlSelfRef.auto_anon_out_1_d_bits_denied = ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__beatsLeft))
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__winner_1)
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__state_1));
    vlSelfRef.auto_anon_out_1_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__VdfgRegularize_h6c8fa2cb_0_3) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__winner_1));
    if (vlSelfRef.auto_anon_out_1_d_bits_denied) {
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 
            (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__da_bits_opcode));
        vlSelfRef.auto_anon_out_1_d_bits_source = (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q__DOT__ram 
                                                              >> 0x32U)));
    } else {
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_source = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__state_1 = 0U;
        vlSelfRef.__PVT__state_0 = 0U;
        __Vdly__beatsLeft = 0U;
        vlSelfRef.__PVT__readys_mask = 3U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
            vlSelfRef.__PVT__state_1 = vlSelfRef.__PVT__winner_1;
            vlSelfRef.__PVT__state_0 = vlSelfRef.__PVT__winner_0;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__latch = 
            ((IData)(vlSelfRef.__PVT__idle) & (IData)(vlSelfRef.auto_anon_in_d_ready));
        vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T_3 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.auto_anon_out_1_d_bits_size)));
        vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.auto_anon_out_0_d_bits_size)));
        __Vdly__beatsLeft = (7U & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__latch)
                                    ? ((((IData)(vlSelfRef.__PVT__winner_0) 
                                         & (IData)(vlSelfRef.auto_anon_out_0_d_bits_opcode))
                                         ? (~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T) 
                                               >> 2U))
                                         : 0U) | (((IData)(vlSelfRef.__PVT__winner_1) 
                                                   & (IData)(vlSelfRef.auto_anon_out_1_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T_3) 
                                                    >> 2U))
                                                   : 0U))
                                    : ((IData)(vlSelfRef.__PVT__beatsLeft) 
                                       - ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                          & (IData)(vlSelfRef.auto_anon_in_d_valid)))));
        if (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__latch) 
             & (0U != (IData)(vlSelfRef.__PVT__readys_valid)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.__PVT__readys_readys) 
                   & (IData)(vlSelfRef.__PVT__readys_valid));
            vlSelfRef.__PVT__readys_mask = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                            | (2U & 
                                               ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                                << 1U)));
        }
    }
    if (vlSelfRef.auto_anon_out_1_d_bits_denied) {
        vlSelfRef.auto_anon_out_1_d_bits_size = (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)));
        vlSelfRef.auto_anon_out_1_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__da_bits_opcode;
    } else {
        vlSelfRef.auto_anon_out_1_d_bits_size = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_opcode = 0U;
    }
    vlSelfRef.__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
           & (IData)(vlSelfRef.auto_anon_in_d_valid));
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
            = ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[1U] 
            = ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[4U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[0U] 
            = ((IData)(vlSelfRef.auto_anon_in_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSelfRef.auto_anon_in_d_bits_source) 
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
            __Vtemp_7[0U] = (1U | ((IData)(vlSelfRef.auto_anon_in_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
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
               & (6U != (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)));
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
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
                                                ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.auto_anon_in_a_bits_source))
                                                : 0U)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.auto_anon_in_d_bits_source))
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
                                                  VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.auto_anon_in_d_bits_source))
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
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSelfRef.auto_anon_in_a_bits_size)));
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode_1 = vlSelfRef.auto_anon_in_d_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__param_1 = vlSelfRef.auto_anon_in_d_bits_param;
        vlSelfRef.__PVT__monitor__DOT__size_1 = vlSelfRef.auto_anon_in_d_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source_1 = vlSelfRef.auto_anon_in_d_bits_source;
        vlSelfRef.__PVT__monitor__DOT__sink = vlSelfRef.auto_anon_in_d_bits_sink;
        vlSelfRef.__PVT__monitor__DOT__denied = vlSelfRef.auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode = vlSelfRef.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__size = vlSelfRef.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source = vlSelfRef.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__monitor__DOT__address = vlSelfRef.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__idle = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_in_a_bits_mask = (0xfU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                                    ? 
                                                   (((8U 
                                                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                                << 2U) 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                                  << 3U))))) 
                                                     | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                         | (2U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                          | (0U 
                                                             == 
                                                             (3U 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))))
                                                    : 0U) 
                                                  | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                       ? (IData)(
                                                                 (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                  >> 1U))
                                                       : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_strb))
                                                      : 0U)));
    vlSelfRef.auto_anon_in_a_bits_size = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_3)
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9)
                                            : 0U));
    vlSelfRef.auto_anon_in_a_bits_source = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                              ? (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arid) 
                                                  << 3U) 
                                                 | (6U 
                                                    & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arid)
                                                         ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                                       << 1U)))
                                              : 0U) 
                                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                ? (1U 
                                                   | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awid) 
                                                       << 3U) 
                                                      | (6U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awid)
                                                              ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                              : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                            << 1U))))
                                                : 0U));
    vlSelfRef.auto_anon_in_a_bits_opcode = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1));
    vlSelfRef.auto_anon_in_a_bits_address = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
                                               ? vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr
                                               : 0U) 
                                             | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                 ? 
                                                (((6U 
                                                   > 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi)) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9))) 
                                                  & ((0U 
                                                      == 
                                                      ((0xffffeU 
                                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr 
                                                           >> 0xcU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr 
                                                              >> 0xcU))))) 
                                                     | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr 
                                                        >> 0x1eU)))
                                                  ? vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr
                                                  : 
                                                 (0x1000U 
                                                  | (3U 
                                                     & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr)))
                                                 : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__2(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_in_a_valid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_1_a_valid = ((~ (vlSelfRef.auto_anon_in_a_bits_address 
                                             >> 0x1eU)) 
                                         & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_0_a_valid = ((IData)(vlSelfRef.auto_anon_in_a_valid) 
                                         & (vlSelfRef.auto_anon_in_a_bits_address 
                                            >> 0x1eU));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass) {
        vlSelfRef.auto_anon_out_0_d_bits_param = 0U;
        vlSelfRef.auto_anon_out_0_d_bits_sink = 0U;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19));
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelfRef.auto_anon_out_0_d_bits_param = (3U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.auto_anon_out_0_d_bits_sink = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                      >> 2U));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size));
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode;
    }
    vlSelfRef.__PVT__readys_valid = (((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                      << 1U) | (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__readys_valid));
    vlSelfRef.__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                               << 1U)) 
                                        | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                   << 1U)) 
                                            | (IData)(vlSelfRef.auto_anon_out_1_d_valid)) 
                                           | (IData)(__PVT___readys_filter_T_1))) 
                                       | ((IData)(vlSelfRef.__PVT__readys_mask) 
                                          << 2U));
    vlSelfRef.__PVT__readys_readys = (3U & (~ (((IData)(vlSelfRef.__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__PVT__readys_unready))));
    vlSelfRef.__PVT__winner_1 = (((IData)(vlSelfRef.__PVT__readys_readys) 
                                  >> 1U) & (IData)(vlSelfRef.auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__winner_0 = ((IData)(vlSelfRef.__PVT__readys_readys) 
                                 & (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
        vlSelfRef.auto_anon_in_d_valid = ((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                          | (IData)(vlSelfRef.auto_anon_out_1_d_valid));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__winner_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__winner_0;
    } else {
        vlSelfRef.auto_anon_in_d_valid = (((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                           & (IData)(vlSelfRef.__PVT__state_0)) 
                                          | ((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                             & (IData)(vlSelfRef.__PVT__state_1)));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__state_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__state_0;
    }
    if (vlSelfRef.__PVT__muxState_0) {
        vlSelfRef.auto_anon_in_d_bits_param = vlSelfRef.auto_anon_out_0_d_bits_param;
        vlSelfRef.auto_anon_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                               ? 0U
                                               : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelfRef.auto_anon_in_d_bits_param = 0U;
        vlSelfRef.auto_anon_in_d_bits_data = 0U;
    }
    vlSelfRef.auto_anon_in_d_bits_sink = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_sink)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1) 
                                           << 5U));
    vlSelfRef.auto_anon_in_d_bits_corrupt = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                              & (IData)(vlSelfRef.auto_anon_out_0_d_bits_corrupt)) 
                                             | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                                & (IData)(vlSelfRef.auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.auto_anon_in_d_bits_denied = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                             & (IData)(vlSelfRef.auto_anon_out_0_d_bits_denied)) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                               & (IData)(vlSelfRef.auto_anon_out_1_d_bits_denied)));
    vlSelfRef.auto_anon_in_d_bits_size = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_size)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1)
                                            ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_size)
                                            : 0U));
    vlSelfRef.auto_anon_in_d_bits_source = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_source)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_source)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_bits_opcode = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_opcode)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_opcode)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_ready = (1U & ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                                             ? (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full))
                                             : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full))));
    vlSelfRef.auto_anon_out_1_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? ((IData)(vlSelfRef.__PVT__readys_readys) 
                                                >> 1U)
                                             : (IData)(vlSelfRef.__PVT__state_1)));
    vlSelfRef.auto_anon_out_0_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? (IData)(vlSelfRef.__PVT__readys_readys)
                                             : (IData)(vlSelfRef.__PVT__state_0)));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_out_0_a_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready)
                                                   : 
                                                  (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelfRef.auto_anon_in_a_ready = (1U & (((vlSelfRef.auto_anon_in_a_bits_address 
                                              >> 0x1eU) 
                                             & (IData)(vlSelfRef.auto_anon_out_0_a_ready)) 
                                            | ((~ (vlSelfRef.auto_anon_in_a_bits_address 
                                                   >> 0x1eU)) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q__DOT__full)))));
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelfRef.auto_anon_in_a_ready) 
                                                   & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    CData/*2:0*/ __Vdly__beatsLeft;
    __Vdly__beatsLeft = 0;
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
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__winner_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__winner_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5260: Assertion failed in %NysyxSoCFull.fpga.xbar_1: Assertion failed at Arbiter.scala:77\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5260, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5262: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5262, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ ((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                       | (IData)(vlSelfRef.auto_anon_out_1_d_valid))) 
                                   | (IData)(vlSelfRef.__PVT__winner_0)) 
                                  | (IData)(vlSelfRef.__PVT__winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5266: Assertion failed in %NysyxSoCFull.fpga.xbar_1: Assertion failed at Arbiter.scala:79\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5266, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5268: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5268, "", false);
    }
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
    __Vdly__beatsLeft = vlSelfRef.__PVT__beatsLeft;
    __Vdly__monitor__DOT__a_first_counter = vlSelfRef.__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__a_first_counter_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSelfRef.auto_anon_in_a_bits_size)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSelfRef.auto_anon_in_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                    & (~ (vlSelfRef.auto_anon_in_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelfRef.auto_anon_in_a_bits_size))) 
                 | ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                    & (vlSelfRef.auto_anon_in_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSelfRef.auto_anon_in_a_bits_address 
                                              << 2U) 
                                             & (vlSelfRef.auto_anon_in_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelfRef.auto_anon_in_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSelfRef.auto_anon_in_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSelfRef.auto_anon_in_a_bits_address)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        (3U != (3U & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                      >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (0U == ((0xffffeU & (vlSelfRef.auto_anon_in_a_bits_address 
                             >> 0xcU)) | (1U & (~ (vlSelfRef.auto_anon_in_a_bits_address 
                                                   >> 0xcU)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
         & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((5U == (IData)(vlSelfRef.auto_anon_in_a_bits_size)) 
            & (3U == (vlSelfRef.auto_anon_in_a_bits_address 
                      >> 0x1eU))) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (6U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSelfRef.auto_anon_in_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (7U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSelfRef.auto_anon_in_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (4U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSelfRef.auto_anon_in_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (1U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSelfRef.auto_anon_in_a_bits_size)) 
            & (vlSelfRef.auto_anon_in_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (2U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (3U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (5U == (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (6U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (4U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSelfRef.auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSelfRef.auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (5U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSelfRef.auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (0U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (1U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (2U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSelfRef.auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSelfRef.auto_anon_in_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
              == (IData)(vlSelfRef.auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSelfRef.auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelfRef.auto_anon_in_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelfRef.auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4599: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4599, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4601: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4601, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4605: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4605, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4607: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4607, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (0U != (3U & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4611: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4611, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4613: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4613, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4617: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4617, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4619: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4619, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4623: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4623, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4625: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4625, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4629: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4629, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4631: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4631, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4635: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4635, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4637: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4637, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (0U != (3U & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4641: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4641, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4643: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4643, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4647: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4647, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4649: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4649, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4653: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4653, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4655: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4655, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4659: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4659, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4661: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4661, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4665: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4665, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4667: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4667, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4671: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4671, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4673: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4673, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4677: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4677, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4679: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4679, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4683: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4683, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4685: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4685, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4689: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4689, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4691: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4691, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4695: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4695, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4697: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4697, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4701: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4701, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4703: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4703, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4707: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4707, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4709: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4709, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != ((IData)(vlSelfRef.auto_anon_in_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4713: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4713, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4715: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4715, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4719: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4719, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4721: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4721, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4725: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4725, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4727: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4727, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4731: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4731, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4733: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4733, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4737: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4737, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4739: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4739, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4743: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4743, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4745: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4745, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4749: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4749, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4751: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4751, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4755: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4755, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4757: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4757, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4761: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4761, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4763: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4763, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4767: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4767, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4769: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4769, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.auto_anon_in_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4773: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4773, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4775: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4775, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4779: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4779, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4781: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4781, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4785: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4785, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4787: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4787, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4791: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4791, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4793: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4793, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4797: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4797, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4799: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4799, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4803: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4803, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4805: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4805, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4809: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4809, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4811: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4811, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (3U == (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4815: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4815, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4817: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4817, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4821: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4821, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4823: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4823, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4827: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4827, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4829: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4829, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4833: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4833, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4835: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4835, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4839: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4839, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4841: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4841, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (3U == (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4845: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4845, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4847: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4847, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4851: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4851, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4853: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4853, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4857: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4857, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4859: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4859, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4863: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4863, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4865: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4865, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4869: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4869, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4871: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4871, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4875: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4875, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4877: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4877, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4881: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4881, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4883: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4883, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (0U != (IData)(vlSelfRef.auto_anon_in_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4887: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4887, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4889: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4889, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (IData)(vlSelfRef.auto_anon_in_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4893: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4893, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4895: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4895, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4899: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4899, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4901: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4901, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4905: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4905, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4907: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4907, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4911: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4911, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4913: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4913, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (vlSelfRef.auto_anon_in_a_bits_address 
                         != vlSelfRef.__PVT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4917: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4917, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4919: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4919, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4923: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4923, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4925: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4925, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4929: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4929, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4931: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4931, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4935: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4935, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4937: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4937, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4941: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4941, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4943: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4943, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4947: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4947, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4949: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4949, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4953: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4953, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4955: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4955, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSelfRef.auto_anon_in_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4960: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4960, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4962: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4962, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSelfRef.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                            | (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4967: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4967, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4969: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4969, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & (~ (((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelfRef.auto_anon_in_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4975: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4975, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4977: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4977, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                      & ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
                         != (IData)(vlSelfRef.auto_anon_in_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4981: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4981, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4983: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4983, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & (~ (((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
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
                                  : 0U)) | ((IData)(vlSelfRef.auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4989: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4989, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4991: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4991, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4996: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4996, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4998: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4998, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.auto_anon_in_a_valid)) 
                         & ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
                            == (IData)(vlSelfRef.auto_anon_in_d_bits_source))) 
                        & (6U != (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSelfRef.auto_anon_in_d_ready)) 
                            | (IData)(vlSelfRef.auto_anon_in_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5003: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5003, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5005: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5005, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5011: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5011, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5013: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5013, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1), (IData)(vlSelfRef.auto_anon_in_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5018: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5018, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5020: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5020, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                      & ((IData)(vlSelfRef.auto_anon_in_d_bits_size) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5025: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5025, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5027: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5027, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5033: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/meowth/ysyx/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5033, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5035: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5035, "", false);
    }
    vlSelfRef.auto_anon_in_a_bits_data = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                           ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                               ? (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                          >> 5U))
                                               : 0U)
                                           : 0U);
    vlSelfRef.auto_anon_out_1_d_bits_denied = ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__beatsLeft))
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__winner_1)
                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__state_1));
    vlSelfRef.auto_anon_out_1_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__VdfgRegularize_h6c8fa2cb_0_3) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__winner_1));
    if (vlSelfRef.auto_anon_out_1_d_bits_denied) {
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 
            (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_bits_opcode));
        vlSelfRef.auto_anon_out_1_d_bits_source = (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q__DOT__ram 
                                                              >> 0x32U)));
    } else {
        vlSelfRef.auto_anon_out_1_d_bits_corrupt = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_source = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__state_1 = 0U;
        vlSelfRef.__PVT__state_0 = 0U;
        __Vdly__beatsLeft = 0U;
        vlSelfRef.__PVT__readys_mask = 3U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
            vlSelfRef.__PVT__state_1 = vlSelfRef.__PVT__winner_1;
            vlSelfRef.__PVT__state_0 = vlSelfRef.__PVT__winner_0;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__latch = 
            ((IData)(vlSelfRef.__PVT__idle) & (IData)(vlSelfRef.auto_anon_in_d_ready));
        vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T_3 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.auto_anon_out_1_d_bits_size)));
        vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.auto_anon_out_0_d_bits_size)));
        __Vdly__beatsLeft = (7U & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__latch)
                                    ? ((((IData)(vlSelfRef.__PVT__winner_0) 
                                         & (IData)(vlSelfRef.auto_anon_out_0_d_bits_opcode))
                                         ? (~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T) 
                                               >> 2U))
                                         : 0U) | (((IData)(vlSelfRef.__PVT__winner_1) 
                                                   & (IData)(vlSelfRef.auto_anon_out_1_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___beatsDO_decode_T_3) 
                                                    >> 2U))
                                                   : 0U))
                                    : ((IData)(vlSelfRef.__PVT__beatsLeft) 
                                       - ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                          & (IData)(vlSelfRef.auto_anon_in_d_valid)))));
        if (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__latch) 
             & (0U != (IData)(vlSelfRef.__PVT__readys_valid)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.__PVT__readys_readys) 
                   & (IData)(vlSelfRef.__PVT__readys_valid));
            vlSelfRef.__PVT__readys_mask = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                            | (2U & 
                                               ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                                << 1U)));
        }
    }
    if (vlSelfRef.auto_anon_out_1_d_bits_denied) {
        vlSelfRef.auto_anon_out_1_d_bits_size = (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)));
        vlSelfRef.auto_anon_out_1_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_bits_opcode;
    } else {
        vlSelfRef.auto_anon_out_1_d_bits_size = 0U;
        vlSelfRef.auto_anon_out_1_d_bits_opcode = 0U;
    }
    vlSelfRef.__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
           & (IData)(vlSelfRef.auto_anon_in_d_valid));
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
            = ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[1U] 
            = ((IData)(vlSelfRef.auto_anon_in_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[4U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[0U] 
            = ((IData)(vlSelfRef.auto_anon_in_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSelfRef.auto_anon_in_d_bits_source) 
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
            __Vtemp_7[0U] = (1U | ((IData)(vlSelfRef.auto_anon_in_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSelfRef.auto_anon_in_a_bits_size) 
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
               & (6U != (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)));
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
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
                                                ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.auto_anon_in_a_bits_source))
                                                : 0U)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.auto_anon_in_d_bits_source))
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
                                                  VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.auto_anon_in_d_bits_source))
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
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSelfRef.auto_anon_in_a_bits_size)));
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelfRef.auto_anon_in_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode_1 = vlSelfRef.auto_anon_in_d_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__param_1 = vlSelfRef.auto_anon_in_d_bits_param;
        vlSelfRef.__PVT__monitor__DOT__size_1 = vlSelfRef.auto_anon_in_d_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source_1 = vlSelfRef.auto_anon_in_d_bits_source;
        vlSelfRef.__PVT__monitor__DOT__sink = vlSelfRef.auto_anon_in_d_bits_sink;
        vlSelfRef.__PVT__monitor__DOT__denied = vlSelfRef.auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode = vlSelfRef.auto_anon_in_a_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__size = vlSelfRef.auto_anon_in_a_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source = vlSelfRef.auto_anon_in_a_bits_source;
        vlSelfRef.__PVT__monitor__DOT__address = vlSelfRef.auto_anon_in_a_bits_address;
    }
    vlSelfRef.__PVT__idle = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_in_a_bits_mask = (0xfU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                                    ? 
                                                   (((8U 
                                                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                                                << 2U) 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                                                  << 3U))))) 
                                                     | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                                                         | (2U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                                          | (0U 
                                                             == 
                                                             (3U 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)))))
                                                    : 0U) 
                                                  | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                       ? (IData)(
                                                                 (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                  >> 1U))
                                                       : 0U)
                                                      : 0U)));
    vlSelfRef.auto_anon_in_a_bits_size = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_3)
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9)
                                            : 0U));
    vlSelfRef.auto_anon_in_a_bits_source = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                              ? (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arid) 
                                                  << 3U) 
                                                 | (6U 
                                                    & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arid)
                                                         ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_1)
                                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_0)) 
                                                       << 1U)))
                                              : 0U) 
                                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                ? (1U 
                                                   | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awid) 
                                                       << 3U) 
                                                      | (6U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awid)
                                                              ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                                                              : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)) 
                                                            << 1U))))
                                                : 0U));
    vlSelfRef.auto_anon_in_a_bits_opcode = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1));
    vlSelfRef.auto_anon_in_a_bits_address = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
                                               ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr
                                               : 0U) 
                                             | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                 ? 
                                                (((6U 
                                                   > 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi)) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgRegularize_h13ece5ee_0_9))) 
                                                  & ((0U 
                                                      == 
                                                      ((0xffffeU 
                                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr 
                                                           >> 0xcU)) 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr 
                                                              >> 0xcU))))) 
                                                     | (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr 
                                                        >> 0x1eU)))
                                                  ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr
                                                  : 
                                                 (0x1000U 
                                                  | (3U 
                                                     & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awaddr)))
                                                 : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__2(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_in_a_valid = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__stall)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_1_a_valid = ((~ (vlSelfRef.auto_anon_in_a_bits_address 
                                             >> 0x1eU)) 
                                         & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.auto_anon_out_0_a_valid = ((IData)(vlSelfRef.auto_anon_in_a_valid) 
                                         & (vlSelfRef.auto_anon_in_a_bits_address 
                                            >> 0x1eU));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass) {
        vlSelfRef.auto_anon_out_0_d_bits_param = 0U;
        vlSelfRef.auto_anon_out_0_d_bits_sink = 0U;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19));
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelfRef.auto_anon_out_0_d_bits_param = (3U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.auto_anon_out_0_d_bits_sink = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_sink;
        vlSelfRef.auto_anon_out_0_d_bits_denied = (1U 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                      >> 2U));
        vlSelfRef.auto_anon_out_0_d_valid = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_valid;
        vlSelfRef.auto_anon_out_0_d_bits_size = (7U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_size));
        vlSelfRef.auto_anon_out_0_d_bits_corrupt = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_corrupt;
        vlSelfRef.auto_anon_out_0_d_bits_source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_source;
        vlSelfRef.auto_anon_out_0_d_bits_opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_bits_opcode;
    }
    vlSelfRef.__PVT__readys_valid = (((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                      << 1U) | (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__readys_valid));
    vlSelfRef.__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                               << 1U)) 
                                        | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                   << 1U)) 
                                            | (IData)(vlSelfRef.auto_anon_out_1_d_valid)) 
                                           | (IData)(__PVT___readys_filter_T_1))) 
                                       | ((IData)(vlSelfRef.__PVT__readys_mask) 
                                          << 2U));
    vlSelfRef.__PVT__readys_readys = (3U & (~ (((IData)(vlSelfRef.__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__PVT__readys_unready))));
    vlSelfRef.__PVT__winner_1 = (((IData)(vlSelfRef.__PVT__readys_readys) 
                                  >> 1U) & (IData)(vlSelfRef.auto_anon_out_1_d_valid));
    vlSelfRef.__PVT__winner_0 = ((IData)(vlSelfRef.__PVT__readys_readys) 
                                 & (IData)(vlSelfRef.auto_anon_out_0_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
        vlSelfRef.auto_anon_in_d_valid = ((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                          | (IData)(vlSelfRef.auto_anon_out_1_d_valid));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__winner_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__winner_0;
    } else {
        vlSelfRef.auto_anon_in_d_valid = (((IData)(vlSelfRef.auto_anon_out_0_d_valid) 
                                           & (IData)(vlSelfRef.__PVT__state_0)) 
                                          | ((IData)(vlSelfRef.auto_anon_out_1_d_valid) 
                                             & (IData)(vlSelfRef.__PVT__state_1)));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__state_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__state_0;
    }
    vlSelfRef.auto_anon_in_d_bits_param = ((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_param)
                                            : 0U);
    vlSelfRef.auto_anon_in_d_bits_sink = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_sink)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1) 
                                           << 5U));
    vlSelfRef.auto_anon_in_d_bits_size = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_size)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1)
                                            ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_size)
                                            : 0U));
    vlSelfRef.auto_anon_in_d_bits_corrupt = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                              & (IData)(vlSelfRef.auto_anon_out_0_d_bits_corrupt)) 
                                             | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                                & (IData)(vlSelfRef.auto_anon_out_1_d_bits_corrupt)));
    vlSelfRef.auto_anon_in_d_bits_denied = (((IData)(vlSelfRef.__PVT__muxState_0) 
                                             & (IData)(vlSelfRef.auto_anon_out_0_d_bits_denied)) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1) 
                                               & (IData)(vlSelfRef.auto_anon_out_1_d_bits_denied)));
    vlSelfRef.auto_anon_in_d_bits_source = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_source)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_source)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_bits_opcode = (((IData)(vlSelfRef.__PVT__muxState_0)
                                              ? (IData)(vlSelfRef.auto_anon_out_0_d_bits_opcode)
                                              : 0U) 
                                            | ((IData)(vlSelfRef.__PVT__muxState_1)
                                                ? (IData)(vlSelfRef.auto_anon_out_1_d_bits_opcode)
                                                : 0U));
    vlSelfRef.auto_anon_in_d_ready = (1U & ((1U & (IData)(vlSelfRef.auto_anon_in_d_bits_opcode))
                                             ? (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full))
                                             : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full))));
    vlSelfRef.auto_anon_out_1_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? ((IData)(vlSelfRef.__PVT__readys_readys) 
                                                >> 1U)
                                             : (IData)(vlSelfRef.__PVT__state_1)));
    vlSelfRef.auto_anon_out_0_d_ready = ((IData)(vlSelfRef.auto_anon_in_d_ready) 
                                         & ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                             ? (IData)(vlSelfRef.__PVT__readys_readys)
                                             : (IData)(vlSelfRef.__PVT__state_0)));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_anon_out_0_a_ready = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall)) 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready)
                                                   : 
                                                  (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelfRef.auto_anon_in_a_ready = (1U & (((vlSelfRef.auto_anon_in_a_bits_address 
                                              >> 0x1eU) 
                                             & (IData)(vlSelfRef.auto_anon_out_0_a_ready)) 
                                            | ((~ (vlSelfRef.auto_anon_in_a_bits_address 
                                                   >> 0x1eU)) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q__DOT__full)))));
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelfRef.auto_anon_in_a_ready) 
                                                   & (IData)(vlSelfRef.auto_anon_in_a_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
}
