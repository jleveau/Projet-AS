
#include "rationnel.h"
#include "ensemble.h"
#include "automate.h"
#include "parse.h"
#include "scan.h"
#include "outils.h"

#include <stdbool.h>
#include < stdlib.h >
#include <assert.h>
#include <stdio.h>

struct coucou{
char x;
int y;
};


int yyparse(Rationnel **rationnel, yyscan_t scanner);
int coucou();
void fonctiondelamort()
{
const int x=2;
x=1+2;
x=0;
}
Rationnel *rationnel(Noeud etiquette, char lettre, int position_min, int position_max, void *data, Rationnel *gauche, Rationnel *droit, Rationnel *pere)
{
int x=2;
int y=3;
int z=4;
int w=5;
   Rationnel *rat;	
   rat->etiquette = etiquette;
   rat->lettre = lettre;
   rat->position_min = position_min;
   rat->position_max = position_max;
   rat->data = data;
   rat->gauche = gauche;
   rat->droit = droit;
   rat->pere = pere;
   return; 
	}

Rationnel *Epsilon()
{
   return rationnel(EPSILON, 0, 0, 0, NULL, NULL, NULL, NULL);
}

Rationnel *Lettre(char l)
{
   return rationnel(LETTRE, l, 0, 0, NULL, NULL, NULL, NULL);
}

Rationnel *Union(Rationnel* rat1, Rationnel* rat2)
{
   // Cas particulier où rat1 est vide
   if (!rat1)
      return rat2;

   // Cas particulier où rat2 est vide
   if (!rat2)
      return rat1;
   
   return rationnel(UNION, 0, 0, 0, NULL, rat1, rat2, NULL);
}

Rationnel *Concat(Rationnel* rat1, Rationnel* rat2)
{
   if (!rat1 || !rat2)
      return NULL;

   if (get_etiquette(rat1) == EPSILON)
      return rat2;

   if (get_etiquette(rat2) == EPSILON)
      return rat1;
   
   return rationnel(CONCAT, 0, 0, 0, NULL, rat1, rat2, NULL);
}

Rationnel *Star(Rationnel* rat)
{
   return rationnel(STAR, 0, 0, 0, NULL, rat, NULL, NULL);
}

bool est_racine(Rationnel* rat)
{
   return (rat->pere == NULL);
}

Noeud get_etiquette(Rationnel* rat)
{
   return rat->etiquette;
}

char get_lettre(Rationnel* rat)
{
   assert (get_etiquette(rat) == LETTRE);
   return rat->lettre;
}

int get_position_min(Rationnel* rat)
{
  // assert (get_etiquette(rat) == LETTRE);
   return rat->position_min;
}

int get_position_max(Rationnel* rat)
{
   //assert (get_etiquette(rat) == LETTRE);
   return rat->position_max;
}

void set_position_min(Rationnel* rat, int valeur)
{
  // assert (get_etiquette(rat) == LETTRE);
   rat->position_min = valeur;
   return;
}

void set_position_max(Rationnel* rat, int valeur)
{
  // assert (get_etiquette(rat) == LETTRE);
  
rat->position_max = valeur;
   return;
}

Rationnel *fils_gauche(Rationnel* rat)
{
   assert((get_etiquette(rat) == CONCAT) || (get_etiquette(rat) == UNION));
   return rat->gauche;
}

Rationnel *fils_droit(Rationnel* rat)
{
   assert((get_etiquette(rat) == CONCAT) || (get_etiquette(rat) == UNION));
   return rat->droit;
}

Rationnel *fils(Rationnel* rat)
{
   assert(get_etiquette(rat) == STAR);
   return rat->gauche;
}

Rationnel *pere(Rationnel* rat)
{
   assert(!est_racine(rat));
   return rat->pere;
}

