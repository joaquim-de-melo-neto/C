#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char** argv){
FILE *fp  ;

int v[10];

for(int i=0; i<10; i++){
	printf("Informe o valor para armazenar na posicao %d: ",i);
	scanf("%d",&v[i]);
}

if((fp=fopen("C:\\Users\\J\\OneDrive\\Área de Trabalho\\escrita.dat","wb"))==NULL){
	printf("\nImpossivel abrir arquivo\n");
}

if(fwrite(v,sizeof(int),10,fp)!=10){
	printf("\nLeu o numero errado de elementos.");
}

fclose(fp);

}
