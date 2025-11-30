// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void sdram_active(int bank, int addr);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_sdram_active_TOP____024unit(IData/*31:0*/ bank, IData/*31:0*/ addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sdram_active_TOP____024unit\n"); );
    // Body
    int bank__Vcvt;
    bank__Vcvt = bank;
    int addr__Vcvt;
    addr__Vcvt = addr;
    sdram_active(bank__Vcvt, addr__Vcvt);
}

extern "C" void sdram_read(int bank, int addr, int cnt, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit(IData/*31:0*/ bank, IData/*31:0*/ addr, IData/*31:0*/ cnt, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sdram_read_TOP____024unit\n"); );
    // Body
    int bank__Vcvt;
    bank__Vcvt = bank;
    int addr__Vcvt;
    addr__Vcvt = addr;
    int cnt__Vcvt;
    cnt__Vcvt = cnt;
    int data__Vcvt;
    sdram_read(bank__Vcvt, addr__Vcvt, cnt__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void sdram_write(int bank, int addr, int dqm, int cnt, int data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit(IData/*31:0*/ bank, IData/*31:0*/ addr, IData/*31:0*/ dqm, IData/*31:0*/ cnt, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sdram_write_TOP____024unit\n"); );
    // Body
    int bank__Vcvt;
    bank__Vcvt = bank;
    int addr__Vcvt;
    addr__Vcvt = addr;
    int dqm__Vcvt;
    dqm__Vcvt = dqm;
    int cnt__Vcvt;
    cnt__Vcvt = cnt;
    int data__Vcvt;
    data__Vcvt = data;
    sdram_write(bank__Vcvt, addr__Vcvt, dqm__Vcvt, cnt__Vcvt, data__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void psram_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    psram_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void psram_write(int addr, int data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    psram_write(addr__Vcvt, data__Vcvt);
}
