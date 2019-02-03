# Brennen Rizer
# January 29, 2019
# Project 1: Makefile

C = g++

prog1: swap.a prog1.o
	$(C) -o prog1 prog1.o lib/swap.a
	rm *.o

prog1.o: swap.a
	$(C) -c src/prog1.cc

swap.a: swap.o
	ar rcs lib/swap.a swap.o

swap.o:
	$(C) -I ./include -c src/swap.cc

clean:
	rm swap
