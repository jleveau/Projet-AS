bison -d -v tex_parse.y
flex tex_parse.l
gcc tex_parse.tab.c lex.yy.c  -ly -ll
