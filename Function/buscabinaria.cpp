#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TAM 21

void Iniciar(int * vet, int size){
	for(int i=0; i<size; i++){
		vet[i]=i;
		printf("%d\n",vet[i]);
	}
}

int BuscaBinaria(int * vet, int x, int size){
	int meio=0, limInf = 0, limSup = size-1;
	
	while(limSup>=limInf){
		meio = (limSup+limInf)/2;
		if(vet[meio] == x) return meio;
		if(vet[meio]<x) limInf = meio+1;
		else limSup = meio-1;
	}
	return -1;
}

int main(int argc, char** argv){
	
	int v[TAM], index, n, controle;
	
	Iniciar(v,TAM);
	
	while(1){
	printf("Informe o valor que deseja buscar: ");
	scanf("%d",&n);
	
	index=BuscaBinaria(v,n,TAM);
	
	if(index ==-1) printf("Valor não encontrado.");
	else printf("%d",index);
	
	printf("\nDeseja continuar?");
	scanf("%d",&controle);
	
	if(controle == 0) break;
	}

}
