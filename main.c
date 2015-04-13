#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <regex.h>


char* tableau_fichier[20];




int main(int argc, char** argv)
{
	
regex_t regex;
int reti;
reti = regcomp(&regex, "[[:alnum:]].c", 0);

	
   if (argc!=2)
	return 0;
  struct dirent *lecture;
  DIR *rep ;
   
  rep = opendir(argv[1]);
  
  char buf[1024];
  getcwd(buf,sizeof(buf));
  
  while ((lecture = readdir(rep))) {
     //Si c'est un '.' ou '..' alors on ne fait rien
     if(!strcmp(lecture->d_name, ".") || !strcmp(lecture->d_name, "..")){
     }
     else{
		 reti = regexec(&regex, lecture->d_name, 0, NULL, 0);
		 if(reti == REG_NOMATCH)
		 {
		 }
		 else
		 {
		 char* path=malloc((strlen(argv[1])+strlen(lecture->d_name)+2)*sizeof(char));
		 strcpy(path,argv[1]);
		 strcat(path,lecture->d_name);
		  
		 strcpy(path,argv[1]);
		 strcat(path,lecture->d_name);
		 
		 if (fork()==0)
			execl("./capitaine","capitaine",path,buf,lecture->d_name,0);
		}
	}
	
  }
  while(wait(NULL)>0) 
   return 0;
   
}
