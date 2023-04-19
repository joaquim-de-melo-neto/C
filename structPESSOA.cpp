#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct{
	char Nome[30];
	int Idade;
	float Salario;
	char Status;
}PESSOA;

void Ler_Pessoa(PESSOA* x){
	printf("Nome: "); gets(x->Nome);
	printf("Idade: "); scanf("%d",&x->Idade);
	printf("Salario: "); scanf("%f",&x->Salario);
	x->Status = ' ';
	fflush(stdin);
}

void Mostrar(PESSOA x){
	printf("%-30s  %3d  %10.2f ",x.Nome, x.Idade, x.Salario);

}

int main(int argc, char** argv){
	PESSOA Joaquim;
	
	Ler_Pessoa(&Joaquim);
	Mostrar(Joaquim);

}
