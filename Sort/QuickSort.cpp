#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


void vetshow(int *v, int size){
	for(int i=0;i<size;i++)
	{
	printf("%3d  ",v[i]);
	}
}

/* Recebe um vetor v[p..r] com p <= r. Rearranja os
* elementos do vetor e devolve j em p..r tal que
* v[p..j-1] <=[j] < v[j+1..r].*/
int Separa (int p, int r, int v[]) {
	int valor_pivot, j, k, temp;
	valor_pivot = v[r] ; 
	j = p;
	for (k = p;  k < r; k++){
		if (v[k] <= valor_pivot) {
			temp = v[j], v[j] = v[k], v[k] = temp;
			j++;
		}
	}
	vetshow(v,p+1); 
	printf("\n");
	v[r] = v[j], v[j] = valor_pivot;
	return j;
}

/* Esta função rearranja o vetor ?[p..r], com p <= r+1,
* de modo que ele fique em ordem crescente. */
void Quicksort (int p, int r, int v[]) {
	int j;
	if (p < r) {
		j = Separa (p, r, v);
		Quicksort (p, j - 1, v);
		Quicksort( j + 1, r, v);
	}
}

int main(int argc, char** argv){
	int v[11] = {50,99,78,84,0,43,23,74,26,1,33};
	vetshow(v,11);
	printf("\n");
	Quicksort(0,10,v);
	vetshow(v,11);
}