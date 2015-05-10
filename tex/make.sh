rm -rf *~ *.o *.bak *.output librairie/*~ librairie/*.gch *\# *.html html/*.html log/*.txt tex_parse.tab.h tex_parse.tab.c lex.yy.c TAGS main capitaine
rm -rf *.aux *.log *.pdf test*.s* *.dSYM a.out parse.y *.gz

flex tex_parse.l
bison -dv tex_parse.y

gcc -g -c librairie/html.c librairie/html.h librairie/tools.h librairie/tools.c librairie/tools.h librairie/html.h
gcc -g -o main main.c tex_parse.tab.c lex.yy.c html.o tools.o librairie/stack.c -lfl
