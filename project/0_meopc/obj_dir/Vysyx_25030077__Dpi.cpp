// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx_25030077::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx_25030077__Dpi.h"
#include "Vysyx_25030077.h"

#ifndef VL_DPIDECL_is_lsu_read_
#define VL_DPIDECL_is_lsu_read_
int is_lsu_read() {
    // DPI export at vsrc/ysyx_25030077.v:221:16
    return Vysyx_25030077::is_lsu_read();
}
#endif

#ifndef VL_DPIDECL_pc_read_data_
#define VL_DPIDECL_pc_read_data_
int pc_read_data() {
    // DPI export at vsrc/ysyx_25030077.v:111:16
    return Vysyx_25030077::pc_read_data();
}
#endif

#ifndef VL_DPIDECL_reg_read_addr_
#define VL_DPIDECL_reg_read_addr_
int reg_read_addr() {
    // DPI export at vsrc/ysyx_25030077.v:1107:16
    return Vysyx_25030077::reg_read_addr();
}
#endif

#ifndef VL_DPIDECL_reg_read_data_
#define VL_DPIDECL_reg_read_data_
int reg_read_data() {
    // DPI export at vsrc/ysyx_25030077.v:1112:16
    return Vysyx_25030077::reg_read_data();
}
#endif

