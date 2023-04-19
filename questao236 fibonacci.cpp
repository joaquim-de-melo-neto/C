#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


/*
FIBONACCI . A sequência de Fibonacci é definida assim: F0 = 0, F1 = 1 e Fn
= Fn–1 + Fn–2 para n > 1. Escreva uma função recursiva que receba n e devolva
Fn. Escreva uma versão iterativa da função. Sua função recursiva é tão eficiente
quanto a iterativa? Por quê?
*/

void fibonacci(int n){
	int atual=1;
	int anterior=1,antecessor = 0;
	for(int i=0; i<n;i++){
		
		printf("%d\n",atual);
		atual = anterior + antecessor;
		antecessor = anterior;
		anterior = atual;
		
	}
}
	
int fibonacci2(int n){
	if(n == 0) return 0;
	if(n < 3) return 1;
	else {
		return fibonacci2(n-1) + fibonacci2(n-2);
	}
	
	
	
	
}	
	
	

int main(int argc, char** argv){

int x;
scanf("%d",&x);
printf("\n");
fibonacci(x);
printf("\n");
printf("\n\n%d",fibonacci2(x));


}
