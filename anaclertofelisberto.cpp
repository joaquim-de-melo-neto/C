#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct pessoa{
	int altura;
	int taxa_de_crescimento;
} anacleto={150, 2},felisberto={110,3};

int main(int argc, char** argv){//166  134
	int i=1;
	while(1){
		anacleto.altura += anacleto.taxa_de_crescimento;
		felisberto.altura += felisberto.taxa_de_crescimento;
		
		printf("%2d: a%i  f%i\n", i, anacleto.altura, felisberto.altura);
		if(felisberto.altura > anacleto.altura){
			printf("%d",i);
			break;
		}
		i++;
	}


}
