%{

#include "html.h"
#include "tools.h"

//mieux vaut ne pas utiliser deftype parce que ca arrete la vérification de type et certains erreurs peut être ignorés??



%}
                                               
//Creation des token juste pour lever les erreurs lors de la compilation, à modifier par la suite

/* On devrait commencer par regarder le 'haut' de la grammaire, i.e on commence par l'état start ( translation unit) et on descend dans l'arborescence en appliquant les règles, vu que c'est trop relou de partir du bas, comme en prenant une accolade et essayer de la faire passer dans le parse par exemple. */

%token  KEYWORD TYPE
%union{
 char* nom;
 }
                        
%type   <nom> primary_expression constant enumeration_constant string generic_selection generic_assoc_list generic_association postfix_expression argument_expression_list unary_expression unary_operator cast_expression multiplicative_expression additive_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator expression constant_expression declaration declaration_specifiers init_declarator_list init_declarator storage_class_specifier type_specifier struct_or_union_specifier struct_or_union struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator enum_specifier enumerator_list enumerator atomic_type_specifier type_qualifier function_specifier alignment_specifier declarator direct_declarator pointer type_qualifier_list parameter_type_list parameter_list  parameter_declaration identifier_list type_name abstract_declarator direct_abstract_declarator initializer initializer_list designation designator_list designator static_assert_declaration statement labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition declaration_list shift_expression
                        
%token<nom>IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token<nom>PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token<nom>AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token<nom>SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token<nom>XOR_ASSIGN OR_ASSIGN
%token<nom> TYPEDEF_NAME ENUMERATION_CONSTANT
%token<nom>POINT_VIRGULE ACCO_OUV ACCO_FER VIRGULE DEUXPOINTS EGAL PAR_OUV PAR_FER CRO_OUV CRO_FER POINT ECOMMERCIAL POINT_EXCLA EQUIVALENT MOINS PLUS FOIS DIVISE POUCENT INFERIEUR SUPERIEUR PUISSANCE TILT POINT_INTERRO POURCENT

%token<nom>TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token<nom> CONST RESTRICT VOLATILE ATOMIC
%token<nom> BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token<nom> COMPLEX IMAGINARY 
%token<nom>STRUCT UNION ENUM ELLIPSIS
%token<nom> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO
%token<nom>RETURN BREAK CONTINUE
%token<nom>ALIGNAS ALIGNOF  GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%start translation_unit
%%


/*------------------------------------------------------------------------------------------------->*/


type_specifier
:       VOID {print_balise_span("type_specifier",$1);} 
	| CHAR {print_balise_span("type_specifier",$1);}
	| SHORT {print_balise_span("type_specifier",$1);} 
	| INT {print_balise_span("type_specifier",$1);} 
	| LONG {print_balise_span("type_specifier",$1);} 
	| FLOAT {print_balise_span("type_specifier",$1);} 
	| DOUBLE {print_balise_span("type_specifier",$1);} 
	| SIGNED {print_balise_span("type_specifier",$1);} 
	| UNSIGNED {print_balise_span("type_specifier",$1);} 
	| BOOL {print_balise_span("type_specifier",$1);}
	| COMPLEX {print_balise_span("type_specifier",$1);} 
	| IMAGINARY	 {print_balise_span("type_specifier",$1);}   	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME	 {print_balise_span("type_specifier",$1);} 	/* after it has been defined as such */
	;


type_qualifier
	: CONST {print_balise_span("type_specifier",$1);}
	| RESTRICT {print_balise_span("type_specifier",$1);}
	| VOLATILE {print_balise_span("type_specifier",$1);}
	| ATOMIC {print_balise_span("type_specifier",$1);}
	;








/*<----------------------------------------------------------------------------------------------->*/




primary_expression
	: IDENTIFIER
	| constant
	| string 
	| PAR_OUV expression PAR_FER
	| generic_selection
	;

constant
	: I_CONSTANT		/* includes character_constant */
	| F_CONSTANT
	| ENUMERATION_CONSTANT	/* after it has been defined as such */
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC PAR_OUV assignment_expression VIRGULE generic_assoc_list PAR_FER
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list VIRGULE generic_association
	;

