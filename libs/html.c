#include "html.h"

void ajouter_attribut(balise b, char* nom, char* val)
{
	if(strcmp(nom, "id")==0)
	{
		b->texte=string_concat_sans_espace(7,b->texte,strdup(" "),strdup(nom),strdup("=\""),strdup(val),strdup("\""),strdup(" "));
		return;
	}
	b->texte=string_concat(5,b->texte,strdup(nom),strdup("=\""),strdup(val),strdup("\" "));
}

void print_fin_balise(struct balise* b)
{
	char* nom=malloc(4+strlen(b->nom));
	strcpy(nom,"</");
	strcat(nom,b->nom);
	b->texte=string_concat(3,b->texte,nom,strdup(">\n"));
}

balise creer_balise(char* nom,char* class)
{
	balise b=malloc(sizeof(*b));
	b->nom=nom;
	b->class=class;

	b->texte=malloc(2+strlen(nom));
	strcpy(b->texte,"<");
	strcat(b->texte,nom);
	return b;
}

/* chaque balise a une classe
 */

balise print_debut_balise(char* nom,char* class)
{
	balise b=creer_balise(nom,class);
	ajouter_attribut(b,"class",b->class);
	return b;
}

balise print_debut_balise_id(char *nom, char* id)
{
	balise b=creer_balise(nom,id);
	ajouter_attribut(b,"id",id);
	return b;
}

int anchor_balise()
{

}

char* print_balise_declaration_struct(char* param){
	balise b=print_debut_balise_id("span", "struct_declaration");
	char* texte=string_concat_sans_espace(6,b->texte,strdup("value=\""),strdup(param),strdup("\">"),param,strdup("</span>\n"));
	free(b);
	return texte;
}

char* print_balise_call_struct(char* param){
	balise b=print_debut_balise_id("span", "struct_call");
	char* texte=string_concat_sans_espace(6,b->texte,strdup("value=\""),strdup(param),strdup("\">"),param,strdup("</span>\n"));
	free(b);
	return texte;
}



char* print_balise_parameter(char* param)
{
	block top_block=(block)stack_top(block_stack);
	char var_id[20];
	sprintf(var_id, "block%d%s", id_block,param);
	balise b=print_debut_balise_id("span", "parameter");
	char* texte=string_concat(6,b->texte,strdup("value=\""),strdup(var_id),strdup("\">"),param,strdup("</span>\n"));
	free(b);
	return texte;
}

char* print_balise_variable(char* var)
{
	block top_block=(block)stack_top(block_stack);
	char* var_id=malloc(strlen(var)+strlen(top_block->id)+1);
	strcpy(var_id,top_block->id);
	strcat(var_id,var);
	balise b=print_debut_balise_id("span", "variable");
	char* texte=string_concat(6,b->texte,strdup("value=\""),var_id,strdup("\">"),var,strdup("</span>\n"));
	free(b);
	return texte;
}
/*
char* print_balise_fonction(char* func){
	balise b=print_debut_balise_id("a", "fonction");
	ajouter_attribut(b,"href","#");
	ajouter_attribut(b,"class","fonction-activable");

	char* texte=string_concat(6,b->texte,strdup("value=\""),strdup(func),strdup("\">"),func,strdup("</a>"));
	free(b);
	return texte;
}
*/
char* print_balise_fonction(char* func)
{
	fprintf(stderr,"func : |%s| \n",func); 
	function f=getFunction(func);
	balise b = print_debut_balise("a","fonction-activable");
	char* hashtag = string_concat_sans_espace(2,strdup("#"),strdup(func));
	ajouter_attribut(b,"href",hashtag);
	char* texte1=string_concat(3,strdup(b->texte),strdup(">"),strdup(func));
	balise b1 = print_debut_balise("span","fonction");
	char* txt;
	if(f && f!=UNNAMED_FUNCTION)
	{
		txt = string_concat(5,texte1,b1->texte,strdup(">"),strdup(print_function(f)),strdup("</a>\n"));
	}
	else
	{
		txt = string_concat(5,texte1,b1->texte,strdup(">"),strdup("tata"),strdup("</span>\n"));
		fprintf(stderr,"coucou buggé\n");

	}
	free(b);
	free(b1);

	return txt;

}

