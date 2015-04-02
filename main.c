#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Include pour utiliser open 
#include <fcntl.h>
//pour utiliser des asserts
#include <assert.h>
#include "parse.tab.h"
#include "html.h"

/*

 */
FILE* create_html(char* titre){
   f_output=fopen("index.html","w+");
   
	//header
	fprintf(f_output,"<!doctype html>");
	fprintf(f_output,"<html lang=\"fr\">");
	fprintf(f_output,"<head>");								//<HEADER>
	fprintf(f_output,"   <meta charset=\"utf-8\">");
	fprintf(f_output,"   <title>%s</title>",titre);
	fprintf(f_output,"   <!doctype html>");
	fprintf(f_output, "<link rel=\"stylesheet\" type=\"text/css\" href=\"index.css\">");
	fprintf(f_output,"</head>");								// </HEADER>

	//body
	fprintf(f_output, "<body>");
	
	return f_output;
}

int fermer_html(FILE* fd){
  fprintf(fd, "</body>");
  fprintf(fd, "</html>");
  return(fclose(fd)); //close avec flush
}


int main(int argc,char** argv){
   FILE* html=create_html("test");
   //assert(argc==2 && "invalide number of argument");
   

  int fd=open(argv[1],O_RDONLY);
  dup2(fd,0);
  
  
  yyparse(); // On parse l'entree (une seule fois)
  

  if(fermer_html(html)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }
  return 0;
  }
