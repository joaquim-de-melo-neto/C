/*13. Elabore uma func ao que receba duas strings como par  ̃ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres  ́
das strings.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
#define tam 20

int strstr(char *ptr1, char *ptr2){
	int i=0,j=0;
	int cont=0;

	for(i; i<strlen(ptr1);){
		if(*(ptr1+i) == *(ptr2+j)){
			cont++;
			i++;
			j++;
			if(cont == strlen(ptr2)) return 1;
		}
		else{
			j=0;
			i++;
			cont=0;
		} 	
		}
	return 0;	
	}
	


int main(int argc, char** argv){
	char s1[tam]="banana";
	char s2[tam];
	int op;
	printf("Escreva uma palavra  "); gets(s2);
	
	op = strstr(s1,s2);
	
	switch(op){
		case 0: printf("nao"); break;
		case 1: printf("sim"); break;
	}
	

}