void print_rationnel(Rationnel* rat)
{
   if (rat == NULL)
   {
      printf("∅");
      return;
   }
   
   switch(get_etiquette(rat))
   {
      case EPSILON:
         printf("ε");         
         break;
         
      case LETTRE:
         printf("%c", get_lettre(rat));
         break;

      case UNION:
         printf("(");
         print_rationnel(fils_gauche(rat));
         printf(" + ");
         print_rationnel(fils_droit(rat));
         printf(")");         
         break;

      case CONCAT:
         printf("[");
         print_rationnel(fils_gauche(rat));
         printf(" . ");
         print_rationnel(fils_droit(rat));
         printf("]");         
         break;

      case STAR:
         printf("{");
         print_rationnel(fils(rat));
         printf("}*");         
         break;

      default:
         assert(false);
         break;
   }
}

Rationnel *expression_to_rationnel(const char *expr)
{
    Rationnel *rat;
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    // Initialisation du scanner
    if (yylex_init(&scanner))
        return NULL;
 
    state = yy_scan_string(expr, scanner);

    // Test si parsing ok.
    if (yyparse(&rat, scanner)) 
        return NULL;
    
    // Libération mémoire
    yy_delete_buffer(state, scanner);
 
    yylex_destroy(scanner);
 
    return rat;
}

void rationnel_to_dot(Rationnel *rat, char* nom_fichier)
{
   FILE *fp = fopen(nom_fichier, "w+");
   rationnel_to_dot_aux(rat, fp, -1, 1);
}

int rationnel_to_dot_aux(Rationnel *rat, FILE *output, int pere, int noeud_courant)
{   
   int saved_pere = noeud_courant;

   if (pere >= 1)
      fprintf(output, "\tnode%d -> node%d;\n", pere, noeud_courant);
   else
      fprintf(output, "digraph G{\n");
   
   switch(get_etiquette(rat))
   {
      case LETTRE:
         fprintf(output, "\tnode%d [label = \"%c-%d\"];\n", noeud_courant, get_lettre(rat), rat->position_min);
         noeud_courant++;
         break;

      case EPSILON:
         fprintf(output, "\tnode%d [label = \"ε-%d\"];\n", noeud_courant, rat->position_min);
         noeud_courant++;
         break;

      case UNION:
         fprintf(output, "\tnode%d [label = \"+ (%d/%d)\"];\n", noeud_courant, rat->position_min, rat->position_max);
         noeud_courant = rationnel_to_dot_aux(fils_gauche(rat), output, noeud_courant, noeud_courant+1);
         noeud_courant = rationnel_to_dot_aux(fils_droit(rat), output, saved_pere, noeud_courant+1);
         break;

      case CONCAT:
         fprintf(output, "\tnode%d [label = \". (%d/%d)\"];\n", noeud_courant, rat->position_min, rat->position_max);
         noeud_courant = rationnel_to_dot_aux(fils_gauche(rat), output, noeud_courant, noeud_courant+1);
         noeud_courant = rationnel_to_dot_aux(fils_droit(rat), output, saved_pere, noeud_courant+1);
         break;

      case STAR:
         fprintf(output, "\tnode%d [label = \"* (%d/%d)\"];\n", noeud_courant, rat->position_min, rat->position_max);
         noeud_courant = rationnel_to_dot_aux(fils(rat), output, noeud_courant, noeud_courant+1);
         break;
         
      default:
         assert(false);
         break;
   }
   if (pere < 0)
      fprintf(output, "}\n");
   return noeud_courant;
}

int rec_numeroter_rationnel(Rationnel* rat){
	int max;
	switch (get_etiquette(rat)){
		case EPSILON :
			set_position_max(rat,get_position_min(rat));
			break;
		case LETTRE :
			set_position_max(rat,get_position_min(rat));
			break;
		case STAR :
			set_position_min(fils(rat),get_position_min(rat));
			set_position_max(rat,rec_numeroter_rationnel(fils(rat)));
			break;
		case UNION :
			set_position_min(fils_gauche(rat),get_position_min(rat));
			max=rec_numeroter_rationnel(fils_gauche(rat));
			set_position_min(fils_droit(rat),max+1);
			set_position_max(rat,rec_numeroter_rationnel(fils_droit(rat)));
			break;
		case CONCAT :
			set_position_min(fils_gauche(rat),get_position_min(rat));
			max=rec_numeroter_rationnel(fils_gauche(rat));
			set_position_min(fils_droit(rat),max+1);
			set_position_max(rat,rec_numeroter_rationnel(fils_droit(rat)));
			break;
	}
	return get_position_max(rat);
}

