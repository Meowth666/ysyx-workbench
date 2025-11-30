// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25030077__DPI_H_
#define VERILATED_VYSYX_25030077__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/ysyx_25030077.v:221:16
    extern int is_lsu_read();
    // DPI export at vsrc/ysyx_25030077.v:111:16
    extern int pc_read_data();
    // DPI export at vsrc/ysyx_25030077.v:1107:16
    extern int reg_read_addr();
    // DPI export at vsrc/ysyx_25030077.v:1112:16
    extern int reg_read_data();

    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25030077.v:1773:37
    extern svBitVecVal csr_read(const svBitVecVal* rs1, const svBitVecVal* imm, const svBitVecVal* sw);
    // DPI import at vsrc/ysyx_25030077.v:1832:37
    extern svBitVecVal ecall_read(const svBitVecVal* pc, const svBitVecVal* type_p);

#ifdef __cplusplus
}
#endif

#endif  // guard
