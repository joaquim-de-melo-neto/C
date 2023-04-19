#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TAM 5

void Iniciar(int * vet, int size){
	
	for(int i=0; i<size; i++){
		
		vet[i]=rand();
		printf("%d\n",vet[i]);
	}
}
int main(int argc, char** argv){
	int v[TAM], t[TAM], res[2*TAM];
	
	Iniciar(v, TAM);
	printf("\n*********************\n");
	Iniciar(t, TAM);
	printf("\n*********************\n");
	
	for(int i=0,j=0,k=0; i<TAM*2; i++){
		if(i%2==0){
		res[i] = v[j++];
		printf("%d\n",res[i]);
		}
		else{
		res[i] = t[k++];
		printf("%d\n",res[i]);
		}
}
}
