#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*Escreva um pequeno programa para testar a função
recursiva MáximoR. O seu programa deve pedir ao usuário que digite uma
sequência de números ou gerar um vetor aleatório (veja Apêndice I).
Importante : Para efeito de testes, acrescente ao seu programa uma função
auxiliar que confira a resposta produzida por MáximoR.*/
int MaximoR (int v[], int n) {

if ( n == 1)
return v[0];
else {
int x;
x = MaximoR ( v, n - 1);
if (x > v[n-1])
return x;
else
return v[n-1];
}
}

int Max(int v[],int n){
	int maior=0;
	for(int i=0;i<n;i++){
		if( v[i]>maior) maior = v[i];
	}
	
	if(maior == MaximoR(v,n)) printf("Bem testado!!!");
	
	return maior;
}

int main(int argc, char** argv){
	int v[10];
	for(int i=0;i<10;i++){
		v[i] = rand();
		printf("%d : %d\n",i,v[i]);
	}
	
	printf("\n\nmaior valor: %d\n\n",MaximoR(v,10));
	Max(v,10);

}
