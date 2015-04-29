rm -rf *~ *.o *.bak *.output libs/*~ libs/*.gch *\# *.html html/*.html log/*.txt tex_parse.tab.h tex_parse.tab.c lex.yy.c TAGS main capitaine
rm -rf *.aux *.log *.pdf test*.s* *.dSYM a.out parse.y *.gz

flex tex_parse.l
bison -dv tex_parse.y

gcc -g -c libs/html.c libs/html.h libs/tools.h libs/tools.c libs/tools.h libs/html.h
gcc -g -o main main.c tex_parse.tab.c lex.yy.c html.o tools.o libs/stack.c -lfl
