// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_RX.h"
#include "VysyxSoCFull__Syms.h"

void VysyxSoCFull_RX___ctor_var_reset(VysyxSoCFull_RX* vlSelf);

VysyxSoCFull_RX::VysyxSoCFull_RX(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_RX___ctor_var_reset(this);
}

void VysyxSoCFull_RX::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_RX::~VysyxSoCFull_RX() {
}
