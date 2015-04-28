#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
//Include pour utiliser open 
#include <fcntl.h>
//pour utiliser des asserts
#include <assert.h>
#include "tex_parse.tab.h"
#include "libs/html.h"
#include "libs/tools.h"

/*
 */
FILE* create_html(char* titre){
   char* fichier_css="index.css";
 //ancien
//char* fichier_css="../css/index.css";

   f_output=fopen("index.html","w+");
   
	//header
	fprintf(f_output,"<!doctype html>");
   fprintf(f_output,"<html lang=\"fr\">");
   fprintf(f_output,"<head>");								//<HEADER>
   fprintf(f_output,"   <meta charset=\"utf-8\">");
   fprintf(f_output,"   <title>%s</title>",titre);
   fprintf(f_output,"   <!doctype html>");
   fprintf(f_output, "<link rel=\"stylesheet\" type=\"text/css\" href=\"%s\">", fichier_css);
   fprintf(f_output,"<link href=\"../branches/Rohan/css/style.default.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link href=\"../branches/Rohan/css/jquery.datatables.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link href=\"../branches/Rohan/css/font.helvetica-neue.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link rel=\"stylesheet\" href=\"http://netdna.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css\">");
   fprintf(f_output,"<script src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.11.2/jquery.min.js\"></script>");      
    
   
   fprintf(f_output,"<script>var toto='';var id='';$(document).ready(function(){");
   fprintf(f_output,"$('.fin_block').click(function(){");
   fprintf(f_output,"toto = $(this).attr('name');");
   fprintf(f_output,"id =$(this).attr('value');});");
   fprintf(f_output,"$(\".fin_block\").click(function(){");
   fprintf(f_output,"$(id).slideToggle(\"slow\");});});</script>");
   
   fprintf(f_output,"</head>");									// </HEADER>

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
   fprintf(f_output,"<li class=\"active\"><a href=\"#\"><i class=\"fa fa-calendar-o\"></i> <span>Page de Présentation</span></a></li>");

   // Appel de la fonction qui liste les fichiers d'un dossier
                                
   
   fprintf(f_output,"</ul>");
   fprintf(f_output,"</div>");
   fprintf(f_output,"</div>");
   
   fprintf(f_output,"<div class=\" mainpanel\">");
   
   
   
   fprintf(f_output,"<div class=\"bordure\"> ");
   fprintf(f_output,"<div class=\"Code\"> ");
   return f_output;
	
 
	
	return f_output;
}

int fermer_html(FILE* fd){
  fprintf(fd,"</div>");
  fprintf(fd, "</body>");
  fprintf(fd, "</html>");
  return(fclose(fd)); //close avec flush
}

void source_js()
{
  fprintf(f_output,"<script src=\"../js/jquery-1.10.2.min.js\"></script>");
  fprintf(f_output,"  <script src=\"../js/jquery-migrate-1.2.1.min.js\"></script>");
  fprintf(f_output,"  <script src=\"../js/bootstrap.min.js\"></script>");
  fprintf(f_output,"  <script src=\"../js/modernizr.min.js\"></script>");
  fprintf(f_output,"   <script src=\"../js/jquery.sparkline.min.js\"></script>");
  fprintf(f_output," <script src=\"../js/toggles.min.js\"></script>");
  fprintf(f_output,"   <script src=\"../js/retina.min.js\"></script>");
  fprintf(f_output," <script src=\"../js/jquery.cookies.js\"></script>");
  fprintf(f_output," <script src=\"../js/flot/flot.min.js\"></script>");
  fprintf(f_output," <script src=\"../js/flot/flot.resize.min.js\"></script>");
  fprintf(f_output,"   <script src=\"../js/morris.min.js\"></script>");
  fprintf(f_output," <script src=\"../js/raphael-2.1.0.min.js\"></script>");
  fprintf(f_output,"      <script src=\"../js/jquery.datatables.min.js\"></script>");
  fprintf(f_output," <script src=\"../js/chosen.jquery.min.js\"></script>");
  fprintf(f_output,"     <script src=\"../js/custom.js\"></script>");
  fprintf(f_output," <script src=\"../js/dashboard.js\"></script>");
  fprintf(f_output,"<script src=\"../javascript.js\"></script>");
  fprintf(f_output,"<script src=\"http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML\"> </script>"); 

}

int main(int argc,char** argv){
	int fd=open(argv[1],O_RDONLY);
	dup2(fd,0);
	
   create_html("test");
   //assert(argc==2 && "invalide number of argument");


  yyparse(); // On parse l'entree (une seule fois)
 	
  if(fermer_html(f_output)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }
  return 0;
  }
