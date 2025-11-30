// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25030077__Syms.h"


VL_ATTR_COLD void Vysyx_25030077___024root__trace_init_sub__TOP__0(Vysyx_25030077___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+201,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+203,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+207,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+212,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+219,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"io_master_arlock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"io_master_arcache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"io_master_arprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"io_master_arqos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+229,0,"io_master_awlock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"io_master_awcache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"io_master_awprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"io_master_awqos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+233,0,"io_slave_arlock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"io_slave_arcache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+235,0,"io_slave_arprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+236,0,"io_slave_arqos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"io_slave_awlock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"io_slave_awcache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"io_slave_awprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+240,0,"io_slave_awqos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+241,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+247,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+248,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+252,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+257,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+261,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+263,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+264,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_25030077", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+201,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+203,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+207,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+212,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+219,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"io_master_arlock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"io_master_arcache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"io_master_arprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"io_master_arqos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+229,0,"io_master_awlock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"io_master_awcache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"io_master_awprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"io_master_awqos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+233,0,"io_slave_arlock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"io_slave_arcache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+235,0,"io_slave_arprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+236,0,"io_slave_arqos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"io_slave_awlock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"io_slave_awcache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"io_slave_awprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+240,0,"io_slave_awqos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+241,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+247,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+248,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+252,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+257,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+261,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+263,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+264,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+193,0,"b_ifu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"b_ifu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"b_ifu_io_rd_Req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b_ifu_io_rd_Req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"b_ifu_io_rd_Req_bits_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"b_ifu_io_ar_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"b_ifu_io_ar_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"b_ifu_io_ar_bits_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"c_arbiter_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"c_arbiter_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"c_arbiter_io_ifu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"c_arbiter_io_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"c_arbiter_io_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"c_arbiter_io_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"c_arbiter_io_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"c_arbiter_io_r_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"c_arbiter_io_w_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+213,0,"c_arbiter_io_axi_ar_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"c_arbiter_io_axi_ar_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"c_arbiter_io_axi_ar_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"c_arbiter_io_axi_ar_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"c_arbiter_io_axi_ar_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"c_arbiter_io_axi_ar_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"c_arbiter_io_axi_ar_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+197,0,"c_arbiter_io_axi_aw_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"c_arbiter_io_axi_aw_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"c_arbiter_io_axi_aw_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"c_arbiter_io_axi_aw_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"c_arbiter_io_axi_aw_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+201,0,"c_arbiter_io_axi_aw_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"c_arbiter_io_axi_aw_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"c_arbiter_io_axi_w_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"c_arbiter_io_axi_w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"c_arbiter_io_axi_w_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+203,0,"c_arbiter_io_axi_w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"c_arbiter_io_axi_w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"c_arbiter_io_axi_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"c_arbiter_io_axi_r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"c_arbiter_io_axi_r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"c_arbiter_io_axi_r_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"c_arbiter_io_axi_r_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"c_arbiter_io_axi_r_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"c_arbiter_io_axi_b_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"c_arbiter_io_axi_b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"c_arbiter_io_axi_b_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+210,0,"c_arbiter_io_axi_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"c_arbiter_io_gpr_b_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"c_arbiter_io_gpr_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"c_arbiter_io_gpr_b_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"c_arbiter_io_gpr_r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"c_arbiter_io_gpr_b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"c_arbiter_io_gpr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"c_arbiter_io_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"c_arbiter_io_ifu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"c_arbiter_io_r_valid_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"d_idu_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"d_idu_io_imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"d_idu_io_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"d_idu_io_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"d_idu_io_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"d_idu_io_data_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"d_idu_io_ALU_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"d_idu_io_pc_next_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"d_idu_io_r_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"d_idu_io_w_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,0,"d_idu_io_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"e_imm_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"e_imm_io_imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"e_imm_io_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"f_gpr_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"f_gpr_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"f_gpr_io_mem_Req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"f_gpr_io_mem_Req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"f_gpr_io_b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"f_gpr_io_b_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"f_gpr_io_gpr_b_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"f_gpr_io_pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"f_gpr_io_waddr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"f_gpr_io_wdata_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"f_gpr_io_raddr_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"f_gpr_io_rdata_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"f_gpr_io_raddr_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"f_gpr_io_rdata_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"f_gpr_io_ifu_Req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"f_gpr_io_ifu_Req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"f_gpr_io_ifu_Req_bits_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"h_data_control_io_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"h_data_control_io_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"h_data_control_io_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"h_data_control_io_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"h_data_control_io_pc_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"h_data_control_io_data_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"h_data_control_io_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"h_data_control_io_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"i_alu_io_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"i_alu_io_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"i_alu_io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"i_alu_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"j_pc_next_io_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"j_pc_next_io_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"j_pc_next_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"j_pc_next_io_pc_next_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"j_pc_next_io_pc_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"j_pc_next_io_pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"j_pc_next_io_is_unknown_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b_ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_rd_Req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_rd_Req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_rd_Req_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_ar_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"reqQ_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reqQ_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reqQ_io_enq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reqQ_io_enq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"reqQ_io_enq_bits_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"reqQ_io_deq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reqQ_io_deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"reqQ_io_deq_bits_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reqQ", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+277,0,"ram_addr_io_deq_bits_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"ram_addr_io_deq_bits_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"ram_addr_io_deq_bits_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ram_addr_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+278,0,"ram_addr_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"ram_addr_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"ram_addr_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_ifu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_r_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"io_w_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+213,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"io_axi_ar_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"io_axi_ar_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"io_axi_ar_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"io_axi_ar_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+197,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"io_axi_aw_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"io_axi_aw_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+201,0,"io_axi_aw_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"io_axi_aw_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+203,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"io_axi_w_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"io_axi_r_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"io_axi_r_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"io_axi_r_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"io_axi_b_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+210,0,"io_axi_b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"io_gpr_b_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"io_gpr_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_gpr_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"io_gpr_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"io_gpr_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_gpr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_ifu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_r_valid_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"canAccept_prng_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"canAccept_prng_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"canAccept_prng_io_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"canAccept_prng_io_out_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"canAccept_prng_io_out_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"canAccept_prng_io_out_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"canAccept_prng_io_out_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"canAccept_prng_io_out_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"canAccept_prng_io_out_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"canAccept_prng_io_out_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"canAccept_prng_io_out_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"canAccept_prng_io_out_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"canAccept_prng_io_out_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"canAccept_prng_io_out_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"canAccept_prng_io_out_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"canAccept_prng_io_out_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"canAccept_prng_io_out_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"canAccept_prng_io_out_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"canAccept_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"canAccept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"validReg_aw1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"validReg_ar0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"validReg_ar1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"validReg_gpr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"validReg_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+54,0,"clint_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+56,0,"r_addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"is_clint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"wsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"rsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+271,0,"is_sram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"rdata_sram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"rdata_mrom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("canAccept_prng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_out_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_out_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"io_out_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_out_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"io_out_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_out_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_out_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_out_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_out_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"state_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"state_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"state_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"state_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"state_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"state_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"state_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"state_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"state_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"state_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"state_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"state_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"state_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"state_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"state_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"state_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("d_idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_imm_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"io_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"io_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"io_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"io_data_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"io_ALU_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"io_pc_next_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"io_r_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"io_w_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,0,"io_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"addi_Rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"addi_Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"sltu_Rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+65,0,"isaddi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"isxori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"isori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"isandi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"issrai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"issrli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"isslli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"issra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"issrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"isbeq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"isbne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"isadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"isxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"isand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"isor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"issub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"islui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"isauipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"isjal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"isjalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"issw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"isbge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"isblt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"isbltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"isbgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"issb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"issh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"islbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"islb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"islw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"islh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"islhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"issll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"isslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"issltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"issltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"isslti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"iscsrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"iscsrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"isebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"isecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"ismret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("e_imm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"io_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"Imm_type1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"Imm_type2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"Imm_type4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"Imm_type5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"Imm_type6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"is_type1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"is_type2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"is_type3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"is_type4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"is_type5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"is_type6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("f_gpr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"io_mem_Req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_mem_Req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"io_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"io_gpr_b_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"io_pc_next",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"io_waddr_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"io_wdata_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"io_raddr_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"io_rdata_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"io_raddr_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"io_rdata_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"io_ifu_Req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_ifu_Req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_ifu_Req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"regs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"regs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"regs_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"regs_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"regs_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"regs_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"regs_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"regs_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"regs_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"regs_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"regs_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"regs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"regs_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"regs_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"regs_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"regs_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"regs_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"validReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"canAccept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc_next_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("h_data_control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_pc_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"io_data_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"io_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"io_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"control1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"control2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"control3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("i_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"io_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"io_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"oneHot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+155,0,"add33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+157,0,"sub33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+159,0,"and32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"or32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"xor32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"srai32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"srli32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+164,0,"sll32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declBit(c+166,0,"sltiu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"slt_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+168,0,"out33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("j_pc_next", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_pc_next_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"io_pc_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"io_pc_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"io_is_unknown_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"ecall_dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"default_pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"is_type1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"is_type2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"is_type4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"is_type5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"is_type6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"is_type7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"is_type8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"is_type9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"is_type10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"is_type11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"is_eql",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"is_more_equ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"is_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"is_more_equ_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"is_less_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"beq_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"bge_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"blt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"bltu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"bgeu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"bne_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25030077___024root__trace_init_top(Vysyx_25030077___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_init_top\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25030077___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25030077___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25030077___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25030077___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25030077___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25030077___024root__trace_register(Vysyx_25030077___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_register\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25030077___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25030077___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25030077___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25030077___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25030077___024root__trace_const_0_sub_0(Vysyx_25030077___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25030077___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_const_0\n"); );
    // Init
    Vysyx_25030077___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030077___024root*>(voidSelf);
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25030077___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25030077___024root__trace_const_0_sub_0(Vysyx_25030077___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_const_0_sub_0\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+274,(0U),4);
    bufp->fullCData(oldp+275,(0U),8);
    bufp->fullCData(oldp+276,(0U),2);
    bufp->fullBit(oldp+277,(1U));
    bufp->fullBit(oldp+278,(0U));
}

VL_ATTR_COLD void Vysyx_25030077___024root__trace_full_0_sub_0(Vysyx_25030077___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25030077___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_full_0\n"); );
    // Init
    Vysyx_25030077___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030077___024root*>(voidSelf);
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25030077___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25030077___024root__trace_full_0_sub_0(Vysyx_25030077___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_full_0_sub_0\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & (~ (IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)))));
    bufp->fullBit(oldp+2,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__validReg));
    bufp->fullIData(oldp+3,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg),32);
    bufp->fullBit(oldp+4,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0));
    bufp->fullBit(oldp+5,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full));
    bufp->fullIData(oldp+6,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
                            [0U]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data),32);
    bufp->fullIData(oldp+8,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data),32);
    bufp->fullIData(oldp+9,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_imm),32);
    bufp->fullCData(oldp+10,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask),3);
    bufp->fullCData(oldp+11,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask),3);
    bufp->fullBit(oldp+12,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT___validReg_T));
    bufp->fullIData(oldp+13,((((~ (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint)) 
                               & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1))
                               ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg
                               : (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1) 
                                   & (0x2000000U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                   ? (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg)
                                   : (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1) 
                                       & (0x2000004U 
                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                       ? (IData)((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg 
                                                  >> 0x20U))
                                       : 0U)))),32);
    bufp->fullIData(oldp+14,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg),32);
    bufp->fullBit(oldp+15,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu));
    bufp->fullCData(oldp+16,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type),3);
    bufp->fullCData(oldp+17,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1),5);
    bufp->fullCData(oldp+18,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2),5);
    bufp->fullCData(oldp+19,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd),5);
    bufp->fullCData(oldp+20,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control),3);
    bufp->fullCData(oldp+21,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl),4);
    bufp->fullCData(oldp+22,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type),4);
    bufp->fullIData(oldp+23,((((0xbU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)) 
                               | (0xcU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)))
                               ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc
                               : ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                   ? (vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg 
                                      + (((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                             >> 0x1fU)
                                             ? 0x7ffU
                                             : 0U) 
                                           << 0x15U) 
                                          | (0x100000U 
                                             & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                >> 0xbU))) 
                                         | (((0xff000U 
                                              & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg) 
                                             | (0x800U 
                                                & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0x14U)))))
                                   : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                       ? (0xfffffffeU 
                                          & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                             + vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1))
                                       : ((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                           ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg
                                           : ((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                               ? ((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                               : ((5U 
                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)
                                                    : vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                    ? 
                                                   (VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                     ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                     ? 
                                                    ((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                                      >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                      ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                       ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                       ? 
                                                      ((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                                        < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                        ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)))))))))))),32);
    bufp->fullIData(oldp+24,(vlSelfRef.ysyx_25030077__DOT__f_gpr_io_wdata_rd),32);
    bufp->fullIData(oldp+25,(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1),32);
    bufp->fullIData(oldp+26,(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2),32);
    bufp->fullBit(oldp+27,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullIData(oldp+28,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[0]),32);
    bufp->fullBit(oldp+29,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
                            & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0))));
    bufp->fullBit(oldp+31,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_1));
    bufp->fullBit(oldp+32,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_2));
    bufp->fullBit(oldp+33,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_3));
    bufp->fullBit(oldp+34,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_4));
    bufp->fullBit(oldp+35,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_5));
    bufp->fullBit(oldp+36,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_6));
    bufp->fullBit(oldp+37,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_7));
    bufp->fullBit(oldp+38,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_8));
    bufp->fullBit(oldp+39,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_9));
    bufp->fullBit(oldp+40,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_10));
    bufp->fullBit(oldp+41,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_11));
    bufp->fullBit(oldp+42,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_12));
    bufp->fullBit(oldp+43,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_13));
    bufp->fullBit(oldp+44,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_14));
    bufp->fullBit(oldp+45,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_15));
    bufp->fullCData(oldp+46,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg),2);
    bufp->fullCData(oldp+47,((((((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_7) 
                                 << 7U) | ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_6) 
                                           << 6U)) 
                               | (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_5) 
                                   << 5U) | ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_4) 
                                             << 4U))) 
                              | ((((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_3) 
                                   << 3U) | ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_2) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_1) 
                                     << 1U) | (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0))))),8);
    bufp->fullBit(oldp+48,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_aw1));
    bufp->fullBit(oldp+49,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar0));
    bufp->fullBit(oldp+50,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar1));
    bufp->fullBit(oldp+51,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_gpr));
    bufp->fullBit(oldp+52,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_w1));
    bufp->fullIData(oldp+53,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg),32);
    bufp->fullQData(oldp+54,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg),64);
    bufp->fullIData(oldp+56,((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)),32);
    bufp->fullBit(oldp+57,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint));
    bufp->fullIData(oldp+58,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                               ? vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data
                               : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                   ? ((1U & (IData)(
                                                    (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                     >> 1U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                         >> 1U)))
                                           ? VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data, 0x10U)
                                           : 0U) : 
                                      (0xffffU & vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data))
                                   : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                       ? ((0U == (3U 
                                                  & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                           ? (0xffU 
                                              & vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                           : ((1U == 
                                               (3U 
                                                & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                               ? (0xff00U 
                                                  & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
                                                     << 8U))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                   ? 
                                                  (0xff0000U 
                                                   & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
                                                      << 0x10U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data, 0x18U)
                                                    : 0U))))
                                       : 0U)))),32);
    bufp->fullCData(oldp+59,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                               ? 0xfU : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                             >> 1U)))
                                                  ? 0xcU
                                                  : 0U)
                                              : 3U)
                                          : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                     ? 8U
                                                     : 0U))))
                                              : 0U)))),4);
    bufp->fullCData(oldp+60,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                               ? 2U : (2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask)))),2);
    bufp->fullCData(oldp+61,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                               ? 2U : ((2U != (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)) 
                                       & ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)) 
                                          | (4U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)))))),2);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                       >> 7U))),5);
    bufp->fullCData(oldp+64,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+65,((0x13U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+66,((0x213U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+67,((0x313U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+68,((0x393U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+69,((0x4293U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+70,((0x293U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+71,((0x93U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+72,((0x42b3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+73,((0x2b3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+74,((0x63U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+75,((0xe3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+76,((0x33U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+77,((0x233U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+78,((0x3b3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+79,((0x333U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+80,((0x8033U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+81,((0x37U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))));
    bufp->fullBit(oldp+82,((0x17U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))));
    bufp->fullBit(oldp+83,((0x6fU == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))));
    bufp->fullBit(oldp+84,((0x67U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+85,((0x123U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+86,((0x2e3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+87,((0x263U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+88,((0x363U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+89,((0x3e3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+90,((0x23U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+91,((0xa3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+92,((0x203U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+93,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+94,((0x103U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+95,((0x83U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+96,((0x283U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+97,((0xb3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+98,((0x133U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+99,((0x1b3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+100,((0x193U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+101,((0x113U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+102,((0xf3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+103,((0x173U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+104,((0x100073U == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)));
    bufp->fullBit(oldp+105,((0x73U == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)));
    bufp->fullBit(oldp+106,((0x30200073U == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)));
    bufp->fullIData(oldp+107,(vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1),32);
    bufp->fullIData(oldp+108,((0xfffff000U & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)),32);
    bufp->fullIData(oldp+109,(((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0xfe0U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                            >> 7U))))),32);
    bufp->fullIData(oldp+110,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+111,(VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg, 0x14U)),32);
    bufp->fullBit(oldp+112,((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+113,((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+114,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+115,((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+116,((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+117,((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
    bufp->fullIData(oldp+118,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_0),32);
    bufp->fullIData(oldp+119,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_1),32);
    bufp->fullIData(oldp+120,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_2),32);
    bufp->fullIData(oldp+121,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_3),32);
    bufp->fullIData(oldp+122,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_4),32);
    bufp->fullIData(oldp+123,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_5),32);
    bufp->fullIData(oldp+124,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_6),32);
    bufp->fullIData(oldp+125,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_7),32);
    bufp->fullIData(oldp+126,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_8),32);
    bufp->fullIData(oldp+127,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_9),32);
    bufp->fullIData(oldp+128,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_10),32);
    bufp->fullIData(oldp+129,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_11),32);
    bufp->fullIData(oldp+130,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_12),32);
    bufp->fullIData(oldp+131,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_13),32);
    bufp->fullIData(oldp+132,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_14),32);
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_15),32);
    bufp->fullIData(oldp+134,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_16),32);
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_17),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_18),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_19),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_20),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_21),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_22),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_23),32);
    bufp->fullIData(oldp+142,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_24),32);
    bufp->fullIData(oldp+143,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_25),32);
    bufp->fullIData(oldp+144,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_26),32);
    bufp->fullIData(oldp+145,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_27),32);
    bufp->fullIData(oldp+146,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_28),32);
    bufp->fullIData(oldp+147,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_29),32);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_30),32);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_31),32);
    bufp->fullBit(oldp+150,((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))));
    bufp->fullBit(oldp+151,((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))));
    bufp->fullBit(oldp+152,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))));
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25030077__DOT__i_alu__DOT__csr_data),32);
    bufp->fullSData(oldp+154,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))),16);
    bufp->fullQData(oldp+155,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                                 + (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))),33);
    bufp->fullQData(oldp+157,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                                 - (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))),33);
    bufp->fullIData(oldp+159,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                               & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)),32);
    bufp->fullIData(oldp+160,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                               | vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)),32);
    bufp->fullIData(oldp+161,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                               ^ vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)),32);
    bufp->fullIData(oldp+162,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, 
                                             (0x1fU 
                                              & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))),32);
    bufp->fullIData(oldp+163,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                               >> (0x1fU & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))),32);
    bufp->fullQData(oldp+164,((0x7fffffffffffffffULL 
                               & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                  << (0x1fU & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))),63);
    bufp->fullBit(oldp+166,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                             < vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)));
    bufp->fullBit(oldp+167,(VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)));
    bufp->fullQData(oldp+168,(((((0x1ffffffffULL & 
                                  ((((((((1U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                          ? ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                             + (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                          : 0ULL) | 
                                        ((2U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                          ? ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                             - (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                          : 0ULL)) 
                                       | ((4U & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                           ? (QData)((IData)(
                                                             (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                              < vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                           : 0ULL)) 
                                      | ((8U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                          ? (QData)((IData)(
                                                            (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                             | vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                          : 0ULL)) 
                                     | ((0x10U & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                         ? (QData)((IData)(
                                                           (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                            ^ vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                         : 0ULL)) | 
                                    ((0x20U & ((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                      ? (QData)((IData)(
                                                        VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, 
                                                                       (0x1fU 
                                                                        & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))
                                      : 0ULL)) | ((0x40U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                      & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                   : 0ULL))) 
                                 | ((0x100U & ((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                     ? (0x7fffffffffffffffULL 
                                        & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                           << (0x1fU 
                                               & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                     : 0ULL)) | ((0x200U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                  ? (QData)((IData)(
                                                                    (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))
                                                  : 0ULL)) 
                               | ((0x400U & ((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                   ? (QData)((IData)(
                                                     VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                   : 0ULL))),64);
    bufp->fullIData(oldp+170,(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc),32);
    bufp->fullIData(oldp+171,(((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)),32);
    bufp->fullBit(oldp+172,((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+173,((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+174,((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+175,((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+176,((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+177,((7U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+178,((8U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+179,((9U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+180,((0xaU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+181,(((0xbU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)) 
                             | (0xcU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)))));
    bufp->fullBit(oldp+182,(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql));
    bufp->fullBit(oldp+183,(VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
    bufp->fullBit(oldp+184,(VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
    bufp->fullBit(oldp+185,((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                             >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
    bufp->fullBit(oldp+186,((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                             < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
    bufp->fullIData(oldp+187,(((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+188,((VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+189,((VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+190,(((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+191,(((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+192,(((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                ? ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)
                                : vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9)),32);
    bufp->fullBit(oldp+193,(vlSelfRef.clock));
    bufp->fullBit(oldp+194,(vlSelfRef.reset));
    bufp->fullBit(oldp+195,(vlSelfRef.io_interrupt));
    bufp->fullBit(oldp+196,(vlSelfRef.io_master_awready));
    bufp->fullBit(oldp+197,(vlSelfRef.io_master_awvalid));
    bufp->fullIData(oldp+198,(vlSelfRef.io_master_awaddr),32);
    bufp->fullCData(oldp+199,(vlSelfRef.io_master_awid),4);
    bufp->fullCData(oldp+200,(vlSelfRef.io_master_awlen),8);
    bufp->fullCData(oldp+201,(vlSelfRef.io_master_awsize),3);
    bufp->fullCData(oldp+202,(vlSelfRef.io_master_awburst),2);
    bufp->fullBit(oldp+203,(vlSelfRef.io_master_wready));
    bufp->fullBit(oldp+204,(vlSelfRef.io_master_wvalid));
    bufp->fullIData(oldp+205,(vlSelfRef.io_master_wdata),32);
    bufp->fullCData(oldp+206,(vlSelfRef.io_master_wstrb),4);
    bufp->fullBit(oldp+207,(vlSelfRef.io_master_wlast));
    bufp->fullBit(oldp+208,(vlSelfRef.io_master_bready));
    bufp->fullBit(oldp+209,(vlSelfRef.io_master_bvalid));
    bufp->fullCData(oldp+210,(vlSelfRef.io_master_bid),4);
    bufp->fullCData(oldp+211,(vlSelfRef.io_master_bresp),2);
    bufp->fullBit(oldp+212,(vlSelfRef.io_master_arready));
    bufp->fullBit(oldp+213,(vlSelfRef.io_master_arvalid));
    bufp->fullIData(oldp+214,(vlSelfRef.io_master_araddr),32);
    bufp->fullCData(oldp+215,(vlSelfRef.io_master_arid),4);
    bufp->fullCData(oldp+216,(vlSelfRef.io_master_arlen),8);
    bufp->fullCData(oldp+217,(vlSelfRef.io_master_arsize),3);
    bufp->fullCData(oldp+218,(vlSelfRef.io_master_arburst),2);
    bufp->fullBit(oldp+219,(vlSelfRef.io_master_rready));
    bufp->fullBit(oldp+220,(vlSelfRef.io_master_rvalid));
    bufp->fullIData(oldp+221,(vlSelfRef.io_master_rdata),32);
    bufp->fullCData(oldp+222,(vlSelfRef.io_master_rid),4);
    bufp->fullBit(oldp+223,(vlSelfRef.io_master_rlast));
    bufp->fullCData(oldp+224,(vlSelfRef.io_master_rresp),2);
    bufp->fullBit(oldp+225,(vlSelfRef.io_master_arlock));
    bufp->fullCData(oldp+226,(vlSelfRef.io_master_arcache),4);
    bufp->fullCData(oldp+227,(vlSelfRef.io_master_arprot),3);
    bufp->fullCData(oldp+228,(vlSelfRef.io_master_arqos),4);
    bufp->fullBit(oldp+229,(vlSelfRef.io_master_awlock));
    bufp->fullCData(oldp+230,(vlSelfRef.io_master_awcache),4);
    bufp->fullCData(oldp+231,(vlSelfRef.io_master_awprot),3);
    bufp->fullCData(oldp+232,(vlSelfRef.io_master_awqos),4);
    bufp->fullBit(oldp+233,(vlSelfRef.io_slave_arlock));
    bufp->fullCData(oldp+234,(vlSelfRef.io_slave_arcache),4);
    bufp->fullCData(oldp+235,(vlSelfRef.io_slave_arprot),3);
    bufp->fullCData(oldp+236,(vlSelfRef.io_slave_arqos),4);
    bufp->fullBit(oldp+237,(vlSelfRef.io_slave_awlock));
    bufp->fullCData(oldp+238,(vlSelfRef.io_slave_awcache),4);
    bufp->fullCData(oldp+239,(vlSelfRef.io_slave_awprot),3);
    bufp->fullCData(oldp+240,(vlSelfRef.io_slave_awqos),4);
    bufp->fullBit(oldp+241,(vlSelfRef.io_slave_awready));
    bufp->fullBit(oldp+242,(vlSelfRef.io_slave_awvalid));
    bufp->fullIData(oldp+243,(vlSelfRef.io_slave_awaddr),32);
    bufp->fullCData(oldp+244,(vlSelfRef.io_slave_awid),4);
    bufp->fullCData(oldp+245,(vlSelfRef.io_slave_awlen),8);
    bufp->fullCData(oldp+246,(vlSelfRef.io_slave_awsize),3);
    bufp->fullCData(oldp+247,(vlSelfRef.io_slave_awburst),2);
    bufp->fullBit(oldp+248,(vlSelfRef.io_slave_wready));
    bufp->fullBit(oldp+249,(vlSelfRef.io_slave_wvalid));
    bufp->fullIData(oldp+250,(vlSelfRef.io_slave_wdata),32);
    bufp->fullCData(oldp+251,(vlSelfRef.io_slave_wstrb),4);
    bufp->fullBit(oldp+252,(vlSelfRef.io_slave_wlast));
    bufp->fullBit(oldp+253,(vlSelfRef.io_slave_bready));
    bufp->fullBit(oldp+254,(vlSelfRef.io_slave_bvalid));
    bufp->fullCData(oldp+255,(vlSelfRef.io_slave_bid),4);
    bufp->fullCData(oldp+256,(vlSelfRef.io_slave_bresp),2);
    bufp->fullBit(oldp+257,(vlSelfRef.io_slave_arready));
    bufp->fullBit(oldp+258,(vlSelfRef.io_slave_arvalid));
    bufp->fullIData(oldp+259,(vlSelfRef.io_slave_araddr),32);
    bufp->fullCData(oldp+260,(vlSelfRef.io_slave_arid),4);
    bufp->fullCData(oldp+261,(vlSelfRef.io_slave_arlen),8);
    bufp->fullCData(oldp+262,(vlSelfRef.io_slave_arsize),3);
    bufp->fullCData(oldp+263,(vlSelfRef.io_slave_arburst),2);
    bufp->fullBit(oldp+264,(vlSelfRef.io_slave_rready));
    bufp->fullBit(oldp+265,(vlSelfRef.io_slave_rvalid));
    bufp->fullIData(oldp+266,(vlSelfRef.io_slave_rdata),32);
    bufp->fullCData(oldp+267,(vlSelfRef.io_slave_rid),4);
    bufp->fullBit(oldp+268,(vlSelfRef.io_slave_rlast));
    bufp->fullCData(oldp+269,(vlSelfRef.io_slave_rresp),2);
    bufp->fullCData(oldp+270,(((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg))
                                ? (IData)(vlSelfRef.io_master_bresp)
                                : 0U)),2);
    bufp->fullBit(oldp+271,((((0xf000000U <= vlSelfRef.io_master_araddr) 
                              & (0xf001fffU > vlSelfRef.io_master_araddr)) 
                             | (((0x80000000U <= vlSelfRef.io_master_araddr) 
                                 & (0x9fffffffU > vlSelfRef.io_master_araddr)) 
                                | (((0xa0000000U <= vlSelfRef.io_master_araddr) 
                                    & (0xbfffffffU 
                                       > vlSelfRef.io_master_araddr)) 
                                   | (((0x10002000U 
                                        <= vlSelfRef.io_master_araddr) 
                                       & (0x1000200fU 
                                          > vlSelfRef.io_master_araddr)) 
                                      | (((0x10011000U 
                                           <= vlSelfRef.io_master_araddr) 
                                          & (0x10011007U 
                                             > vlSelfRef.io_master_araddr)) 
                                         | (0xc0000000U 
                                            <= vlSelfRef.io_master_araddr))))))));
    bufp->fullIData(oldp+272,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_sram),32);
    bufp->fullIData(oldp+273,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                ? vlSelfRef.io_master_rdata
                                : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                    ? (0xffU & vlSelfRef.io_master_rdata)
                                    : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                        ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_29
                                        : ((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                            ? (0xffffU 
                                               & vlSelfRef.io_master_rdata)
                                            : ((5U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                                ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_57
                                                : 0U)))))),32);
}
