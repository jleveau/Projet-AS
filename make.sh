rm parse.tab.c parse.tab.h main

flex parse.l
bison -dv parse.y 

gcc main.c -o main
gcc -o capitaine capitaine.c parse.tab.c lex.yy.c libs/html.c libs/tools.c libs/stack.c -lfl

