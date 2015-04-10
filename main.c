#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Include pour utiliser open 
#include <fcntl.h>
//pour utiliser des asserts
#include <assert.h>
#include "parse.tab.h"
#include "libs/html.h"
#include "libs/tools.h"

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
	fprintf(f_output, "<link rel=\"stylesheet\" type=\"text/css\" href=\"css/index.css\">");
	fprintf(f_output,"</head>");								// </HEADER>

	//body
	fprintf(f_output, "<body>");
	fprintf(f_output,"<div class=\"header\"> ");
	fprintf(f_output,"<h1>Projet d'analyse syntaxique, licence 3 2014-2015</h1>");
	fprintf(f_output,"</div>");
	fprintf(f_output,"<div class=\"bordure\"> ");
	fprintf(f_output,"<div class=\"Code\"> ");
	
 
	
	return f_output;
}

int fermer_html(FILE* fd){
  fprintf(fd,"</div>");
  fprintf(fd,"</div>");
  fprintf(fd, "</body>");
  fprintf(fd, "</html>");
  return(fclose(fd)); //close avec flush
}

void init_structures(){
	
	function_list=list_create();
	variables_stack=stack_create();
	new_block();
}

int main(int argc,char** argv){
	int fd=open(argv[1],O_RDONLY);
	dup2(fd,0);

   create_html("test");
   //assert(argc==2 && "invalide number of argument");
   
  init_structures();

  yyparse(); // On parse l'entree (une seule fois)
  print_variables();
  printf("\n \n");
  print_functions();

  if(fermer_html(f_output)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }
  return 0;
  }
