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
extern int reg_read_addr();
extern int reg_read_data();
extern int pc_read_data();
extern int is_lsu_read();
extern int inst_read();
void pc_new(int data);
void print_itrace(FILE *itrace, int pc_data, uint32_t insn32);
int is_S(int x);
int is_L(int x);
void reg_new(int addr, int data);
int  new_reg();
void write_addr(uint32_t paddr, uint32_t data, int size);
void ftrace_check(uint32_t pc, uint32_t dnpc, uint32_t inst);
void difftest_step();
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
uint32_t pc_pre;
extern "C" void sdram_active (int bank, int addr) { 
	// printf("sdram_active: bank = %d, addr = %d\n", bank, addr);
	row[bank] = addr;
}
uint64_t cnt0 = 0;
long long inst_cnts = 0;
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
long long cycs[10] = {0};

extern "C" void sdram_write (int bank, int addr, int dqm, int cnt, int data) { 
	uint32_t dqm0 = (dqm & 0x3);
	uint32_t dqm1 = ((dqm >> 2) & 0x3);
	// printf("sdram_write: bank = %d, addr = %d, data = %x\n", bank, addr, data);
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
	cnt0++;
	if(cnt0 == 100000)
		cnt0 = 0;
}
uint64_t cnt = 0;
extern "C" void sdram_read (int bank, int addr, int cnt, int* data) { 
	// printf("sdram_read: bank = %d, addr = %d\n", bank, addr);
	int col = addr & 0x3FF;
	uint16_t data0, data1;
	int is_overflow = 0;
	uint32_t addr_sdram = 0xa0000000 + ((uint32_t)((row[bank] & 0x1FFF) << 14)) | ((uint32_t)((bank & 0x3) << 12)) | (uint32_t)(col << 2);
	if(col < 512)
		switch(bank){
			case 0:
				data0 = sdram0_bank1[row[bank]][col];
				data1 = sdram1_bank1[row[bank]][col];
				break;
			case 1:
				data0 = sdram0_bank2[row[bank]][col];
				data1 = sdram1_bank2[row[bank]][col];
				break;
			case 2:
				data0 = sdram0_bank3[row[bank]][col];
				data1 = sdram1_bank3[row[bank]][col];
				break;
			case 3:
				data0 = sdram0_bank4[row[bank]][col];
				data1 = sdram1_bank4[row[bank]][col];
				break;
			default:
				break;
		}
	else
		switch(bank){
			case 0:
				data0 = sdram2_bank1[row[bank]][col - 512];
				data1 = sdram3_bank1[row[bank]][col - 512];
				break;
			case 1:
				data0 = sdram2_bank2[row[bank]][col - 512];
				data1 = sdram3_bank2[row[bank]][col - 512];
				break;
			case 2:	
				data0 = sdram2_bank3[row[bank]][col - 512];
				data1 = sdram3_bank3[row[bank]][col - 512];
				break;
			case 3:
				data0 = sdram2_bank4[row[bank]][col - 512];
				data1 = sdram3_bank4[row[bank]][col - 512];
				break;
			default:
				break;
		}
	*data = (uint32_t)((data1 << 16) | data0);
	// printf("addr_sdram = %x   inst = %x\n", addr_sdram, *data);
	if(addr_sdram <= text_sdram_end && addr_sdram >= 0xa0000000 && (*data != insn32)){
		// printf("pc =0x%x  pc_pre = 0x%x\n",addr_sdram, pc_pre);
		if(FTRACE){
			ftrace_check(pc_pre, addr_sdram, insn32);
		}
		pc_pre = addr_sdram;
		// inst_cnts ++;
		if(ITRACE)
			print_itrace(itrace, addr_sdram, *data);
	}
	// else{
	// 	if(cnt % 2 == 0)
	// 		lsu_cnts ++;
	// }
	if(*data == 1048691 && insn32 == 32871 && (addr_sdram <= text_sdram_end && addr_sdram >= 0xa0000000)){
		// printf("addr_sdram = %x   inst = %x\n", addr_sdram, *data);
		success = 1;
	}
	else if(*data == 1048691 && (addr_sdram <= text_sdram_end && addr_sdram >= 0xa0000000)){
		flag = 1;
	}
	if(MTRACE && cnt %2 == 0){
		fprintf(mtrace, "read sdram 0x%08x  data: 0x%08x\n", addr_sdram, *data);
	}
	// if(cnt % 2 == 1)
	// 	printf("pc =0x%x  pc_pre = 0x%x\n",addr_sdram, pc_pre);
	insn32 = *data;
	cnt++;
	if(cnt == 100000)
		cnt = 0;
}
// uint32_t flash_array[20] = {0xff010113, 0x00112623, 0x00812423, 0x01010413, 0x100007b7, 0x04100713, 0x00e78023, 0x100007b7, 0x04300713, 0x00e78023, 0x100007b7, 0x04d00713, 0x00e78023, 0x0000006f};
// uint32_t flash_array[20] = {1,1,4,5,1,4,1,9,1,9};
uint32_t psram_array[1048588]  = {0};
extern "C" void psram_read(int32_t addr, int32_t *data) { 
    // printf("addr = %d\n", addr + 0x80000000);
	*data = psram_array[addr/4];
	// printf("pc =0x%x  instruction = 0x%x\n",addr, *data);
	// if(*data == 1048691 && insn32 == 32871){
	// 	//printf("instruction = %x\n", instruction);
	// 	success = 1;
	// }
	// else if(*data == 1048691){
	// 	flag = 1;
	// }
	// insn32 = *data;
    // printf("size : %d  %d\n", sizeof(guest_to_host(RESET_VECTOR)[0]), sizeof(insert));
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
    // printf("addr = %x\n", addr + 0x30000000);
	// *data = flash_array[addr / 4];
    // printf("size : %d  %d\n", sizeof(guest_to_host(RESET_VECTOR)[0]), sizeof(insert));
	if(addr < 0){
		flag = 1;
	}
	else{
        int insert = addr + 3;
        // printf("insert = %d\n", insert);
        // printf("size : %d  %d\n", sizeof(guest_to_host(RESET_VECTOR)[0]), sizeof(insert));
        *data = (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert]) << 24) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 1]) << 16) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 2]) << 8)  |
                     static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 3]);
	}
	if(addr_flash <= text_flash_end && addr_flash >= 0x30000000){
		// inst_cnts ++;
		// printf("pc =0x%x  pc_pre = 0x%x\n",addr_flash, pc_pre);
		if(FTRACE){
			ftrace_check(pc_pre, addr_flash, insn32);
		}
		pc_pre = addr_flash;
		if(ITRACE)
			print_itrace(itrace, addr_flash, *data);
	}	
	// else{
	// 	lsu_cnts ++;
	// }
	insn32 = *data;	
		// printf("%x  %x\n", addr_flash, *data);
	// printf("%x\n", *data);
	// assert(0);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
	if(addr < 0x20000000){
		flag = 1;
	}
	else{
        int insert = (addr - 0x20000000) + 3;
        // printf("insert = %d\n", insert);
        // printf("size : %d  %d\n", sizeof(guest_to_host(RESET_VECTOR)[0]), sizeof(insert));
        *data = (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert]) << 24) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 1]) << 16) |
                    (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 2]) << 8)  |
                     static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[insert - 3]);
	}
    // printf("pc =0x%x  instruction = 0x%x\n",addr, *data);
	if(*data == 1048691 && insn32 == 32871){
		//printf("instruction = %x\n", instruction);
		success = 1;
	}
	else if(*data == 1048691){
		flag = 1;
	}
	insn32 = *data;
	// assert(0);
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
long long lsu_ar;
uint32_t inst0 = 0;
// struct section elf_section[20];
int cpu_exec(int n){
	// printf("%x  %x\n", text_flash_end, text_sdram_end);
	// printf("IN EXE Section: Name=\'%s\', Address=0x%08x, Size=%u bytes\n",
	// 	elf_section[1].name, elf_section[1].addr, elf_section[1].size);
	// uint32_t ssbl_start = _ssbl_load;
	// printf("%x\n", ssbl_start);
	int is_refresh;
	bool is_lsu_r = false;
	bool is_lsu_ar = false;
	long long flash_cyc = 0;
	long long flash_cnt = 0;
	long long sdram_cyc = 0;
	long long sdram_cnt = 0;
	// bool is_ifu_r = false;
	// bool is_ifu_ar = false;
	for(int i = -3; i < 2 * n; i++){
		if(ysyxSoCFull -> clock){
			svScope scope = svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.c_arbiter");
			svSetScope(scope);
			uint32_t lsu_read0 = is_lsu_read();
			uint32_t lsu_read  = lsu_read0 & 0xf;
			uint32_t lsu_addr;
			uint32_t inst = inst_read();
			if (inst != inst0){
				inst_cnts ++;
				inst0 = inst;
				if((uint32_t)(inst & 0x7f) == 3){
					cycs[type] += ix - ix0;
					type = 1;
					l_cnts ++;
				}
				if((uint32_t)(inst & 0x7f) == 35){
					cycs[type] += ix - ix0;
					type = 2;
					s_cnts ++;
				}
				if((uint32_t)(inst & 0x7f) == 51 || (uint32_t)(inst & 0x7f) == 19 || (uint32_t)(inst & 0x7f) == 55 || (uint32_t)(inst & 0x7f) == 23){
					jisuan_cnts ++;
					cycs[type] += ix - ix0;
					type = 3;
				}
				if((uint32_t)(inst & 0x7f) == 103 || (uint32_t)(inst & 0x7f) == 111){
					tiaozhuan_cnts ++;
					cycs[type] += ix - ix0;
					type = 4;
				}
				if((uint32_t)(inst & 0x7f) == 115){
					tequan_cnts ++;
					cycs[type] += ix - ix0;
					type = 5;
				}
				if((uint32_t)(inst & 0x7f) == 99){
					fenzhi_cnts ++;
					cycs[type] += ix - ix0;
					type = 6;
				}
				ix0 = ix;
			}
			if(is_lsu_ar == false && lsu_read == 6){
				lsu_addr =  (lsu_read0 & 0xf0) >> 4;
				lsu_ar = ix;
			}
			is_lsu_ar = (lsu_read == 6) ? true : false;

			if(is_lsu_r == false && lsu_read == 5){
				lsu_cycs += (ix - lsu_ar) / 2;
				lsu_cnts ++;

				if(lsu_addr == 3){ // flash
					flash_cyc += (ix - lsu_ar) / 2;
					flash_cnt ++;
				}
				else if (lsu_addr == 10){ // sdram
					sdram_cyc += (ix - lsu_ar) / 2;
					sdram_cnt ++;
				}
			}
			is_lsu_r = (lsu_read == 5) ? true : false;
			if(DIFFTEST){
				is_refresh = new_reg();
			}
		}
		if(ix == 23){
			ysyxSoCFull -> reset = 0;
		}
		if (DIFFTEST && !(ysyxSoCFull -> clock) && !(ysyxSoCFull -> reset) && is_refresh){
			difftest_step();
		}
		ysyxSoCFull -> clock = ~(ysyxSoCFull -> clock);
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
		// 	printf("\n----Too many instructions----\n");
		// 	break;
		// }
	} 
	printf("周期 : %lld    指令数 = %lld    ipc = %lld\n", ix / 2, inst_cnts, (ix / 2) / inst_cnts);
	printf("lsu读取数据 : %lld\n", lsu_cnts);
	if(lsu_cnts > 0)
		printf("lsu读取延迟 : %lld\n", lsu_cycs / lsu_cnts);
	printf("指令数：    计算 : %8lld   访存 : %8lld    跳转 : %8lld    CSR/特权 : %8lld    分支 : %8lld\n", jisuan_cnts, l_cnts + s_cnts, tiaozhuan_cnts, tequan_cnts, fenzhi_cnts);
	printf("周期数：    计算 : %8lld   访存 : %8lld    跳转 : %8lld    CSR/特权 : %8lld    分支 : %8lld\n", cycs[3] / 2, (cycs[1] + cycs[2]) / 2, cycs[4] / 2, cycs[5] / 2, cycs[6] / 2);
	printf("平均周期数：计算 : %8lld   访存 : %8lld    跳转 : %8lld    CSR/特权 : %8lld    分支 : %8lld\n", cycs[3] / 2 / jisuan_cnts, (cycs[1] + cycs[2]) / 2 / (l_cnts + s_cnts), cycs[4] / 2 / tiaozhuan_cnts, cycs[5] / 2 / tequan_cnts, cycs[6] / 2 / fenzhi_cnts);
	printf("flash lsu 访问次数: %8lld  平均延迟: %8lld\n", flash_cnt, flash_cyc / flash_cnt);
	if(sdram_cnt > 0)
		printf("sdram lsu 访问次数: %8lld  平均延迟: %8lld\n", sdram_cnt, sdram_cyc / sdram_cnt);
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