generic_association
	: type_name DEUXPOINTS assignment_expression
	| DEFAULT DEUXPOINTS assignment_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression CRO_OUV expression CRO_FER
	| postfix_expression PAR_OUV PAR_FER
	| postfix_expression PAR_OUV argument_expression_list PAR_FER
	| postfix_expression POINT IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| PAR_OUV type_name PAR_FER ACCO_OUV initializer_list ACCO_FER 
	| PAR_OUV type_name PAR_FER ACCO_OUV initializer_list VIRGULE ACCO_FER 
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list VIRGULE assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF PAR_OUV type_name PAR_FER
	| ALIGNOF PAR_OUV type_name PAR_FER
	;

unary_operator
: ECOMMERCIAL  {fprintf(f_output,"%s",$1);}
	| FOIS {fprintf(f_output,"%s",$1);}
	| PLUS {fprintf(f_output,"%s",$1);}
	| MOINS {fprintf(f_output,"%s",$1);}
	| EQUIVALENT  {fprintf(f_output,"%s",$1);}
	| POINT_EXCLA {fprintf(f_output,"%s",$1);}
	;

cast_expression
	: unary_expression
	| PAR_OUV type_name PAR_FER cast_expression {fprintf(f_output,"%s",$1);fprintf(f_output,"%s",$3);}
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression FOIS cast_expression {fprintf(f_output,"%s",$2);}
	| multiplicative_expression DIVISE cast_expression {fprintf(f_output,"%s",$2);}
	| multiplicative_expression POURCENT cast_expression {fprintf(f_output,"%s",$2);}
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression {fprintf(f_output,"%s",$2);}
	| additive_expression MOINS multiplicative_expression {fprintf(f_output,"%s",$2);}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression  {}
	| shift_expression RIGHT_OP additive_expression {}
	;

relational_expression
	: shift_expression
	| relational_expression INFERIEUR shift_expression {fprintf(f_output,"%s",$2);}
	| relational_expression SUPERIEUR shift_expression {fprintf(f_output,"%s",$2);}
	| relational_expression LE_OP shift_expression {}
	| relational_expression GE_OP shift_expression {}
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression {}
	| equality_expression NE_OP relational_expression {}
	;

and_expression
	: equality_expression
	| and_expression ECOMMERCIAL equality_expression {fprintf(f_output,"%s",$2);}
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression PUISSANCE and_expression {fprintf(f_output,"%s",$2);}
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression TILT exclusive_or_expression {fprintf(f_output,"%s",$2);}
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression {fprintf(f_output,"%s",$2);}
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression {fprintf(f_output,"%s",$2);}
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression POINT_INTERRO expression DEUXPOINTS conditional_expression {fprintf(f_output,"%s",$2);fprintf(f_output,"%s",$4);}
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: EGAL
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression VIRGULE assignment_expression
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers POINT_VIRGULE 
	| declaration_specifiers init_declarator_list POINT_VIRGULE
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	| init_declarator_list VIRGULE init_declarator
	;

init_declarator
	: declarator EGAL initializer
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;



struct_or_union_specifier
: struct_or_union ACCO_OUV  struct_declaration_list ACCO_FER 
	| struct_or_union IDENTIFIER ACCO_OUV struct_declaration_list ACCO_FER
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list POINT_VIRGULE	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list POINT_VIRGULE
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list VIRGULE struct_declarator
	;

struct_declarator
	: DEUXPOINTS constant_expression
	| declarator DEUXPOINTS constant_expression
	| declarator
	;

enum_specifier
	: ENUM ACCO_OUV  enumerator_list ACCO_FER  
	| ENUM ACCO_OUV  enumerator_list VIRGULE ACCO_FER  
	| ENUM IDENTIFIER ACCO_OUV  enumerator_list ACCO_FER  
	| ENUM IDENTIFIER ACCO_OUV  enumerator_list VIRGULE ACCO_FER  
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list VIRGULE enumerator
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant EGAL constant_expression
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC PAR_OUV type_name PAR_FER
	;


function_specifier
	: INLINE 
	| NORETURN
	;

alignment_specifier
	: ALIGNAS PAR_OUV type_name PAR_FER
	| ALIGNAS PAR_OUV constant_expression PAR_FER
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
    :     IDENTIFIER 
	| PAR_OUV declarator PAR_FER
	| direct_declarator CRO_OUV CRO_FER
	| direct_declarator CRO_OUV FOIS CRO_FER
	| direct_declarator CRO_OUV STATIC type_qualifier_list assignment_expression CRO_FER
	| direct_declarator CRO_OUV STATIC assignment_expression CRO_FER
	| direct_declarator CRO_OUV type_qualifier_list FOIS CRO_FER
	| direct_declarator CRO_OUV type_qualifier_list STATIC assignment_expression CRO_FER
	| direct_declarator CRO_OUV type_qualifier_list assignment_expression CRO_FER
	| direct_declarator CRO_OUV type_qualifier_list CRO_FER
	| direct_declarator CRO_OUV assignment_expression CRO_FER
	| direct_declarator PAR_OUV parameter_type_list PAR_FER
	| direct_declarator PAR_OUV PAR_FER
	| direct_declarator PAR_OUV identifier_list PAR_FER
	;

