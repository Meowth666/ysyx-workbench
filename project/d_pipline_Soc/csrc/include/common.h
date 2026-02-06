#ifndef __COMMOM_H__
#define __COMMOM_H__
//#include <macro.h>

#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <assert.h>
#include <stdlib.h>
#include <getopt.h>
#include <cstdint>

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "svdpi.h"
#include "verilated_fst_c.h"
#include "verilated_vcd_c.h"

#include "autoconf.h"
#include "macro.h"

// typedef uint32_t word_t;
// #define FMT_WORD "0x%08x"

// typedef word_t vaddr_t;
// typedef uint32_t paddr_t;
#define PMEM_LEFT  ((paddr_t)0x30000000)
#define RESET_VECTOR (PMEM_LEFT + 0)
//#include <debug.h>

#define NUM_CSR 4096
extern uint32_t csr[NUM_CSR];

#define ITRACE 0
#define FTRACE 0
#define MTRACE 0
#define DIFFTEST 0

#define MSTATUS   0x300
#define MTVEC     0x305
#define MEPC      0x341
#define MCAUSE    0x342
#define MVENDORID 0xF11
#define MARCHID   0xF12
#define SR(i) csr(i)

typedef uint32_t word_t;
typedef int32_t  sword_t;
#define FMT_WORD "0x%08"

typedef word_t vaddr_t;
typedef uint32_t paddr_t;
#define FMT_PADDR "0x%08"
typedef uint16_t ioaddr_t;
extern uint32_t csr[4096];
extern int reg_data[32];
extern const char *regs[];

#include "debug.h"

struct section
{
    char *name;         // 段名
    uint32_t addr;      // 段的起始地址 (运行时地址)
    uint32_t size;      // 段的大小 (字节)
};

// extern struct section elf_section[20];
// extern uint32_t text_flash_start;
extern uint32_t text_flash_end;
// extern uint32_t text_sdram_start;
extern uint32_t text_sdram_end;
#endif