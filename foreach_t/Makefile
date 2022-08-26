.PHONY : all

dirs = api inc src
P = echo
TYPE = debug

#搜索所有的.c文件
source = $(foreach dir,$(dirs),$(wildcard $(dir)/*.h))

export mode := &(TYPE)

ifneq (&(TYPE),)
	LIST = /as/df/apple.c /we/er/aim.c /admin/usr/lnn.h
	HZ = .a .b .c
else
	LIST = /as/df/jobs.c /we/er/arm.c /admin/usr/linda.h
	HZ = .f .g .h
endif

all : prtpath prtword
	@echo "srcs = $(source)"
	@echo "mode = $(mode)"
	@echo "TYPE = $(TYPE)"

prtpath :
	@echo "the realpath is $(realpath ./)"
	@echo "the abspath is $(abspath ./)"

prtword :
	@$(P) "LIST = $(LIST)"
	@$(P) "HZ = $(HZ)"
	@$(P) "basename = $(basename $(LIST))"
	@$(P) "suffix = $(suffix $(LIST))"
	@$(P) "dir = $(dir $(LIST))"
	@$(P) "notdir = $(notdir $(LIST))"
	@$(P) "addsuffix = $(addsuffix .m, $(basename $(LIST)))"
	@$(P) "addprefix = $(addprefix t_,$(notdir $(LIST)))"
	@$(P) "join = $(join $(basename $(LIST)),$(HZ))"