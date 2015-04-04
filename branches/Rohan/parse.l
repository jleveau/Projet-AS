L   [a-zA-Z_]
A   [a-zA-Z_0-9]

%{
#include "parser2.tab.h"
#include "html.h"

    
extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);

    //"return"				{yylval.nom=strdup(yytext); return(RETURN); }
//";"					{yylval.nom=strdup(yytext); return ';'; }

/*
  "continue"              {yylval.nom=strdup(yytext); return(CONTINUE);}
"break"                 {yylval.nom=strdup(yytext); return(BREAK);}
"return"                {yylval.nom=strdup(yytext); return(RETURN);}
("{"|"<%")				{ return '{'; }
("}"|"%>")				{ return '}'; }

*/

/*
 Avec ';' , Ca fonctionne lorsque l'on fait une declaration de variable ( etc int x=3;) ou que l'on fait une declaration de fonction ( ex : int coucou();) mais pas quand on écrit un ';' après une expression.
 Lorsque l'on veut implementer return, il faut aussi implementer ';' et le '}' mais il faut aussi implémenter ceux qui dependent de '}' ... 
*/    
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
"const"                 {yylval.nom=strdup(yytext);return(CONST);}
"restrict"                 {yylval.nom=strdup(yytext);return(RESTRICT);}
"volatile"                 {yylval.nom=strdup(yytext);return(VOLATILE);}

"if"                     {yylval.nom=strdup(yytext);return(IF);}

";"					{yylval.nom=strdup(yytext); return(POINT_VIRGULE); }
("{"|"<%")				{yylval.nom=strdup(yytext); return(ACCO_OUV); }
("}"|"%>")				{yylval.nom=strdup(yytext); return(ACCO_FER); }
","					{yylval.nom=strdup(yytext); return(VIRGULE); }
":"					{yylval.nom=strdup(yytext); return(DEUXPOINTS); }
"="					{yylval.nom=strdup(yytext); return(EGAL); }
"("					{yylval.nom=strdup(yytext); return(PAR_OUV); }
")"					{yylval.nom=strdup(yytext); return(PAR_FER); }
("["|"<:")				{yylval.nom=strdup(yytext); return(CRO_OUV); }
("]"|":>")				{yylval.nom=strdup(yytext); return(CRO_FER); }
"."					{yylval.nom=strdup(yytext); return(POINT); }
"&"					{yylval.nom=strdup(yytext); return(ECOMMERCIAL); }
"!"					{yylval.nom=strdup(yytext); return(POINT_EXCLA); }
"~"					{yylval.nom=strdup(yytext); return(EQUIVALENT); }
"-"					{yylval.nom=strdup(yytext); return(MOINS); }
"+"					{yylval.nom=strdup(yytext); return(PLUS); }
"*"					{yylval.nom=strdup(yytext); return(FOIS); }
"/"					{yylval.nom=strdup(yytext); return(DIVISE); }
"%"					{yylval.nom=strdup(yytext); return(POURCENT); }
"<"					{yylval.nom=strdup(yytext); return(INFERIEUR); }
">"					{yylval.nom=strdup(yytext); return(SUPERIEUR); }
"^"					{yylval.nom=strdup(yytext); return(PUISSANCE); }
"|"					{yylval.nom=strdup(yytext); return(TILT); }
"?"					{yylval.nom=strdup(yytext); return(POINT_INTERRO); }







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
