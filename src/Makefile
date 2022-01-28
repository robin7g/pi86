# Makefile created on Ubuntu Linux 21.10 running on Raspberry Pi4
# To setup dependancies run the following  
# $ sudo apt-get install build-essential libsdl2-dev
#
# WiringPi is not included on Ubuntu so install using
# $ git clone https://github.com/WiringPi/WiringPi
# $ cd WiringPi
# $ ./build
#
# The build completes and the program functions however
# I have not tested with 8086 Hat is I am waiting for it to
# arrive. 
#
# I removed cga.o as it duplicates functions in vga.o 
OBJS88 =  pi88.o drives.o pi8x.o timer.o vga.o x86.o
OBJS86 =  pi86.o drives.o pi8x.o timer.o vga.o x86.o
CFLAGS = -Wall -g -D_REENTRANT
CC = g++
ASM = nasm
INCLUDES = -I/usr/include/SDL2
LIBS = -lwiringPi -lSDL2 -lpthread

all: pi86 pi88 bios.bin

pi86:${OBJS86}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS86} ${LIBS}

pi88:${OBJS88}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS88} ${LIBS}


clean:
	-rm -f *.o core *.core

bios.bin:
	${ASM} bios.asm -o bios.bin

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<

