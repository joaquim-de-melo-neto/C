#include<stdio.h>
#include<stdlib.h>
#include<cstring>

#define MAX_L 80
void Erro_Fatal(int x,char* str){
	switch(x){
		case 1: printf("\n\n Faltam dados no prompt\n\n");
				exit(1);
	}
}

int main(int argc, char** argv){
	FILE* fp=stdin;
	char l[MAX_L + 1];
	int mostra_linhas=0, n_linha=1;
	
	switch(argc){
		case 1: break;
		case 2: if(argv[1]=="-l"){
					mostra_linhas=1;	
				}
				else if((fp=fopen(argv[1],"r"))==NULL){
					Erro_Fatal(1,argv[1]);
				}
				break;
		case 3: if(argv[1][0]!='-') exit(2);
				if(argv[1]!="-l") exit(3);
				mostra_linhas=1;
				if((fp=fopen(argv[2],"r"))==NULL) exit(2);
				break;
	}
	while(fgets(l, MAX_L+1,fp)!=NULL){
		l[strlen(l)-1]='\0';
		if(mostra_linhas == 1){
			printf("%2d: %3d\n", n_linha++, strlen(l));
		}
		else printf("%3d\n", strlen(l));
	}
}