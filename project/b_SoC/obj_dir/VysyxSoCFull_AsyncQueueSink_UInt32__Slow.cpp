// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSink_UInt32.h"
#include "VysyxSoCFull__Syms.h"

void VysyxSoCFull_AsyncQueueSink_UInt32___ctor_var_reset(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf);

VysyxSoCFull_AsyncQueueSink_UInt32::VysyxSoCFull_AsyncQueueSink_UInt32(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_AsyncQueueSink_UInt32___ctor_var_reset(this);
}

void VysyxSoCFull_AsyncQueueSink_UInt32::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_AsyncQueueSink_UInt32::~VysyxSoCFull_AsyncQueueSink_UInt32() {
}
