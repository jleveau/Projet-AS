rm -rf *~ *.o *.bak *.output libs/*~ libs/*.gch *\# *.html html/*.html log/*.txt parse.tab.h parse.tab.c lex.yy.c TAGS main capitaine 

flex parse.l
bison -dv parse.y 

gcc main.c -o main

gcc -g -c libs/html.c libs/html.h libs/tools.h libs/tools.c libs/tools.h libs/html.h
gcc -g -o capitaine capitaine.c parse.tab.c lex.yy.c html.o tools.o libs/stack.c -lfl

