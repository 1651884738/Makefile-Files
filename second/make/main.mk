##########################
###     basic config   ###
##########################
include config.mk

##########################
### environment config ###
##########################
include envcfg.mk

##########################
###    file handling   ###
##########################
include smart.mk

##########################
###  static variables  ###
##########################
include static.mk



.PHONY : all

all : 
	@echo "sign = $(SIGN)"

