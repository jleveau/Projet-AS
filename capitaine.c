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
#include <dirent.h>
//utilisation des expressions régulières
#include <regex.h>
#include <unistd.h>

/*
Fonction qui lit un dossier passé en paramètre et écrit dans le fichier html
dans la barre de menu les fichiers qui sont dans ce dossier.
*/

void ecriture_fichier(char* directory)
{
	regex_t regexc, regexh, regextex,regexjpg;
	int retic;
	int retih;
	int retitex;
	int retijpg;
	retic = regcomp(&regexc, "[[:alnum:]].c$", 0);
	retih = regcomp(&regexh, "[[:alnum:]].h$", 0);
	retitex = regcomp(&regextex, "[[:alnum:]].tex$", 0);
	retijpg = regcomp(&regexjpg, "[[:alnum:]].jpg$", 0);
	struct dirent *lecture;
	DIR *rep ;

	rep = opendir(directory);

	fprintf(f_output, "<li class=\"nav-parent\">\n");
	fprintf(f_output, "<a href=\"#\"><i class=\"fa fa-plus\"></i><span>Header</span></a>\n");
	fprintf(f_output, "<ul class=\"children\">\n");

	while ((lecture = readdir(rep)))
	{
		//Si c'est un '.' ou '..' alors on ne fait rien
		if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, ".."));
		else
		{
			retih = regexec(&regexh, lecture->d_name, 0, NULL, 0);
			if(retih == 0 )
			{
				fprintf(f_output, "<li><a href=\"%s.html\"><i class=\"fa fa-caret-right\"></i>%s</a></li>\n", lecture->d_name,lecture->d_name);
			}
		}
	}
	fprintf(f_output, "</ul>\n");
	fprintf(f_output, "</li>\n");

	fprintf(f_output, "<li class=\"nav-parent\">\n");
	fprintf(f_output, "<a href=\"#\"><i class=\"fa fa-plus\"></i><span>Source File</span></a>\n");
	fprintf(f_output, "<ul class=\"children\">\n");

	free(rep);
	rep = opendir(directory);

	while((lecture = readdir(rep)))
	{
		//Si c'est un '.' ou '..' alors on ne fait rien
		if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, ".."));
		else
		{
			retic = regexec(&regexc, lecture->d_name, 0, NULL, 0);
			retijpg = regexec(&regexjpg, lecture->d_name, 0, NULL, 0);
			if(retic == 0)
			{
				if(!(retijpg == REG_NOMATCH));
				else
				fprintf(f_output, "<li><a href=\"%s.html\"><i class=\"fa fa-caret-right\"></i>%s</a></li>\n", lecture->d_name,lecture->d_name);
			}
		}
	}

	fprintf(f_output, "</ul>\n");
	fprintf(f_output, "</li>\n");

	fprintf(f_output, "<li class=\"nav-parent\">\n");
	fprintf(f_output, "<a href=\"#\"><i class=\"fa fa-plus\"></i><span>Tex File</span></a>\n");
	fprintf(f_output, "<ul class=\"children\">\n");

	free(rep);
	rep = opendir(directory);

	while((lecture = readdir(rep)))
	{
		//Si c'est un '.' ou '..' alors on ne fait rien
		if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, ".."));
		else
		{
			retitex = regexec(&regextex, lecture->d_name, 0, NULL, 0);
			if(retitex == 0)
			{
				fprintf(f_output, "<li><a href=\"%s.html\"><i class=\"fa fa-caret-right\"></i>%s</a></li>\n", lecture->d_name,lecture->d_name);
			}
		}
	}

	fprintf(f_output, "</ul>\n");
	fprintf(f_output, "</li>\n");
	free(rep);
	regfree(&regexc);
	regfree(&regexh);
	regfree(&regextex);
}

