// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLFIFOFixer.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_TLFIFOFixer___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__a_first = (0U == (IData)(vlSelfRef.__PVT__a_first_counter));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.auto_anon_in_a_valid = ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
                                       ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T)
                                       : (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_arvalid) 
                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)) 
                                          | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1) 
                                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))));
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

VL_ATTR_COLD void VysyxSoCFull_TLFIFOFixer___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___stl_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__a_first = (0U == (IData)(vlSelfRef.__PVT__a_first_counter));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.auto_anon_in_a_valid = ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
                                       ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___nodeOut_a_valid_T)
                                       : (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_out_arvalid) 
                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)) 
                                          | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1) 
                                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))));
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
