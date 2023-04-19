#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define N_STRING 3
int main(int argc, char** argv){

	char vetor[N_STRING][20]={"ola","antony","susana"};
	char (*ptr)[20]=vetor;
	
	char *p;
	
	while(ptr-vetor<N_STRING){
		p=*ptr;
		while(*p)
		 putchar(*p++);
		putchar('\n');
		ptr++;
	}


}
