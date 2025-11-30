// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1870:16
    extern int dnpc_read_data();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:111:16
    extern int pc_read_data();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1103:16
    extern int reg_read_addr();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1108:16
    extern int reg_read_data();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1792:16
    extern int reg_read_rs1();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1797:16
    extern int reg_read_rs2();

    // DPI IMPORTS
    // DPI import at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1814:37
    extern svBitVecVal csr_read(const svBitVecVal* rs1, const svBitVecVal* imm, const svBitVecVal* sw);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1873:37
    extern svBitVecVal ecall_read(const svBitVecVal* pc, const svBitVecVal* type_p);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5706:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/psram/psram.v:106:30
    extern void psram_read(int addr, int* data);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/psram/psram.v:107:30
    extern void psram_write(int addr, int data);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v:141:30
    extern void sdram_active(int bank, int addr);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v:159:30
    extern void sdram_read(int bank, int addr, int cnt, int* data);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v:183:30
    extern void sdram_write(int bank, int addr, int dqm, int cnt, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
