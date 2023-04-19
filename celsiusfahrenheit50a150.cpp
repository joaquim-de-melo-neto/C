#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char** argv){
	float c;
for(float f=50; f<=150; f++){
	c=5*(f-32)/9;
	printf("%.2f\n",c);
}

}
