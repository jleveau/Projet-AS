%{
#include <stdio.h>
#include "y.tab.h"

/* structure pour les balises*/
typdef struct attribut_t* attribut;
struct attribut_t{
    char* nom;
    attribut_t next;
};

typdef struct balise_t* balise;
struct balise_t{
    char*nom;
    attribut attr;
    attribut last;
    };

extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

balise balise_courant;//balise courant (différent pour chaque etat)
balise creer_balise(char*);
void ajouter_a_balise(char* attr, char* valeur);
void fermer_balise(char*);


#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);


/*pour la pile d'etats*/
void push(int state);
void pop();

static int check_type(void);
%}

/*les etats*/
%x commentaire
%s balise			
%x string //pour les strings dans les balises pour pouvoir faire "''" etc. Va être géré dans le bison
						
%%

"/*"                                    { comment();  }
"//".*                                  { /* consume //-comment */ }

";"					{ return ';'; }
("{"|"<%")				{ return '{'; }
("}"|"%>")				{ return '}'; }
","					{ return ','; }
":"					{ return ':'; }
"="					{ return '='; }
"("					{ return '('; }
")"					{ return ')'; }
("["|"<:")				{ return '['; }
("]"|":>")				{ return ']'; }
"."					{ return '.'; }
"&"					{ return '&'; }
"!"					{ return '!'; }
"~"					{ return '~'; }
"-"					{ return '-'; }
"+"					{ return '+'; }
"*"					{ return '*'; }
"/"					{ return '/'; }
"%"					{ return '%'; }
"<"					{ return '<'; }
">"					{ return '>'; }
"^"					{ return '^'; }
"|"					{ return '|'; }
"?"					{ return '?'; }

%%

/*fonction qui est appelé à la fin du fichier;
peut être utilisé eventuellement pour reinitialiser les variables etc avant de parcourir un nouveau fichier; 
*/
int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}


/*balises*/
balise creer_balise(char* nom){
    balise_courant->nom=malloc(sizeof(balise_courant->nom));
    balise_courant->nom=nom;
    balise_courant->next=NULL;
    balise_courant->last=NULL;
}

void ajouter_a_balise(char* attr, char* valeur){
    attribut attr=malloc(sizeof(attr));
    attr->nom=malloc(sizeof(attr->nom));
    attr->next=NULL;
    if(balise_courant->attr==NULL){
	balise_courant->attr=attr;
	balise_courant->last=attr;
	}
    else{
	balise_courant->last->next=attr;
	balise_courant->last=attr;
    }
}

void fermer_balise(){
    attribut tmp=balise_courant->attr;
    while(tmp!=NULL){
	attribut tmp2=tmp;
	tmp=balise_courant->attr->next;
	free(tmp2->nom);
	free(tmp2);
    }
    free(balise_courant->nom);
    free(balise_courant);
}


//quand on est dedans un commentaire style /* */
static void comment(void)
{
    balise b =creer_balise("div");
    ajouter_a_balise("class", "commentaire");
    
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("unterminated comment");
}

void push(int state){
    yy_push_state(state);
}

void pop(){
    yy_pop_state();
}
