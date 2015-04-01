#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "parse.tab.h"


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


int main(int argc,char** argv){
  FILE* html=create_html("test");

  if (argc!=1){
		assert("wrong");
	}

  int fd=open(argv[1],O_RDONLY);
  dup2(fd,0);
  
  
  yyparse(); // On parse l'entree (une seule fois)
  

  if(fermer_html(html)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }

  return 0;
}
