// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSource_UInt32.h"

VL_ATTR_COLD void VysyxSoCFull_AsyncQueueSource_UInt32___ctor_var_reset(VysyxSoCFull_AsyncQueueSource_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource_UInt32___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__io_enq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17964414372229754435ull);
    vlSelf->__PVT__io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 675917070734488727ull);
    vlSelf->__PVT__io_enq_bits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5907679710935778039ull);
    vlSelf->__PVT__io_async_mem_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11552856338913584433ull);
    vlSelf->__PVT__io_async_mem_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6548688399953240850ull);
    vlSelf->__PVT__io_async_mem_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4439394152501976527ull);
    vlSelf->__PVT__io_async_mem_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1275391438462770210ull);
    vlSelf->__PVT__io_async_mem_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5968753498334772699ull);
    vlSelf->__PVT__io_async_mem_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7440449983182142638ull);
    vlSelf->__PVT__io_async_mem_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3064407107749541225ull);
    vlSelf->__PVT__io_async_mem_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16735842233089068188ull);
    vlSelf->__PVT__io_async_ridx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5364314699657635298ull);
    vlSelf->__PVT__io_async_widx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2945432700268221499ull);
    vlSelf->__PVT__io_async_safe_ridx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 720740886464128143ull);
    vlSelf->__PVT__io_async_safe_widx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10289164858253225007ull);
    vlSelf->__PVT__io_async_safe_source_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5317021055951489769ull);
    vlSelf->__PVT__io_async_safe_sink_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18311297577142261701ull);
    vlSelf->__PVT__mem_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6299537022978057780ull);
    vlSelf->__PVT__mem_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9113698254420012223ull);
    vlSelf->__PVT__mem_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13584612562203411995ull);
    vlSelf->__PVT__mem_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 691798207765454624ull);
    vlSelf->__PVT__mem_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13884934403669277629ull);
    vlSelf->__PVT__mem_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13710961125836719349ull);
    vlSelf->__PVT__mem_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4289090100850697401ull);
    vlSelf->__PVT__mem_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 986507525328820367ull);
    vlSelf->__PVT___widx_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10455893198919660736ull);
    vlSelf->__PVT__widx_widx_bin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6801161050166395324ull);
    vlSelf->__PVT__ready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16723867694125981354ull);
    vlSelf->__PVT__widx_gray = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2835424219592349156ull);
    vlSelf->__PVT__unnamedblk1__DOT__index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9600907500893764634ull);
    vlSelf->__PVT__unnamedblk2__DOT__widx_incremented = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15195401174284590367ull);
    vlSelf->__PVT__unnamedblk2__DOT__widx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8330635045665021330ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16236746989701693852ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11107223668701095276ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5751067848235938335ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14090145310245720457ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16836363623996527352ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8673301760233057461ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944714983939533114ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5537059137281472467ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399452928512015484ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3961895503076941100ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 283703040443186221ull);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12507348350778991599ull);
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8067950261605426824ull);
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 344662295079926173ull);
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8965324007575680564ull);
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14722411561211374479ull);
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12649925788214942440ull);
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1231885360318225806ull);
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8938613199347213005ull);
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9092018941744071147ull);
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6369647279936895942ull);
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4386829953614081158ull);
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9292045668866798155ull);
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5668770857198278691ull);
}
