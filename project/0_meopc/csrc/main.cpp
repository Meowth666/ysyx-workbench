#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <cstdint> // 包含 uint32_t 类型定义
#include "Vysyx_25030077.h"
#include "Vysyx_25030077__Dpi.h"
#include "svdpi.h"
#include "verilated_fst_c.h"
#include "verilated_vcd_c.h"
#include "include/common.h"
#include "include/memory.h"

// void wave_simulation(){

// }
//long load_img(const char* img_file);
int HINT = 0;

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
	cpu_init(argc, argv);
	
	cpu_exec(2);
	sdb_mainloop(1);
	HINT = cpu_end();
	// HINT = cpu_exec(argc, argv);
	//printf("------success = %d\n\n\n", HINT);
	if(HINT == 1){
		Log(ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN));
	}
	else{
		Log(ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED));
	}
	return 0;
 }
