#include "../include/cpu_exec.h"
#include "verilated_dpi.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "../include/memory.h"
#include "../include/common.h"

int flag = 0;
uint32_t csr[4096];
long long ix  = 1;
long long ix0 = 1;
// extern uint32_t _ssbl_load;
VerilatedContext* contextp = new VerilatedContext;
VerilatedFstC* tfp = new VerilatedFstC;
VysyxSoCFull* ysyxSoCFull = new VysyxSoCFull{contextp};
extern int inst_read();
extern int err_read();
void pc_new(int data);
void print_itrace(FILE *itrace, int pc_data, uint32_t insn32);
void ftrace_check(uint32_t pc, uint32_t dnpc, uint32_t inst);
void step_and_dump_wave(){
	ysyxSoCFull->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}
int success = 0;
uint32_t insn32;
uint16_t sdram0_bank1[8210][544] = {0};
uint16_t sdram0_bank2[8210][544] = {0};
uint16_t sdram0_bank3[8210][544] = {0};
uint16_t sdram0_bank4[8210][544] = {0};
uint16_t sdram1_bank1[8210][544] = {0};
uint16_t sdram1_bank2[8210][544] = {0};
uint16_t sdram1_bank3[8210][544] = {0};
uint16_t sdram1_bank4[8210][544] = {0};
uint16_t sdram2_bank1[8210][544] = {0};
uint16_t sdram2_bank2[8210][544] = {0};
uint16_t sdram2_bank3[8210][544] = {0};
uint16_t sdram2_bank4[8210][544] = {0};
uint16_t sdram3_bank1[8210][544] = {0};
uint16_t sdram3_bank2[8210][544] = {0};
uint16_t sdram3_bank3[8210][544] = {0};
uint16_t sdram3_bank4[8210][544] = {0};
uint32_t row[7] = {0};
FILE *itrace=fopen("outputs/itrace.txt","w");
FILE *mtrace=fopen("outputs/mtrace.txt","w");
FILE *LSU_sdram_trace=fopen("outputs/LSU_sdram_trace.txt","w");
uint32_t pc_pre;
extern "C" void sdram_active (int bank, int addr) { 
	// printf("sdram_active: bank = %d, addr = %d\n", bank, addr);
	row[bank] = addr;
}
long long inst_cnts = 0;
long long pc_read = 0;
long long lsu_cnts = 0;
long long lsu_cycs = 0;
long long ifu_cycs = 0;

long long l_cnts = 0;
long long s_cnts = 0;
long long jisuan_cnts = 0;
long long tiaozhuan_cnts = 0;
long long tequan_cnts = 0;
long long fenzhi_cnts = 0;

int type = 0;
long long cycs = 0;

