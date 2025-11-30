// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_25030077.h"
#include "Vysyx_25030077__Syms.h"
#include "verilated_dpi.h"


int Vysyx_25030077::pc_read_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root::pc_read_data\n"); );
    // Init
    IData/*31:0*/ pc_read_data__Vfuncrtn__Vcvt;
    pc_read_data__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("pc_read_data");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25030077__Vcb_pc_read_data_t __Vcb = (Vysyx_25030077__Vcb_pc_read_data_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25030077__Syms*)(__Vscopep->symsp()), pc_read_data__Vfuncrtn__Vcvt);
    int pc_read_data__Vfuncrtn;
    pc_read_data__Vfuncrtn = pc_read_data__Vfuncrtn__Vcvt;
    return pc_read_data__Vfuncrtn;
}

int Vysyx_25030077::is_lsu_read() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root::is_lsu_read\n"); );
    // Init
    IData/*31:0*/ is_lsu_read__Vfuncrtn__Vcvt;
    is_lsu_read__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("is_lsu_read");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25030077__Vcb_is_lsu_read_t __Vcb = (Vysyx_25030077__Vcb_is_lsu_read_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25030077__Syms*)(__Vscopep->symsp()), is_lsu_read__Vfuncrtn__Vcvt);
    int is_lsu_read__Vfuncrtn;
    is_lsu_read__Vfuncrtn = is_lsu_read__Vfuncrtn__Vcvt;
    return is_lsu_read__Vfuncrtn;
}

int Vysyx_25030077::reg_read_addr() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root::reg_read_addr\n"); );
    // Init
    IData/*31:0*/ reg_read_addr__Vfuncrtn__Vcvt;
    reg_read_addr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("reg_read_addr");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25030077__Vcb_reg_read_addr_t __Vcb = (Vysyx_25030077__Vcb_reg_read_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25030077__Syms*)(__Vscopep->symsp()), reg_read_addr__Vfuncrtn__Vcvt);
    int reg_read_addr__Vfuncrtn;
    reg_read_addr__Vfuncrtn = reg_read_addr__Vfuncrtn__Vcvt;
    return reg_read_addr__Vfuncrtn;
}

int Vysyx_25030077::reg_read_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root::reg_read_data\n"); );
    // Init
    IData/*31:0*/ reg_read_data__Vfuncrtn__Vcvt;
    reg_read_data__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("reg_read_data");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25030077__Vcb_reg_read_data_t __Vcb = (Vysyx_25030077__Vcb_reg_read_data_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25030077__Syms*)(__Vscopep->symsp()), reg_read_data__Vfuncrtn__Vcvt);
    int reg_read_data__Vfuncrtn;
    reg_read_data__Vfuncrtn = reg_read_data__Vfuncrtn__Vcvt;
    return reg_read_data__Vfuncrtn;
}
