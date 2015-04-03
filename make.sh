flex parse.l
bison -dv parse.y 
gcc -o main parse.tab.c lex.yy.c html.c tools.c main.c -lfl

