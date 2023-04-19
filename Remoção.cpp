#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

// Remove um elemento do vetor no indexador index e retorna a nova quantidade de elementos do vetor
int remove(int v[],int index, int size){
	for(int i=index;i<size-1;i++){
		v[i] = v[i+1];
		
	}
	return size-1;
}

int main(int argc, char** argv){
int vetor[5]={1,2,3,4,5};
int *ptr = vetor;
int i;
while(i<5){
	printf("%d ",vetor[i++]);
}
printf(" \n");
i=0;
int n=remove(vetor,2,5);
ptr = (int*)malloc(n*sizeof(int));

for(int j=0;j<n;j++){
	ptr[j]=vetor[j];
}
while(i<n){
	printf("%d ",ptr[i++]);
}

}
