// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLToAXI4.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__1(VysyxSoCFull_TLToAXI4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__r_denied = ((IData)(vlSelfRef.__PVT__r_first)
                                  ? (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rresp))
                                  : (IData)(vlSelfRef.__PVT__r_denied_r));
    vlSelfRef.__PVT__r_wins = (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                & (7U != (IData)(vlSelfRef.__PVT__b_delay))) 
                               | (IData)(vlSelfRef.__PVT__r_holds_d));
    vlSelfRef.auto_in_d_bits_corrupt = ((IData)(vlSelfRef.__PVT__r_wins) 
                                        & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rresp)) 
                                           | (IData)(vlSelfRef.__PVT__r_denied)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((((0xfe00000U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap__DOT__ram) 
                                                    << 0x14U)) 
                                                | (0x1fc000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data) 
                                                      << 0xdU))) 
                                               | ((0x3f80U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data) 
                                                      << 6U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data) 
                                                        >> 1U)))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (((0xfe00000U 
                                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                << 0x14U)) 
                                                            | (0x1fc000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data) 
                                                                  << 0xdU))) 
                                                           | ((0x3f80U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                  << 6U)) 
                                                              | (0x7fU 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data) 
                                                                    >> 1U))))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((((0xfe00000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_8__DOT__ram) 
                                                      << 0x14U)) 
                                                  | (0x1fc000U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_7__DOT__ram) 
                                                        << 0xdU))) 
                                                 | ((0x3f80U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_6__DOT__ram) 
                                                        << 6U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_5__DOT__ram) 
                                                          >> 1U)))))) 
                                << 0x1cU) | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_4__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_3__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_2__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_1__DOT__ram) 
                                                                      >> 1U)))))))) 
                      << 0x18U) | (IData)(((((QData)((IData)(
                                                             (((0xfe00000U 
                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap__DOT__ram) 
                                                                   << 0x14U)) 
                                                               | (0x1fc000U 
                                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data) 
                                                                     << 0xdU))) 
                                                              | ((0x3f80U 
                                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data) 
                                                                     << 6U)) 
                                                                 | (0x7fU 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data) 
                                                                       >> 1U)))))) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              (((0xfe00000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                    << 0x14U)) 
                                                                | (0x1fc000U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data) 
                                                                      << 0xdU))) 
                                                               | ((0x3f80U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                      << 6U)) 
                                                                  | (0x7fU 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data) 
                                                                        >> 1U))))))) 
                                           >> 0x20U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((((0xfe00000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_8__DOT__ram) 
                                                      << 0x14U)) 
                                                  | (0x1fc000U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_7__DOT__ram) 
                                                        << 0xdU))) 
                                                 | ((0x3f80U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_6__DOT__ram) 
                                                        << 6U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_5__DOT__ram) 
                                                          >> 1U)))))) 
                                << 0x1cU) | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_4__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_3__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_2__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_1__DOT__ram) 
                                                                      >> 1U)))))))) 
                      >> 8U) | ((IData)(((((QData)((IData)(
                                                           (((0xfe00000U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_8__DOT__ram) 
                                                                 << 0x14U)) 
                                                             | (0x1fc000U 
                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_7__DOT__ram) 
                                                                   << 0xdU))) 
                                                            | ((0x3f80U 
                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_6__DOT__ram) 
                                                                   << 6U)) 
                                                               | (0x7fU 
                                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_5__DOT__ram) 
                                                                     >> 1U)))))) 
                                           << 0x1cU) 
                                          | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_4__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_3__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_2__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_1__DOT__ram) 
                                                                      >> 1U))))))) 
                                         >> 0x20U)) 
                                << 0x18U));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)((((0xfe00000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_8__DOT__ram) 
                                                      << 0x14U)) 
                                                  | (0x1fc000U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_7__DOT__ram) 
                                                        << 0xdU))) 
                                                 | ((0x3f80U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_6__DOT__ram) 
                                                        << 6U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_5__DOT__ram) 
                                                          >> 1U)))))) 
                                << 0x1cU) | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_4__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_3__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_2__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_1__DOT__ram) 
                                                                      >> 1U))))))) 
                              >> 0x20U)) >> 8U);
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((0xfe00000U 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_9__DOT__ram) 
                                                    << 0x14U)) 
                                                | (0x1fc000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data) 
                                                      << 0xdU))) 
                                               | ((0x3f80U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data) 
                                                      << 6U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data) 
                                                        >> 1U)))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (((0xfe00000U 
                                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data) 
                                                                << 0x14U)) 
                                                            | (0x1fc000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data) 
                                                                  << 0xdU))) 
                                                           | ((0x3f80U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data) 
                                                                  << 6U)) 
                                                              | (0x7fU 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                    >> 1U))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((((0xfe00000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_17__DOT__ram) 
                                                      << 0x14U)) 
                                                  | (0x1fc000U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_16__DOT__ram) 
                                                        << 0xdU))) 
                                                 | ((0x3f80U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_15__DOT__ram) 
                                                        << 6U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_14__DOT__ram) 
                                                          >> 1U)))))) 
                                << 0x1cU) | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_13__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_12__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_11__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_10__DOT__ram) 
                                                                      >> 1U)))))))) 
                      << 0x18U) | (IData)(((((QData)((IData)(
                                                             (((0xfe00000U 
                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_9__DOT__ram) 
                                                                   << 0x14U)) 
                                                               | (0x1fc000U 
                                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data) 
                                                                     << 0xdU))) 
                                                              | ((0x3f80U 
                                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data) 
                                                                     << 6U)) 
                                                                 | (0x7fU 
                                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data) 
                                                                       >> 1U)))))) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              (((0xfe00000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data) 
                                                                    << 0x14U)) 
                                                                | (0x1fc000U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data) 
                                                                      << 0xdU))) 
                                                               | ((0x3f80U 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data) 
                                                                      << 6U)) 
                                                                  | (0x7fU 
                                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                        >> 1U))))))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)((((0xfe00000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_17__DOT__ram) 
                                                      << 0x14U)) 
                                                  | (0x1fc000U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_16__DOT__ram) 
                                                        << 0xdU))) 
                                                 | ((0x3f80U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_15__DOT__ram) 
                                                        << 6U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_14__DOT__ram) 
                                                          >> 1U)))))) 
                                << 0x1cU) | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_13__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_12__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_11__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_10__DOT__ram) 
                                                                      >> 1U)))))))) 
                      >> 8U) | ((IData)(((((QData)((IData)(
                                                           (((0xfe00000U 
                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_17__DOT__ram) 
                                                                 << 0x14U)) 
                                                             | (0x1fc000U 
                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_16__DOT__ram) 
                                                                   << 0xdU))) 
                                                            | ((0x3f80U 
                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_15__DOT__ram) 
                                                                   << 6U)) 
                                                               | (0x7fU 
                                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_14__DOT__ram) 
                                                                     >> 1U)))))) 
                                           << 0x1cU) 
                                          | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_13__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_12__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_11__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_10__DOT__ram) 
                                                                      >> 1U))))))) 
                                         >> 0x20U)) 
                                << 0x18U));
    __Vtemp_2[3U] = ((IData)(((((QData)((IData)((((0xfe00000U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_17__DOT__ram) 
                                                      << 0x14U)) 
                                                  | (0x1fc000U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_16__DOT__ram) 
                                                        << 0xdU))) 
                                                 | ((0x3f80U 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_15__DOT__ram) 
                                                        << 6U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_14__DOT__ram) 
                                                          >> 1U)))))) 
                                << 0x1cU) | (QData)((IData)(
                                                            (((0xfe00000U 
                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_13__DOT__ram) 
                                                                  << 0x14U)) 
                                                              | (0x1fc000U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_12__DOT__ram) 
                                                                    << 0xdU))) 
                                                             | ((0x3f80U 
                                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_11__DOT__ram) 
                                                                    << 6U)) 
                                                                | (0x7fU 
                                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_10__DOT__ram) 
                                                                      >> 1U))))))) 
                              >> 0x20U)) >> 8U);
    if (vlSelfRef.__PVT__r_wins) {
        vlSelfRef.__VdfgRegularize_h1f31f580_0_1 = 
            ((0x10U & (((((((0x8000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_8__DOT__ram) 
                                        << 0xfU)) | 
                            (0x4000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_7__DOT__ram) 
                                        << 0xeU))) 
                           | ((0x2000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_6__DOT__ram) 
                                          << 0xdU)) 
                              | (0x1000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_5__DOT__ram) 
                                            << 0xcU)))) 
                          | (((0x800U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_4__DOT__ram) 
                                         << 0xbU)) 
                              | (0x400U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_3__DOT__ram) 
                                           << 0xaU))) 
                             | ((0x200U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_2__DOT__ram) 
                                           << 9U)) 
                                | (0x100U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_1__DOT__ram) 
                                             << 8U))))) 
                         | ((((0x80U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap__DOT__ram) 
                                        << 7U)) | (0x40U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data) 
                                                      << 6U))) 
                             | ((0x20U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data) 
                                          << 5U)) | 
                                (0x10U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data) 
                                          << 4U)))) 
                            | (((8U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data) 
                                       << 3U)) | (4U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data) 
                                                     << 2U))) 
                               | ((2U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data)))))) 
                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid)) 
                       << 4U)) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid));
        vlSelfRef.auto_in_d_bits_denied = vlSelfRef.__PVT__r_denied;
        vlSelfRef.auto_in_d_bits_size = (7U & (IData)(
                                                      ((((QData)((IData)(
                                                                         ((((0xf0000000U 
                                                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_8__DOT__ram) 
                                                                                << 0x14U)) 
                                                                            | (0xf000000U 
                                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_7__DOT__ram) 
                                                                                << 0x10U))) 
                                                                           | ((0xf00000U 
                                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_6__DOT__ram) 
                                                                                << 0xcU)) 
                                                                              | (0xf0000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_5__DOT__ram) 
                                                                                << 8U)))) 
                                                                          | (((0xf000U 
                                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_4__DOT__ram) 
                                                                                << 4U)) 
                                                                              | (0xf00U 
                                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_3__DOT__ram))) 
                                                                             | ((0xf0U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_2__DOT__ram) 
                                                                                >> 4U)) 
                                                                                | (0xfU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_1__DOT__ram) 
                                                                                >> 8U))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((((0xf0000000U 
                                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap__DOT__ram) 
                                                                                << 0x14U)) 
                                                                             | (0xf000000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data) 
                                                                                << 0x10U))) 
                                                                            | ((0xf00000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data) 
                                                                                << 0xcU)) 
                                                                               | (0xf0000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data) 
                                                                                << 8U)))) 
                                                                           | (((0xf000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                               | (0xf00U 
                                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data))) 
                                                                              | ((0xf0U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                                >> 4U)) 
                                                                                | (0xfU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data) 
                                                                                >> 8U)))))))) 
                                                       >> 
                                                       (0x3fU 
                                                        & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid), 2U)))));
        vlSelfRef.auto_in_d_bits_source = (0x7fU & 
                                           ((0x6fU 
                                             >= (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_1[
                                                  (((IData)(6U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(7U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid)))))) 
                                                | (__Vtemp_1[
                                                   (3U 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rid)))))
                                             : 0U));
        vlSelfRef.auto_in_d_valid = (1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
    } else {
        vlSelfRef.__VdfgRegularize_h1f31f580_0_1 = 
            ((0x10U & (((((((0x8000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_17__DOT__ram) 
                                        << 0xfU)) | 
                            (0x4000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_16__DOT__ram) 
                                        << 0xeU))) 
                           | ((0x2000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_15__DOT__ram) 
                                          << 0xdU)) 
                              | (0x1000U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_14__DOT__ram) 
                                            << 0xcU)))) 
                          | (((0x800U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_13__DOT__ram) 
                                         << 0xbU)) 
                              | (0x400U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_12__DOT__ram) 
                                           << 0xaU))) 
                             | ((0x200U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_11__DOT__ram) 
                                           << 9U)) 
                                | (0x100U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_10__DOT__ram) 
                                             << 8U))))) 
                         | ((((0x80U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_9__DOT__ram) 
                                        << 7U)) | (0x40U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data) 
                                                      << 6U))) 
                             | ((0x20U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data) 
                                          << 5U)) | 
                                (0x10U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data) 
                                          << 4U)))) 
                            | (((8U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data) 
                                       << 3U)) | (4U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data) 
                                                     << 2U))) 
                               | ((2U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data)))))) 
                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid)) 
                       << 4U)) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid));
        vlSelfRef.auto_in_d_bits_denied = (0U != (3U 
                                                  & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4buf_auto_in_bresp) 
                                                     | (((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_15) 
                                                             << 0x1eU) 
                                                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_14) 
                                                               << 0x1cU)) 
                                                           | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_12) 
                                                                 << 0x18U))) 
                                                          | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_11) 
                                                               << 0x16U) 
                                                              | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_10) 
                                                                 << 0x14U)) 
                                                             | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_8) 
                                                                   << 0x10U)))) 
                                                         | (((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_7) 
                                                               << 0xeU) 
                                                              | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_6) 
                                                                 << 0xcU)) 
                                                             | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_5) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_4) 
                                                                   << 8U))) 
                                                            | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_3) 
                                                                 << 6U) 
                                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_2) 
                                                                   << 4U)) 
                                                               | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_1) 
                                                                   << 2U) 
                                                                  | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_0))))) 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid), 1U))))));
        vlSelfRef.auto_in_d_bits_size = (7U & (IData)(
                                                      ((((QData)((IData)(
                                                                         ((((0xf0000000U 
                                                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_17__DOT__ram) 
                                                                                << 0x14U)) 
                                                                            | (0xf000000U 
                                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_16__DOT__ram) 
                                                                                << 0x10U))) 
                                                                           | ((0xf00000U 
                                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_15__DOT__ram) 
                                                                                << 0xcU)) 
                                                                              | (0xf0000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_14__DOT__ram) 
                                                                                << 8U)))) 
                                                                          | (((0xf000U 
                                                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_13__DOT__ram) 
                                                                                << 4U)) 
                                                                              | (0xf00U 
                                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_12__DOT__ram))) 
                                                                             | ((0xf0U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_11__DOT__ram) 
                                                                                >> 4U)) 
                                                                                | (0xfU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_10__DOT__ram) 
                                                                                >> 8U))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((((0xf0000000U 
                                                                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue1_BundleMap_9__DOT__ram) 
                                                                                << 0x14U)) 
                                                                             | (0xf000000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data) 
                                                                                << 0x10U))) 
                                                                            | ((0xf00000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data) 
                                                                                << 0xcU)) 
                                                                               | (0xf0000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data) 
                                                                                << 8U)))) 
                                                                           | (((0xf000U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                               | (0xf00U 
                                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data))) 
                                                                              | ((0xf0U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data) 
                                                                                >> 4U)) 
                                                                                | (0xfU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                                >> 8U)))))))) 
                                                       >> 
                                                       (0x3fU 
                                                        & VL_SHIFTL_III(6,6,32, (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid), 2U)))));
        vlSelfRef.auto_in_d_bits_source = (0x7fU & 
                                           ((0x6fU 
                                             >= (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_2[
                                                  (((IData)(6U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(7U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid)))))) 
                                                | (__Vtemp_2[
                                                   (3U 
                                                    & (((IData)(7U) 
                                                        * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bid)))))
                                             : 0U));
        vlSelfRef.auto_in_d_valid = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_bvalid));
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__2(VysyxSoCFull_TLToAXI4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_in_d_ready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_d_ready) 
                                 & ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft))
                                     ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys)
                                     : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0)));
    vlSelfRef.__VdfgRegularize_h1f31f580_0_2 = (((~ (IData)(vlSelfRef.__PVT__r_wins)) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_rlast)) 
                                                & ((IData)(vlSelfRef.auto_in_d_ready) 
                                                   & (IData)(vlSelfRef.auto_in_d_valid)));
}

