#include "../include/common.h"
#include <elf.h>
#include <malloc.h>
#include <string.h> // 为了使用 strdup
// struct section elf_section[20];
// uint32_t text_flash_start;
uint32_t text_flash_end;
// uint32_t text_sdram_start;
uint32_t text_sdram_end;
// 新增：定义一个结构体来存储段信息
struct section_info {
    char *name;         // 段名
    uint32_t addr;      // 段的起始地址 (运行时地址)
    uint32_t size;      // 段的大小 (字节)
};

// 新增：全局变量，用于存储所有段的信息和段的数量
struct section_info *sections = NULL;
int section_count = 0;

struct function_list {
    char name[15];
    uint32_t start;
    uint32_t end;
};


struct function_list *funtions;
int nums = 0;
int taps = 0;
int c_or_r = 1;

// 新增：一个辅助函数，用于在程序结束时释放所有分配的内存
void free_elf_resources() {
    if (funtions != NULL) {
        free(funtions);
        funtions = NULL;
    }
    if (sections != NULL) {
        // 释放每个段名称的内存
        for (int i = 0; i < section_count; i++) {
            if (sections[i].name != NULL) {
                free(sections[i].name);
            }
        }
        free(sections);
        sections = NULL;
    }
    section_count = 0;
    nums = 0;
}

void init_elf(const char *elf_file) {
    if(elf_file == NULL) { 
		Log("No elf is given.turn off ftrace");
		assert(0);
	}
    FILE *fp = fopen(elf_file, "rb");
    if (fp == NULL) { // 增加文件打开失败的判断
        perror("fopen elf file");
        exit(1);
    }

    Elf32_Ehdr ehdr;
    if (fread(&ehdr, 1, sizeof(ehdr), fp) != sizeof(ehdr)) {
        perror("fread ELF header");
        fclose(fp);
        exit(1);
    }

    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: %s is not an ELF file\n", elf_file);
        fclose(fp);
        exit(1);
    }

    Elf32_Shdr *sh_table =  static_cast<Elf32_Shdr*>(malloc(ehdr.e_shentsize * ehdr.e_shnum));
    if (!sh_table) {
        perror("malloc section table");
        fclose(fp);
        exit(1);
    }

    fseek(fp, ehdr.e_shoff, SEEK_SET);
    if (fread(sh_table, ehdr.e_shentsize, ehdr.e_shnum, fp) != ehdr.e_shnum) {
        perror("fread section table");
        free(sh_table);
        fclose(fp);
        exit(1);
    }

    Elf32_Shdr sh_strtab_hdr = sh_table[ehdr.e_shstrndx];
    char *sh_strtab =  static_cast<char*>(malloc(sh_strtab_hdr.sh_size));
    if (!sh_strtab) {
        perror("malloc sh_strtab");
        free(sh_table);
        fclose(fp);
        exit(1);
    }
    fseek(fp, sh_strtab_hdr.sh_offset, SEEK_SET);
    if (fread(sh_strtab, 1, sh_strtab_hdr.sh_size, fp) != sh_strtab_hdr.sh_size) {
        perror("fread sh_strtab");
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }

    // =========================================================================
    // 新增：解析并存储所有段的信息
    // =========================================================================
    section_count = ehdr.e_shnum;
    sections = static_cast<section_info*>(malloc(sizeof(struct section_info) * section_count));
    if (!sections) {
        perror("malloc sections array");
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }

    printf("===== ELF Sections Info =====\n");
    printf("Total sections: %d\n", section_count);
    for (int i = 0; i < section_count; i++) {
        const char *section_name = sh_strtab + sh_table[i].sh_name;
        
        // 使用 strdup 复制字符串，因为 sh_strtab 后续会被 free
        sections[i].name = strdup(section_name);
        if (sections[i].name == NULL) {
             perror("strdup section name");
             // 发生错误时，释放已分配的资源
             for (int j = 0; j < i; j++) {
                 free(sections[j].name);
             }
             free(sections);
             free(sh_strtab);
             free(sh_table);
             fclose(fp);
             exit(1);
        }
        
        // 段的运行时起始地址
        sections[i].addr = sh_table[i].sh_addr; 
        // 段的大小
        sections[i].size = sh_table[i].sh_size; 
        if(strcmp(sections[i].name, ".text.fsbl") == 0){
            text_flash_end  = sections[i].addr + sections[i].size - 4;
        }
        if(strcmp(sections[i].name, ".text") == 0){
            text_sdram_end = sections[i].addr + sections[i].size - 4;
        }
        // elf_section[i].name = sections[i].name;
        // elf_section[i].addr = sections[i].addr;
        // elf_section[i].size = sections[i].size;
        // 打印段信息
        // printf("Section %2d: Name=\'%s\', Address=0x%08x, Size=%u bytes\n",
        //        i, sections[i].name, sections[i].addr, sections[i].size);
    }
    // printf("=============================\n\n");
    // =========================================================================
    // 新增代码结束
    // =========================================================================

    // 4. 查找符号表 ".symtab" 节区
    Elf32_Shdr symtab_hdr;
    int found = 0;
    for (int i = 0; i < ehdr.e_shnum; i++) {
        const char *section_name = sh_strtab + sh_table[i].sh_name;
        if (strcmp(section_name, ".symtab") == 0) {
            symtab_hdr = sh_table[i];
            found = 1;
            break;
        }
    }
    if (!found) {
        fprintf(stderr, "Error: No symbol table (.symtab) found!\n");
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }

    // ... (后续代码保持不变) ...
    // 5. 根据符号表头的 sh_link 字段，获取关联的字符串表 (通常为 .strtab)
    if (symtab_hdr.sh_link >= ehdr.e_shnum) {
        fprintf(stderr, "Error: Invalid sh_link index for symbol table\n");
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }
    Elf32_Shdr strtab_hdr = sh_table[symtab_hdr.sh_link];

    // 6. 读取符号表数据
    int num_symbols = symtab_hdr.sh_size / sizeof(Elf32_Sym);
    
    Elf32_Sym *symtab = static_cast<Elf32_Sym*>(malloc(symtab_hdr.sh_size));
    if (!symtab) {
        perror("malloc symtab");
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }
    fseek(fp, symtab_hdr.sh_offset, SEEK_SET);
    if (fread(symtab, sizeof(Elf32_Sym), num_symbols, fp) != num_symbols) {
        perror("fread symtab");
        free(symtab);
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }

    // 7. 读取符号字符串表数据
    char *strtab = static_cast<char*>(malloc(strtab_hdr.sh_size));
    if (!strtab) {
        perror("malloc strtab");
        free(symtab);
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }
    fseek(fp, strtab_hdr.sh_offset, SEEK_SET);
    if (fread(strtab, 1, strtab_hdr.sh_size, fp) != strtab_hdr.sh_size) {
        perror("fread strtab");
        free(strtab);
        free(symtab);
        free(sh_strtab);
        free(sh_table);
        fclose(fp);
        exit(1);
    }
    
    funtions = static_cast<function_list*>(malloc(sizeof(struct function_list) * (num_symbols + 3)));
    // 8. 遍历符号表，输出符号信息
    //printf("共找到 %d 个符号：\n", num_symbols);
    int j = 0;
    for (int i = 0; i < num_symbols; i++) {
        // 每个符号的名字存储在字符串表中，其偏移量为 st_name
        // ELF32_ST_INFO_TYPE(st_info) 获取符号类型, STT_FUNC 是函数类型
        if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC && symtab[i].st_size > 0){
            strncpy(funtions[j].name , strtab + symtab[i].st_name, sizeof(funtions[j].name) - 1);
            funtions[j].name[sizeof(funtions[j].name) - 1] = '\0'; // 确保字符串以 null 结尾
            funtions[j].start = symtab[i].st_value;
            funtions[j].end = symtab[i].st_value + symtab[i].st_size;
            // printf("函数%d: 名称: %-20s 起始地址: 0x%x 结束地址: 0x%x 大小: %u\n",
            //         j, funtions[j].name, funtions[j].start, funtions[j].end, symtab[i].st_size);
            j++;
        }
    }
    const char *start = "_start";
    strcpy(funtions[j].name , start);
    funtions[j].start = 0x80000000;
    funtions[j].end = 0x80000010;
    nums = j + 1;
    j = 0;

    // 释放分配的资源
    free(strtab);
    free(symtab);
    free(sh_strtab); // 注意：sections数组中的name是strdup的，不受此处free影响
    free(sh_table);
    fclose(fp);

    FILE *fq = fopen("outputs/ftrace.txt", "w");
    if (fq != NULL) {
        fclose(fq);
    } else {
        perror("fopen ftrace.txt");
    }
    return;
}

