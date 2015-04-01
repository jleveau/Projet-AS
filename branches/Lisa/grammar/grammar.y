%{
balise balise_courant;//balise courant (différent pour chaque etat)
balise creer_balise_commentaire();
void ajouter_a_balise(char* attr, char* valeur);
void fermer_balise(char*);

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
    char* valeur
    balise petit_frere;
    balise fils;//une balise max 
};

typdef struct arbre_t* arbre_syntaxique;
struct arbre_t{
    balise root;
    balise 
    balise frere;//liste chainnée
};

%}

%token DEBUT_COMMENTAIRE
%token EOL
									
%%

commentaire: DEBUT_COMMENTAIRE exp FIN_COMMENTAIRE {}
|	DEBUT_COMMENTAIRE_LIGNE exp EOL {balise c=creer_balise_commentaire(); ajouter_a_balise(c, exp);}

external_declaration
	: function_definition {creer_balise($1);}
	| declaration {ajouter_variable($1);}
	;
function_definition
	: declaration_specifiers declarator declaration_list compound_statement {}
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

//ex. int, void etc
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

compound_statement
	: '{' '}'
	| '{'  block_item_list '}'
	;


%%

	
balise creer_balise_commentaire(){
    balise b=malloc(sizeof(b));
    b->nom=malloc(sizeof(b->nom));
    b->nom=div;

    //class commentaire
    attribut att=malloc(sizeof(att));
    att->nom=class;
    att->valeur=malloc(sizeof(att->valeur));
    att->valeur="commantaire";
    
    b->petit_frere=NULL;
    b->fils=NULL;
    b->valeur=NULL;
    return b;
    }