char* print_balise_declaration(char* func)
{
	balise b=print_debut_balise_id("span", func);
	ajouter_attribut(b,"href","#");
	ajouter_attribut(b,"class","declaration-activable");

	char* texte=string_concat_sans_espace(6,b->texte,strdup("value=\""),strdup(func),strdup("\">"),func,strdup("</span>\n"));
	free(b);
	return texte;
}

char* print_debut_balise_block()
{
	block top_block=(block)stack_top(block_stack);
	balise b=print_debut_balise_id("div", top_block->id);


	char anchor[80];
	sprintf(anchor,"><span name=\"%s\">", top_block->id);
	char* concat =string_concat_sans_espace(2,strdup("#"),strdup(top_block->id));
	char aref[150];
	sprintf(aref,"<a style=\"text_decoration:none;\" class =\"fin_block\"  value=\"%s\" href=\"#\"><i class=\"fa fa-caret-square-o-down\" href=\"#\"></i></a>\n",concat);
	char* texte=string_concat(4,strdup(print_balise_span("vert","{")),strdup(aref),strdup(b->texte),strdup(anchor));
	free(b);
	return texte;
}

char* print_fin_balise_block()
{
	block top_block=(block)stack_top(block_stack);
	char aref[80];
	char* concat =string_concat_sans_espace(2,strdup("#"),strdup(top_block->id));
	sprintf(aref,"<span  value=\"%s\">",concat);
	return string_concat(4,strdup(aref),strdup("</div>"),print_balise_span("vert","}"),strdup("</span>\n"));
}

void push_to_html(char* texte)
{
	fprintf(f_output,"%s",texte);
}

//~
//~ /* Crée une balise autour d'un identifiant.
//~ * Son id est
//~ * pour une variable : <id_block><nom_variable>
//~ * pour une fonction : <nom_de_la_fonction>
//~ *
//~ */
//~ char* print_balise_identifier(char* name){
//~ //Construction de l'id :
//~ char* id;
//~ char* class;
//~ function f=getFunction(name);
//~
//~ if (f){ // Soit f vaut UNNAMED_FUNCTION , soit f est une fonction
//~ if (f==UNNAMED_FUNCTION){
//~ fprintf(stderr,"UNNAMED");
//~ }
//~ id=name;
//~ class="fonction";
//~ }
//~ else{
//~ variable v=getVariable(name);
//~ if(v){
//~ id=v->id;
//~ class="variable";
//~ }
//~ else{
//~ id=create_name_id(name);
//~ class="variable";
//~ }
//~ }
//~
//~ //Ecriture de la base <span class=... id=...> name </span>
//~ fprintf(f_output,"<span href=\"#\"class=\"%s-activable\">",class);
//~ fprintf(f_output,"%s",name);
//~ balise b=print_debut_balise("span",class);
//~ fprintf(f_output," value=\"%s\" ",id);
//~ print_fin_debut_balise();
//~ if(f && f!=UNNAMED_FUNCTION){
//~ print_function_html(f);
//~ }
//~ else
//~ {
//~ fprintf(f_output,"je suis une variable toute mignonne");
//~
//~ }
//~ print_fin_balise(b);
//~ fprintf(f_output,"</span>");
//~ printf("print--- \n");
//~ print_variables();
//~ print_functions();
//~ printf("print--- \n");
//~ }

char* print_balise_span(char* type, char* param)
{
	balise b=print_debut_balise("span",type);
	b->texte=string_concat(3,b->texte,strdup(">"),strdup(param));
	print_fin_balise(b);
	char* texte=b->texte;
	free(b);
	return texte;
}
