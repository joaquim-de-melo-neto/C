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

//	Insere um elemento em um maxheap
void insereHeap(int *v,int m){
	int f=m+1;
	while(f>1 && v[f]>v[f/2]){
		int temp = v[f]; v[f] = v[f/2]; v[f/2] = temp;
		f/=2;
	}
}

//	Ordena uma "QUASE HEAP"
void sacodeHeap(int *v, int m){
	int f=2, temp;
	while(f<=m){
		if(f<m && v[f]<v[f+1]) f++;
		if(v[f]<=v[f/2]) break;
		temp = v[f]; v[f] = v[f/2]; v[f/2] = temp;
		f*=2;
	}
} 

// Ordena o vetor com exceção do primeiro elemento
void heapSort(int *v, int n){
	int m, temp;
	for(m=1;m<n;m++) insereHeap(v,m);
	for(m=n;m>1;m--){
		temp = v[m]; v[m] = v[1]; v[1] = temp;
		sacodeHeap(v,m-1);	
	}
}

void vetshow(int *v, int size){
	for(int i=0;i<size;i++)
	{
	printf("%3d  ",v[i]);
	}
}

int main(int argc, char** argv){
	int v[11] = {300,99,78,84,0,43,23,74,26,1,33};
	vetshow(v,11);
	printf("\n");
	heapSort(v,10);
	vetshow(v,11);
}