#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define tam 10

int main(int argc, char** argv){

int v[10]={2,3,4,3,6,2,4,6,3,2}, saida[tam]={0,0,0,0,0,0,0,0,0,0},k=0,l=0,a=0;


for(int i=0;i<9;i++){
	for(int j=i+1;j<10;j++){//2
		if(v[i]==v[j]){
			for( k=0; k<tam;k++){//3
				if(v[i]==saida[k]) break;
			}
			if(k==tam){
			saida[l++]=v[i];
			j=10;
			}
		}
	}
}
while(a<tam) printf("%d\n",saida[a++]);
}
