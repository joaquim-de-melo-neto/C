#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TAM 20

void vetrand(int *v, int size)
{
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%20;
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
	
	int v[TAM],w[TAM], inter[TAM];
	vetrand(v,TAM);
	vetshow(v,TAM);
	vetrand(w,TAM);
	vetshow(w,TAM);
	
	for(int i=0; i<TAM; i++)
	{
		for(int j=0; j<TAM; j++)
		{
			if(v[i] == w[j]) {
				inter[i] = v[i];
			}
		}
	}
}