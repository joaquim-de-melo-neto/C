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

void mergeSort(int *v,int p,int size){
	if(p<size-1){
		int q=(p+size)/2;
		mergeSort(v,p,q);
		mergeSort(v,q,size);
		Intercala(v,p,q,size);
	}
}

int main(int argc, char** argv){
	int v[10];
	vetrand(v,10);
	vetshow(v,10);
	printf("\n");
	mergeSort(v,0,10);
	vetshow(v,10);
}