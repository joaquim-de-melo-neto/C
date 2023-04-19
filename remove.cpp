#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#define MAX 20

int remove(int *v, int index, int size){ // Remove o elemento do índice index e retorna a quantidade total de elementos 
	int j=0;
	for(j=index;j<size-1;j++){
		v[j]=v[j+1];
	}
	return size-1;
}
void vetrand(int *v, int size)
{
	srand(time(NULL));
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%100;
	}
	
}

void vetshow(int *v, int size){
	int i = 0;
	while( i < size ){
		printf("%2d: %d\n",i+1,v[i]);
		i++;
	}
	printf("\n\n");
}
int main(int argc, char** argv){
	
	int vetor[MAX];
	
	vetrand(vetor,MAX);
	vetshow(vetor,MAX);
	
	remove(vetor,10,MAX);
	vetshow(vetor,MAX);
	

}
