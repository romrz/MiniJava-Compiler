
CC=g++
CFLAGS=-std=gnu++0x

all: yacc lex build

yacc:
	yacc -d Parser.y

lex:
	flex LexicalAnalizer.l

build:
	$(CC) $(CFLAGS) lex.yy.c y.tab.c
