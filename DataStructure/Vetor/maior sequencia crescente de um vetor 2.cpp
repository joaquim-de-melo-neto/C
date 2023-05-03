#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

#define tam 20

void vetrand(int *v, int size)
{
	srand(time(NULL));
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%100;
	}
	
}

void vetshow(int *v, int size)
{
	for(int i=0;i<size;i++)
	{
	printf("%3d ",v[i]);
	}
	printf("\n\n");
}


int main(int argc, char** argv){
	int vet[tam];
	int cont=1, maior=0, index=0;
	
	vetrand(vet,tam);
	
	vetshow(vet,tam);
	
	for(int i=1;i<tam;i++){
		if(vet[i-1]<vet[i]){
			cont++;
			if(cont>maior){
				index = i - maior;
				maior = cont;
			}
		}
		else cont=1;
	}
	
	printf("A maior sequencia e: %d\n",maior);
	printf("E comeca no index %d",index);
}
