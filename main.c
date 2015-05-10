#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <regex.h>
#include <sys/wait.h>

char* tableau_fichier[20];

int main(int argc, char** argv)
{
	regex_t regexc, regexh,regextex,regexjpg;
	int retic;
	int retih;
	int retitex;
	int retijpg;
	retic = regcomp(&regexc, "[[:alnum:]].c$", 0);
	retih = regcomp(&regexh, "[[:alnum:]].h$", 0);
	retitex =  regcomp(&regextex, "[[:alnum:]].tex$", 0);
	retijpg = regcomp(&regexjpg, "[[:alnum:]].jpg$", 0);
	if(argc != 2)
	{
		fprintf(stderr, "capitaine : nombre d'arguments invalide : %d\n", argc);
		return EXIT_FAILURE;
	}
	struct dirent *lecture;
	DIR *rep ;

	rep = opendir(argv[1]);

	char buf[1024];
	getcwd(buf, sizeof(buf));

	while((lecture = readdir(rep)))
	{
		//Si c'est un '.' ou '..' alors on ne fait rien
		if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, ".."));
		else
		{
			retic = regexec(&regexc, lecture->d_name, 0, NULL, 0);
			retih = regexec(&regexh, lecture->d_name, 0, NULL, 0);
			retitex = regexec(&regextex, lecture->d_name, 0, NULL, 0);
			retijpg = regexec(&regexjpg, lecture->d_name, 0, NULL, 0);
			if( retitex == 0){
				char* path = malloc((strlen(argv[1]) + strlen(lecture->d_name) + 2) * sizeof(char));
				strcpy(path, argv[1]);
				strcat(path, lecture->d_name);

				strcpy(path, argv[1]);
				strcat(path, lecture->d_name);
				if(fork() == 0)
				{
					execl("./tex/main", "main", path, buf, lecture->d_name, (char*)NULL);
					fprintf(stderr, "exec error \n");
					return EXIT_FAILURE;
				}
			}
			else if (! (retic == REG_NOMATCH && retih == REG_NOMATCH))
			{
				if(!(retijpg == REG_NOMATCH));
				else
				{
				char* path = malloc((strlen(argv[1]) + strlen(lecture->d_name) + 2) * sizeof(char));
				strcpy(path, argv[1]);
				strcat(path, lecture->d_name);

				strcpy(path, argv[1]);
				strcat(path, lecture->d_name);
				if(fork() == 0)
				{
					execl("./capitaine", "capitaine", path, buf, lecture->d_name, (char*)NULL);
					fprintf(stderr, "exec error \n");
					return EXIT_FAILURE;
				}
			}
			}
		}
	}

	while(wait(NULL) > 0);
	return 0;
}