FILE* create_html(char* titre, char* dir)
{
	// f_output=fopen(titre,"w+");

	char* fin = ".html";

	char* path = malloc(strlen(dir) + strlen(titre) + strlen(fin) + strlen("/html/")+5);
	strcpy(path, dir);
	strcat(path, "/html/");
	strcat(path, titre);
	strcat(path, fin);
	f_output = fopen(path, "w+");
	free(path);

	//header
	fprintf(f_output, "<!doctype html>\n");
	fprintf(f_output, "<html lang=\"fr\">\n");
	fprintf(f_output, "<head>\n");								//<HEADER>
	fprintf(f_output, "<meta charset=\"utf-8\">\n");
	fprintf(f_output, "<title>%s</title>\n", titre);
	fprintf(f_output, "<link rel=\"stylesheet\" type=\"text/css\" href=\"../css/index.css\">\n");
	fprintf(f_output, "<link href=\"../branches/Rohan/css/style.default.css\" rel=\"stylesheet\">\n");
	fprintf(f_output, "<link href=\"../branches/Rohan/css/jquery.datatables.css\" rel=\"stylesheet\">\n");
	fprintf(f_output, "<link href=\"../branches/Rohan/css/font.helvetica-neue.css\" rel=\"stylesheet\">\n");
	fprintf(f_output, "<link rel=\"stylesheet\" href=\"http://netdna.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css\">\n");
	fprintf(f_output, "<script src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.11.2/jquery.min.js\"></script>\n");

	fprintf(f_output, "<script>var toto='';var id='';$(document).ready(function(){\n");
	fprintf(f_output, "$('.fin_block').click(function(){\n");
	fprintf(f_output, "toto = $(this).attr('name');\n");
	fprintf(f_output, "id =$(this).attr('value');});\n");
	fprintf(f_output, "$(\".fin_block\").click(function(){\n");
	fprintf(f_output, "$(id).slideToggle(\"slow\");});});</script>\n");

	fprintf(f_output, "<script>$(document).ready(function(){\n");
	fprintf(f_output, "$('.variable-activable').hover(function(){\n");
	fprintf(f_output, "var color = $(this).children().attr('id');\n");
	fprintf(f_output, "$(color).css(\"background-color\",\"#CBCACA\")");
	fprintf(f_output, "}, function() {\n");
	fprintf(f_output, "var color = $(this).children().attr('id');\n");
	fprintf(f_output, "$(color).css(\"background-color\",\"\")");
	fprintf(f_output, "});});</script>");
	fprintf(f_output,"<script> var TOC = document.getElementById(\"TableOfContents\").innerHTML;\n");
	fprintf(f_output,"document.getElementById(\"toc-devant\").innerHTML = TOC;</script>\n");


	fprintf(f_output, "</head>\n");								// </HEADER>

	//body
	fprintf(f_output, "<body>\n");
	fprintf(f_output, "<div class=\"leftpanel sticky-leftpanel\">\n");
	fprintf(f_output, "<div class=\"logopanel\">\n");
	fprintf(f_output, "<h1><span>[</span> Projet <span>]</span></h1>\n");
	fprintf(f_output, "</div>\n");
	fprintf(f_output, "<div class=\"leftpanelinner\">\n");
	fprintf(f_output, "<div class=\"visible-xs hidden-sm hidden-md hidden-lg\">\n");
	fprintf(f_output, "<div class=\"media userlogged\">\n");
	fprintf(f_output, "</div>\n");
	fprintf(f_output, "</div>\n");

	fprintf(f_output, "<h5 class=\"sidebartitle\">Navigation</h5>\n");

	fprintf(f_output, "<ul class=\"nav nav-pills nav-stacked nav-bracket\">\n") ;
	fprintf(f_output, "<li class=\"active\"><a href=\"#\"><i class=\"fa fa-calendar-o\"></i> <span>Page de Présentation</span></a></li>\n");

	// Appel de la fonction qui liste les fichiers d'un dossier
	ecriture_fichier("./tests");

	fprintf(f_output, "</ul>\n");
	fprintf(f_output, "</div>\n");
	fprintf(f_output, "</div>\n");

	fprintf(f_output, "<div class=\" mainpanel\">\n");
	fprintf(f_output, "<div class=\"contentpanel\"> \n");

	fprintf(f_output, "<div class=\"bordure\">\n");
	fprintf(f_output, "<div class=\"Code\">\n");
	return f_output;
}

//Include en bas de page, permet de faire des joulies animations
void source_js()
{
	fprintf(f_output, "<script src=\"../js/jquery-1.10.2.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/jquery-migrate-1.2.1.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/bootstrap.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/modernizr.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/jquery.sparkline.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/toggles.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/retina.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/jquery.cookies.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/flot/flot.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/flot/flot.resize.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/morris.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/raphael-2.1.0.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/jquery.datatables.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/chosen.jquery.min.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/custom.js\"></script>\n");
	fprintf(f_output, "<script src=\"../js/dashboard.js\"></script>\n");
	fprintf(f_output, "<script src=\"../javascript.js\"></script>\n");
}

int fermer_html(FILE* fd)
{
	fprintf(fd, "</div>\n");
	fprintf(fd, "</div>\n");
	fprintf(fd, "</div>\n");
	source_js();
	fprintf(fd, "</body>\n");
	fprintf(fd, "</html>\n");

	return(fclose(fd)); //close avec flush
}

void init_structures()
{
	function_list = list_create();
	block_stack = stack_create();
	parameter_list = list_create();
	typedef_list=list_create();
	id_block = 0;
	new_block(NULL);
}

void create_log(char* name)
{
	char log[20] = "./log/";
	strcat(log, name);
	strcat(log, ".txt");
	int fd;
	if((fd = open(log, O_CREAT | O_RDWR,0666)) == -1)
	{
		perror("open\n");
	}
	dup2(fd, 1);
}

//Fonction principale du code
int main(int argc, char** argv)
{
	if(argc != 4)
	{
		fprintf(stderr, "capitaine : nombre d'arguments invalide\n");
	}
	printf("%s %s %s\n", argv[1], argv[2], argv[3]);
	int fd = open(argv[1], O_RDONLY);
	create_log(argv[3]);
	dup2(fd, 0);

	printf("-----------------%s-------------------\n", argv[1]);

	create_html(argv[3], argv[2]);
	init_structures();
	nb_ligne = 1;
	fprintf(f_output,"1. ");
	yyparse();
	fin_block(NULL);
	print_variables();

	stack_destroy(block_stack);
	list_destroy(parameter_list);
	destroy_function_list();

	if(fermer_html(f_output))
	{
		perror("fermeture du html\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}
