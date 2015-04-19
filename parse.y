%{
#ifndef YYSTYPE
# define YYSTYPE char*
#endif	
	
#include <stdio.h>
#include "libs/tools.h"

void yyerror(const char *);  /* prints grammar violation message */


%}

%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL
%token  SEMI_COLON OPENING_BRACE CLOSING_BRACE COLON EQUAL OPENING_PARENTHESIS CLOSING_PARENTHESIS  LEFT_BRACKET RIGHT_BRACKET TILD AMPERSAND EXCLAMATION_POINT
%token  DOT MINUS PLUS STAR SLASH PERCENT INFERIOR SUPERIOR EXPONENT PIPE INTERROGATION_POINT TWO_DOT



%start translation_unit


%%

primary_expression
	: IDENTIFIER {$$=string_concat(1,$1);}
	| constant {$$=string_concat(1,$1);}
	| string {$$=string_concat(1,$1);}
	| OPENING_PARENTHESIS expression CLOSING_PARENTHESIS {$$=string_concat(3,$1,$2,$3);}
	| generic_selection {$$=string_concat(1,$1);}
	;

constant
	: I_CONSTANT {$$=string_concat(1,$1);}		/* includes character_constant */
	| F_CONSTANT {$$=string_concat(1,$1);}
	| ENUMERATION_CONSTANT {$$=string_concat(1,$1);}	/* after it has been defined as such */
	;

enumeration_constant 		/* before it has been defined as such */
	: IDENTIFIER {$$=string_concat(1,$1);}
	;

string
	: STRING_LITERAL {$$=string_concat(1,$1);}
	| FUNC_NAME {$$=string_concat(1,$1);}
	;

generic_selection
	: GENERIC OPENING_PARENTHESIS assignment_expression COLON generic_assoc_list CLOSING_PARENTHESIS {$$=string_concat(6,$1,$2,$3,$4,$5,$6);}
		;

generic_assoc_list
	: generic_association {$$=string_concat(1,$1);}
	| generic_assoc_list COLON generic_association {$$=string_concat(3,$1,$2,$3);}
	;

generic_association
	: type_name TWO_DOT assignment_expression {$$=string_concat(3,$1,$2,$3);}
	| DEFAULT TWO_DOT assignment_expression {$$=string_concat(3,$1,$2,$3);}
	;

postfix_expression
	: primary_expression {$$=string_concat(1,$1);}
	| postfix_expression LEFT_BRACKET expression RIGHT_BRACKET {$$=string_concat(4,$1,$2,$3,$4);}
	| postfix_expression OPENING_PARENTHESIS CLOSING_PARENTHESIS {$$=string_concat(3,$1,$2,$3);}////Appel de fonction 
	| postfix_expression OPENING_PARENTHESIS argument_expression_list CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);} ////Appel de fonction
	| postfix_expression DOT IDENTIFIER {$$=string_concat(3,$1,$2,$3);}
	| postfix_expression PTR_OP IDENTIFIER {$$=string_concat(3,$1,$2,$3);}
	| postfix_expression INC_OP {$$=string_concat(2,$1,$2);}
	| postfix_expression DEC_OP {$$=string_concat(2,$1,$2);}
	| OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS OPENING_BRACE  initializer_list CLOSING_BRACE {$$=string_concat(8,$1,$2,$3,print_debut_balise_block(),$4,$5,$6,print_fin_balise_block());}
	| OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS OPENING_BRACE  initializer_list COLON CLOSING_BRACE {$$=string_concat(9,$1,$2,$3,print_debut_balise_block(),$4,$5,$6,$7,print_fin_balise_block());}
	;

argument_expression_list
	: assignment_expression {$$=string_concat(1,$1);}////// Parametre 
	| argument_expression_list COLON assignment_expression {$$=string_concat(3,$1,$2,$3);}
	;

unary_expression
	: postfix_expression {$$=string_concat(1,$1);}
	| INC_OP unary_expression {$$=string_concat(2,$1,$2);}
	| DEC_OP unary_expression {$$=string_concat(2,$1,$2);}
	| unary_operator cast_expression {$$=string_concat(2,$1,$2);}
	| SIZEOF unary_expression {$$=string_concat(2,$1,$2);}
	| SIZEOF OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);}
	| ALIGNOF OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);}
	;

