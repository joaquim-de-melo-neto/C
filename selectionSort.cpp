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

void selectionSort(int *v, int size){
	int minIndex, temp;
	for(int i=0;i<size-1;++i){
		minIndex = i;
		for(int j=i+1;j<size;++j) if(v[minIndex]>v[j]) minIndex=j;
	temp = v[i]; v[i]=v[minIndex]; v[minIndex]=temp;	
	}
}

int main(int argc, char** argv){
	int v[10];
	vetrand(v,10);
	vetshow(v,10);
	printf("\n");
	selectionSort(v,10);
	vetshow(v,10);
	

}
