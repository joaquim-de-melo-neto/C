#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CHAR 80
#define SINAL '-'

int main(int argc, char** argv){
	FILE* fp;
	int n=10,i=0; //atribui 10 para ficar como padrão ---- se i não for iniciado não funiciona
	char s[MAX_CHAR+1]; // coloca-se +1 porque é necessário espaço para /0
	switch(argc){
		case 1: break;
		case 2: if(argv[1][0]==SINAL) n=atoi(argv[1]+1);
				else if((fp=fopen(argv[1],"r")) == NULL) exit(1);
				break;
		case 3: if(argv[1][0]!=SINAL) exit(2);
				else { 
					n=atoi(argv[1]+1);
						if((fp=fopen(argv[2],"r"))==NULL) exit(1);
				}
				break;
		default: exit(3);		
				
	}
	
	while(fgets(s,MAX_CHAR+1,fp) != NULL && i++ < n){
		fputs(s,stdout);
	}
	
	fclose(fp);
	

}
