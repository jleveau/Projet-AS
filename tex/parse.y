/*
START:	        PACKAGES BEG'{' DOCUMENT '}' CONTENU  END'{' DOCUMENT '}'   {/*PACKAGES pas neccésaire; print balise ouvrant; print balise fermant;  */}
	;

PACKAGES:  PACKAGES PACKAGES {/*nous n'ont pas besoin de le traiter*/}
	|	
	;

BEG:	NOM_COMMANDE PARAMS
	;

CONTENU: BEG TEXT CONTENU;
	|
	;

STYLE_OPTIONS: STYLE_OPTIONS STYLE_OPTIONS   {/*ex.\color{red}   */;}
	|  BOLD '{'TEXT'}' {fprintf(f_output, "<\\em>");}
	|  ITALIC{fprintf(f_output, "<i>");}'{'TEXT'}' {fprintf(f_output, "<\\i>");}
	|  UNDERLINE PARAMS
	|  COLOUR COLOUR_PARAMS '{' TEXT '}'  {/*ex.\color{red}   */;}
	|	
	;

BOLD : ;
ITALIC :;
UNDERLINE :;
COLOUR :;

COLOUR_PARAMS:		 
	;

 TEXT: TEXT STRING {fprintf(f_output, $1, $2);}
	| TEXT OPTIONS 
	|
	;


PARAMS:		 '{' PARAM_VALUE '}' {fprintf(f_output, $2);} 
		;
*/












 /*<COMMANDE>document {return DOCUMENT;} 
<COMMANDE>begin {return BEG;}
<COMMANDE>end {return END;} 
<COMMANDE>texttt {return BOLD;}
<COMMANDE>color {return COLOUR;} 
<COMMANDE>ref {return REF;} 
<COMMANDE>label {return LABEL;} 
 
<NOM_COMMANDE>{L}{A}* {yylval=strdup(yytext); return NOM_COMMANDE;}	
*/
