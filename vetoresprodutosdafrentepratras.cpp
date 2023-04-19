#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
float v1[20], v2[20];
float vcalc[20];

void Iniciar() {
	for(int i=0; i<20; i++) {
		
		v1[i] = rand();
		v2[i] = rand();
		
	}
}
int main(int argc, char** argv) {
	Iniciar();
	for(int i=9; i<20; i++){
		vcalc[i] = v1[i] * (1/v2[i]);
		printf("%2d - %.2f * %.2f = %.2f\n", i,v1[i],v2[i],vcalc[i]);
		if(i==19) i=-1;
		if(i==8) break;
	}

}
