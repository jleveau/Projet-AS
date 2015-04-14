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
   

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

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
%x COMMENT
%x STRING
%%



"#".*                    {/*On efface les include et tous ce qui est apres*/}
"auto"					{print_balise_span("type_specifier","auto"); return AUTO; }
"case"					{print_balise_span("jaune","case"); return  CASE;} 
"struct"				{print_balise_span("type_specifier","struct"); return  STRUCT;} 
"const"					{print_balise_span("type_specifier","const");  return  CONST;} 
"continue"				{print_balise_span("type_specifier","continue"); return  CONTINUE;} 
"default"				{print_balise_span("type_specifier","default"); return  DEFAULT;} 
"do"					{print_balise_span("jump_statement","do"); return  DO;} 
"double"				{print_balise_span("type_specifier","double");yylval.val="double";return  DOUBLE;} 
"enum"					{print_balise_span("type_specifier","enum"); return  ENUM;} 
"extern"				{print_balise_span("type_specifier","extern"); return  EXTERN;} 
"float"					{print_balise_span("type_specifier","float"); yylval.val="float";return  FLOAT;} 

"goto"					{print_balise_span("type_specifier","goto"); return  GOTO;} 
"if"					{print_balise_span("jaune","if"); return  IF;} 
"inline"				{print_balise_span("type_specifier","inline"); return  INLINE;} 
"int"					{print_balise_span("type_specifier","int"); yylval.val="int";return  INT;} 
"long"					{print_balise_span("type_specifier","long"); return  LONG;} 
"register"				{print_balise_span("type_specifier","register");yylval.val="long"; return  REGISTER;} 
"restrict"				{print_balise_span("type_specifier","restrict"); return  RESTRICT;} 
"return"				{print_balise_span("jaune","return"); return  RETURN;} 
"short"					{print_balise_span("type_specifier","short"); yylval.val="short";return  SHORT;} 
"signed"				{print_balise_span("type_specifier","signed"); yylval.val="signed";return  SIGNED;} 
"sizeof"				{print_balise_span("jump_statement","sizeof"); return  SIZEOF;} 
"static"				{print_balise_span("type_specifier","static"); return  STATIC;} 
"switch"				{print_balise_span("jaune","switch"); return  SWITCH;} 
"typedef"				{print_balise_span("type_specifier","typedef");  return  TYPEDEF;} 
"union"					{print_balise_span("type_specifier","union"); return  UNION;} 
"unsigned"				{print_balise_span("type_specifier","unsigned"); return  UNSIGNED;} 
"void"					{print_balise_span("type_specifier","void"); yylval.val="void";return  VOID;} 
"volatile"				{print_balise_span("type_specifier","volatile");return  VOLATILE;} 
"while"					{print_balise_span("type_specifier","while");return  WHILE;} 


"char"					{print_balise_span("type_specifier","char");yylval.val="char";return  CHAR;} 
"for"					{print_balise_span("jaune","for");return  FOR;} 
"else"					{print_balise_span("jaune","else");return  ELSE;} 


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


        

{L}{A}*					{yylval.val=strdup(yytext); return check_type(); }

{HP}{H}+{IS}?				{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }
"0"{O}*{IS}?				{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ fprintf(f_output,"%s",yytext); return I_CONSTANT; }


{D}+{E}{FS}?				{ fprintf(f_output,"%s",yytext); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ print_balise_span("nombre",yytext); return F_CONSTANT; }
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
";"					{print_balise_span("vert",";"); return ';'; }
("{"|"<%")				 {indent=indent+2;print_balise_span("vert","{"); return '{'; }
("}"|"%>")				{indent=indent-2;print_balise_span("vert","}"); return '}'; }
","					{ fprintf(f_output,"%s",yytext); return ','; }
":"					{ fprintf(f_output,"%s",yytext); return ':'; }
"="					{ fprintf(f_output,"%s",yytext); return '='; }
"("					{print_balise_span("vert","("); return '('; }
")"					{print_balise_span("vert",")"); return ')'; }
("["|"<:")				{ fprintf(f_output,"%s",yytext); return '['; }
("]"|":>")				{ fprintf(f_output,"%s",yytext); return ']'; }
"."					{ fprintf(f_output,"%s",yytext); return '.'; }
"&"					{ fprintf(f_output,"%s",yytext); return '&'; }
"!"					{print_balise_span("vert","!"); return '!'; }
"~"					{ fprintf(f_output,"%s",yytext); return '~'; }
"-"					{print_balise_span("vert","-"); return '-'; }
"+"					{print_balise_span("vert","+"); return '+'; }
"*"					{print_balise_span("vert","*"); return '*'; }
"/"					{ fprintf(f_output,"%s",yytext); return '/'; }
"%"					{ fprintf(f_output,"%s",yytext); return '%'; }
"<"					{ fprintf(f_output,"%s",yytext); return '<'; }
">"					{ fprintf(f_output,"%s",yytext); return '>'; }
"^"					{ fprintf(f_output,"%s",yytext); return '^'; }
"|"					{ fprintf(f_output,"%s",yytext); return '|'; }
"?"					{print_balise_span("vert","?"); return '?'; }




"/*" {fprintf(f_output,"<span class=\"comment\">/*");BEGIN(COMMENT);}
<COMMENT>. {fprintf(f_output,"%c",yytext[0]);}
<COMMENT>"*/" {fprintf(f_output, "*/</span>");BEGIN(INITIAL);}

"//" {fprintf(f_output,"<span class=\"comment\">//");BEGIN(COMMENT);}
<COMMENT>\n {fprintf(f_output,"</span><br \\>");int i=0;while(i<indent){fprintf(f_output,"&nbsp;");i++;};BEGIN(INITIAL);}


"\"" {fprintf(f_output,"<span class=\"string\">\"");BEGIN(STRING);}
<STRING>"\"" {fprintf(f_output,"\"</span>");BEGIN(INITIAL);}
<STRING>. {fprintf(f_output,"%c",yytext[0]);}

\n {fprintf(f_output,"<br \\>\n");nb_ligne++;fprintf(f_output,"<span class=\"numerotation\">%d.  </span>",nb_ligne);int i=0;while(i<indent){fprintf(f_output,"&nbsp;");i++;}}
. {fprintf(f_output,"%c",yytext[0]);}


%%
  /*
    Si un mot n'est ni un typedef ou enum
    alors c'est un identifier */
static int check_type(void)
{
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