unary_operator
	: AMPERSAND {$$=string_concat(1,$1);}
	| STAR {$$=string_concat(1,$1);}
	| PLUS {$$=string_concat(1,$1);}
	| MINUS {$$=string_concat(1,$1);}
	| TILD {$$=string_concat(1,$1);}
	| EXCLAMATION_POINT {$$=string_concat(1,$1);}
	;

cast_expression
	: unary_expression {$$=string_concat(1,$1);}
	| OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS cast_expression {$$=string_concat(4,$1,$2,$3,$4);}
	;

multiplicative_expression
	: cast_expression {$$=string_concat(1,$1);}
	| multiplicative_expression STAR cast_expression {$$=string_concat(3,$1,$2,$3);}
	| multiplicative_expression SLASH cast_expression {$$=string_concat(3,$1,$2,$3);}
	| multiplicative_expression PERCENT cast_expression {$$=string_concat(3,$1,$2,$3);}
	;

additive_expression
	: multiplicative_expression {$$=string_concat(1,$1);}
	| additive_expression PLUS multiplicative_expression {$$=string_concat(3,$1,$2,$3);}
	| additive_expression MINUS multiplicative_expression {$$=string_concat(3,$1,$2,$3);}
	;

shift_expression
	: additive_expression {$$=string_concat(1,$1);}
	| shift_expression LEFT_OP additive_expression {$$=string_concat(3,$1,$2,$3);}
	| shift_expression RIGHT_OP additive_expression {$$=string_concat(3,$1,$2,$3);}
	;

relational_expression
	: shift_expression {$$=string_concat(1,$1);}
	| relational_expression INFERIOR shift_expression {$$=string_concat(3,$1,$2,$3);}
	| relational_expression SUPERIOR shift_expression {$$=string_concat(3,$1,$2,$3);}
	| relational_expression LE_OP shift_expression {$$=string_concat(3,$1,$2,$3);}
	| relational_expression GE_OP shift_expression {$$=string_concat(3,$1,$2,$3);}
	;

equality_expression
	: relational_expression {$$=string_concat(1,$1);}
	| equality_expression EQ_OP relational_expression {$$=string_concat(3,$1,$2,$3);}
	| equality_expression NE_OP relational_expression {$$=string_concat(3,$1,$2,$3);}
	;

and_expression
	: equality_expression {$$=string_concat(1,$1);}
	| and_expression AMPERSAND equality_expression {$$=string_concat(3,$1,$2,$3);}
	;

exclusive_or_expression
	: and_expression {$$=string_concat(1,$1);}
	| exclusive_or_expression EXPONENT and_expression {$$=string_concat(3,$1,$2,$3);}
	;

inclusive_or_expression
	: exclusive_or_expression {$$=string_concat(1,$1);}
	| inclusive_or_expression PIPE exclusive_or_expression {$$=string_concat(3,$1,$2,$3);}
	;

logical_and_expression
	: inclusive_or_expression {$$=string_concat(1,$1);}
	| logical_and_expression AND_OP inclusive_or_expression {$$=string_concat(3,$1,$2,$3);}
	;

logical_or_expression
	: logical_and_expression {$$=string_concat(1,$1);}
	| logical_or_expression OR_OP logical_and_expression {$$=string_concat(3,$1,$2,$3);}
	;

conditional_expression
	: logical_or_expression {$$=string_concat(1,$1);}
	| logical_or_expression INTERROGATION_POINT expression TWO_DOT conditional_expression {$$=string_concat(5,$1,$2,$3,$4,$5);}
	;

assignment_expression
	: conditional_expression {$$=string_concat(1,$1);}
	| unary_expression assignment_operator assignment_expression {$$=string_concat(3,$1,$2,$3);}
	;