extern "C" void sdram_write (int bank, int addr, int dqm, int cnt, int data) { 
	uint32_t dqm0 = (dqm & 0x3);
	uint32_t dqm1 = ((dqm >> 2) & 0x3);
	// if(addr < 30)
	// 	printf("sdram_write: bank = %d, addr = %d, data = %x\n", bank, addr, data);
	int col = addr & 0x3FF;
	uint32_t addr_sdram = 0xa0000000 + ((uint32_t)((row[bank] & 0x1FFF) << 14)) | ((uint32_t)((bank & 0x3) << 12)) | (uint32_t)(col << 2);
	uint16_t data0 = (data & 0xFFFF);
	uint16_t data1 = ((data >> 16) & 0xFFFF);
	if(col < 512)
		switch(bank){
			case 0:
				switch(dqm0){
					case 0:
						sdram0_bank1[row[bank]][col] = data0;
						break;
					case 1:
						sdram0_bank1[row[bank]][col] = (sdram0_bank1[row[bank]][col] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram0_bank1[row[bank]][col] = (sdram0_bank1[row[bank]][col] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram1_bank1[row[bank]][col] = data1;
						break;
					case 1:
						sdram1_bank1[row[bank]][col] = (sdram1_bank1[row[bank]][col] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram1_bank1[row[bank]][col] = (sdram1_bank1[row[bank]][col] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			case 1:
				switch(dqm0){
					case 0:
						sdram0_bank2[row[bank]][col] = data0;
						break;
					case 1:
						sdram0_bank2[row[bank]][col] = (sdram0_bank2[row[bank]][col] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram0_bank2[row[bank]][col] = (sdram0_bank2[row[bank]][col] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram1_bank2[row[bank]][col] = data1;
						break;
					case 1:
						sdram1_bank2[row[bank]][col] = (sdram1_bank2[row[bank]][col] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram1_bank2[row[bank]][col] = (sdram1_bank2[row[bank]][col] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			case 2:
				switch(dqm0){
					case 0:
						sdram0_bank3[row[bank]][col] = data0;
						break;
					case 1:
						sdram0_bank3[row[bank]][col] = (sdram0_bank3[row[bank]][col] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram0_bank3[row[bank]][col] = (sdram0_bank3[row[bank]][col] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram1_bank3[row[bank]][col] = data1;
						break;
					case 1:
						sdram1_bank3[row[bank]][col] = (sdram1_bank3[row[bank]][col] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram1_bank3[row[bank]][col] = (sdram1_bank3[row[bank]][col] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			case 3:
				switch(dqm0){
					case 0:
						sdram0_bank4[row[bank]][col] = data0;
						break;
					case 1:
						sdram0_bank4[row[bank]][col] = (sdram0_bank4[row[bank]][col] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram0_bank4[row[bank]][col] = (sdram0_bank4[row[bank]][col] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram1_bank4[row[bank]][col] = data1;
						break;
					case 1:
						sdram1_bank4[row[bank]][col] = (sdram1_bank4[row[bank]][col] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram1_bank4[row[bank]][col] = (sdram1_bank4[row[bank]][col] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			default:
				break;
		}
	// printf("0x%x\n", sdram_bank1[row[bank]][col]);
	else
		switch(bank){
			case 0:
				switch(dqm0){
					case 0:
						sdram2_bank1[row[bank]][col - 512] = data0;
						break;
					case 1:
						sdram2_bank1[row[bank]][col - 512] = (sdram2_bank1[row[bank]][col - 512] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram2_bank1[row[bank]][col - 512] = (sdram2_bank1[row[bank]][col - 512] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram3_bank1[row[bank]][col - 512] = data1;
						break;
					case 1:
						sdram3_bank1[row[bank]][col - 512] = (sdram3_bank1[row[bank]][col - 512] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram3_bank1[row[bank]][col - 512] = (sdram3_bank1[row[bank]][col - 512] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			case 1:
				switch(dqm0){
					case 0:
						sdram2_bank2[row[bank]][col - 512] = data0;
						break;
					case 1:
						sdram2_bank2[row[bank]][col - 512] = (sdram2_bank2[row[bank]][col - 512] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram2_bank2[row[bank]][col - 512] = (sdram2_bank2[row[bank]][col - 512] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram3_bank2[row[bank]][col - 512] = data1;
						break;
					case 1:
						sdram3_bank2[row[bank]][col - 512] = (sdram3_bank2[row[bank]][col - 512] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram3_bank2[row[bank]][col - 512] = (sdram3_bank2[row[bank]][col - 512] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			case 2:
				switch(dqm0){
					case 0:
						sdram2_bank3[row[bank]][col - 512] = data0;
						break;
					case 1:
						sdram2_bank3[row[bank]][col - 512] = (sdram2_bank3[row[bank]][col - 512] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram2_bank3[row[bank]][col - 512] = (sdram2_bank3[row[bank]][col - 512] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram3_bank3[row[bank]][col - 512] = data1;
						break;
					case 1:
						sdram3_bank3[row[bank]][col - 512] = (sdram3_bank3[row[bank]][col - 512] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram3_bank3[row[bank]][col - 512] = (sdram3_bank3[row[bank]][col - 512] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
			case 3:
				switch(dqm0){
					case 0:
						sdram2_bank4[row[bank]][col - 512] = data0;
						break;
					case 1:
						sdram2_bank4[row[bank]][col - 512] = (sdram2_bank4[row[bank]][col - 512] & 0x00FF) | (data0 & 0xFF00);
						break;
					case 2:
						sdram2_bank4[row[bank]][col - 512] = (sdram2_bank4[row[bank]][col - 512] & 0xFF00) | (data0 & 0x00FF);
						break;
					default:
						break;
				}
				switch(dqm1){
					case 0:
						sdram3_bank4[row[bank]][col - 512] = data1;
						break;
					case 1:
						sdram3_bank4[row[bank]][col - 512] = (sdram3_bank4[row[bank]][col - 512] & 0x00FF) | (data1 & 0xFF00);
						break;
					case 2:
						sdram3_bank4[row[bank]][col - 512] = (sdram3_bank4[row[bank]][col - 512] & 0xFF00) | (data1 & 0x00FF);
						break;
					default:
						break;
				}
				break;
		}			
	if(MTRACE){
		fprintf(mtrace, "write sdram 0x%08x    data = 0x%08x\n", addr_sdram, data);
	}
}
uint64_t cnt = 0;
svBitVecVal sdram_read(const svBitVecVal* bank, const svBitVecVal* addr) { 
	// printf("sdram_read: bank = %d, addr = %d\n", bank, addr);
	svBitVecVal data;
	int col = *addr & 0x3FF;
	uint16_t data0, data1;
	int is_overflow = 0;
	uint32_t addr_sdram = 0xa0000000 + ((uint32_t)((row[*bank] & 0x1FFF) << 14)) | ((uint32_t)((*bank & 0x3) << 12)) | (uint32_t)(col << 2);
	if(col < 512)
		switch(*bank){
			case 0:
				data0 = sdram0_bank1[row[*bank]][col];
				data1 = sdram1_bank1[row[*bank]][col];
				break;
			case 1:
				data0 = sdram0_bank2[row[*bank]][col];
				data1 = sdram1_bank2[row[*bank]][col];
				break;
			case 2:
				data0 = sdram0_bank3[row[*bank]][col];
				data1 = sdram1_bank3[row[*bank]][col];
				break;
			case 3:
				data0 = sdram0_bank4[row[*bank]][col];
				data1 = sdram1_bank4[row[*bank]][col];
				break;
			default:
				break;
		}
	else
		switch(*bank){
			case 0:
				data0 = sdram2_bank1[row[*bank]][col - 512];
				data1 = sdram3_bank1[row[*bank]][col - 512];
				break;
			case 1:
				data0 = sdram2_bank2[row[*bank]][col - 512];
				data1 = sdram3_bank2[row[*bank]][col - 512];
				break;
			case 2:	
				data0 = sdram2_bank3[row[*bank]][col - 512];
				data1 = sdram3_bank3[row[*bank]][col - 512];
				break;
			case 3:
				data0 = sdram2_bank4[row[*bank]][col - 512];
				data1 = sdram3_bank4[row[*bank]][col - 512];
				break;
			default:
				break;
		}
	data = (uint32_t)((data1 << 16) | data0);
	if(addr_sdram <= text_sdram_end && addr_sdram >= 0xa0000000 && (data != insn32)){
		if(FTRACE){
			ftrace_check(pc_pre, addr_sdram, insn32);
		}
		pc_pre = addr_sdram;
	}
	if(MTRACE && cnt %2 == 0){
		fprintf(mtrace, "read sdram 0x%08x  data: 0x%08x\n", addr_sdram, data);
	}
	insn32 = data;
	cnt++;
	if(cnt == 100000)
		cnt = 0;
	return data;
}

uint32_t psram_array[1048588]  = {0};
extern "C" void psram_read(int32_t addr, int32_t *data) { 
    // printf("addr = %d\n", addr + 0x80000000);
	*data = psram_array[addr/4];
}
extern "C" void psram_write(int32_t addr, int32_t data) { 
	// printf("addr = %d   data = %x\n", addr, data);
	if(addr % 4 == 0){
		psram_array[addr/4] = (psram_array[addr/4] & ~0xFF)      | (data & 0xFF);
	}
	else if(addr %4 == 1){
		psram_array[addr/4] = (psram_array[addr/4] & ~0xFF00)    | ((data & 0xFF) << 8);
	}
	else if(addr %4 == 2){
		psram_array[addr/4] = (psram_array[addr/4] & ~0xFF0000)  | ((data & 0xFF) << 16);
	}
	else if(addr %4 == 3){
		psram_array[addr/4] = (psram_array[addr/4] & ~0xFF000000)| ((data & 0xFF) << 24);
	}
	// printf("write_data :  %x\n", psram_array[addr/4]); 
	// printf("size : %d  %d\n", sizeof(guest_to_host(RESET_VECTOR)[0]), sizeof(insert));
}

extern "C" void flash_read(int32_t addr, int32_t *data) { 
	uint32_t addr_flash = addr + 0x30000000;
	if(addr < 0){
		flag = 1;
	}
	else{
        int insert = addr + 3;
        *data = (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert]) << 24) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 1]) << 16) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 2]) << 8)  |
                     static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 3]);
	}
	if(addr_flash <= text_flash_end && addr_flash >= 0x30000000){
		if(FTRACE){
			ftrace_check(pc_pre, addr_flash, insn32);
		}
		pc_pre = addr_flash;
	}	
	insn32 = *data;	
}
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
	return;
}

void csr_init(){
	csr[MVENDORID] = 0x79737978;
	csr[MARCHID]   = 25030077;
}

int ins_cnt = 0;
svBitVecVal ecall_read(const svBitVecVal* pc, const svBitVecVal* type_p){
	// printf("ecall_read: pc = %x, type = %d\n", *pc, *type_p);
	if(*type_p == 11){
		// printf("ecall: %x\n", *pc);
		csr[MEPC] = (uint32_t)*pc;
		csr[MCAUSE] = 11;
		assert(csr[MTVEC] != 0);
		return csr[MTVEC];
	}
	if(*type_p == 12){
		// printf("mret: %x\n", *pc);
		// printf("%x\n", csr[MEPC]);
		return csr[MEPC];
	}
	return 0;
}
svBitVecVal csr_read(const svBitVecVal* rs1, const svBitVecVal* imm, const svBitVecVal* sw){
	if(*sw == 11){
		// printf("iz: %d csr_read: rs1 = %x, imm = %x, sw = %d\n",iz, *rs1, *imm, *sw);
		svBitVecVal t = csr[*imm];
		csr[*imm] = *rs1;
		return t;
	}
	if(*sw == 12){
		// printf("iz: %d csr_read: rs1 = %x, imm = %x, sw = %d\n",iz, *rs1, *imm, *sw);
		svBitVecVal t = csr[*imm];
		csr[*imm] = t | *rs1;
		return t;
	}
	return 0;
}

int cpu_init(int argc, char** argv){
    contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	ysyxSoCFull->trace(tfp, 0);
	tfp->open("obj_dir/wave.fst");//设置输出的文件wave.vcd
	ysyxSoCFull -> reset = 1;          
	return 0;
}
long long ifu_ar;
int is_ifu_ar = 0;
long long TMT = 0;
long long lsu_ar;
uint32_t inst0 = 0;
// struct section elf_section[20];
int cpu_exec(int n){
	int pc_data;
	FILE *itrace=fopen("outputs/itrace.txt","w");
	if(MTRACE){
		FILE *mtrace_Write=fopen("outputs/mtrace.txt","w");
		fclose(mtrace_Write);
	} 
	int ix = 1;
	int inst_pre = 0;
	for(int i = -3; i < 2 * n; i++){
		if(ysyxSoCFull -> clock){
			cycs += 1;
			svScope scope = svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.b_idu");
			svSetScope(scope);
			uint32_t err = err_read();
			uint32_t inst = inst_read();
			uint32_t err0 = err & 0x7;
			uint32_t out_valid = err & 0x8;
			if(out_valid != 0)
				pc_read += 1;
			if(err0 == 0 && inst != inst_pre){
				if(inst == 0x100073 && inst_pre == 0x8067){
					flag = 1;
					success = 1;
				}
				else if(inst == 0x100073){
					flag = 1;
					success = 0;
				}
				inst_cnts += 1;
				// printf("0x%08x  0x%08x\n", inst_pre, inst);
				inst_pre = inst;
			}
		}
		if(ix == 23){
			ysyxSoCFull -> reset = 0;
		}
		ysyxSoCFull -> clock = ~(ysyxSoCFull -> clock);
		// printf("i = %d\n", ix);
		step_and_dump_wave();
		if(flag){
			break;
		}
		if (n < 0){
			i = i - 1; // 如果n < 0，表示一直执行
		}
		ix ++;
		// if(ix > 2000000){
		// 	flag = 1;
		// 	success = 0;
		//  	printf("Too many instructions\n");
		// 	break;
		// }
	}
	printf("周期 : %lld    指令数 = %lld    ipc = %lld\n", cycs, inst_cnts, cycs / inst_cnts);
	printf("IFU尝试读指令数 = %lld  平均每次延迟 = %lld\n", pc_read, cycs / pc_read);
	fclose(itrace);          
	return 0;
}

int cpu_end(){
	step_and_dump_wave();
	delete ysyxSoCFull;
	tfp -> close();
	delete contextp;
	return success;
}