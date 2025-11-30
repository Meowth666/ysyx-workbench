// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__error__DOT__da_first = (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter));
    vlSelfRef.__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2));
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
    vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3 
        = ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.io_bypass = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                                 | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
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
    vlSelfRef.__PVT__bar__DOT__bypass = ((IData)(vlSelfRef.__PVT__bar__DOT__in_reset)
                                          ? (IData)(vlSelfRef.io_bypass)
                                          : (IData)(vlSelfRef.__PVT__bar__DOT__bypass_reg));
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
    vlSelfRef.__PVT__bar__DOT__stall = (((IData)(vlSelfRef.__PVT__bar__DOT__bypass) 
                                         != (IData)(vlSelfRef.io_bypass)) 
                                        & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter)));
}

VL_ATTR_COLD void VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bar__DOT____VdfgRegularize_h1049f2a8_0_1;
    bar__DOT____VdfgRegularize_h1049f2a8_0_1 = 0;
    // Body
    vlSelfRef.auto_node_out_out_d_bits_sink = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                                                ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)
                                                    ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)
                                                    : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__sink_r))
                                                : 0U);
    vlSelfRef.auto_node_out_out_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid) 
                                           & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
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

VL_ATTR_COLD void VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__error__DOT__da_first = (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter));
    vlSelfRef.__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2));
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
    vlSelfRef.error__DOT____VdfgRegularize_he43761fa_0_3 
        = ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.io_bypass = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                                 | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
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
    vlSelfRef.__PVT__bar__DOT__bypass = ((IData)(vlSelfRef.__PVT__bar__DOT__in_reset)
                                          ? (IData)(vlSelfRef.io_bypass)
                                          : (IData)(vlSelfRef.__PVT__bar__DOT__bypass_reg));
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
    vlSelfRef.__PVT__bar__DOT__stall = (((IData)(vlSelfRef.__PVT__bar__DOT__bypass) 
                                         != (IData)(vlSelfRef.io_bypass)) 
                                        & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter)));
}

VL_ATTR_COLD void VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bar__DOT____VdfgRegularize_h1049f2a8_0_1;
    bar__DOT____VdfgRegularize_h1049f2a8_0_1 = 0;
    // Body
    vlSelfRef.auto_node_out_out_d_bits_sink = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                                                ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)
                                                    ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)
                                                    : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__sink_r))
                                                : 0U);
    vlSelfRef.auto_node_out_out_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid) 
                                           & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
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