assignment_operator
	: EQUAL {$$=string_concat(1,$1);}
	| MUL_ASSIGN {$$=string_concat(1,$1);}
	| DIV_ASSIGN {$$=string_concat(1,$1);}
	| MOD_ASSIGN {$$=string_concat(1,$1);}
	| ADD_ASSIGN {$$=string_concat(1,$1);}
	| SUB_ASSIGN {$$=string_concat(1,$1);}
	| LEFT_ASSIGN {$$=string_concat(1,$1);}
	| RIGHT_ASSIGN {$$=string_concat(1,$1);}
	| AND_ASSIGN {$$=string_concat(1,$1);}
	| XOR_ASSIGN {$$=string_concat(1,$1);}
	| OR_ASSIGN {$$=string_concat(1,$1);}
	;

expression
	: assignment_expression {$$=string_concat(1,$1);}
	| expression COLON assignment_expression {$$=string_concat(3,$1,$2,$3);}
	;

constant_expression
	: conditional_expression {$$=string_concat(1,$1);}	/* with constraints */
	;

declaration
	: declaration_specifiers SEMI_COLON {$$=string_concat(2,$1,$2);  /*variables*/}
	| declaration_specifiers init_declarator_list SEMI_COLON {create_variable(strdup($2),strdup($1),strdup("description"));$$=string_concat(3,$1,print_balise_variable($2),$3); }
	| static_assert_declaration {$$=string_concat(1,$1);}
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers {$$=string_concat(2,$1,$2);}{/*ajouter_typedef($2);*/}
	| storage_class_specifier {$$=string_concat(1,$1);}
	| type_specifier declaration_specifiers {$$=string_concat(2,$1,$2);}
	| type_specifier {$$=string_concat(1,$1);}
	| type_qualifier declaration_specifiers {$$=string_concat(2,$1,$2);}
	| type_qualifier {$$=string_concat(1,$1);}
	| function_specifier declaration_specifiers {$$=string_concat(2,$1,$2);}
	| function_specifier {$$=string_concat(1,$1);}
	| alignment_specifier declaration_specifiers {$$=string_concat(2,$1,$2);}
	| alignment_specifier {$$=string_concat(1,$1);}
	;

init_declarator_list
	: init_declarator  {$$=string_concat(1,$1);}
	| init_declarator_list COLON init_declarator  {$$=string_concat(3,$1,$2,$3);}
	;

init_declarator
	: declarator EQUAL initializer {$$=string_concat(3,$1,$2,$3);}
	| declarator {$$=string_concat(1,$1);} 
	;

storage_class_specifier
	: TYPEDEF  {$$=string_concat(1,$1);} /* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN {$$=string_concat(1,$1);}
	| STATIC {$$=string_concat(1,$1);}
	| THREAD_LOCAL {$$=string_concat(1,$1);}
	| AUTO {$$=string_concat(1,$1);}
	| REGISTER {$$=string_concat(1,$1);}
	;

type_specifier
	: VOID {$$=string_concat(1,$1);}
	| CHAR {$$=string_concat(1,$1);}
	| SHORT {$$=string_concat(1,$1);}
	| INT {$$=string_concat(1,$1);}
	| LONG {$$=string_concat(1,$1);}
	| FLOAT {$$=string_concat(1,$1);}
	| DOUBLE {$$=string_concat(1,$1);}
	| SIGNED {$$=string_concat(1,$1);}
	| UNSIGNED {$$=string_concat(1,$1);}
	| BOOL {$$=string_concat(1,$1);}
	| COMPLEX {$$=string_concat(1,$1);}
	| IMAGINARY	{$$=string_concat(1,$1);}  	/* non-mandated extension */
	| atomic_type_specifier {$$=string_concat(1,$1);}
	| struct_or_union_specifier {$$=string_concat(1,$1);}
	| enum_specifier {$$=string_concat(1,$1);}
	| TYPEDEF_NAME {$$=string_concat(1,$1);}		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union OPENING_BRACE  struct_declaration_list CLOSING_BRACE  {$$=string_concat(6,$1,print_debut_balise_block(),$2,$3,$4,print_fin_balise_block());}
	| struct_or_union IDENTIFIER OPENING_BRACE  struct_declaration_list CLOSING_BRACE {$$=string_concat(7,$1,$2,print_debut_balise_block(),$3,$4,$5,print_fin_balise_block());}
	| struct_or_union IDENTIFIER {$$=string_concat(2,$1,$2);}
	;