// ... (elf_print 和 ftrace_find_symbol 函数保持不变) ...
void elf_print(int type, char *fname, uint32_t start, uint32_t end) {
    FILE *fq = fopen("outputs/ftrace.txt", "a");
    if(fq == NULL) {
        return;
    } // 增加文件打开失败的判断
    if(type == 0){
        if(c_or_r == 0)
            taps++;
        for(int i = 0; i < taps; i++){
            fprintf(fq, "\t");
        }
        fprintf(fq, "call   : ");
        // 原代码中这里多了一个循环，可能是笔误，已移除
        c_or_r = 0;
    }
    else{
        if(c_or_r == 1 && taps > 0) // 增加 taps > 0 的判断，防止出现负数
            taps--;
        for(int i = 0; i < taps; i++){
            fprintf(fq, "\t");
        }
        fprintf(fq, "return : ");
        c_or_r = 1;
    }
    // printf("elf_print: fname = %-30s  start = %#x  end = %#x\n", fname, start, end); // 调试信息
    fprintf(fq, "fname = %-30s  ", fname);
    fprintf(fq, "start = %#x  ", start);
    fprintf(fq, "end = %#x\n", end);
    fclose(fq);
}

char *ftrace_find_symbol(uint32_t addr){
	int i;
	for(i = 0; i < nums; i++){
		if(addr >= funtions[i].start && addr < funtions[i].end){
			return funtions[i].name;
		}
	}
	return NULL;
}