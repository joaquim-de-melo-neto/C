#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

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
	printf("%3d  \n",v[i]);
	}
}

int somapositiva(int *v,int size){
	// igualei soma a v[0] para quando retornar sempre o primeiro valor do vetor de cada chamada
	int soma = v[0];
	
	if(size == 1 && v[0] >= 0) return soma; // base case
	else if( v[0] < 0) return 0; // para valores negativos
	else{
		soma+=somapositiva(v+1,size-1); // recursive case
	}
	return soma;
	
	/*
	int soma(int v[], int size){
		if(size == 0) return 0;
		else{
			int s = soma(v, size - 1);
			if(v[size - 1] > 0) s += v[size - 1];
			return s;
		}
	}
	*/
}
int main(int argc, char** argv){
	int vetor[5];
	
	vetrand(vetor,5);
	vetshow(vetor,5);
	
	printf("\n\n%d",somapositiva(vetor,5));

}
