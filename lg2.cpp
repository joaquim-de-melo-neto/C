#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

/*
2.3.5 PISO DE LOGARITMO . Escreva uma fun��o recursiva que calcule log2 n , ou
seja, o piso do logaritmo de n na base 2. (Veja Exerc�cio 1.2.4.)
*/

int lg2(unsigned int n){
	int res=0;
	
	res = log(n)/log(2);
	
	return res;
}
int main(int argc, char** argv){
	
	unsigned x = 0;
	printf("Informe um inteiro: "); scanf("%d",&x);
	
	printf("%d",lg2(x));

}
