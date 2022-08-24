.PHONY : all

dirs = api inc src

#搜索所有的.c文件
source = $(foreach dir,$(dirs),$(wildcard $(dir)/*.c))

all :
	@echo "srcs = $(source)"