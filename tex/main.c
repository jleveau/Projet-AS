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
FILE* create_html(char* titre,char* dir)
{
	char* fichier_css = "index.css";
	//ancien
	//char* fichier_css="../css/index.css";
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
	fprintf(f_output, "<link rel=\"stylesheet\" type=\"text/css\" href=\"%s\">\n", fichier_css);
	fprintf(f_output, "<link href=\"../branches/Rohan/css/style.default.css\" rel=\"stylesheet\">\n");
	fprintf(f_output, "<link href=\"../branches/Rohan/css/jquery.datatables.css\" rel=\"stylesheet\">\n");
	fprintf(f_output, "<link href=\"../branches/Rohan/css/font.helvetica-neue.css\" rel=\"stylesheet\">\n");
	fprintf(f_output, "<link rel=\"stylesheet\" href=\"http://netdna.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css\">\n");
	fprintf(f_output, "<script src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.11.2/jquery.min.js\"></script>\n");

	fprintf(f_output, "<script>var toto='';var id='';$(document).ready(function(){\n");
	fprintf(f_output,"$('.fin_block').click(function(){\n");
	fprintf(f_output,"toto = $(this).attr('name');\n");
	fprintf(f_output,"id =$(this).attr('value');});\n");
	fprintf(f_output,"$(\".fin_block\").click(function(){\n");
	fprintf(f_output,"$(id).slideToggle(\"slow\");});});</script>\n");



	fprintf(f_output, "</head>\n");									// </HEADER>

	//body
	fprintf(f_output, "<body>\n");
	fprintf(f_output, "<div class=\"leftpanel sticky-leftpanel\" >\n");
	fprintf(f_output, "<div class=\"logopanel\" >\n");
	fprintf(f_output, "<h1><span>[</span> Projet <span>]</span></h1>\n");
	fprintf(f_output, "</div>\n");
	fprintf(f_output, "<div class=\"leftpanelinner\">\n");
	fprintf(f_output, "<div class=\"visible-xs hidden-sm hidden-md hidden-lg\">\n");
	fprintf(f_output, "<div class=\"media userlogged\">\n");
	fprintf(f_output, "</div>\n");
	fprintf(f_output, "</div>\n");

	fprintf(f_output, "<h5 class=\"sidebartitle\">Navigation</h5>\n");

	fprintf(f_output, "<ul class=\"nav nav-pills nav-stacked nav-bracket\">\n");
	fprintf(f_output, "<li class=\"active\"><a href=\"#\"><i class=\"fa fa-calendar-o\"></i><span>Page de Présentation</span></a></li>\n");

	// Appel de la fonction qui liste les fichiers d'un dossier
	fprintf(f_output, "</ul>\n");
	fprintf(f_output, "</div>\n");
	fprintf(f_output, "</div>\n");

	fprintf(f_output, "<div class=\" mainpanel\">\n");

	fprintf(f_output, "<div class=\"bordure\">\n");
	fprintf(f_output, "<div class=\"Code\">\n");
	return f_output;

	return f_output;
}

int fermer_html(FILE* fd)
{
	fprintf(fd, "</div>\n");
				fprintf(f_output,"<script> var TOC = document.getElementById(\"TableOfContents\").innerHTML;\n");
    fprintf(f_output,"document.getElementById(\"toc-devant\").innerHTML = TOC;\n");
	fprintf(f_output,"</script>\n");
	fprintf(fd, "</body>\n");
	fprintf(fd, "</html>\n");
	return(fclose(fd)); //close avec flush
}

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
	fprintf(f_output, "<script src=\"http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML\"></script>\n");

}

int main(int argc,char** argv)
{
	int fd=open(argv[1], O_RDONLY);
	dup2(fd, 0);

	create_html(argv[3],argv[2]);
	//assert(argc==2 && "invalide number of argument");

	yyparse(); // On parse l'entree (une seule fois)

	if(fermer_html(f_output))
	{
		perror("fermeture du html\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}
