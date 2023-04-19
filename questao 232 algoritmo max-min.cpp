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

int maxmin(int v[],unsigned int size){
	int max=v[0], min=v[0], res=0;
	
	if(size == 1) return 0;
	else
	for(int i=1; i<size ; i++){
		if(v[i] > max) max = v[i];
		if(v[i] < min) min = v[i];
	}
	
	return (max - min);
}

int main(int argc, char** argv){

	int vetor[20];
	
	vetrand(vetor,20);
	vetshow(vetor,20);
	
	printf("\n\n %d",maxmin(vetor,1));
	
}
