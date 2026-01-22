#include "../include/cpu_exec.h"
#include "verilated_dpi.h"
#include "Vysyx_25030077.h"
#include "Vysyx_25030077__Dpi.h"
#include "../include/memory.h"
#include "../include/common.h"

int flag = 0;
uint32_t csr[4096];
VerilatedContext* contextp = new VerilatedContext;
VerilatedFstC* tfp = new VerilatedFstC;
Vysyx_25030077* ysyx_25030077 = new Vysyx_25030077{contextp};
void write_addr(uint32_t paddr, uint32_t data, int size);
int success = 0;
uint32_t insn32 = 0;
int ins_cnt = 0;
extern int err_read();
extern int inst_read();
svBitVecVal addr_read(const svBitVecVal* pc){
	svBitVecVal instruction;
    // printf("pc = %x\n", *pc);
	if(*pc < 0x80000000){
		instruction = 0x413;
	}
	else{
        int insert = (*pc - 0x80000000) + 3;
        instruction = (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert]) << 24) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 1]) << 16) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 2]) << 8)  |
                    static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 3]);
	}
	return instruction;
}

void step_and_dump_wave(){
	ysyx_25030077->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

int cpu_init(int argc, char** argv){
    contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	ysyx_25030077->trace(tfp, 0);
	tfp->open("obj_dir/wave.fst");//设置输出的文件wave.vcd
	ysyx_25030077 -> reset = 1;          
	return 0;
}
int cpu_exec(int n){
	int pc_data;
	FILE *itrace=fopen("outputs/itrace.txt","w");
	if(MTRACE){
		FILE *mtrace_Write=fopen("outputs/mtrace.txt","w");
		fclose(mtrace_Write);
	} 
	int ix = 1;
	for(int i = -3; i < 2 * n; i++){
		if(ysyx_25030077 -> clock){
			svScope scope = svGetScopeFromName("TOP.ysyx_25030077.b_idu");
			svSetScope(scope);
			uint32_t err = err_read();
			uint32_t inst = inst_read();
			if(err == 0){
				if(inst == 0x100073 && insn32 == 0x8067){
					flag = 1;
					success = 1;
				}
				else if(inst == 0x100073){
					flag = 1;
					success = 0;
				}
				insn32 = inst;
				// printf("0x%08x\n", inst);
			}
		}
		if(i == 13){
			ysyx_25030077 -> reset = 0;
		}
		ysyx_25030077 -> clock = ~(ysyx_25030077 -> clock);
		// printf("i = %d\n", ix);
		step_and_dump_wave();
		if(flag){
			break;
		}
		if (n < 0){
			i = i - 1; // 如果n < 0，表示一直执行
		}
		ix ++;
		// if(ix > 200000){
		// 	flag = 1;
		// 	success = 0;
		//  printf("Too many instructions\n");
		// 	break;
		// }
	}
	fclose(itrace);          
	return 0;
}

int cpu_end(){
	step_and_dump_wave();
	delete ysyx_25030077;
	tfp -> close();
	delete contextp;
	return success;
}