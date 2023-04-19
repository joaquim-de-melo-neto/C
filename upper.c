#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char** argv){
	
	FILE * fp;
	int ch;
	
	switch(argc){
		case 1: fp=stdin; break; 
		case 2: if((fopen(argv[1],"r"))==NULL){
					fprintf(stderr,"Impossível ler o arquivo %s\n",argv[1]);
					exit(1);
				} 
				break;
		default:fprintf(stderr,"Sintaxe:\n\n%s [arquivo]\n",argv[0]);
				exit(2);		
	}
	while((ch=fgetc(fp))!=EOF){
		putchar(toupper(ch));
	}
	fclose(fp);
		
	}
