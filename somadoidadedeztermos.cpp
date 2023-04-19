#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char** argv){
float s=0, n=2, m=500;
int i=1;
while(m!=0){
	if(n==2){
		s+=n/m;
		printf("%2d: %f\n",i++,s);
		n=5;
	}
	else{
		s-=n/m;
		printf("%2d: %f\n",i++,s);
		n=2;
	}
	m-=50;
}
}
