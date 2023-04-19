#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char** argv) {

	long long int n=1;

	for(int i=1; i<=64; i++) {
		if(i==1) printf("%2d: %lld\n",i,n);
		else {
			n*=2;
			printf("%2d: %lld\n",i,n);
		}
	}
}