struct_or_union
	: STRUCT {$$=string_concat(1,$1);}
	| UNION {$$=string_concat(1,$1);}
	;

struct_declaration_list
	: struct_declaration {$$=string_concat(1,$1);}
	| struct_declaration_list struct_declaration {$$=string_concat(2,$1,$2);}
	;

struct_declaration
	: specifier_qualifier_list SEMI_COLON	{$$=string_concat(2,$1,$2);}/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list SEMI_COLON {$$=string_concat(3,$1,$2,$3);}
	| static_assert_declaration {$$=string_concat(1,$1);}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {$$=string_concat(2,$1,$2);}
	| type_specifier {$$=string_concat(1,$1);}
	| type_qualifier specifier_qualifier_list {$$=string_concat(2,$1,$2);}
	| type_qualifier {$$=string_concat(1,$1);}
	;

struct_declarator_list
	: struct_declarator {$$=string_concat(1,$1);}
	| struct_declarator_list COLON struct_declarator {$$=string_concat(3,$1,$2,$3);}
	;

struct_declarator
	: TWO_DOT constant_expression {$$=string_concat(2,$1,$2);}
	| declarator TWO_DOT constant_expression {$$=string_concat(3,$1,$2,$3);}
	| declarator {$$=string_concat(1,$1);}
	;

enum_specifier
	: ENUM OPENING_BRACE enumerator_list CLOSING_BRACE {$$=string_concat(6,$1,print_debut_balise_block(),$2,$3,$4,print_fin_balise_block());}
	| ENUM OPENING_BRACE enumerator_list COLON CLOSING_BRACE   {$$=string_concat(7,$1,print_debut_balise_block(),$2,$3,$4,$5,print_fin_balise_block());}
	| ENUM IDENTIFIER OPENING_BRACE enumerator_list CLOSING_BRACE {$$=string_concat(7,$1,$2,print_debut_balise_block(),$3,$4,$5,print_fin_balise_block());} 
	| ENUM IDENTIFIER OPENING_BRACE  enumerator_list COLON CLOSING_BRACE {$$=string_concat(8,$1,$2,print_debut_balise_block(),$3,$4,$5,$6,print_fin_balise_block());}
	| ENUM IDENTIFIER {$$=string_concat(2,$1,$2);}
	;

enumerator_list
	: enumerator {$$=string_concat(1,$1);}
	| enumerator_list COLON enumerator {$$=string_concat(3,$1,$2,$3);}
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant EQUAL constant_expression {$$=string_concat(3,$1,$2,$3);}
	| enumeration_constant {$$=string_concat(1,$1);}
	;

atomic_type_specifier
	: ATOMIC OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);} 
	;

type_qualifier
	: CONST {$$=string_concat(1,$1);}
	| RESTRICT {$$=string_concat(1,$1);}
	| VOLATILE {$$=string_concat(1,$1);}
	| ATOMIC {$$=string_concat(1,$1);}
	;

function_specifier
	: INLINE {$$=string_concat(1,$1);}
	| NORETURN {$$=string_concat(1,$1);}
	;

alignment_specifier
	: ALIGNAS OPENING_PARENTHESIS type_name CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);} 
	| ALIGNAS OPENING_PARENTHESIS constant_expression CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);} 
	;

declarator
	: pointer direct_declarator{$$=string_concat(2,$1,$2);}
	| direct_declarator {$$=string_concat(1,$1);}
	; 

