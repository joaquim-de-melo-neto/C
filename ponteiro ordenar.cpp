// 12. Fac ̧a um programa que leia tres valores inteiros e chame uma func ̧ ˆ ao que receba estes 3  ̃
//valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel,  ́
//deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
//Exibir os valores ordenados na tela.
#include <stdio.h>
#include <stdlib.h>

#define tam 5

int ordenar(int *ptr){
    int cont=0;
    int aux=0;
    for(int i=0; i<tam-1;i++){
        for(int j=i+1;j<tam;j++){
            if(*(ptr+i) == *(ptr+j)){
                cont++;
                if(cont == tam-1) return 1;
            }
            else if(*(ptr+i) > *(ptr+j)){
            	cont=0;
                aux = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = aux;
            } 
        }
    }
    return 0;
}

int main() {
    // Write C code here
    int v[tam];
    int i=0;
    for(i; i<sizeof(v)/sizeof(int); i++){
        printf("valor %d:",i+1); scanf("%d",(v+i));
    }
    printf("\n\n");
    for(i=0;i<sizeof(v)/sizeof(int); i++){
        printf("valor %d: %d\n",i+1,v[i]);
    }
    ordenar(v);
    printf("\n\n");
    for(i=0;i<sizeof(v)/sizeof(int); i++){
        printf("valor %d: %d\n",i+1,v[i]);
    }

    return 0;
}