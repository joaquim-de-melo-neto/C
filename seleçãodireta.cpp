#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 20

float v[MAX];

void Troca(float *v1, float *v2){
	float aux=0;
	
	aux = *v2;
	*v2 = *v1;
	*v1 = aux;
}

void Iniciar() {
	for(int i=0; i<MAX; i++) {
		
		v[i] = rand();
		
	}
}
int main(int argc, char** argv) {
	Iniciar();
	for(int i=0; i<MAX; i++){
		printf("%2d: %.2f\n",i, v[i]);
	}
	for(int i=0; i<MAX; i++){
		for(int j=i+1; j<MAX; j++){
			if(v[i] > v[j]) Troca(v+i,v+j);
		}
	}
	puts("\n***********************");
	for(int i=0; i<MAX; i++){
		printf("%2d: %.2f\n",i, v[i]);
	}
	
}