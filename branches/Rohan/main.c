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
    fprintf(f_output,"<link href=\"css/style.default.css\" rel=\"stylesheet\">");
    fprintf(f_output,"<link href=\"css/jquery.datatables.css\" rel=\"stylesheet\">");
    fprintf(f_output,"<link href=\"css/font.helvetica-neue.css\" rel=\"stylesheet\">");
    
    
	fprintf(f_output,"</head>");								// </HEADER>

	//body
	fprintf(f_output, "<body>");
    fprintf(f_output," <div class=\"leftpanel sticky-leftpanel\" >");
    fprintf(f_output," <div class=\"logopanel\" >");
    fprintf(f_output,"<h1><span>[</span> Projet <span>]</span></h1>");
    fprintf(f_output,"</div>");
    fprintf(f_output,"<div class=\"leftpanelinner\">");
    fprintf(f_output,"<div class=\"visible-xs hidden-sm hidden-md hidden-lg\">");
    fprintf(f_output,"<div class=\"media userlogged\">");
    fprintf(f_output,"</div>");
    fprintf(f_output,"</div>");
    
    fprintf(f_output,"<h5 class=\"sidebartitle\">Navigation</h5>");
    
    fprintf(f_output,"<ul class=\"nav nav-pills nav-stacked nav-bracket\">") ;
    fprintf(f_output,"</ul>");
    fprintf(f_output,"</div>");
    fprintf(f_output,"</div>");
    
    fprintf(f_output,"<div class=\" mainpanel\">");
    fprintf(f_output,"<div class=\"contentpanel\"");
    
    
	fprintf(f_output,"<div class=\"bordure\"> ");
	fprintf(f_output,"<div class=\"Code\"> ");
	
 
	
	return f_output;
}

int fermer_html(FILE* fd){
   fprintf(fd,"</div>");
   
   fprintf(fd,"</div>");
   
	fprintf(fd,"</div>");
	fprintf(fd,"</div>");
  fprintf(fd, "</body>");
  fprintf(fd, "</html>");
  return(fclose(fd)); //close avec flush
}


int main(int argc,char** argv){
   FILE* html=create_html(argv[1]);
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