void numeroter_rationnel(Rationnel *rat)
{
	set_position_min(rat,1);
	rec_numeroter_rationnel(rat);
	return;
}


bool contient_mot_vide(Rationnel *rat)
{
	bool vide;
	switch (get_etiquette(rat)){
		case EPSILON :
			vide= true;
			break;
		case LETTRE :
			vide= false;
			break;
		case STAR :
			vide= true;
			break;
		case UNION :
			vide= contient_mot_vide(fils_gauche(rat)) || contient_mot_vide(fils_droit(rat));
			break;
		case CONCAT :
			vide= contient_mot_vide(fils_gauche(rat)) && contient_mot_vide(fils_droit(rat));
			break;
	}
	return vide;
}

Ensemble* premier_rec(Rationnel* rat, Ensemble* ens){
		switch (get_etiquette(rat)){
		case EPSILON :
			break;
		case LETTRE :
			ajouter_element(ens,get_position_min(rat));
			break;
		case STAR :
			ajouter_elements(ens,premier_rec(fils(rat),ens));
			break;
		case UNION :
			ajouter_elements(ens,premier_rec(fils_gauche(rat),ens));
			ajouter_elements(ens,premier_rec(fils_droit(rat),ens));
			break;
		case CONCAT :
			ajouter_elements(ens,premier_rec(fils_gauche(rat),ens));
			if (contient_mot_vide(fils_gauche(rat)))
				ajouter_elements(ens,premier_rec(fils_droit(rat),ens));
			break;
	}
	return ens;
}

Ensemble *premier(Rationnel *rat)
{
   Ensemble* ens = creer_ensemble(NULL,NULL,NULL);
   premier_rec(rat,ens);
   return ens;
}

Ensemble* dernier_rec(Rationnel* rat, Ensemble* ens){
		switch (get_etiquette(rat)){
		case EPSILON :
			break;
		case LETTRE :
			ajouter_element(ens,get_position_min(rat));
			break;
		case STAR :
			ajouter_elements(ens,dernier_rec(fils(rat),ens));
			break;
		case UNION :
			ajouter_elements(ens,dernier_rec(fils_gauche(rat),ens));
			ajouter_elements(ens,dernier_rec(fils_droit(rat),ens));
			break;
		case CONCAT :
			ajouter_elements(ens,dernier_rec(fils_droit(rat),ens));
			if (contient_mot_vide(fils_droit(rat)))
				ajouter_elements(ens,dernier_rec(fils_gauche(rat),ens));		
			break;
	}
	return ens;
}

Ensemble *dernier(Rationnel *rat)
{
   Ensemble* ens = creer_ensemble(NULL,NULL,NULL);
   dernier_rec(rat,ens);
   return ens;
}

Ensemble* suivant_rec(Rationnel* rat, Ensemble* ens,int pos){
	switch (get_etiquette(rat)){
		case EPSILON :
		case LETTRE :
			break;
		case STAR :
			if (est_dans_l_ensemble(dernier(rat),pos))
				ajouter_elements(ens,premier(rat));
			ajouter_elements(ens,suivant_rec(fils(rat),ens,pos));
			break;
		case UNION :
			ajouter_elements(ens,suivant_rec(fils_gauche(rat),ens,pos));
			ajouter_elements(ens,suivant_rec(fils_droit(rat),ens,pos));
			break;
		case CONCAT :
			if (est_dans_l_ensemble(dernier(fils_gauche(rat)),pos))
				ajouter_elements(ens,premier(fils_droit(rat)));			
			ajouter_elements(ens,suivant_rec(fils_droit(rat),ens,pos));
			ajouter_elements(ens,suivant_rec(fils_gauche(rat),ens,pos));		
			break;
	}
	return ens;
}

Ensemble *suivant(Rationnel *rat, int position)
{
   Ensemble* ens = creer_ensemble(NULL,NULL,NULL);
   suivant_rec(rat,ens,position);
   return ens;
}

