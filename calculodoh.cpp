#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char** argv){
float h=0;
int n=1, i=1;
for(i; i<=50;i++){
	h+=(n/i);
	n+=2;
}
printf("%f",h);
}
