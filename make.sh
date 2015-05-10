#!/bin/bash
rm parse.tab.c parse.tab.h main


flex parse.l 
bison -dv parse.y 

gcc main.c -o main

pushd tex
sh ./make.sh
popd
gcc -g -c libs/html.c libs/html.h libs/tools.h libs/tools.c libs/tools.h libs/html.h
gcc -g -o capitaine capitaine.c parse.tab.c lex.yy.c html.o tools.o libs/stack.c -lfl