void rec_pos_to_char(Rationnel* rat,char* tab){
	switch (get_etiquette(rat)){
		case EPSILON :
		case LETTRE :
			tab[get_position_min(rat)]=get_lettre(rat);
			return;
			break;
		case STAR :
			rec_pos_to_char(fils(rat),tab);
			return;
			break;
		case UNION :
			rec_pos_to_char(fils_gauche(rat),tab);
			rec_pos_to_char(fils_droit(rat),tab);
			return;
			break;
		case CONCAT :
			rec_pos_to_char(fils_gauche(rat),tab);
			rec_pos_to_char(fils_droit(rat),tab);
			return;
			break;
	}
	return;
}

char* pos_to_char(Rationnel* rat){

	char* tab=malloc(get_position_max(rat)*sizeof(char));
	rec_pos_to_char(rat,tab);
	return tab;
}

Automate *Glushkov(Rationnel *rat)
{

   Automate* aut=creer_automate();

   char c;
   int dest;
   char* lettres=pos_to_char(rat);

   ajouter_etat_initial(aut,0);  //On crée un état initial 0 (epsilon)
   if (contient_mot_vide(rat)){
		ajouter_etat_final(aut,0);
   }
   
   Ensemble_iterateur it_premier=premier_iterateur_ensemble(premier(rat)); //On crée des transition entre l'état 0 et les premiers.
   while (!iterateur_ensemble_est_vide(it_premier)){
	    c=lettres[get_element(it_premier)];  //On recupere la lettre associée a l'état
	    dest=get_element(it_premier);     //On va chercher la destination de la transition (le sommet de premier)
		ajouter_transition(aut,0,c,dest);     // On crée la transition entre l'état 0 et le sommet actuel dans premier
		it_premier=iterateur_suivant_ensemble(it_premier);
   }
   
   
   Ensemble_iterateur it_dernier=premier_iterateur_ensemble(dernier(rat));  // les elements de dernier sont les etats finaux
   while (!iterateur_ensemble_est_vide(it_dernier)){
		ajouter_etat_final(aut,get_element(it_dernier));
		it_dernier=iterateur_suivant_ensemble(it_dernier);
   }
   
   for (int i=1;i<=get_position_max(rat);i++){ //On crée toutes les autres transitions
	    Ensemble_iterateur it_transition=premier_iterateur_ensemble(suivant(rat,i)); //On parcours l'ensemble des transitions
	    while (!iterateur_ensemble_est_vide(it_transition)){
			c=lettres[get_element(it_transition)]; //La lettre de la destionation
			dest=get_element(it_transition);  // position de fin
			ajouter_transition(aut,i,c,dest); // crée la transition
			it_transition=iterateur_suivant_ensemble(it_transition);
		}
	}
	return aut;
}

bool meme_langage (const char *expr1, const char* expr2)
{
   A_FAIRE_RETURN(true);
}

Systeme systeme(Automate *automate)
{
   A_FAIRE_RETURN(NULL);
}

void print_ligne(Rationnel **ligne, int n)
{
   for (int j = 0; j <=n; j++)
      {
         print_rationnel(ligne[j]);
         if (j<n)
            printf("X%d\t+\t", j);
      }
   printf("\n");
}

void print_systeme(Systeme systeme, int n)
{
   for (int i = 0; i <= n-1; i++)
   {
      printf("X%d\t= ", i);
      print_ligne(systeme[i], n);
   }
}

Rationnel **resoudre_variable_arden(Rationnel **ligne, int numero_variable, int n)
{
   A_FAIRE_RETURN(NULL);
}

Rationnel **substituer_variable(Rationnel **ligne, int numero_variable, Rationnel **valeur_variable, int n)
{
   A_FAIRE_RETURN(NULL);
}

Systeme resoudre_systeme(Systeme systeme, int n)
{
   A_FAIRE_RETURN(NULL);
}

Rationnel *Arden(Automate *automate)
{
   A_FAIRE_RETURN(NULL);
}