direct_declarator
	: IDENTIFIER {$$=string_concat(1,$1);}
	| OPENING_PARENTHESIS declarator CLOSING_PARENTHESIS {$$=string_concat(3,$1,$2,$3);}
	| direct_declarator LEFT_BRACKET RIGHT_BRACKET  {$$=string_concat(3,$1,$2,$3);}
	| direct_declarator LEFT_BRACKET STAR RIGHT_BRACKET {$$=string_concat(4,$1,$2,$3,$4);} 
	| direct_declarator LEFT_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_BRACKET {$$=string_concat(6,$1,$2,$3,$4,$5,$6);} 
	| direct_declarator LEFT_BRACKET STATIC assignment_expression RIGHT_BRACKET {$$=string_concat(5,$1,$2,$3,$4,$5);} 
	| direct_declarator LEFT_BRACKET type_qualifier_list STAR RIGHT_BRACKET {$$=string_concat(5,$1,$2,$3,$4,$5);} 
	| direct_declarator LEFT_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_BRACKET {$$=string_concat(6,$1,$2,$3,$4,$5,$6);} 
	| direct_declarator LEFT_BRACKET type_qualifier_list assignment_expression RIGHT_BRACKET {$$=string_concat(5,$1,$2,$3,$4,$5);} 
	| direct_declarator LEFT_BRACKET type_qualifier_list RIGHT_BRACKET {$$=string_concat(4,$1,$2,$3,$4);} 
	| direct_declarator LEFT_BRACKET assignment_expression RIGHT_BRACKET {$$=string_concat(4,$1,$2,$3,$4);} 
	| direct_declarator OPENING_PARENTHESIS parameter_type_list CLOSING_PARENTHESIS {$$=string_concat(4,print_balise_fonction($1),$2,$3,$4);} 
	| direct_declarator OPENING_PARENTHESIS CLOSING_PARENTHESIS {$$=string_concat(3,print_balise_fonction($1),$2,$3);}
	| direct_declarator OPENING_PARENTHESIS identifier_list CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);} 
	;

pointer
	: STAR type_qualifier_list pointer {$$=string_concat(3,$1,$2,$3);}
	| STAR type_qualifier_list {$$=string_concat(2,$1,$2);}
	| STAR pointer {$$=string_concat(2,$1,$2);}
	| STAR {$$=string_concat(1,$1);}
	;

type_qualifier_list
	: type_qualifier {$$=string_concat(1,$1);}
	| type_qualifier_list type_qualifier {$$=string_concat(2,$1,$2);}
	;


parameter_type_list
	: parameter_list COLON ELLIPSIS {$$=string_concat(3,$1,$2,$3);}
	| parameter_list  {$$=string_concat(1,$1);}
	;

parameter_list
	: parameter_declaration {$$=string_concat(1,$1);}
	| parameter_list COLON parameter_declaration {$$=string_concat(3,$1,$2,$3);}
	;

parameter_declaration
	: declaration_specifiers declarator {add_parameter(strdup($2),strdup($1),strdup("descri")); $$=string_concat(2,$1,print_balise_parameter($2)); }
	| declaration_specifiers abstract_declarator {$$=string_concat(2,$1,$2);}
	| declaration_specifiers {$$=string_concat(1,$1);}
	;

identifier_list
	: IDENTIFIER {$$=string_concat(1,$1); }
	| identifier_list COLON IDENTIFIER {$$=string_concat(3,$1,$2,$3);}
	;

type_name
	: specifier_qualifier_list abstract_declarator {$$=string_concat(2,$1,$2);}
	| specifier_qualifier_list {$$=string_concat(1,$1);}
	;

abstract_declarator
	: pointer direct_abstract_declarator {$$=string_concat(2,$1,$2);}
	| pointer {$$=string_concat(1,$1);}
	| direct_abstract_declarator  {$$=string_concat(1,$1);}
	;

