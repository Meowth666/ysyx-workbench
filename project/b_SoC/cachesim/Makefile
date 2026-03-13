# **************************** 基础配置 ****************************
# 编译器：默认使用gcc，若需clang可替换为 clang
CC := gcc
# 编译选项：-Wall 显示所有警告，-g 生成调试信息，-O2 优化编译
CFLAGS := -Wall -g -O2
# 目标可执行文件名称（可自定义，例如：app）
TARGET := main
# 源文件目录：当前目录（.），若需指定子目录可改为 src/ 等
SRC_DIR := .
# 自动查找指定目录下所有 .c 源文件
SRCS := $(wildcard $(SRC_DIR)/*.c)
# 目标文件目录（编译生成的 .o 文件存放位置）
OBJ_DIR := obj
# 自动生成 .o 文件路径（将 .c 替换为 obj/下的 .o）
OBJS := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# **************************** 核心规则 ****************************
# 默认目标：编译并运行
all: build run

# 编译目标：生成可执行文件
build: $(OBJ_DIR) $(TARGET)

# 创建目标文件目录（若不存在）
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# 链接 .o 文件生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# 编译 .c 文件生成 .o 文件
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# 运行可执行文件
run: $(TARGET)
	@./$(TARGET)

# 清理编译产物（.o 文件和可执行文件）
clean:
	@rm -rf $(OBJ_DIR) $(TARGET)

# 伪目标：避免与同名文件冲突
.PHONY: all build run clean