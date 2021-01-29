###############################################################################
# University of Hawaii, College of Engineering
# EE 205  - Object Oriented Programming
# Lab 03b - Animal Farm 1
#
# @file Makefile
# @version 1.0
#
# @author EmilyPham <emilyn3@hawaii.edu>
# @brief  Lab 03b - AnimalFarm1 - EE 205 - Spr 2021
# @date   01_28_2021
###############################################################################

#	$(info You need to write your own Makefile)
#	$(info I know you can do it)
#	$(info for now type gcc -o animalfarm *.c)
TARGET = animalfarm
CC = gcc
SRC = main.c cat.c animals.c
OBJ = main.o cat.o animals.o
HDR = cat.h animals.h

all: $(TARGET)

animalfarm: $(OBJ)
	$(CC) -o animalfarm $(OBJ)

main.o: main.c cat.h
	$(CC) -c main.c

cat.o: cat.c cat.h
	$(CC) -c cat.c

animals.o: animals.c animals.h
	$(CC) -c animal.c

clean:
	rm -f *.o animalfarm
