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
	printf("%3d  ",v[i]);
	}
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
	insertionSort(v,10);
	vetshow(v,10);

}
