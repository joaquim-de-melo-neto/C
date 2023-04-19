#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

float lg(unsigned int n){
	
	double x = 0; // 
	
	x = log((double)n)/log(2);
	
	return (int)(x);
}

int main(int argc, char** argv){
	unsigned int i=0;
printf("Informe o numero"); scanf("%u",&i);
printf("%f",lg(i));
}
