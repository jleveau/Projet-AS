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
//pour la lecture de dossier
#include "dirent.h"
//utilisation des expressions régulières
#include <regex.h>

/*
Fonction qui lit un dossier passé en paramètre et écrit dans le fichier html
dans la barre de menu les fichiers qui sont dans ce dossier.
 */

void ecriture_fichier(char* directory)
{
    regex_t regexc,regexh;
int retic;
int retih;
retic = regcomp(&regexc, "[[:alnum:]].c", 0);
retih = regcomp(&regexh,"[[:alnum:]].h",0);

  struct dirent *lecture;
  DIR *rep ;
   
  rep = opendir(directory);
  
  
  fprintf(f_output,"<li class=\"nav-parent\">");
  fprintf(f_output,"<a href=\"#\"><i class=\"fa fa-plus\"></i> <span>Header</span></a>");
  fprintf(f_output,"<ul class=\"children\">");   


  
   
  while ((lecture = readdir(rep))) {
     //Si c'est un '.' ou '..' alors on ne fait rien
if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, "..")){
    }
    else
      {
         retih = regexec(&regexh, lecture->d_name, 0, NULL, 0);
         if(retih == REG_NOMATCH)
         {
         }
         else
         {
            fprintf(f_output,"<li><a href=\"%s.html\"><i class=\"fa fa-caret-right\"></i> %s</a></li>",lecture->d_name,lecture->d_name);
         }
    
  }
  }
  fprintf(f_output,"</ul>");
  fprintf(f_output,"</li>");


  fprintf(f_output,"<li class=\"nav-parent\">");
  fprintf(f_output,"<a href=\"#\"><i class=\"fa fa-plus\"></i> <span>Source File</span></a>");
  fprintf(f_output,"<ul class=\"children\">");   
   
  rep=opendir(directory);
  
  while ((lecture = readdir(rep))) {
     //Si c'est un '.' ou '..' alors on ne fait rien
if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, "..")){
    }
    else
      {
         retic = regexec(&regexc, lecture->d_name, 0, NULL, 0);
         if(retic == REG_NOMATCH)
         {
         }
         else
         {
            fprintf(f_output,"<li> <a href=\"%s.html\"><i class=\"fa fa-caret-right\"></i> %s</a></li>",lecture->d_name,lecture->d_name);
         }
    
  }
  }
  fprintf(f_output,"</ul>");
  fprintf(f_output,"</li>");
   
}


FILE* create_html(char* titre,char* dir){
   // f_output=fopen(titre,"w+");
   
   char* fin =".html";
   
   char* path=malloc((strlen(dir)+strlen(titre)+strlen(fin)+strlen("/html/")+4)*sizeof(char));
    strcpy(path,dir);
    strcat(path,"/html/");
	strcat(path,titre);
	strcat(path,fin);
   f_output=fopen(path,"w+");
   
   
	//header
   fprintf(f_output,"<!doctype html>");
   fprintf(f_output,"<html lang=\"fr\">");
   fprintf(f_output,"<head>");								//<HEADER>
   fprintf(f_output,"   <meta charset=\"utf-8\">");
   fprintf(f_output,"   <title>%s</title>",titre);
   fprintf(f_output,"   <!doctype html>");
   fprintf(f_output, "<link rel=\"stylesheet\" type=\"text/css\" href=\"../css/index.css\">");
   fprintf(f_output,"<link href=\"../branches/Rohan/css/style.default.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link href=\"../branches/Rohan/css/jquery.datatables.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link href=\"../branches/Rohan/css/font.helvetica-neue.css\" rel=\"stylesheet\">");
   fprintf(f_output,"<link rel=\"stylesheet\" href=\"http://netdna.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css\">");
   
   fprintf(f_output,"</head>");								// </HEADER>
   
   //body
   fprintf(f_output, "<body>");
   fprintf(f_output, "<div id=\"fonction\" class=\"infobulle\"></div>");
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
   ecriture_fichier("./tests");
   
                                
   
   fprintf(f_output,"</ul>");
   fprintf(f_output,"</div>");
   fprintf(f_output,"</div>");
   
   fprintf(f_output,"<div class=\" mainpanel\">");
   fprintf(f_output,"<div class=\"contentpanel\"");
   
   
   fprintf(f_output,"<div class=\"bordure\"> ");
   fprintf(f_output,"<div class=\"Code\"> ");
   fprintf(f_output,"<p   onmouseover=\"montre('texte');\" onmouseout=\"cache();\" >Ici on écrit du texte wesh ! </p>");
   fprintf(f_output,"<span href=\"#\" id=\"test\">Hover Me! <span class=\"popup\"><span class=\"type_specifier \" >int</span> f<span class=\"vert \" >(</span><span class=\"type_specifier \" >int</span> a, <span class=\"type_specifier \" >int</span> b,<span class=\"type_specifier \" >int</span> h,<span class=\"type_specifier \" >int</span> z<span class=\"vert \" >)</span></span> </span>");
   
   
   
   
   return f_output;
}


//Include en bas de page, permet de faire des joulies animations
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
  block_stack=stack_create();
  id_block=0;
  new_block(NULL);
}

void create_log(char* name){
  char log[20]="./log/";
  strcat(log,name);
  strcat(log,".txt");
  int fd;
  if((fd = open(log, O_CREAT | O_RDWR,0666))==-1){
    perror("open");
  }
  dup2(fd,1);
}

//Fonction principale du code
int main(int argc,char** argv){ 
	if (argc !=4){
		fprintf(stderr,"capitaine : nombre d'arguments invalide");
	}   
	printf(" %s %s %s \n", argv[1],argv[2],argv[3]);
  int fd=open(argv[1],O_RDONLY);
  create_log(argv[3]);
  dup2(fd,0);
	printf("-----------------%s------------------- \n",argv[1]);

  create_html(argv[3],argv[2]);
  init_structures();
	nb_ligne=1;
fprintf(f_output,"<span class=\"numerotation\">%d.   </span>",nb_ligne);
  yyparse();
  fin_block(NULL);
 // print_variables();
  print_functions();
  if(fermer_html(f_output)){
    perror("fermeture du html");
    exit(EXIT_FAILURE);
  }

  
  return 0;
}
