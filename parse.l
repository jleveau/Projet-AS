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

TROUS [[:SPACE:]]*\n{0,1}[[:SPACE:]]*

%{
#ifndef YYSTYPE
#define YYSTYPE char*
#endif
#include "parse.tab.h"
#include "libs/html.h"
#include "libs/tools.h"
#include <stdio.h>
#include <string.h>

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static int check_type(void);

char* print_indent(char*);

doc doc_ajout_brief(doc d, char* texte);
doc doc_ajout_detaille(doc d, char* texte);
doc doc_ajout_return_type(doc d, char* texte);
doc doc_ajout_param(doc d, char* texte);

//"return"              {yylval = strdup(yytext); return(RETURN);}
//";"                   {yylval = strdup(yytext); return ';';}

/*
"continue"              {fprintf(f_output, yylval = strdup(yytext); return(CONTINUE);}
"break"                 {fprintf(f_output, yylval = strdup(yytext); return(BREAK);}
"return"                {fprintf(f_output, yylval = strdup(yytext); return(RETURN);}
("{"|"<%")              {fprintf(f_output, "%s",yytext); return '{';}
("}"|"%>")              {fprintf(f_output, "%s",yytext); return '}';}
*/

/*
Avec ';' , Ca fonctionne lorsque l'on fait une declaration de variable ( etc int x=3;) ou que l'on fait une declaration de fonction ( ex : int coucou();) mais pas quand on écrit un ';' après une expression.
Lorsque l'on veut implementer return, il faut aussi implementer ';' et le '}' mais il faut aussi implémenter ceux qui dependent de '}' ... <<<< Je comprends rien
*/
%}

%option noyywrap
%x COMMENT
%x STRING
%x COMMENT_MULT_LIGNE
%x COMMENT_SMPL_LIGNE
%x DOC_DESCRIPTION
%x BRIEF
%x BRIEF_JAVADOC
%x DETAILLE_JAVADOC
%x BRIEF_COMMENT_SMPL_LIGNE
%x BRIEF_COMMENT_MULT_LIGNE
%x BEGIN_RETURN_COMMENT_MULT_LIGNE
%x RETURN_COMMENT_MULT_LIGNE
%x RETURN_COMMENT_SMPL_LIGNE
%x PARAM_COMMENT_SMPL_LIGNE
%x PARAM_COMMENT_MULT_LIGNE

%%

"auto"                              {yylval = print_balise_span("type_specifier", "auto"); return AUTO;}
"case"                              {yylval = print_balise_span("jaune","case"); return CASE;}
"struct"                            {yylval = print_balise_span("type_specifier", "struct"); return STRUCT;}
"const"                             {yylval = print_balise_span("type_specifier", "const"); return CONST;}
"continue"                          {yylval = print_balise_span("type_specifier", "continue"); return CONTINUE;}
"default"                           {yylval = print_balise_span("type_specifier", "default"); return DEFAULT;}
"do"                                {yylval = print_balise_span("jump_statement", "do"); return DO;}
"double"                            {yylval = print_balise_span("type_specifier", "double"); return DOUBLE;}
"enum"                              {yylval = print_balise_span("type_specifier", "enum"); return ENUM;}
"extern"                            {yylval = print_balise_span("type_specifier", "extern"); return EXTERN;}
"float"                             {yylval = print_balise_span("type_specifier", "float"); return FLOAT;}

"goto"                              {yylval = print_balise_span("type_specifier", "goto"); return GOTO;}
"if"                                {yylval = print_balise_span("jaune", "if"); return IF;}
"inline"                            {yylval = print_balise_span("type_specifier", "inline"); return INLINE;}
"int"                               {yylval = print_balise_span("type_specifier", "int"); return INT;}
"long"                              {yylval = print_balise_span("type_specifier", "long"); return LONG;}
"register"                          {yylval = print_balise_span("type_specifier", "register"); return REGISTER;}
"restrict"                          {yylval = print_balise_span("type_specifier", "restrict"); return RESTRICT;}
"return"                            {yylval = print_balise_span("jaune", "return"); return RETURN;}
"short"                             {yylval = print_balise_span("type_specifier", "short"); return SHORT;}
"signed"                            {yylval = print_balise_span("type_specifier", "signed"); return SIGNED;}
"sizeof"                            {yylval = print_balise_span("jump_statement", "sizeof"); return SIZEOF;}
"static"                            {yylval = print_balise_span("type_specifier", "static"); return STATIC;}
"switch"                            {yylval = print_balise_span("jaune", "switch"); return SWITCH;}
"typedef"                           {yylval = print_balise_span("type_specifier", "typedef"); return TYPEDEF;}
"union"                             {yylval = print_balise_span("type_specifier", "union"); return UNION;}
"unsigned"                          {yylval = print_balise_span("type_specifier", "unsigned"); return UNSIGNED;}
"void"                              {yylval = print_balise_span("type_specifier", "void"); return VOID;}
"volatile"                          {yylval = print_balise_span("type_specifier", "volatile"); return VOLATILE;}
"while"                             {yylval = print_balise_span("type_specifier", "while"); return WHILE;}