direct_abstract_declarator
	: OPENING_PARENTHESIS abstract_declarator CLOSING_PARENTHESIS {$$=string_concat(3,$1,$2,$3);}
	| LEFT_BRACKET RIGHT_BRACKET {$$=string_concat(2,$1,$2);}
	| LEFT_BRACKET STAR RIGHT_BRACKET {$$=string_concat(3,$1,$2,$3);}
	| LEFT_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_BRACKET {$$=string_concat(5,$1,$2,$3,$4,$5);} 
	| LEFT_BRACKET STATIC assignment_expression RIGHT_BRACKET {$$=string_concat(3,$1,$2,$3);}
	| LEFT_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_BRACKET  {$$=string_concat(5,$1,$2,$3,$4,$5);}  
	| LEFT_BRACKET type_qualifier_list assignment_expression RIGHT_BRACKET {$$=string_concat(4,$1,$2,$3,$4);} 
	| LEFT_BRACKET type_qualifier_list RIGHT_BRACKET {$$=string_concat(3,$1,$2,$3);}
	| LEFT_BRACKET assignment_expression RIGHT_BRACKET {$$=string_concat(3,$1,$2,$3);}
	| direct_abstract_declarator LEFT_BRACKET RIGHT_BRACKET {$$=string_concat(3,$1,$2,$3);}
	| direct_abstract_declarator LEFT_BRACKET STAR RIGHT_BRACKET  {$$=string_concat(4,$1,$2,$3,$4);} 
	| direct_abstract_declarator LEFT_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_BRACKET  {$$=string_concat(6,$1,$2,$3,$4,$5,$6);} 
	| direct_abstract_declarator LEFT_BRACKET STATIC assignment_expression RIGHT_BRACKET  {$$=string_concat(5,$1,$2,$3,$4,$5);} 
	| direct_abstract_declarator LEFT_BRACKET type_qualifier_list assignment_expression RIGHT_BRACKET  {$$=string_concat(5,$1,$2,$3,$4,$5);} 
	| direct_abstract_declarator LEFT_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_BRACKET  {$$=string_concat(6,$1,$2,$3,$4,$5,$6);} 
	| direct_abstract_declarator LEFT_BRACKET type_qualifier_list RIGHT_BRACKET  {$$=string_concat(4,$1,$2,$3,$4);} 
	| direct_abstract_declarator LEFT_BRACKET assignment_expression RIGHT_BRACKET {$$=string_concat(4,$1,$2,$3,$4);}
	| OPENING_PARENTHESIS CLOSING_PARENTHESIS {$$=string_concat(2,$1,$2);}
	| OPENING_PARENTHESIS parameter_type_list CLOSING_PARENTHESIS {$$=string_concat(3,$1,$2,$3);}
	| direct_abstract_declarator OPENING_PARENTHESIS CLOSING_PARENTHESIS {$$=string_concat(3,$1,$2,$3);}
	| direct_abstract_declarator OPENING_PARENTHESIS parameter_type_list CLOSING_PARENTHESIS {$$=string_concat(4,$1,$2,$3,$4);}
	;

initializer
	: OPENING_BRACE initializer_list CLOSING_BRACE {$$=string_concat(5,print_debut_balise_block(),$1,$2,$3,print_fin_balise_block());}
	| OPENING_BRACE initializer_list COLON CLOSING_BRACE {$$=string_concat(6,print_debut_balise_block(),$1,$2,$3,$4,print_fin_balise_block());}
	| assignment_expression {$$=string_concat(1,$1);}
	;

initializer_list
	: designation initializer {$$=string_concat(2,$1,$2);}
	| initializer {$$=string_concat(1,$1);}
	| initializer_list COLON designation initializer {$$=string_concat(3,$1,$2,$3);}
	| initializer_list COLON initializer {$$=string_concat(3,$1,$2,$3);}
	;

designation
	: designator_list EQUAL {$$=string_concat(2,$1,$2);}
	;

designator_list 
	: designator {$$=string_concat(1,$1);}
	| designator_list designator {$$=string_concat(2,$1,$2);}
	;

designator
	: LEFT_BRACKET constant_expression RIGHT_BRACKET {$$=string_concat(3,$1,$2,$3);}
	| DOT IDENTIFIER {$$=string_concat(2,$1,$2);}
	;

static_assert_declaration
	: STATIC_ASSERT OPENING_PARENTHESIS constant_expression COLON STRING_LITERAL CLOSING_PARENTHESIS SEMI_COLON {$$=string_concat(7,$1,$2,$3,$4,$5,$6,$7);}
	;

statement
	: labeled_statement {$$=string_concat(1,$1);}
	| compound_statement  {$$=string_concat(1,$1);}
	| expression_statement {$$=string_concat(1,$1);}
	| selection_statement {$$=string_concat(1,$1);}
	| iteration_statement {$$=string_concat(1,$1);}
	| jump_statement {$$=string_concat(1,$1);}
	;

