.PHONY: all run gdb clean latest $(ALL)

RESULT = .result
$(shell > $(RESULT))

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

#basename：去掉扩展名
#notdir:去掉目录 即最终的ALL=add、dummy、bit等
#因此make ARCH=riscv32-nemu run直接运行所有test
ALL = $(basename $(notdir $(shell find tests/. -name "*.c")))

#依赖：Makefile.$(ALL)
all: $(addprefix Makefile., $(ALL))
	@echo "test list [$(words $(ALL)) item(s)]:" $(ALL)

#对于 ALL 中的每个目标，
#它依赖于一个名为 Makefile.<目标名> 的文件。
$(ALL): %: Makefile.%

#Makefile.<目标名>依赖于对应的.c文件
#latest作用：即使.c文件未改变，每次依然重新编译，因为latest永远是“最新的”，不会对应实际文件，所以 Make 会 认为依赖可能变化。
#向Makefile.add中输入NAME = $*\nSRCS = $<\ninclude $${AM_HOME}/Makefile，构建临时Makefile
#在Makefile.add执行make ARCH=$(ARCH) $(MAKECMDGOALS); $(MAKECMDGOALS)就相当与run或gdb
#执行之后向临时文件.result中写入运行结果
Makefile.%: tests/%.c latest
	@/bin/echo -e "NAME = $*\nSRCS = $<\ninclude $${AM_HOME}/Makefile" > $@
	@if make -s -f $@ ARCH=$(ARCH) $(MAKECMDGOALS); then \
		printf "[%14s] $(COLOR_GREEN)PASS$(COLOR_NONE)\n" $* >> $(RESULT); \
	else \
		printf "[%14s] $(COLOR_RED)***FAIL***$(COLOR_NONE)\n" $* >> $(RESULT); \
	fi
#	-@rm -f Makefile.$*
#显示运行结果
run: all
	@cat $(RESULT)
	@rm $(RESULT)

gdb: all

clean:
	rm -rf Makefile.* build/

latest:
