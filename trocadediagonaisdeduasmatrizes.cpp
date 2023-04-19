#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TAM 10

void Iniciar(int  v[][TAM], int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			v[i][j] = rand()%10;
		}
	}
}

void Mostrar(int  v[][TAM]){
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			printf("%d  ",v[i][j]);
		}
		printf("\n");
	}
	printf("\n***\n\n");
}


int main(int argc, char** argv){
	int v[TAM][TAM], vv[TAM][TAM], tmp=0;
	
	Iniciar(v, TAM);
	Iniciar(vv, TAM);
	
	Mostrar(v);
	Mostrar(vv);
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			if(i==j){
				tmp = v[i][j];
				v[i][j] = vv[i][TAM-j-1];
				vv[i][TAM-j-1] = tmp;
			}
		}
	}
	
	printf("DEPOIS\n\n");
	Mostrar(v);
	Mostrar(vv);

}
