#include <stdio.h>
#include <stdlib.h>  // 用于exit函数（处理文件打开失败）
#include <math.h>
#include <string.h> // 用于memset函数

// 定义数组最大长度，方便后续修改，避免魔法数字
#define MAX_INSTR_CNT 800000
#define MAX_INDEX_CNT 16

int main() {
    // 存储读取的指令地址
    int pc[MAX_INSTR_CNT];
    // 每行的缓冲区（256字节足够容纳单行十六进制数，如64位地址仅16位字符）
    char line_buf[256];
    FILE *file = fopen("bench.txt", "r");
    int i = 0;

    //检查文件是否成功打开
    if (file == NULL) {
        perror("Error: 打开文件 outputs/itrace.txt 失败");
        exit(EXIT_FAILURE);
    }

    // 逐行读取文件：fgets返回NULL表示读取完毕/出错
    while (fgets(line_buf, sizeof(line_buf), file) != NULL) {
        if (i >= MAX_INSTR_CNT) {
            fprintf(stderr, "Warning: 数组已达最大容量 %d，停止读取\n", MAX_INSTR_CNT);
            break;
        }
        // 从当前行解析十六进制数（%x 兼容大小写，如a1b2/A1B2）
        // sscanf返回成功解析的变量数，等于1表示解析成功
        if (sscanf(line_buf, "%x", &pc[i]) == 1) {
            i++;  // 仅解析成功时计数+1
        } else {
            // 打印解析失败的行（便于调试无效行）
            fprintf(stderr, "Warning: 第 %d 行解析失败，内容：%s", i+1, line_buf);
        }
    }
    fclose(file);
    
    int inst_cnt = i;  // 实际读取的指令数量

    printf("=======方案1:根据index查找,若冲突直接替换=======\n");
    int yuan_data[200] = {0};
    int index, tag;
    int zhong_cnt = 0;
    for(i = 0; i < inst_cnt; i++){
        index = (pc[i] & 0x3c) >> 2;
        tag = (pc[i] >> 6);
        if((tag == (yuan_data[index] >> 1)) && ((yuan_data[index] & 1) != 0)){
            zhong_cnt++;
        }
        else{
            yuan_data[index] = (tag << 1) | 1;
        }
    }
    printf("ifu请求次数:   %d   命中次数:   %d\n", inst_cnt, zhong_cnt);
    printf("icache命中率%lf\n", (double)zhong_cnt / (double)inst_cnt);
    
    int uint_size = 2;
    int group_cnt = 4;
    int group_bits = log2(group_cnt);
    int group_size = 32 / group_cnt;
    if(group_cnt * group_size != 32 || uint_size > group_cnt){
        printf("配置错误!\n");
        return -1;
    }
    printf("组数 = %d  块大小 = %d\n", group_cnt, uint_size);
    printf("=======方案2.1:group_size路组相联,若无匹配,则替换掉最早首次进入的=======\n");
    zhong_cnt = 0;
    int cache_tag[100][100] = {0};
    int j, k;
    int temp = 0;
    for(i = 0; i < inst_cnt; i++){
        index = ((pc[i] >> 2) & (group_cnt *2 - 1));
        tag = pc[i] >> (2 + group_bits);
        for(j = 0; j < group_size; j++){
            if((tag == (cache_tag[index][j] >> 1)) && ((cache_tag[index][j] & 1) != 0)){
                zhong_cnt++;
                break;
            }
            else if((cache_tag[index][j] & 1) == 0){
                cache_tag[index][j] = (tag << 1) | 1;
                break;
            }
            else if(j == group_size - 1){
                for(k = 0; k < uint_size; k++){
                    cache_tag[index][temp] = (tag << 1) | 1;
                    index = (index + 1) % group_cnt;
                }
                temp = (temp + 1) % group_size;
            }
        }
    }
    printf("ifu请求次数:   %d   命中次数:   %d\n", inst_cnt, zhong_cnt);
    printf("icache命中率%lf\n", (double)zhong_cnt / (double)inst_cnt);

    printf("=======方案2.2:group_size路组相联,无论匹配,则替换掉最早首次进入的=======\n");
    zhong_cnt = 0;
    memset(cache_tag, 0, sizeof(cache_tag));
    temp = 0;
    for(i = 0; i < inst_cnt; i++){
        index = ((pc[i] >> 2) & (group_cnt *2 - 1));
        tag = pc[i] >> (2 + group_bits);
        for(j = 0; j < group_size; j++){
            if((tag == (cache_tag[index][j] >> 1)) && ((cache_tag[index][j] & 1) != 0)){
                for(k = 0; k < uint_size; k++){
                    cache_tag[index][temp] = (tag << 1) | 1;
                    index = (index + 1) % group_cnt;
                }
                temp = (temp + 1) % group_size;
                zhong_cnt++;
                break;
            }
            else if((cache_tag[index][j] & 1) == 0){
                cache_tag[index][j] = (tag << 1) | 1;
                break;
            }
            else if(j == group_size - 1){
                for(k = 0; k < uint_size; k++){
                    cache_tag[index][temp] = (tag << 1) | 1;
                    index = (index + 1) % group_cnt;
                }
                temp = (temp + 1) % group_size;
            }
        }

    }
    printf("ifu请求次数:   %d   命中次数:   %d\n", inst_cnt, zhong_cnt);
    printf("icache命中率%lf\n", (double)zhong_cnt / (double)inst_cnt);
    return 0;
}