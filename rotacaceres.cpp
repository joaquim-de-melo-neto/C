#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TAM 6


int main(int argc, char** argv){
	
	int a=2, soma=0;
	int mat[TAM][TAM] ={{0,63,210,190,0,190},
						{63,0,160,150,95,0},
						{210,160,0,10,0,0},
						{190,150,10,0,0,0},
						{0,95,0,0,0,80},
						{190,0,0,0,80,0}};
	int rota[]={3,4,2,5,6,1};
	
	for(int i=0; i<TAM; i++){
		soma+=mat[a][rota[i]-1];
		a=rota[i]-1;
	}
	printf("%d",soma);					

}
