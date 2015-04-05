flex parse.l
bison -dv parse.y 
gcc -o main parse.tab.c lex.yy.c libs/html.c libs/tools.c libs/stack.c main.c -lfl

