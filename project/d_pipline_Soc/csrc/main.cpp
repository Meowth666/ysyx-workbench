#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <cstdint> // 包含 uint32_t 类型定义
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "svdpi.h"
#include "verilated_fst_c.h"
#include "verilated_vcd_c.h"
#include "include/common.h"
#include "include/memory.h"

// void wave_simulation(){

// }
//long load_img(const char* img_file);
int HINT = 0;

void csr_init();
void reg_init();
void init_monitor(int argc, char **argv);
int cpu_init(int argc, char** argv);
int  cpu_exec(int n);
int cpu_end();
void sdb_mainloop(int is_batch_mode);

int main(int argc, char** argv){
	Verilated::commandArgs(argc, argv);
	reg_init();
	init_monitor(argc, argv);
	printf("Start to execute instructions...\n");
	cpu_init(argc, argv);
	sdb_mainloop(1);
	HINT = cpu_end();
	if(HINT == 1){
		Log(ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN));
	}
	else{
		Log(ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED));
	}
	return 0;
 }
