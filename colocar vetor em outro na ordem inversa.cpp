#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TAM 20

void vetrand(int *v, int size)
{
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%100;
	}
}

void vetshow(int *vet, int size)
{
	for(int i=0;i<size;i++)
	{
	printf("%2d  ",vet[i]);
	}
	printf("\n");
}

int main(int argc, char** argv){
	
	int v[TAM], cont=0, seq =0 ;
	vetrand(v,TAM);
	vetshow(v,TAM);
	for(int i=1;i<TAM;i++)
	{
		if(v[i]>v[i-1]) cont++;
		else if(cont > seq){
			seq = cont;
			cont = 0;
		}
	}
	
	printf("%d",cont);
	
	 
	
}
