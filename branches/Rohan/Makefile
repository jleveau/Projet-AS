CC=gcc
CPPFLAGS=-g -ggdb -O0 -std=c11 -Wall -Werror -I.

all: 

html.o
	gcc $(CFLAGS) test_map.c map_recursif.c -o test_map_recursif

parse.c: parse.l
	flex parse.l

parse.h: scan.l
	flex scan.l

parse.c: parse.y scan.h
	/usr/bin/bison parse.y

parse.h: parse.y
	/usr/bin/bison parse.y

clean:
	-rm -rf *.o


