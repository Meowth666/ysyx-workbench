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
uint32_t insn32;
int ins_cnt = 0;
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
	if(instruction == 1048691 && insn32 == 32871){
		success = 1;
	}
	insn32 = instruction;
	return instruction;
}

svBitVecVal lsu_wr(const svBitVecVal* rs2, const svBitVecVal* lsu_type, const svBitVecVal* data){
	int mem_data;
	printf("lsu_type = %d\n", *lsu_type);
	printf("data = %x\n", *data);
	printf("rs2 = %x\n", *rs2);
	switch (*lsu_type)
	{
		case 1://SW
			if (*data < 0x80000000 || *data >= 0x88000000){
				uint32_t addr = 0x80000000;
				write_addr(addr, *rs2, 4);
			}
			else
				write_addr(*data, *rs2, 4);
			return 0;
			break;
		case 2://SH
			write_addr(*data, *rs2 & 0xffff, 2);
			return 0;
			break;
		case 3://SB
			write_addr(*data, *rs2 & 0xff, 1);
			return 0;
			break;
		case 4://LB
			mem_data = SEXT((int64_t)(static_cast<uint8_t>(guest_to_host(0)[*data])), 8);
			return mem_data;
			break;
		case 5://LBU
			mem_data =  (static_cast<uint8_t>(0 << 24)) |
						(static_cast<uint8_t>(0 << 16)) |
						(static_cast<uint8_t>(0 <<  8))  |
						 static_cast<uint8_t>(guest_to_host(0)[*data]);
			return mem_data;
			break;
		case 6://LH
			mem_data = SEXT((int64_t)((static_cast<uint8_t>(guest_to_host(0)[*data + 1]) <<  8)|static_cast<uint8_t>(guest_to_host(0)[*data])), 16);
			return mem_data;
			break;
		case 7://LHU
			mem_data =  (static_cast<uint8_t>(0 << 24)) |
						(static_cast<uint8_t>(0 << 16)) |
						(static_cast<uint8_t>(guest_to_host(0)[*data + 1]) << 8)  |
						 static_cast<uint8_t>(guest_to_host(0)[*data    ]);
		 	return mem_data;
			break;
		case 8://LW
			mem_data =  (static_cast<uint8_t>(guest_to_host(0)[*data + 3]) << 24) |
						(static_cast<uint8_t>(guest_to_host(0)[*data + 2]) << 16) |
						(static_cast<uint8_t>(guest_to_host(0)[*data + 1]) << 8)  |
						 static_cast<uint8_t>(guest_to_host(0)[*data    ]);
			return mem_data;
			break;
		default:
			return *data;
			break;
	}
    
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
		if(ix > 2000){
			flag = 1;
			success = 0;
		 printf("Too many instructions\n");
			break;
		}
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