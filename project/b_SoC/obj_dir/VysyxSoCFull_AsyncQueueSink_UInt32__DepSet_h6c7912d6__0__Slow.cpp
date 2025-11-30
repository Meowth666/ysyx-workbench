// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSink_UInt32.h"

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSink_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__0(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___stl_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_deq_valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & (IData)(vlSelfRef.__PVT__valid_reg));
}

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSink_UInt32___ctor_var_reset(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15369045045829235699ull);
    vlSelf->io_deq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1620912584192386710ull);
    vlSelf->io_deq_bits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7152843734069262571ull);
    vlSelf->io_async_mem_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11552856338913584433ull);
    vlSelf->io_async_mem_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6548688399953240850ull);
    vlSelf->io_async_mem_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4439394152501976527ull);
    vlSelf->io_async_mem_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1275391438462770210ull);
    vlSelf->io_async_mem_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5968753498334772699ull);
    vlSelf->io_async_mem_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7440449983182142638ull);
    vlSelf->io_async_mem_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3064407107749541225ull);
    vlSelf->io_async_mem_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16735842233089068188ull);
    vlSelf->io_async_ridx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5364314699657635298ull);
    vlSelf->io_async_widx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2945432700268221499ull);
    vlSelf->io_async_safe_ridx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 720740886464128143ull);
    vlSelf->io_async_safe_widx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10289164858253225007ull);
    vlSelf->io_async_safe_source_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5317021055951489769ull);
    vlSelf->io_async_safe_sink_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18311297577142261701ull);
    vlSelf->__PVT__ridx_ridx_bin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17896071982615939447ull);
    vlSelf->__PVT__ridx_incremented = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13972168485494450078ull);
    vlSelf->__PVT___index_T = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9533960280494930256ull);
    vlSelf->__PVT__ridx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7298339951108749336ull);
    vlSelf->__PVT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->__PVT__valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6600608749260314181ull);
    vlSelf->__PVT__ridx_gray = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2544564108648597263ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16560347658017967020ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13363557846819452228ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5955072436639743643ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4022820703659915959ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5269511585416544698ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8114221213046205058ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15153728585296014913ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10073087392499107637ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9012210886147698480ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1098714477909792428ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13422265554802066165ull);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17782686216782920755ull);
    vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9835082743575158393ull);
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1752336097261569316ull);
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8775838638265514572ull);
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12381799413957785596ull);
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8994087634344235945ull);
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3428445312051056052ull);
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8607718687059776516ull);
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8551364919277349076ull);
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15649191900590080165ull);
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 868434409340667723ull);
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1771799323604350041ull);
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10740177945804540284ull);
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13342425175912668033ull);
}
