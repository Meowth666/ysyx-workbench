#include "../include/cpu_exec.h"
#include "verilated_dpi.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "../include/memory.h"
#include "../include/common.h"
#include <nvboard.h>

static TOP_NAME dut;
static void single_cycle() {
	dut.clock = 0; dut.eval();
	dut.clock = 1; dut.eval();
}
static void reset(int n) {
	dut.reset = 1;
	while (n -- > 0) single_cycle();
	dut.reset = 0;
}
void nvboard_bind_all_pins(TOP_NAME* top);
int flag = 0;
uint32_t csr[4096];
VerilatedContext* contextp = new VerilatedContext;
VysyxSoCFull* ysyxSoCFull = new VysyxSoCFull{contextp};
extern int reg_read_addr();
extern int reg_read_data();
void pc_new(int data);
void print_itrace(FILE *itrace, int pc_data, uint32_t insn32);
int is_S(int x);
int is_L(int x);
void reg_new(int addr, int data);
int  new_reg();
void write_addr(uint32_t paddr, uint32_t data, int size);
void ftrace_check(uint32_t pc, uint32_t dnpc, uint32_t inst);
void difftest_step();
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
extern "C" void sdram_active (int bank, int addr) { 
	// printf("sdram_active: bank = %d, addr = %d\n", bank, addr);
	row[bank] = addr;
}
extern "C" void sdram_write (int bank, int addr, int dqm, int cnt, int data) { 
	uint32_t dqm0 = (dqm & 0x3);
	uint32_t dqm1 = ((dqm >> 2) & 0x3);
	// printf("sdram_write: bank = %d, addr = %d, data = %x\n", bank, addr, data);
	int col = addr & 0x3FF;
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
}
uint64_t data_save = 0;
extern "C" void sdram_read (int bank, int addr, int cnt, int* data) { 
	// printf("sdram_read: bank = %d, addr = %d\n", bank, addr);
	int col = addr & 0x3FF;
	uint16_t data0, data1;
	int is_overflow = 0;
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
	if(*data == 1048691 && insn32 == 32871){
		//printf("instruction = %x\n", instruction);
		success = 1;
	}
	else if(*data == 1048691){
		flag = 1;
	}
	insn32 = *data;
	// data_save = (data_save >> 16) | ((uint64_t)(*data & 0xFFFF) << 48);
	// uint32_t insn32 = (uint32_t)(data_save & 0xFFFFFFFF);
	// uint32_t ins_now = (uint32_t)((data_save >> 32) & 0xFFFFFFFF);
	// // printf("data_save = %x ins_now = %x, insn32 = %x\n",data_save, ins_now, insn32);
	// if(ins_now == 1048691 && insn32 == 32871){
	// 	//printf("instruction = %x\n", instruction);
	// 	success = 1;
	// }
	// else if(ins_now == 1048691){
	// 	flag = 1;
	// }
}
// uint32_t flash_array[20] = {0xff010113, 0x00112623, 0x00812423, 0x01010413, 0x100007b7, 0x04100713, 0x00e78023, 0x100007b7, 0x04300713, 0x00e78023, 0x100007b7, 0x04d00713, 0x00e78023, 0x0000006f};
// uint32_t flash_array[20] = {1,1,4,5,1,4,1,9,1,9};
uint32_t psram_array[1048588]  = {0};
extern "C" void psram_read(int32_t addr, int32_t *data) { 
    // printf("addr = %d\n", addr);
	*data = psram_array[addr/4];
	// printf("pc =0x%x  instruction = 0x%x\n",addr, *data);
	if(*data == 1048691 && insn32 == 32871){
		//printf("instruction = %x\n", instruction);
		success = 1;
	}
	else if(*data == 1048691){
		flag = 1;
	}
	insn32 = *data;
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
    // printf("addr = %d\n", addr);
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

uint32_t vga_array[666][655] = {0};
extern "C" void vga_read(int32_t w_addr, int32_t h_addr, int32_t *data) { 
	*data = vga_array[w_addr][h_addr];
}
extern "C" void vga_write(int32_t addr, int32_t data) {
	// int addr1 = addr - 0x21000000; 
	// printf("w = %d h = %d", addr1 / 640, addr1 % 640);
	vga_array[addr / 640][addr % 640] = data;
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

int cpu_exec(){
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	reset(10);
	while(1) {
		nvboard_update();
		single_cycle();
	}
	return 0;
}
