
CC=g++
CFLAGS=-std=gnu++0x

all: lex build

lex:
	flex LexicalAnalizer.l

build:
	$(CC) $(CFLAGS) lex.yy.c
