#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//mieux vaut ne pas utiliser deftype parce que ca arrete la vérification de type et certains erreurs peut être ignorés??

struct balise{
   struct attribut* attrib;
   char* nom;
}

struct attribut{
  char* nom;
  char* valeur;
  struct attribut * next;
};

struct arbre{
  char * pre_PCDATA;//data avant l'arbre (dans la balise entourante)
  char * post_PCDATA;//data après l'arbre (dans la balise entourante)
  struct arbre * fils;
  struct arbre * frere;
  struct attribut *attrib;
  char * nom_balise;//nom de balise 
};

void print_attributs(struct attribut * attrib){
  if(attrib==NULL) return;
  printf("%s=\"%s\" ", attrib->nom, attrib->valeur);
  print_attributs(attrib->next);
  return;
}

//faut ajouter des attributs
void print_arbre(FILE* fd, struct arbre * t){
  if(t==NULL) return;
  else{
    fprintf(fd, "<%s ", t->nom_balise);//debut balise
    // print_attributs(t->attrib);//attributs
    fprintf(fd, ">%s",t->pre_PCDATA);//fin balise
    print_arbre(fd, t->fils);
    fprintf(fd, "%s</%s>",t->post_PCDATA,t->nom_balise);
    // print_arbre(t->frere);
  }  
}

/*
void print_arbre(struct * t){
  if(t==NULL) return;
  else{
    printf("<%s>%s",t.nom_balise,t.pre_PCDATA);
    print_tree(t.fils);
    printf("%s</%s>",t.post_PCDATA,t.nom_balise);
    print_tree(t.frere);
  }  
}

*/

FILE* create_html(char* titre){
	FILE* fd=fopen("index.html","w+");

	//header
	fprintf(fd,"<!doctype html>");
	fprintf(fd,"<html lang=\"fr\">");
	fprintf(fd,"<head>");								//<HEADER>
	fprintf(fd,"   <meta charset=\"utf-8\">");
	fprintf(fd,"   <title>%s</title>",titre);
	fprintf(fd,"   <!doctype html>");
	fprintf(fd, "<link rel=\"stylesheet\" type=\"text/css\" href=\"index.css\">");
	fprintf(fd,"</head>");								// </HEADER>

	//body
	fprintf(fd, "<body>");
	
	return fd;
}

int fermer_html(FILE* fd){
  fprintf(fd, "</body>");
  fprintf(fd, "</html>");
  return(fclose(fd)); //close avec flush
}

/*ajoute dans le fd une balise déjà crée en flex
-on peut soit faire ca avec une chaine en dure (faut pas oublier d'ajouter la balise fermant) SOIT
-créer un struct balise avec une liste associative avec les attributs nécessaires  
*/
int ajouter(FILE* fd, char* balise){
  fprintf(fd, balise);	
}


int main(){
  FILE* html=create_html("test");

  //test
  //ajouter(html,"<span class=commentaire> test commentaire </span>");

  //test2
  struct arbre * t= malloc(sizeof(t));
   t->pre_PCDATA=malloc(sizeof(t->pre_PCDATA));
   t->post_PCDATA=malloc(sizeof(t->post_PCDATA));
  t->fils=malloc(sizeof(t->fils));
  //t->frere=malloc(sizeof(t->frere));
  t->nom_balise=malloc(sizeof(t->nom_balise));
  t->attrib=malloc(sizeof(t->attrib));
  
  t->pre_PCDATA="";
  t->post_PCDATA="\nhello";
  t->fils=NULL;
  //t->frere=NULL;
  t->attrib=NULL;
  t->nom_balise="div";

  print_arbre(html, t);
  
  if(fermer_html(html)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }

  return 0;
}
