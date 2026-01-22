#include "../include/memory.h"
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include "../include/common.h"

extern "C" {
	#include <sys/time.h>
}

#define PG_ALIGN __attribute((aligned(4096)))
static uint8_t *pmem = NULL;
static uint8_t *img = NULL;

FILE *mtrace_Write;
static uint64_t boot_time = 0;
void init_mem(size_t size){ 
	pmem = (uint8_t *)malloc(size * sizeof(uint8_t));
	//memcpy(pmem , img , sizeof(img));
	if(pmem == NULL){exit(0);}
	//Log("npc physical mrom area [%#x, %#lx]",RESET_VECTOR, RESET_VECTOR + size * sizeof(uint8_t));
}

uint8_t* guest_to_host(uint32_t paddr) { 
    return pmem + (uintptr_t)(paddr - 0x80000000); 
}

int ix = 0;
void write_addr(uint32_t paddr, uint32_t data, int size) {
	if(paddr == 0xa00003f8){
		putchar(data);
		//printf("write_addr: paddr = %x, data = %x, size = %d\n", paddr, data, size);
		return;
	}
	// printf("write_addr: paddr = %x, data = %x, size = %d\n", paddr, data, size);
	if(MTRACE){
		mtrace_Write=fopen("outputs/mtrace.txt","a");
		fprintf(mtrace_Write, "write   %x\n", paddr);
		fclose(mtrace_Write);
	} 
	// printf("write_addr: paddr = %x\n", paddr);
	// if(paddr < 0x80000000 || paddr >= 0x8fffffff){
	// 	return;
	// }
	for(int i = 0; i < size; i++){
		(pmem)[paddr - RESET_VECTOR  + i] = BITS(data, (i + 1) * 8 - 1 , i * 8);
	}
	return; 
}
static uint64_t get_time_internal() {
	struct timeval now;
	gettimeofday(&now, NULL);
	uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
	return us;
}
uint64_t get_time() {
	if (boot_time == 0) boot_time = get_time_internal();
	uint64_t now = get_time_internal();
	return now - boot_time;
}
svBitVecVal lsu_wr(const svBitVecVal* rs2, const svBitVecVal* lsu_type, const svBitVecVal* data){
	int mem_data;
	uint32_t r_addr = *data - 0x80000000;
	uint32_t is_err   = (*lsu_type >> 4) & 0x3;
	uint32_t is_ready = (*lsu_type >> 6);
	if((is_err != 0) || (is_ready != 3)){
		return 0;
	}
	if(*data == 0xa0000048 || *data == 0xa000004C){
		uint64_t time_now = get_time();
		if(*data == 0xa0000048){
			return (uint32_t)(time_now & 0xFFFFFFFFu);
		}
		return (uint32_t)(time_now >> 32);
	}
	uint32_t type = *lsu_type & 0xf;
	// printf("lsu_type = %d\n", type);
	// printf("data = %x\n", *data);
	// printf("rs2 = %x\n", *rs2);
	switch (type)
	{
		case 1://SW
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
			mem_data = SEXT((int64_t)(static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr])), 8);
			return mem_data;
			break;
		case 5://LBU	
		    
			mem_data =  (static_cast<uint8_t>(0 << 24)) |
						(static_cast<uint8_t>(0 << 16)) |
						(static_cast<uint8_t>(0 <<  8))  |
						 static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr]);
			// printf("addr = %x LBU mem_data = %x\n", r_addr, mem_data);
			return mem_data;
			break;
		case 6://LH
			mem_data = SEXT((int64_t)((static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr + 1]) <<  8)|static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr])), 16);
			return mem_data;
			break;
		case 7://LHU
			mem_data =  (static_cast<uint8_t>(0 << 24)) |
						(static_cast<uint8_t>(0 << 16)) |
						(static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr + 1]) << 8)  |
						 static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr]);
		 	return mem_data;
			break;
		case 8://LW
			mem_data =  (static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr + 3]) << 24) |
						(static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr + 2]) << 16) |
						(static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr + 1]) << 8)  |
						 static_cast<uint8_t>(guest_to_host(RESET_VECTOR)[r_addr]);
			return mem_data;
			break;
		default:
			return *data;
			break;
	}
    
}