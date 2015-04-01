#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


FILE* create_html(char* titre){
	FILE* fd=fopen("index.html","w+");
	
	fprintf(fd,"<!doctype html>");
	fprintf(fd,"<html lang=\"fr\">");
	fprintf(fd,"<head>");								//<HEADER>
	fprintf(fd,"   <meta charset=\"utf-8\">");
	fprintf(fd,"   <title>%s</title>",titre);
	fprintf(fd,"   <!doctype html>");
	fprintf(fd,"</head>");								// </HEADER>
	
	return fd;
}

int main(){
	create_html("test");
	
}
