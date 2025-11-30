// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25030077__pch.h"
#include "Vysyx_25030077.h"
#include "Vysyx_25030077___024root.h"

void Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__b_ifu__DOT__pc_read_data_TOP(Vysyx_25030077__Syms* __restrict vlSymsp, IData/*31:0*/ &pc_read_data__Vfuncrtn);
void Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__c_arbiter__DOT__is_lsu_read_TOP(Vysyx_25030077__Syms* __restrict vlSymsp, IData/*31:0*/ &is_lsu_read__Vfuncrtn);
void Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__f_gpr__DOT__reg_read_addr_TOP(Vysyx_25030077__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_addr__Vfuncrtn);
void Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__f_gpr__DOT__reg_read_data_TOP(Vysyx_25030077__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_data__Vfuncrtn);

// FUNCTIONS
Vysyx_25030077__Syms::~Vysyx_25030077__Syms()
{
}

Vysyx_25030077__Syms::Vysyx_25030077__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25030077* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(215);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_25030077__b_ifu.configure(this, name(), "ysyx_25030077.b_ifu", "b_ifu", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_25030077__c_arbiter.configure(this, name(), "ysyx_25030077.c_arbiter", "c_arbiter", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_25030077__f_gpr.configure(this, name(), "ysyx_25030077.f_gpr", "f_gpr", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_25030077__b_ifu.exportInsert(__Vfinal, "pc_read_data", (void*)(&Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__b_ifu__DOT__pc_read_data_TOP));
        __Vscope_ysyx_25030077__c_arbiter.exportInsert(__Vfinal, "is_lsu_read", (void*)(&Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__c_arbiter__DOT__is_lsu_read_TOP));
        __Vscope_ysyx_25030077__f_gpr.exportInsert(__Vfinal, "reg_read_addr", (void*)(&Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__f_gpr__DOT__reg_read_addr_TOP));
        __Vscope_ysyx_25030077__f_gpr.exportInsert(__Vfinal, "reg_read_data", (void*)(&Vysyx_25030077___024root____Vdpiexp_ysyx_25030077__DOT__f_gpr__DOT__reg_read_data_TOP));
    }
}
