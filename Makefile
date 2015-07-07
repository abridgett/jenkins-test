#!/usr/bin/make
CC=gcc
CFLAGS=-O2
OBJ = hello.o

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJ)
		gcc -o $@ $^ $(CFLAGS)

test:
	./hello