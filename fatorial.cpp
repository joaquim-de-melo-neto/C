#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int fatorial(int n){
	if(n<=1) return 1;
	
	else{
	return	n*fatorial(n-1);
	}
	
}

int main(int argc, char** argv) {
	int n;
	for(int i=0; i<10; i++) {

		printf("Informe um valor: ");
		scanf("%d",&n);
		int fat = fatorial(n);

		printf("\n\nFatorial de n é : %d\n",fat);
	}

return 0;

}
