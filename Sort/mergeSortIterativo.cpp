#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

void vetrand(int *v, int size){
	srand(time(NULL));
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%100;
	}
	
}

void vetshow(int *v, int size){
	for(int i=0;i<size;i++)
	{
	printf("%3d  ",v[i]);
	}
}

// Essa função só ordena se as duas metades do vetor estiverem ordenadas
void Intercala(int *v,int p,int s,int size){
	
	int i,j,k;
	int *w;
	i=p;
	j=s;
	k=0;
	w = (int*)malloc((size-p)*sizeof(int)); // Vetor auxiliar para ordenar os elementos. No fim do código devo cloná-lo em v
	
	while(i<s && j<size) {
		if(v[i]<=v[j]) w[k++]=v[i++];
		else           w[k++]=v[j++];
	}
	
	// colocar os elementos restantes em w. Somente um desses while irá funcionar.
	while(i<s) w[k++]=v[i++];
	while(j<size) w[k++]=v[j++];
	
	k=0;
	for(i=p;i<size;++i) v[i]=w[k++]; // Clonando valores de w para v
	
	free(w);
}

void mergeSort(int *v,int size){
	int blockSize;
	int left;
	
	for(blockSize =1; blockSize<size;blockSize*=2){
		
		for(left=0;left<size-1;left+=2*blockSize){
			int mid = left+blockSize-1;
			
			int rigth = ((left+2*blockSize-1)<(size-1))?(left+2*blockSize-1):(size-1);
			Intercala(v,left,mid,rigth);
		}
	}
}

int main(int argc, char** argv){
	int v[10];
	vetrand(v,10);
	vetshow(v,10);
	printf("\n");
	
	// Esses dois insertionSort serviram para orientar as duas metades do vetor.Sem eles o vetor não ficaria orientado
	mergeSort(v,10);
	vetshow(v,10);
}