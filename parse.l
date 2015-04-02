L   [a-zA-Z_]
A   [a-zA-Z_0-9]

%{
#include "parse.tab.h"
#include "html.h"

    
extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);

    //"return"				{yylval.nom=strdup(yytext); return(RETURN); }
    
%}
%option noyywrap
%%


"char"					{yylval.nom=strdup(yytext); return(CHAR); }



"double"				{yylval.nom=strdup(yytext); return(DOUBLE); }


"float"					{yylval.nom=strdup(yytext); return(FLOAT); }

"int"					{yylval.nom=strdup(yytext); return(INT); }
"long"					{yylval.nom=strdup(yytext); return(LONG); }


"short"					{yylval.nom=strdup(yytext); return(SHORT); }

"unsigned"				{yylval.nom=strdup(yytext); return(UNSIGNED); }
"void"					{yylval.nom=strdup(yytext); return(VOID); }



\n {fprintf(f_output,"<br \\>\n");}
. {fprintf(f_output,"%c",yytext[0]);}


%%
  /*
    Si un mot n'est ni un typedef ou enum
    alors c'est un identifier */
static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
}





