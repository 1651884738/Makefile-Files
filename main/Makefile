
#基本规则
#目标 ：目标依赖
#	命令
#


.PHONY:all clean
all:hello

OBJE = main.o add.o sub.o
OBJ = hello $(OBJE)
SRC  = $(wildcard *.c)

hello:main.o add.o sub.o
	gcc -o $(OBJ)
*.o : $(SRC)
	gcc -c $(SRC)
	
clean:
	rm -f $(OBJ)

