%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"4\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%{
#include "parse.tab.h"
#include "libs/html.h"
#include <stdio.h>

    
extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);

    //"return"				{yylval.nom=strdup(yytext); return(RETURN); }
//";"					{yylval.nom=strdup(yytext); return ';'; }

/*
  "continue"              {fprintf(f_output,yylval.nom=strdup(yytext); return(CONTINUE);}
"break"                 {fprintf(f_output,yylval.nom=strdup(yytext); return(BREAK);}
"return"                {fprintf(f_output,yylval.nom=strdup(yytext); return(RETURN);}
("{"|"<%")				{ fprintf(f_output,"%s",yytext); return '{'; }
("}"|"%>")				{ fprintf(f_output,"%s",yytext); return '}'; }

*/

/*
 Avec ';' , Ca fonctionne lorsque l'on fait une declaration de variable ( etc int x=3;) ou que l'on fait une declaration de fonction ( ex : int coucou();) mais pas quand on écrit un ';' après une expression.
 Lorsque l'on veut implementer return, il faut aussi implementer ';' et le '}' mais il faut aussi implémenter ceux qui dependent de '}' ... <<<< Je comprends rien
*/    
%}

%option noyywrap
%%

"auto"					{ fprintf(f_output,"%s",yytext); return(AUTO); }
"break"					{ fprintf(f_output,"%s",yytext); return(BREAK); }
"case"					{ fprintf(f_output,"%s",yytext); return(CASE); }
"continue"				{ fprintf(f_output,"%s",yytext); return(CONTINUE); }
"default"				{ fprintf(f_output,"%s",yytext); return(DEFAULT); }
"do"					{ fprintf(f_output,"%s",yytext); return(DO); }
"else"					{ fprintf(f_output,"%s",yytext); return(ELSE); }
"enum"					{ fprintf(f_output,"%s",yytext); return(ENUM); }
"extern"				{ fprintf(f_output,"%s",yytext); return(EXTERN); }
"for"					{ fprintf(f_output,"%s",yytext); return(FOR); }
"goto"					{ fprintf(f_output,"%s",yytext); return(GOTO); }
"if"					{ fprintf(f_output,"%s",yytext); return(IF); }
"inline"				{ fprintf(f_output,"%s",yytext); return(INLINE); }
"register"				{ fprintf(f_output,"%s",yytext); return(REGISTER); }
"return"				{ fprintf(f_output,"%s",yytext); return(RETURN); }
"static"				{ fprintf(f_output,"%s",yytext); return(STATIC); }
"struct"				{ fprintf(f_output,"%s",yytext); return(STRUCT); }
"switch"				{ fprintf(f_output,"%s",yytext); return(SWITCH); }
"typedef"				{ fprintf(f_output,"%s",yytext); return(TYPEDEF); }
"union"					{ fprintf(f_output,"%s",yytext); return(UNION); }
"while"					{ fprintf(f_output,"%s",yytext); return(WHILE); }



"_Alignas"                              { fprintf(f_output,"%s",yytext); return ALIGNAS; }
"_Alignof"                              { fprintf(f_output,"%s",yytext); return ALIGNOF; }
"_Atomic"                               { fprintf(f_output,"%s",yytext); return ATOMIC; }
"_Bool"                                 { fprintf(f_output,"%s",yytext); return BOOL; }
"_Complex"                              { fprintf(f_output,"%s",yytext); return COMPLEX; }
"_Generic"                              { fprintf(f_output,"%s",yytext); return GENERIC; }
"_Imaginary"                            { fprintf(f_output,"%s",yytext); return IMAGINARY; }
"_Noreturn"                             { fprintf(f_output,"%s",yytext); return NORETURN; }
"_Static_assert"                        { fprintf(f_output,"%s",yytext); return STATIC_ASSERT; }
"_Thread_local"                         { fprintf(f_output,"%s",yytext); return THREAD_LOCAL; }
"__func__"                              { fprintf(f_output,"%s",yytext); return FUNC_NAME; }

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
"volatile"                 {yylval.nom=strdup(yytext);return(VOLATILE);


}


{L}{A}*					{yylval.nom=strdup(yytext); return check_type(); }

{HP}{H}+{IS}?				{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }
"0"{O}*{IS}?				{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }

{D}+{E}{FS}?				{ fprintf(f_output,"%s",yytext); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ fprintf(f_output,"%s",yytext); fprintf(f_output,"%s",yytext); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ fprintf(f_output,"%s",yytext); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ fprintf(f_output,"%s",yytext); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ fprintf(f_output,"%s",yytext); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ fprintf(f_output,"%s",yytext); return F_CONSTANT; }


({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ fprintf(f_output,"%s",yytext); return STRING_LITERAL; }

"..."					{ fprintf(f_output,"%s",yytext); return ELLIPSIS; }
">>="					{ fprintf(f_output,"%s",yytext); return RIGHT_ASSIGN; }
"<<="					{ fprintf(f_output,"%s",yytext); return LEFT_ASSIGN; }
"+="					{ fprintf(f_output,"%s",yytext); return ADD_ASSIGN; }
"-="					{ fprintf(f_output,"%s",yytext); return SUB_ASSIGN; }
"*="					{ fprintf(f_output,"%s",yytext); return MUL_ASSIGN; }
"/="					{ fprintf(f_output,"%s",yytext); return DIV_ASSIGN; }
"%="					{ fprintf(f_output,"%s",yytext); return MOD_ASSIGN; }
"&="					{ fprintf(f_output,"%s",yytext); return AND_ASSIGN; }
"^="					{ fprintf(f_output,"%s",yytext); return XOR_ASSIGN; }
"|="					{ fprintf(f_output,"%s",yytext); return OR_ASSIGN; }
">>"					{ fprintf(f_output,"%s",yytext); return RIGHT_OP; }
"<<"					{ fprintf(f_output,"%s",yytext); return LEFT_OP; }
"++"					{ fprintf(f_output,"%s",yytext); return INC_OP; }
"--"					{ fprintf(f_output,"%s",yytext); return DEC_OP; }
"->"					{ fprintf(f_output,"%s",yytext); return PTR_OP; }
"&&"					{ fprintf(f_output,"%s",yytext); return AND_OP; }
"||"					{ fprintf(f_output,"%s",yytext); return OR_OP; }
"<="					{ fprintf(f_output,"%s",yytext); return LE_OP; }
">="					{ fprintf(f_output,"%s",yytext); return GE_OP; }
"=="					{ fprintf(f_output,"%s",yytext); return EQ_OP; }
"!="					{ fprintf(f_output,"%s",yytext); return NE_OP; }
";"					{ fprintf(f_output,"%s",yytext); return ';'; }
("{"|"<%")				{ fprintf(f_output,"%s",yytext); return '{'; }
("}"|"%>")				{ fprintf(f_output,"%s",yytext); return '}'; }
","					{ fprintf(f_output,"%s",yytext); return ','; }
":"					{ fprintf(f_output,"%s",yytext); return ':'; }
"="					{ fprintf(f_output,"%s",yytext); return '='; }
"("					{ fprintf(f_output,"%s",yytext); return '('; }
")"					{ fprintf(f_output,"%s",yytext); return ')'; }
("["|"<:")				{ fprintf(f_output,"%s",yytext); return '['; }
("]"|":>")				{ fprintf(f_output,"%s",yytext); return ']'; }
"."					{ fprintf(f_output,"%s",yytext); return '.'; }
"&"					{ fprintf(f_output,"%s",yytext); return '&'; }
"!"					{ fprintf(f_output,"%s",yytext); return '!'; }
"~"					{ fprintf(f_output,"%s",yytext); return '~'; }
"-"					{ fprintf(f_output,"%s",yytext); return '-'; }
"+"					{ fprintf(f_output,"%s",yytext); return '+'; }
"*"					{ fprintf(f_output,"%s",yytext); return '*'; }
"/"					{ fprintf(f_output,"%s",yytext); return '/'; }
"%"					{ fprintf(f_output,"%s",yytext); return '%'; }
"<"					{ fprintf(f_output,"%s",yytext); return '<'; }
">"					{ fprintf(f_output,"%s",yytext); return '>'; }
"^"					{ fprintf(f_output,"%s",yytext); return '^'; }
"|"					{ fprintf(f_output,"%s",yytext); return '|'; }
"?"					{ fprintf(f_output,"%s",yytext); return '?'; }

\n {fprintf(f_output,"<br \\>\n");}
. {fprintf(f_output,"%c",yytext[0]);}


%%
  /*
    Si un mot n'est ni un typedef ou enum
    alors c'est un identifier */
static int check_type(void)
{
	printf("%s \n",yytext);
	fprintf(f_output,"%s",yytext);  
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