pointer
	: FOIS type_qualifier_list pointer
	| FOIS type_qualifier_list
	| FOIS pointer
	| FOIS
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list VIRGULE ELLIPSIS
	| parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list VIRGULE parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list VIRGULE IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: PAR_OUV abstract_declarator PAR_FER
	| CRO_OUV CRO_FER
	| CRO_OUV FOIS CRO_FER
	| CRO_OUV STATIC type_qualifier_list assignment_expression CRO_FER
	| CRO_OUV STATIC assignment_expression CRO_FER
	| CRO_OUV type_qualifier_list STATIC assignment_expression CRO_FER
	| CRO_OUV type_qualifier_list assignment_expression CRO_FER
	| CRO_OUV type_qualifier_list CRO_FER
	| CRO_OUV assignment_expression CRO_FER
	| direct_abstract_declarator CRO_OUV CRO_FER
	| direct_abstract_declarator CRO_OUV FOIS CRO_FER
	| direct_abstract_declarator CRO_OUV STATIC type_qualifier_list assignment_expression CRO_FER
	| direct_abstract_declarator CRO_OUV STATIC assignment_expression CRO_FER
	| direct_abstract_declarator CRO_OUV type_qualifier_list assignment_expression CRO_FER
	| direct_abstract_declarator CRO_OUV type_qualifier_list STATIC assignment_expression CRO_FER
	| direct_abstract_declarator CRO_OUV type_qualifier_list CRO_FER
	| direct_abstract_declarator CRO_OUV assignment_expression CRO_FER
	| PAR_OUV PAR_FER
	| PAR_OUV parameter_type_list PAR_FER
	| direct_abstract_declarator PAR_OUV PAR_FER
	| direct_abstract_declarator PAR_OUV parameter_type_list PAR_FER
	;

initializer
	: ACCO_OUV  initializer_list ACCO_FER 
	| ACCO_OUV  initializer_list VIRGULE ACCO_FER  
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list VIRGULE designation initializer
	| initializer_list VIRGULE initializer
	;

designation
	: designator_list EGAL
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: CRO_OUV constant_expression CRO_FER
	| POINT IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT PAR_OUV constant_expression VIRGULE STRING_LITERAL PAR_FER POINT_VIRGULE
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER DEUXPOINTS statement
	| CASE constant_expression DEUXPOINTS statement
	| DEFAULT DEUXPOINTS statement
	;

compound_statement
	: ACCO_OUV  ACCO_FER  
	| ACCO_OUV     block_item_list ACCO_FER  
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: POINT_VIRGULE
	| expression POINT_VIRGULE
	;

selection_statement
: IF PAR_OUV expression PAR_FER statement ELSE statement {print_balise_span("type_specifier",$1);fprintf(f_output,"%s",$2);}
|       IF PAR_OUV expression PAR_FER statement {print_balise_span("type_specifier",$1);fprintf(f_output,"%s",$2);fprintf(f_output,"%s",$4);}
        |       SWITCH PAR_OUV expression PAR_FER statement 
	;

iteration_statement
	: WHILE PAR_OUV expression PAR_FER statement
	| DO statement WHILE PAR_OUV expression PAR_FER POINT_VIRGULE
	| FOR PAR_OUV expression_statement expression_statement PAR_FER statement
	| FOR PAR_OUV expression_statement expression_statement expression PAR_FER statement
	| FOR PAR_OUV declaration expression_statement PAR_FER statement
	| FOR PAR_OUV declaration expression_statement expression PAR_FER statement
	;

jump_statement
: GOTO IDENTIFIER POINT_VIRGULE
        |       CONTINUE  POINT_VIRGULE
        |       BREAK POINT_VIRGULE
        |       RETURN POINT_VIRGULE
        |       RETURN expression POINT_VIRGULE
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition /* Pour declarer une fonction */
	| declaration /* Toutes les autres déclarations */
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 } 
