#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
float pot(float x){
	float y;
	y=x*x*x;
	
	return y;
}

int main(int argc, char** argv){
float h=0, m=1;
int i;

for(i=0;i<10;i++){
	if(i==0 || i%2==0){
		h+=1/pot(m);
		m+=2;
	}
	else{
		h-=1/pot(m);
		m+=2;
	}
	printf("%2d: %f\n",i+1,h);
}

}
