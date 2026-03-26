TOPNAME = ysyxSoCFull
NXDC_FILES = constr/top.nxdc
INC_PATH = nemu/include

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert  \
				--timescale "1ns/1ns"  \
				--no-timing  \


BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
# VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
VSRCS = $(shell find \
	$(abspath /home/meowth/ysyx/ysyx-workbench/project/d_pipline_Soc/vsrc) \
	$(abspath /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip) \
	-name "*.v" \
)
VSRCS += $(abspath /home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v)
CSRCS = $(shell find $(abspath ./csrc_nvboard) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)
CSRCS_SIM = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

LIBCAPSTONE = /home/meowth/ysyx/ysyx-workbench/project/d_pipline_Soc/tools/capstone/repo/libcapstone.so.5
#CFLAGS += -I  /home/meowth/ysyx/ysyx-workbench/project/0_meopc/tools/capstone/repo/include
/home/meowth/ysyx/ysyx-workbench/project/d_pipline_Soc/csrc/utils/disasm.cpp: $(LIBCAPSTONE)
$(LIBCAPSTONE):
	$(MAKE) -C /home/meowth/ysyx/ysyx-workbench/project/d_pipline_Soc/tools/capstone

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CXXFLAGS += -I$(abspath ./obj_dir) \
			-I/usr/include/readline \
			-I/home/meowth/ysyx/ysyx-workbench/project/d_pipline_Soc/tools/capstone/repo/include


VERILATOR_VINCLUDES += -I$(abspath /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/uart16550/rtl)
VERILATOR_VINCLUDES += -I$(abspath /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/spi/rtl)

# IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/kernels/yield-os/build/yield-os-riscv32e-ysyx-soc
# IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-riscv32e-ysyx-soc
IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/tests/mem-tests/build/hello-riscv32e-ysyx-soc
# IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/tests/am-tests/build/amtest-riscv32e-ysyx-soc
# IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/tests/cpu-tests/build/add-riscv32e-ysyx-soc
# IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/tests/cache_tests/build/cache-riscv32e-ysyx-soc

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		$(VERILATOR_VINCLUDES) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$^ -e $(IMAGE).elf -d $(DIFF_SO) $(IMAGE).bin mainargs=1
	gtkwave obj_dir/wave.fst

clean:
	rm -rf $(BUILD_DIR)
	rm -rf obj_dir
	
wave_build:
	verilator --cc --exe --trace-fst --build -j 0 nemu/main.cpp  vsrc/top.v 
	obj_dir/Vtop

wave:
	gtkwave obj_dir/wave.fst

# IMAGE = /home/meowth/ysyx/ysyx-workbench/am-kernels/tests/am-tests/build/amtest-riscv32e-npc

# IMAGE = /home/meowth/ysyx/ysyx-workbench/project/a_ifu_sram/csrc/char-test

DIFF_SO = /home/meowth/ysyx/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
sim:
	verilator --cc --exe --autoflush --trace-fst --build -j 0 \
	--timescale "1ns/1ns" \
    --no-timing \
	-I$(abspath /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/uart16550/rtl) \
    -I$(abspath /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/spi/rtl) \
	-CFLAGS "-I/usr/include/readline \
			 -I  /home/meowth/ysyx/ysyx-workbench/project/d_pipline_Soc/tools/capstone/repo/include" \
	-LDFLAGS "-lreadline -lncurses" \
	--top-module ysyxSoCFull \
	$(CSRCS_SIM) \
	$(VSRCS)
	obj_dir/VysyxSoCFull -e $(IMAGE).elf -d $(DIFF_SO) $(IMAGE).bin mainargs=1
	gtkwave obj_dir/wave.fst

test:
	verilator --cc --exe --trace-fst --build -j 0 $(CSRCS_SIM)  vsrc/*.v 
	obj_dir/Vtop /home/meowth/ysyx/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

.PHONY: default all clean run
