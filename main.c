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
#include "dirent.h"

/*

 */
char* tableau_fichier[20];
void ecriture_fichier()
{
  struct dirent *lecture;
  DIR *rep ;
   
  rep = opendir("./tests/");
  fprintf(f_output,"<li class=\"nav-parent\">");
  fprintf(f_output,"<a href=\"#\"><i class=\"fa fa-map-marker\"></i> <span>Mon dossier</span></a>");
  fprintf(f_output,"<ul class=\"children\">");   
   
   
  while ((lecture = readdir(rep))) {
if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, "..")){
    }
    else
      {
    fprintf(f_output,"<li><a href=\"tests/%s.html\"><i class=\"fa fa-caret-right\"></i> %s</a></li>",lecture->d_name,lecture->d_name);
  }
  }
  fprintf(f_output,"</ul>");
  fprintf(f_output,"</li>");
   
}


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
   fprintf(f_output,"<link href=\"branches/Rohan/css/style.default.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link href=\"branches/Rohan/css/jquery.datatables.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link href=\"branches/Rohan/css/font.helvetica-neue.css\" rel=\"stylesheet\">");
   
   
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
   fprintf(f_output,"<li class=\"active\"><a href=\"#\"><i class=\"fa fa-tachometer\"></i> <span>Page de Présentation</span></a></li>");
   ecriture_fichier();
   
   fprintf(f_output,"</ul>");
   fprintf(f_output,"</div>");
   fprintf(f_output,"</div>");
   
   fprintf(f_output,"<div class=\" mainpanel\">");
   fprintf(f_output,"<div class=\"contentpanel\"");
   
   
   fprintf(f_output,"<div class=\"bordure\"> ");
   fprintf(f_output,"<div class=\"Code\"> ");
   
   
   
   return f_output;
}

void source_js()
{
  fprintf(f_output,"<script src=\"js/jquery-1.10.2.min.js\"></script>");
  fprintf(f_output,"  <script src=\"js/jquery-migrate-1.2.1.min.js\"></script>");
  fprintf(f_output,"  <script src=\"js/bootstrap.min.js\"></script>");
  fprintf(f_output,"  <script src=\"js/modernizr.min.js\"></script>");
  fprintf(f_output,"   <script src=\"js/jquery.sparkline.min.js\"></script>");
  fprintf(f_output," <script src=\"js/toggles.min.js\"></script>");
  fprintf(f_output,"   <script src=\"js/retina.min.js\"></script>");
  fprintf(f_output," <script src=\"js/jquery.cookies.js\"></script>");
  fprintf(f_output," <script src=\"js/flot/flot.min.js\"></script>");
  fprintf(f_output," <script src=\"js/flot/flot.resize.min.js\"></script>");
  fprintf(f_output,"   <script src=\"js/morris.min.js\"></script>");
  fprintf(f_output," <script src=\"js/raphael-2.1.0.min.js\"></script>");
  fprintf(f_output,"      <script src=\"js/jquery.datatables.min.js\"></script>");
  fprintf(f_output," <script src=\"js/chosen.jquery.min.js\"></script>");
  fprintf(f_output,"     <script src=\"js/custom.js\"></script>");
  fprintf(f_output," <script src=\"js/dashboard.js\"></script>");
   

}


int fermer_html(FILE* fd){
  fprintf(fd,"</div>");
  fprintf(fd,"</div>");
  fprintf(fd,"</div>");
  fprintf(fd,"</div>");
  source_js();
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
  /*  int i=0;
  struct dirent *lecture;
  DIR *rep ;
  rep = opendir(argv[1]);
  while ((lecture = readdir(rep))) {
    if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, "..")){
    }
    else
      {
    tableau_fichier[i] =lecture->d_name;
    i++;
    printf("%s\n",lecture->d_name);
    }
  }
  
  i=0;
  while(tableau_fichier[i]!=NULL)
    {    
      int fd=open(tableau_fichier[i],O_RDONLY);
      dup2(fd,0);
      printf("ici ici\n");
      create_html(tableau_fichier[i]);
      //assert(argc==2 && "invalide number of argument");
      printf("lala\n");
      init_structures();
      printf("entre les deux\n");
      yyparse(); // On parse l'entree (une seule fois)
      printf("après yyparse();");
      print_variables();
      printf("\n \n");
      print_functions();


      if(fermer_html(f_output)){
	perror("fermeture du html");
	exit(EXIT_FAILURE);
      }
      i++;
    }
    return 0;*/

  int fd=open(argv[1],O_RDONLY);
  dup2(fd,0);
  create_html("index.html");
  init_structures();
  yyparse();
  print_variables();
  print_functions();
  if(fermer_html(f_output)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }
  return 0;
}
