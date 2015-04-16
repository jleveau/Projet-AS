CC=gcc
CPPFLAGS=-g -ggdb -std=c11 -Wall -I.
LDLIBS=-lfl


all: main

main: main.o capitaine.o lex.yy.o parse.tab.o html.o tools.o stack.o
	$(CC) $(CPPFLAGS) $(CFLAGS) main.o capitaine.o lex.yy.o parse.tab.o html.o tools.o stack.o -o main $(LDLIBS)



capitaine.o: capitaine.c parse.tab.h libs/html.h libs/tools.h

lex.yy.o : lex.yy.c libs/html.h libs/tools.h parse.tab.h

parse.tab.o: parse.tab.c parse.tab.h libs/tools.h

html.o: libs/html.c libs/html.h libs/tools.h

stack.o: libs/stack.c libs/stack.h

tools.o: libs/tools.c libs/tools.h libs/stack.h libs/html.h

main.o: main.c

lex.yy.c: parse.l parse.tab.h 
	flex parse.l

parse.tab.h: parse.y
	/usr/bin/bison parse.y

parse.tab.c: parse.y parse.tab.h
	/usr/bin/bison parse.y

clean:
	-rm -rf *.o main


