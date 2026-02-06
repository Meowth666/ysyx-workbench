#include "../include/common.h"


int reg_data[32];
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
int pc = 0;
void reg_init()
{
    for (int i = 0; i < 32; i++)
    {  
        if(i == 2)
            reg_data[i] = 0x0f001fff;
        else
            reg_data[i] = 0;
    }
}

void reg_new(int addr, int data){
    if (addr != 0){
        reg_data[addr] = data;
	    // printf("reg[%d] = %d\n", addr, data);
    }
}

void pc_new(int data){
    pc = data;
}

int isa_reg_str2val(const char *s) {
	int i = 0;
	for (i = 0; i < (sizeof(regs) / sizeof(char *)); i++){
		if (strcmp(s, regs[i]) == 0){
			//*success = true;
            printf("%s = 0x%x\n",s, reg_data[i]);
			return reg_data[i];
		}
	}
	if (strcmp(s, "pc") == 0){
		//*success = true;
        printf("%s = 0x%x\n",s, pc);
		return pc;
	}
	printf("wrong reg!\n");
	
	assert(0);
}

int new_reg(){
    return 0;
    // int w_addr;
    // int w_data;
    // int pc_data;
    // svScope scope = svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.f_gpr");
    // svSetScope(scope);
    // w_addr = reg_read_addr();
    // w_data = reg_read_data();
    // uint32_t waddr_ex = (w_addr & 0x1F);
    // uint32_t valid_ex = ((w_addr & 0x20) >> 5);
    

    // scope = svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.b_ifu");
    // svSetScope(scope);
    // pc_data = pc_read_data();
    // pc_new(pc_data);
    // if(valid_ex)
    //     reg_new(waddr_ex, w_data);

    // return valid_ex;
    // printf("--instruction: %x\n",insn32);
}

void isa_reg_display() {
    int i;
    printf("\ndut-pc=%x\n",pc);
    for(i = 0;i < 32;i++){
      // if(reg_data[i] >= 0x02000000){
        printf("dut-%3s = %-#11x",regs[i],reg_data[i]);
        if(i % 3 == 0) printf("\n");
      
      // else{
      //   printf("dut-%3s = %-11d",regs[i],reg_data[i]);
      //   if(i % 3 == 0) printf("\n");
      //   } 
      }
    printf("\n");
  }
