%{
#include <stdio.h>
#include "parser2.tab.h"
#include "html.h"
extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);

%}
%option noyywrap
%x COMMENT
%%


"auto"					{print_balise_span("type_specifier","auto"); }
"case"					{print_balise_span("type_specifier","case"); }
"struct"				{print_balise_span("jump_statement","struct"); }
"const"					{print_balise_span("type_specifier","const");  }
"continue"				{print_balise_span("type_specifier","continue"); }
"default"				{print_balise_span("type_specifier","default"); }
"do"					{print_balise_span("jump_statement","do"); }
"double"				{print_balise_span("type_specifier","double"); }
"else"					{print_balise_span("type_specifier","else"); }
"enum"					{print_balise_span("type_specifier","enum"); }
"extern"				{print_balise_span("type_specifier","extern"); }
"float"					{print_balise_span("type_specifier","float"); }

"goto"					{print_balise_span("type_specifier","goto"); }
"if"					{print_balise_span("jaune","if"); }
"inline"				{print_balise_span("type_specifier","inline"); }
"int"					{print_balise_span("type_specifier","int"); }
"long"					{print_balise_span("type_specifier","long"); }
"register"				{print_balise_span("type_specifier","register"); }
"restrict"				{print_balise_span("type_specifier","restrict"); }
"return"				{print_balise_span("jaune","break"); }
"short"					{print_balise_span("type_specifier","short"); }
"signed"				{print_balise_span("type_specifier","signed"); }
"sizeof"				{print_balise_span("jump_statement","sizeof"); }
"static"				{print_balise_span("type_specifier","static"); }
"switch"				{print_balise_span("jump_statement","switch"); }
"typedef"				{print_balise_span("type_specifier","typedef"); }
"union"					{print_balise_span("type_specifier","union"); }
"unsigned"				{print_balise_span("type_specifier","unsigned"); }
"void"					{print_balise_span("type_specifier","void");}
"volatile"				{print_balise_span("type_specifier","volatile");}
"while"					{print_balise_span("type_specifier","while");}


"char"					{print_balise_span("type_specifier","char");}
"for"					{print_balise_span("jaune","for");}
"else"					{print_balise_span("jaune","else");}
";"                                     {print_balise_span("vert",";");}
"{"                                     {print_balise_span("vert","{");}
"}"                                     {print_balise_span("vert","}");}

"/*" {fprintf(f_output,"<span class=\"comment\">/*");BEGIN(COMMENT);}
<COMMENT>. {fprintf(f_output,"%c",yytext[0]);}
<COMMENT>"*/" {fprintf(f_output, "*/</span>");BEGIN(INITIAL);}

\n {fprintf(f_output,"<br \\>\n");}
. {fprintf(f_output,"%c",yytext[0]);}

%%

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