labeled_statement
	: IDENTIFIER TWO_DOT statement {$$=string_concat(3,$1,$2,$3);}
	| CASE constant_expression TWO_DOT statement {$$=string_concat(4,$1,$2,$3,$4);}
	| DEFAULT TWO_DOT statement {$$=string_concat(3,$1,$2,$3);}
	;

compound_statement
	: OPENING_BRACE  CLOSING_BRACE {$$=string_concat(4,print_debut_balise_block(),$1,$2,print_fin_balise_block());}
	| OPENING_BRACE block_item_list CLOSING_BRACE {$$=string_concat(5,print_debut_balise_block(),$1,$2,$3,print_fin_balise_block());}
	;

block_item_list
	: block_item  {$$=string_concat(1,$1);}
	| block_item_list block_item {$$=string_concat(2,$1,$2);}
	;

block_item
	: declaration {$$=string_concat(1,$1);}
	| statement {$$=string_concat(1,$1);}
	;

expression_statement
	: SEMI_COLON {$$=string_concat(1,$1);}
	| expression SEMI_COLON {$$=string_concat(2,$1,$2);}
	;

selection_statement
	: IF OPENING_PARENTHESIS expression CLOSING_PARENTHESIS statement ELSE statement {$$=string_concat(7,$1,$2,$3,$4,$5,$6,$7);} 
	| IF OPENING_PARENTHESIS expression CLOSING_PARENTHESIS statement {$$=string_concat(5,$1,$2,$3,$4,$5);}
	| SWITCH OPENING_PARENTHESIS expression CLOSING_PARENTHESIS statement {$$=string_concat(5,$1,$2,$3,$4,$5);}
	;

iteration_statement
	: WHILE OPENING_PARENTHESIS expression CLOSING_PARENTHESIS statement {$$=string_concat(5,$1,$2,$3,$4,$5);}
	| DO statement WHILE OPENING_PARENTHESIS expression CLOSING_PARENTHESIS SEMI_COLON {$$=string_concat(7,$1,$2,$3,$4,$5,$6,$7);}
	| FOR OPENING_PARENTHESIS expression_statement expression_statement CLOSING_PARENTHESIS statement {$$=string_concat(6,$1,$2,$3,$4,$5,$6);}
	| FOR OPENING_PARENTHESIS expression_statement expression_statement expression CLOSING_PARENTHESIS statement {$$=string_concat(7,$1,$2,$3,$4,$5,$6,$7);}
	| FOR OPENING_PARENTHESIS declaration expression_statement CLOSING_PARENTHESIS statement {$$=string_concat(6,$1,$2,$3,$4,$5,$6);}
	| FOR OPENING_PARENTHESIS declaration expression_statement expression CLOSING_PARENTHESIS statement {$$=string_concat(7,$1,$2,$3,$4,$5,$6,$7);}
	;

jump_statement
	: GOTO IDENTIFIER SEMI_COLON {$$=string_concat(3,$1,$2,$3);}
	| CONTINUE SEMI_COLON {$$=string_concat(2,$1,$2);}
	| BREAK SEMI_COLON {$$=string_concat(2,$1,$2);}
	| RETURN SEMI_COLON {$$=string_concat(2,$1,$2);}
	| RETURN expression SEMI_COLON {$$=string_concat(3,$1,$2,$3);}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration  
	;

external_declaration
	:  function_definition {$$=string_concat(1,$1);push_to_html($$); free($$);}
	|  declaration {$$=string_concat(1,$1);push_to_html($$); free($$);}
	;

function_definition
	: declaration_specifiers  declarator declaration_list compound_statement {$$=string_concat(4,$1,$2,$3,$4);}
	| declaration_specifiers  declarator compound_statement {name_function(strdup($1),strdup($2),strdup("description"));$$=string_concat(3,$1,$2,$3); }
	;

declaration_list
	: declaration {$$=string_concat(1,$1);}
	| declaration_list declaration {$$=string_concat(2,$1,$2);}
	;

%%
void yyerror(const char *s){
	fprintf(stderr,"syntaxe error %s",s);
}
 