extern const VlWide<20>/*639:0*/ VysyxSoCFull__ConstPool__CONST_h72c4c799_0;

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__0(VysyxSoCFull_TLToAXI4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_hcf439feb_0_2;
    __VdfgRegularize_hcf439feb_0_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.auto_in_a_bits_param = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1) 
                                       & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported))
                                       ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_param)
                                       : 0U);
    vlSelfRef.auto_in_a_bits_mask = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
                                       ? (((8U & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                                                   << 3U) 
                                                  | (0xfffffff8U 
                                                     & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                                         << 2U) 
                                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                                           << 3U))))) 
                                           | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                                               | (2U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                              << 2U)) 
                                          | ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)))))
                                       : 0U) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                                                 ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_mask)
                                                 : 0U));
    vlSelfRef.auto_in_a_bits_data = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
                                       ? ((1U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_opcode))
                                           ? ((((((
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                         >> 0x1eU)) 
                                                     | (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 0x1fU))) 
                                                   << 0x1fU) 
                                                  | (0x40000000U 
                                                     & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x1dU)) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1eU)))) 
                                                        << 0x1eU))) 
                                                 | ((0x20000000U 
                                                     & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x1cU)) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1dU)))) 
                                                        << 0x1dU)) 
                                                    | (0x10000000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x1bU)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x1cU)))) 
                                                          << 0x1cU)))) 
                                                | (((0x8000000U 
                                                     & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x1aU)) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1bU)))) 
                                                        << 0x1bU)) 
                                                    | (0x4000000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x19U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x1aU)))) 
                                                          << 0x1aU))) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x18U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x19U)))) 
                                                          << 0x19U)) 
                                                      | (0x1000000U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x17U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x18U)))) 
                                                            << 0x18U))))) 
                                               | ((((0x800000U 
                                                     & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x16U)) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x17U)))) 
                                                        << 0x17U)) 
                                                    | (0x400000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x15U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x16U)))) 
                                                          << 0x16U))) 
                                                   | ((0x200000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x15U)))) 
                                                          << 0x15U)) 
                                                      | (0x100000U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x13U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x14U)))) 
                                                            << 0x14U)))) 
                                                  | (((0x80000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x12U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x13U)))) 
                                                          << 0x13U)) 
                                                      | (0x40000U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x11U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x12U)))) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x10U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x11U)))) 
                                                            << 0x11U)) 
                                                        | (0x10000U 
                                                           & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                               >> 
                                                               ((2U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                    >> 0xfU)) 
                                                                | (1U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x10U)))) 
                                                              << 0x10U)))))) 
                                              | (((((0x8000U 
                                                     & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                         >> 
                                                         ((2U 
                                                           & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0xeU)) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0xfU)))) 
                                                        << 0xfU)) 
                                                    | (0x4000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xdU)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0xeU)))) 
                                                          << 0xeU))) 
                                                   | ((0x2000U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0xdU)))) 
                                                          << 0xdU)) 
                                                      | (0x1000U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0xbU)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xcU)))) 
                                                            << 0xcU)))) 
                                                  | (((0x800U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xaU)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0xbU)))) 
                                                          << 0xbU)) 
                                                      | (0x400U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 9U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xaU)))) 
                                                            << 0xaU))) 
                                                     | ((0x200U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 8U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 9U)))) 
                                                            << 9U)) 
                                                        | (0x100U 
                                                           & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                               >> 
                                                               ((2U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                    >> 7U)) 
                                                                | (1U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 8U)))) 
                                                              << 8U))))) 
                                                 | ((((0x80U 
                                                       & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 6U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 7U)))) 
                                                          << 7U)) 
                                                      | (0x40U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 5U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 6U)))) 
                                                            << 6U))) 
                                                     | ((0x20U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 4U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 5U)))) 
                                                            << 5U)) 
                                                        | (0x10U 
                                                           & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                               >> 
                                                               ((2U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 4U)))) 
                                                              << 4U)))) 
                                                    | (((8U 
                                                         & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 2U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 3U)))) 
                                                            << 3U)) 
                                                        | (4U 
                                                           & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                               >> 
                                                               ((2U 
                                                                 & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                    >> 1U)) 
                                                                | (1U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 2U)))) 
                                                              << 2U))) 
                                                       | ((2U 
                                                           & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                               >> 
                                                               ((2U 
                                                                 & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                                | (1U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 1U)))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data)))))))))
                                           : ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
                                               ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___adder_out_T
                                               : ((
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param)) 
                                                   == 
                                                   (1U 
                                                    & (((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x1fU) 
                                                        == 
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext 
                                                         >> 0x1fU))
                                                        ? 
                                                       (~ 
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___adder_out_T 
                                                         >> 0x1fU))
                                                        : 
                                                       ((1U 
                                                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param) 
                                                            >> 1U)) 
                                                        == 
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x1fU)))))
                                                   ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data
                                                   : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data)))
                                       : 0U) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                                                 ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_data
                                                 : 0U));
    vlSelfRef.auto_in_a_bits_address = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
                                          ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address
                                          : 0U) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                                                    ? vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_address
                                                    : 0U));
    vlSelfRef.auto_in_a_bits_source = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
                                         ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)
                                         : 0U) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                                                   ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_source)
                                                   : 0U));
    vlSelfRef.auto_in_a_bits_opcode = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                                        ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)
                                            ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__nodeOut_a_bits_opcode)
                                            : 4U) : 0U);
    vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_size 
        = ((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size) 
                         >> 1U))) ? 2U : (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)));
    vlSelfRef.auto_in_a_valid = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_a_valid) 
                                 & (3U == (vlSelfRef.auto_in_a_bits_address 
                                           >> 0x1eU)));
    vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = ((0x27fU >= (0x3ffU & ((IData)(5U) * (IData)(vlSelfRef.auto_in_a_bits_source))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelfRef.auto_in_a_bits_source))))
                          ? 0U : (VysyxSoCFull__ConstPool__CONST_h72c4c799_0[
                                  (((IData)(4U) + (0x3ffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelfRef.auto_in_a_bits_source)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelfRef.auto_in_a_bits_source)))))) 
                        | (VysyxSoCFull__ConstPool__CONST_h72c4c799_0[
                           (0x1fU & (((IData)(5U) * (IData)(vlSelfRef.auto_in_a_bits_source)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelfRef.auto_in_a_bits_source))))))
            : 0U);
    vlSelfRef.__PVT__r_beats1 = ((4U & (IData)(vlSelfRef.auto_in_a_bits_opcode))
                                  ? 0U : (7U & (~ (7U 
                                                   & (((IData)(0x1fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))) 
                                                      >> 2U)))));
    if (vlSelfRef.__PVT__queue_arw_deq_q__DOT__full) {
        vlSelfRef.__PVT___queue_arw_deq_q_io_deq_bits_wen 
            = (1U & vlSelfRef.__PVT__queue_arw_deq_q__DOT__ram[0U]);
        vlSelfRef.auto_out_awid = (0x1fU & ((vlSelfRef.__PVT__queue_arw_deq_q__DOT__ram[2U] 
                                             << 0x1bU) 
                                            | (vlSelfRef.__PVT__queue_arw_deq_q__DOT__ram[2U] 
                                               >> 5U)));
    } else {
        vlSelfRef.__PVT___queue_arw_deq_q_io_deq_bits_wen 
            = (1U & (~ ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                        >> 2U)));
        vlSelfRef.auto_out_awid = (0x1fU & (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id));
    }
    vlSelfRef.__PVT__idStall_4 = (((0U != (IData)(vlSelfRef.__PVT__count_4)) 
                                   & ((IData)(vlSelfRef.__PVT__write_4) 
                                      != (1U & (~ ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                   >> 2U))))) 
                                  | (0x10U == (IData)(vlSelfRef.__PVT__count_4)));
    vlSelfRef.__PVT__idStall_2 = (((0U != (IData)(vlSelfRef.__PVT__count_2)) 
                                   & ((IData)(vlSelfRef.__PVT__write_2) 
                                      != (1U & (~ ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                   >> 2U))))) 
                                  | (0x10U == (IData)(vlSelfRef.__PVT__count_2)));
    vlSelfRef.__PVT__idStall_0 = (((0U != (IData)(vlSelfRef.__PVT__count)) 
                                   & ((IData)(vlSelfRef.__PVT__write) 
                                      != (1U & (~ ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                   >> 2U))))) 
                                  | (0x10U == (IData)(vlSelfRef.__PVT__count)));
    vlSelfRef.__PVT__a_last = ((1U == (IData)(vlSelfRef.__PVT__r_counter)) 
                               | (0U == (IData)(vlSelfRef.__PVT__r_beats1)));
    __Vtemp_1[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                           (((0U 
                                                              != (IData)(vlSelfRef.__PVT__count_6)) 
                                                             & ((IData)(vlSelfRef.__PVT__write_6) 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                     >> 2U))))) 
                                                            | (0x10U 
                                                               == (IData)(vlSelfRef.__PVT__count_6))))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & (- (IData)(
                                                               (((0U 
                                                                  != (IData)(vlSelfRef.__PVT__count_5)) 
                                                                 & ((IData)(vlSelfRef.__PVT__write_5) 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                         >> 2U))))) 
                                                                | (0x10U 
                                                                   == (IData)(vlSelfRef.__PVT__count_5))))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (((- (IData)((IData)(vlSelfRef.__PVT__idStall_4))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & (- (IData)(
                                                                           (((0U 
                                                                              != (IData)(vlSelfRef.__PVT__count_3)) 
                                                                             & ((IData)(vlSelfRef.__PVT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                            | (0x10U 
                                                                               == (IData)(vlSelfRef.__PVT__count_3)))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                            (((0U 
                                                               != (IData)(vlSelfRef.__PVT__count_6)) 
                                                              & ((IData)(vlSelfRef.__PVT__write_6) 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                      >> 2U))))) 
                                                             | (0x10U 
                                                                == (IData)(vlSelfRef.__PVT__count_6))))) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & (- (IData)(
                                                                (((0U 
                                                                   != (IData)(vlSelfRef.__PVT__count_5)) 
                                                                  & ((IData)(vlSelfRef.__PVT__write_5) 
                                                                     != 
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                          >> 2U))))) 
                                                                 | (0x10U 
                                                                    == (IData)(vlSelfRef.__PVT__count_5))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)((IData)(vlSelfRef.__PVT__idStall_4))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & (- (IData)(
                                                                            (((0U 
                                                                               != (IData)(vlSelfRef.__PVT__count_3)) 
                                                                              & ((IData)(vlSelfRef.__PVT__write_3) 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                                >> 2U))))) 
                                                                             | (0x10U 
                                                                                == (IData)(vlSelfRef.__PVT__count_3)))))))))) 
                             >> 0x20U));
    __Vtemp_2[0U] = (((- (IData)((IData)(vlSelfRef.__PVT__idStall_0))) 
                      << 0x10U) | ((((((IData)(vlSelfRef.__PVT__count_22) 
                                       << 0xfU) | ((IData)(vlSelfRef.__PVT__count_21) 
                                                   << 0xeU)) 
                                     | (((IData)(vlSelfRef.__PVT__count_20) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.__PVT__count_19) 
                                         << 0xcU))) 
                                    | ((((IData)(vlSelfRef.__PVT__count_18) 
                                         << 0xbU) | 
                                        ((IData)(vlSelfRef.__PVT__count_17) 
                                         << 0xaU)) 
                                       | (((IData)(vlSelfRef.__PVT__count_16) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.__PVT__count_15) 
                                           << 8U)))) 
                                   | (((((IData)(vlSelfRef.__PVT__count_14) 
                                         << 7U) | ((IData)(vlSelfRef.__PVT__count_13) 
                                                   << 6U)) 
                                       | (((IData)(vlSelfRef.__PVT__count_12) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.__PVT__count_11) 
                                           << 4U))) 
                                      | ((((IData)(vlSelfRef.__PVT__count_10) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__PVT__count_9) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__count_8) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__count_7))))));
    __Vtemp_2[1U] = (((- (IData)((IData)(vlSelfRef.__PVT__idStall_2))) 
                      << 0x10U) | (0xffffU & (- (IData)(
                                                        (((0U 
                                                           != (IData)(vlSelfRef.__PVT__count_1)) 
                                                          & ((IData)(vlSelfRef.__PVT__write_1) 
                                                             != 
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                                                  >> 2U))))) 
                                                         | (0x10U 
                                                            == (IData)(vlSelfRef.__PVT__count_1)))))));
    __Vtemp_2[2U] = __Vtemp_1[1U];
    __Vtemp_2[3U] = __Vtemp_1[2U];
    vlSelfRef.__PVT__stall = ((__Vtemp_2[((IData)(vlSelfRef.auto_in_a_bits_source) 
                                          >> 5U)] >> 
                               (0x1fU & (IData)(vlSelfRef.auto_in_a_bits_source))) 
                              & (0U == (IData)(vlSelfRef.__PVT__r_counter)));
    __VdfgRegularize_hcf439feb_0_2 = ((~ (IData)(vlSelfRef.__PVT__stall)) 
                                      & (IData)(vlSelfRef.auto_in_a_valid));
    vlSelfRef.auto_in_a_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__stall)) 
                                       & ((4U & (IData)(vlSelfRef.auto_in_a_bits_opcode))
                                           ? (~ (IData)(vlSelfRef.__PVT__queue_arw_deq_q__DOT__full))
                                           : ((~ (IData)(vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__full)) 
                                              & (IData)(vlSelfRef.__PVT___out_wvalid_T_3)))));
    vlSelfRef.__Vcellinp__nodeOut_wdeq_q__io_enq_valid 
        = ((IData)(__VdfgRegularize_hcf439feb_0_2) 
           & ((~ ((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                  >> 2U)) & (IData)(vlSelfRef.__PVT___out_wvalid_T_3)));
    vlSelfRef.__PVT__out_arw_valid = ((IData)(__VdfgRegularize_hcf439feb_0_2) 
                                      & (((IData)(vlSelfRef.auto_in_a_bits_opcode) 
                                          >> 2U) | 
                                         ((~ (IData)(vlSelfRef.__PVT__doneAW)) 
                                          & (~ (IData)(vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__full)))));
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelfRef.auto_in_a_ready) 
                                                   & (IData)(vlSelfRef.auto_in_a_valid));
    vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__do_enq = 
        ((~ ((~ (IData)(vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__full)) 
             & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))) 
         & ((~ (IData)(vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__Vcellinp__nodeOut_wdeq_q__io_enq_valid)));
    vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__nodeOut_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
    vlSelfRef.__PVT___inc_T_22 = ((~ (IData)(vlSelfRef.__PVT__queue_arw_deq_q__DOT__full)) 
                                  & (IData)(vlSelfRef.__PVT__out_arw_valid));
    vlSelfRef.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.__PVT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__out_arw_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__inc = (((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                            & (IData)(vlSelfRef.__PVT___inc_T_22));
    vlSelfRef.__PVT__inc_1 = ((((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 1U) & (IData)(vlSelfRef.__PVT___inc_T_22));
    vlSelfRef.__PVT__inc_2 = ((((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 2U) & (IData)(vlSelfRef.__PVT___inc_T_22));
    vlSelfRef.__PVT__inc_3 = ((((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 3U) & (IData)(vlSelfRef.__PVT___inc_T_22));
    vlSelfRef.__PVT__inc_4 = ((((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 4U) & (IData)(vlSelfRef.__PVT___inc_T_22));
    vlSelfRef.__PVT__inc_5 = ((((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 5U) & (IData)(vlSelfRef.__PVT___inc_T_22));
    vlSelfRef.__PVT__inc_6 = ((((IData)(1U) << (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 6U) & (IData)(vlSelfRef.__PVT___inc_T_22));
}

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__1(VysyxSoCFull_TLToAXI4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__queue_arw_deq_q__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT___queue_arw_deq_q_io_deq_bits_wen)
            ? ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgRegularize_h99d36c0c_0_0))
            : ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgRegularize_h4b3c4204_0_0)));
    vlSelfRef.__PVT__queue_arw_deq_q__DOT__do_enq = 
        ((~ ((~ (IData)(vlSelfRef.__PVT__queue_arw_deq_q__DOT__full)) 
             & (IData)(vlSelfRef.__Vcellinp__queue_arw_deq_q__io_deq_ready))) 
         & (IData)(vlSelfRef.__PVT___inc_T_22));
}
