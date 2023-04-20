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
void Intercala(int *v,int p,int s,int t){
	int i,j,k;
	int *w;
	i=p;
	j=s;
	k=0;
	w = (int*)malloc((t-p)*sizeof(int)); // Vetor auxiliar para ordenar os elementos. No fim do código devo cloná-lo em v
	
	while(i<s && j<t) {
		if(v[i]<=v[j]) w[k++]=v[i++];
		else           w[k++]=v[j++];
	}
	// colocar os elementos restantes em w. Somente um desses while irá funcionar.
	while(i<s) w[k++]=v[i++];
	while(j<t) w[k++]=v[j++];
	
	k=0;
	for(i=p;i<t;++i) v[i]=w[k++]; // Clonando valores de w para v
	
	free(w);
}

int insertionSort(int *v, int size){
	int j,x;
	for(int i=1;i<size;++i){
		x=v[i];
		 // verifica se x é menor que v[j]. Se sim, move os elementos uma casa a frente
		for(j=i-1;j>=0 && v[j]>=x;--j) v[j+1]=v[j];
	v[j+1]=x;	
	}
	return ++size;
}

int main(int argc, char** argv){
	int v[10];
	vetrand(v,10);
	vetshow(v,10);
	printf("\n");
	
	// Esses dois insertionSort serviram para orientar as duas metades do vetor.Sem eles o vetor não ficaria orientado
	insertionSort(v,5);
	insertionSort(v+5,5);
	
	Intercala(v,0,5,10);
	vetshow(v,10);
}

