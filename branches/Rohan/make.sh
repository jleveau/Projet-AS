flex parse.l
bison -dv parser2.y 
gcc -o main parser2.tab.c lex.yy.c html.c tools.c main.c -lfl

