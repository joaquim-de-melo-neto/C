#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/* Pegar salario e dividir despesas de educação 10%, lazer 10%, investimento 20%, ferias 5% */

void linha(){
	printf("\n\n");
}


int main(int argc, char** argv){
	float salario, investimento, educacao, lazer, ferias, restante;
	int opcao = 1;
	
	while(opcao){
	
	printf("Informe seu salario: ");	scanf("%f",&salario);
	
	investimento = 0.2*salario;
	educacao = 0.1*salario;
	lazer = 0.1*salario;
	ferias = 0.05*salario;
	restante = salario - (investimento + educacao + lazer + ferias);
	
	printf("----------------------------------------------------\n");
	
	printf("INVESTIMENTO: %.2f\n",investimento);
	printf("EDUCACAO: %.2f\n",educacao);
	printf("LAZER: %.2f\n",lazer);
	printf("FERIAS: %.2f\n",ferias);
	printf("RESTANTE: %.2f\n",restante);
	
	printf("Deseja continuar?");	scanf("%d",&opcao);
	linha();
	}


}
