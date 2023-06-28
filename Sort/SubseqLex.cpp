#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int count =0;
void imprima(int *v, int k){
	
		for(int i=1;i<=k;i++){
			
		printf("%d  ",*(v+i));
		}
	printf("\n");
	count++;
}
/* imprime todas os subconjuntos com exceção do vazio*/
void SubseqLex (int n) {
	int *s, k;
	s = (int*)malloc ((n+1) * sizeof (int));
	s[0] =0; k = 0;
	while (1) {
		if (s[k] < n) {
			s[k+1] = s[k] +1;
			k += 1;
		} else {
			s[k-1] += 1;
			k -= 1;
		}
		if (k == 0) break;
			imprima (s, k);
		}
	free (s);
	}
	
	int main(int argc, char** argv){
	SubseqLex(7);
	printf("contador: %d",count);

}