"char"                              {yylval = print_balise_span("type_specifier", "char"); return CHAR;}
"for"                               {yylval = print_balise_span("jaune", "for"); return FOR;}
"else"                              {yylval = print_balise_span("jaune", "else"); return ELSE;}

"_Alignas"                          {yylval = strdup(yytext); return ALIGNAS;}
"_Alignof"                          {yylval = strdup(yytext); return ALIGNOF;}
"_Atomic"                           {yylval = strdup(yytext); return ATOMIC;}
"_Bool"                             {yylval = strdup(yytext); return BOOL;}
"_Complex"                          {yylval = strdup(yytext); return COMPLEX;}
"_Generic"                          {yylval = strdup(yytext); return GENERIC;}
"_Imaginary"                        {yylval = strdup(yytext); return IMAGINARY;}
"_Noreturn"                         {yylval = strdup(yytext); return NORETURN;}
"_Static_assert"                    {yylval = strdup(yytext); return STATIC_ASSERT;}
"_Thread_local"                     {yylval = strdup(yytext); return THREAD_LOCAL;}
"__func__"                          {yylval = strdup(yytext); return FUNC_NAME;}

{L}{A}*                             {yylval = strdup(yytext); return check_type();}

{HP}{H}+{IS}?                       {yylval = strdup(yytext); return I_CONSTANT;}
{NZ}{D}*{IS}?                       {yylval = strdup(yytext); return I_CONSTANT;}
"0"{O}*{IS}?                        {yylval = strdup(yytext); return I_CONSTANT;}
{CP}?"'"([^'\\\n]|{ES})+"'"         {yylval = strdup(yytext); return I_CONSTANT;}


{D}+{E}{FS}?                        {yylval = strdup(yytext); return F_CONSTANT;}
{D}*"."{D}+{E}?{FS}?                {yylval = strdup(strdup(print_balise_span("nombre", yytext))); return F_CONSTANT;}
{D}+"."{E}?{FS}?                    {yylval = strdup(yytext); return F_CONSTANT;}
{HP}{H}+{P}{FS}?                    {yylval = strdup(yytext); return F_CONSTANT;}
{HP}{H}*"."{H}+{P}{FS}?             {yylval = strdup(yytext); return F_CONSTANT;}
{HP}{H}+"."{P}{FS}?                 {yylval = strdup(yytext); return F_CONSTANT;}

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+   {yylval = strdup(yytext); return STRING_LITERAL;}

"..."                               {yylval = strdup(yytext); return ELLIPSIS;}
">>="                               {yylval = strdup(yytext); return RIGHT_ASSIGN;}
"<<="                               {yylval = strdup(yytext); return LEFT_ASSIGN;}
"+="                                {yylval = strdup(yytext); return ADD_ASSIGN;}
"-="                                {yylval = strdup(yytext); return SUB_ASSIGN;}
"*="                                {yylval = strdup(yytext); return MUL_ASSIGN;}
"/="                                {yylval = strdup(yytext); return DIV_ASSIGN;}
"%="                                {yylval = strdup(yytext); return MOD_ASSIGN;}
"&="                                {yylval = strdup(yytext); return AND_ASSIGN;}
"^="                                {yylval = strdup(yytext); return XOR_ASSIGN;}
"|="                                {yylval = strdup(yytext); return OR_ASSIGN;}
">>"                                {yylval = strdup(yytext); return RIGHT_OP;}
"<<"                                {yylval = strdup(yytext); return LEFT_OP;}
"++"                                {yylval = strdup(yytext); return INC_OP;}
"--"                                {yylval = strdup(yytext); return DEC_OP;}
"->"                                {yylval = strdup(yytext); return PTR_OP;}
"&&"                                {yylval = strdup(yytext); return AND_OP;}
"||"                                {yylval = strdup(yytext); return OR_OP;}
"<="                                {yylval = strdup(yytext); return LE_OP;}
">="                                {yylval = strdup(yytext); return GE_OP;}
"=="                                {yylval = strdup(yytext); return EQ_OP;}
"!="                                {yylval = strdup(yytext); return NE_OP;}


"#".*                               {/*On efface les include et tous ce qui est apres*/}

";"                                 {
										yylval = string_concat(2, print_balise_span("vert", ";"), strdup("<span class=\"line\"><br \\></span>\n"));    /* Il faut afficher l'indentation dans la yylval */
										print_indent(yylval);
										return SEMI_COLON;
									}

("{"|"<%")                          {
										indent = indent + 2;
										new_block(NULL);
										yylval = string_concat(2, print_debut_balise_block(), strdup("<span class=\"line\"></span>\n"));
										print_indent(yylval);
										return OPENING_BRACE;
									}

("}"|"%>")                          {
										indent = indent - 2;
										yylval = string_concat(2, print_fin_balise_block(), strdup("<span class=\"line\"><br \\></span>\n"));
										print_indent(yylval);
										fin_block();
										return CLOSING_BRACE;
									}

","	                                {yylval = strdup(yytext); return COLON;}
":"                                 {yylval = strdup(yytext); return TWO_DOT;}
"="                                 {yylval = strdup(yytext); return EQUAL;}
"("                                 {yylval = print_balise_span("vert", "("); return OPENING_PARENTHESIS;}
")"                                 {yylval = print_balise_span("vert", ")"); return CLOSING_PARENTHESIS;}
("["|"<:")                          {yylval = strdup(yytext); return LEFT_BRACKET;}
("]"|":>")                          {yylval = strdup(yytext); return RIGHT_BRACKET;}
"."                                 {yylval = strdup(yytext); return DOT;}
"&"                                 {yylval = strdup(yytext); return AMPERSAND;}
"!"                                 {yylval = print_balise_span("vert", "!"); return EXCLAMATION_POINT;}
"~"                                 {yylval = strdup(yytext); return TILD;}
"-"                                 {yylval = print_balise_span("vert", "-"); return MINUS;}
"+"                                 {yylval = print_balise_span("vert", "+"); return PLUS;}
"*"                                 {yylval = strdup("*"); return STAR;}
"/"                                 {yylval = strdup(yytext); return SLASH;}
"%"                                 {yylval = strdup(yytext); return PERCENT;}
"<"                                 {yylval = strdup(yytext); return INFERIOR;}
">"                                 {yylval = strdup(yytext); return SUPERIOR;}
"^"                                 {yylval = strdup(yytext); return EXPONENT;}
"|"                                 {yylval = strdup(yytext); return PIPE;}
"?"                                 {yylval = print_balise_span("vert", "?"); return INTERROGATION_POINT;}

"/*!"                         {BEGIN(COMMENT_MULT_LIGNE); /*multiligne commentaires qui peuvent prendre la commande \brief*/}
<COMMENT_MULT_LIGNE,RETURN_COMMENT_MULT_LIGNE,PARAM_COMMENT_MULT_LIGNE>\\brief {
	BEGIN(BRIEF_COMMENT_MULT_LIGNE);
}

<COMMENT_MULT_LIGNE>.  {
	/*on n'affiche pas les commentaires*/
}

<BRIEF_COMMENT_MULT_LIGNE>[^\*\n\\]* {
	documentation_pour_fonction=doc_ajout_brief(documentation_pour_fonction, strdup(yytext));
}

<DOC_DESCRIPTION>[^\*\n\\]* {
	documentation_pour_fonction=doc_ajout_detaille(documentation_pour_fonction, strdup(yytext));
}

<BRIEF_COMMENT_MULT_LIGNE,DOC_DESCRIPTION,DETAILLE_JAVADOC,RETURN_COMMENT_MULT_LIGNE,BRIEF_JAVADOC,PARAM_COMMENT_MULT_LIGNE>\* {
	/*pour que les etoiles au debut ne font rien*/
}
<BRIEF_COMMENT_MULT_LIGNE,DOC_DESCRIPTION,RETURN_COMMENT_MULT_LIGNE,BRIEF_JAVADOC,PARAM_COMMENT_MULT_LIGNE>\n {
	/*pour que les \n singuliers ne font rien*/
}

<BRIEF_COMMENT_MULT_LIGNE>\n\*\n\* {
	BEGIN(DOC_DESCRIPTION);
}
<COMMENT_MULT_LIGNE,BRIEF_COMMENT_MULT_LIGNE,DOC_DESCRIPTION,PARAM_COMMENT_MULT_LIGNE>\\return {
	BEGIN(RETURN_COMMENT_MULT_LIGNE);
}
<RETURN_COMMENT_MULT_LIGNE>[^\*\n\\]* {
	documentation_pour_fonction=doc_ajout_return_type(documentation_pour_fonction, strdup(yytext));
}

<COMMENT_MULT_LIGNE,BRIEF_COMMENT_MULT_LIGNE,DOC_DESCRIPTION,PARAM_COMMENT_MULT_LIGNE>\\param {
	BEGIN(PARAM_COMMENT_MULT_LIGNE);
}
<PARAM_COMMENT_MULT_LIGNE>[^\*\n\\]* {
	documentation_pour_fonction=doc_ajout_param(documentation_pour_fonction, strdup(yytext));
}

<COMMENT_MULT_LIGNE,BRIEF_COMMENT_MULT_LIGNE,DOC_DESCRIPTION,DETAILLE_JAVADOC,BRIEF_JAVADOC,PARAM_COMMENT_MULT_LIGNE>"*/" {
	BEGIN(INITIAL);
}

"//*" {BEGIN(COMMENT_SMPL_LIGNE);}
<COMMENT_SMPL_LIGNE,RETURN_COMMENT_SMPL_LIGNE,PARAM_COMMENT_SMPL_LIGNE>\\brief {
	BEGIN(BRIEF_COMMENT_SMPL_LIGNE);
}
<COMMENT_SMPL_LIGNE,BRIEF_COMMENT_SMPL_LIGNE,PARAM_COMMENT_SMPL_LIGNE>\\return {
	BEGIN(RETURN_COMMENT_SMPL_LIGNE);
}
<COMMENT_SMPL_LIGNE,BRIEF_COMMENT_SMPL_LIGNE,RETURN_COMMENT_SMPL_LIGNE,PARAM_COMMENT_SMPL_LIGNE>\\param {
	//si déjà dans param ca va commencer de nouveau
	BEGIN(PARAM_COMMENT_SMPL_LIGNE);
}
<COMMENT_SMPL_LIGNE>.      {
	/*on n'affiche pas les commentaires*/
}
<BRIEF_COMMENT_SMPL_LIGNE>[^\n\\]* {
	documentation_pour_fonction->brief=strdup(yytext);
}
<RETURN_COMMENT_SMPL_LIGNE>[^\n\\]* {
	documentation_pour_fonction=doc_ajout_return_type(documentation_pour_fonction, strdup(yytext));
}

<PARAM_COMMENT_SMPL_LIGNE>[^\n\\]* {
	documentation_pour_fonction=doc_ajout_param(documentation_pour_fonction, strdup(yytext));
}

<BRIEF_COMMENT_SMPL_LIGNE,COMMENT_SMPL_LIGNE,RETURN_COMMENT_SMPL_LIGNE,PARAM_COMMENT_SMPL_LIGNE>\n      {
	BEGIN(INITIAL);
}

"/**" {BEGIN BRIEF_JAVADOC;}
<BRIEF_JAVADOC>[^\.\*\n\\]* {
	documentation_pour_fonction=doc_ajout_brief(documentation_pour_fonction, strdup(yytext));
	}
<BRIEF_JAVADOC>\. {
	BEGIN(DETAILLE_JAVADOC);
}
<DETAILLE_JAVADOC>[^\*\n\\]* {
	documentation_pour_fonction=doc_ajout_detaille(documentation_pour_fonction, strdup(yytext));
}

"/*"                                {fprintf(f_output, "<span class=\"comment\">/*"); BEGIN(COMMENT);}
<COMMENT>.                          {fprintf(f_output, "%c", yytext[0]);}
<COMMENT>"*/"                       {fprintf(f_output, "*/</span>\n"); BEGIN(INITIAL);}

"//"                                {fprintf(f_output, "<span class=\"comment\">//"); BEGIN(COMMENT);}
<COMMENT>\n                         {
										fprintf(f_output, "</span><span class=\"line\"><br \\></span>\n");
										int i = 0;
										while(i < indent)
										{
											fprintf(f_output, "&nbsp;"); i++;
										}
										BEGIN(INITIAL);
									}

"\""                                {fprintf(f_output, "<span class=\"string\">\""); BEGIN(STRING);}
<STRING>"\""                        {fprintf(f_output, "\"</span>\n"); BEGIN(INITIAL);}
<STRING>.                           {fprintf(f_output, "%c", yytext[0]);}

\n                                  {nb_ligne++;}

%%

/*
Si un mot n'est ni un typedef ou enum
alors c'est un identifier
*/

static int check_type(void)
{
	if (typedef_exist(yytext)){
		yylval=print_balise_call_typedef(yytext);
		return TYPEDEF_NAME;
	}
	if (enum_exist(yytext)){
		return ENUMERATION_CONSTANT;
	}
	switch(sym_type(yytext))
	{
		default:						  /* includes undefined */
			return IDENTIFIER;
	}
}

char* print_indent(char* text){
	int i = 0;
	while(i < indent)
	{
		yylval = string_concat(2, yylval, strdup("&nbsp;"));
		i++;
	}
	return yylval;
}

doc doc_ajout_brief(doc d, char* texte){
	d->brief=string_concat(2, d->brief, texte);
	return d;		
}

doc doc_ajout_detaille(doc d, char* texte){
	d->description_detaille=string_concat(2, d->description_detaille, texte);
	return d;		
}

doc doc_ajout_return_type(doc d, char* texte){
	d->return_type=texte;
	return d;		
}

doc doc_ajout_param(doc d, char* texte){
	add_to_list(d->params, texte);
	return d;	
}


