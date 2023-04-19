#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define tam 30

 int n=0; // indexador fixo e contador da lista  

typedef struct pessoa{
    char nome[tam];
    char endereco[tam];
    int cadastro;
    int idade;
    float peso;
    float altura;
} PACIENTE;

void iniciar(PACIENTE * ptr){
	
	for(int i=0;i<tam;i++){
		strcpy((ptr+i)->nome,"*");
		strcpy((ptr+i)->endereco,"*");
		(ptr+i)->cadastro = 0;
		(ptr+i)->idade = 0;
		(ptr+i)->peso = 0;
		(ptr+i)->altura = 0.;
	}
}

void mostrar(PACIENTE * ptr){
	
	printf("\n\nLISTA DE PACIENTES \n");
	
	for(int i=0;i<n;i++){
	
	printf("CADASTRO: %d\n",(ptr+i)->cadastro); 
    printf("NOME: %s\n",(ptr+i)->nome); 
    printf("IDADE: %d\n",(ptr+i)->idade); 
    printf("PESO: %.2f\n",(ptr+i)->peso); 
    printf("ALTURA: %.2f\n",(ptr+i)->altura); 
    printf("ENDERECO: %s\n\n",(ptr+i)->endereco);
    
	}
}

void cadastrar(PACIENTE * ptr){
    
    printf("\n\nCADASTRO DE PACIENTE \n");
    printf("NOME: "); fflush(stdin); gets(ptr->nome);
    printf("IDADE: "); fflush(stdin); scanf("%d",&ptr->idade);
    printf("PESO: "); fflush(stdin); scanf("%f",&ptr->peso);
    printf("ALTURA: "); fflush(stdin); scanf("%f",&ptr->altura);
    printf("ENDERECO: "); fflush(stdin); gets(ptr->endereco);
    
    system("pause");
	system("cls");
    
    ptr->cadastro=n+1;
    n++;
    
}

void modificar(PACIENTE * ptr){
	
   printf("NOME:"); fflush(stdin); gets(ptr->nome);
   printf("IDADE: "); fflush(stdin); scanf("%d",&ptr->idade);
   printf("PESO: "); fflush(stdin); scanf("%f",&ptr->peso);
   printf("ALTURA: "); fflush(stdin); scanf("%f",&ptr->altura);
   printf("ENDERECO: "); fflush(stdin); gets(ptr->endereco);
   
   system("pause");
   system("cls");
       
}

void apagar(PACIENTE * ptr,int cad){
    
    int i = 0;    
    for(i; cad <= n; i++, cad++){
        strcpy((ptr+i)->nome,(ptr+i+1)->nome);
        strcpy((ptr+i)->endereco,(ptr+i+1)->endereco);
        (ptr+i)->idade = (ptr+i+1)->idade;
        (ptr+i)->peso = (ptr+i+1)->peso;
        (ptr+i)->altura = (ptr+i+1)->altura;
    }
    
    n--;
    
    system("pause");
    system("cls");
}

void media_idade(PACIENTE * ptr){
	
	float soma = 0;
	float media = 0;
	
	for(int i=0;i<n;i++){
		
		soma += (ptr+i)->idade;
	}
	
	media = soma / n;
	
	printf("\n\nMEDIA DAS IDADES: %.2f\n\n", media);
}

void menores(PACIENTE * ptr){
	
	int cont=0;
	
	for(int i=0;i<n;i++){
		
		if((ptr+i)->idade < 18) cont++;
		
	}
	
	printf("\n\nMENORES DE IDADE: %d\n\n", cont);
	
}

void idosos(PACIENTE * ptr){
	
	int cont=0;
	
	for(int i=0;i<n;i++){
		
		if((ptr+i)->idade > 60) cont++;
		
	}
	
	printf("\nIDOSOS +60: %d\n\n", cont);
}

int main() {
    
    PACIENTE paciente[tam];
    int opcao = 0, w=1 , cad=0;
    
    iniciar(paciente);
    
    while(w){
    printf("Menu\n");
    printf("0 - LISTAR\n");
    printf("1 - CADASTRAR\n");
    printf("2 - MODIFICAR\n");
    printf("3 - APAGAR\n");
    printf("4 - QUANTIDADE TOTAL\n");
    printf("5 - MEDIA DE IDADE\n");
    printf("6 - MENORES\n");
    printf("7 - IDOSOS\n");
    printf("8 - SAIR\n");
    printf("OPCAO: "); scanf("%d",&opcao);
    
    switch(opcao){
    	case 0:
    		mostrar(paciente);
    		break;
        case 1: 
	        cadastrar(&paciente[n]);
	        break;
        case 2:
        	mostrar(paciente);
	        printf("\n\nMODIFICAR PACIENTE\nINFORME O CADASTRO DO PACIENTE: "); scanf("%d",&cad);
	        modificar(&paciente[cad-1]);
        	break;
        case 3:
        	mostrar(paciente);
	        printf("APAGAR PACIENTE\nINFORME O CADASTRO DO PACIENTE: "); scanf("%d",&cad);
	        apagar(&paciente[cad-1],cad);
	        system("cls");
	        break;
	    case 4: // PACIENTES CADASTRADOS
			printf("\n\nTOTAL DE PACIENTES CADASTRADOS: %d\n\n", n);
			system("pause");
			system("cls");
			break;
		case 5: // INFORMAR MÉDIA DE IDADE DOS PACIENTES
			media_idade(paciente);
			system("pause");
			system("cls");
			break;
		case 6: // INFORMAR QUANTIDADE DE PACIENTES MENORES DE IDADE
			menores(paciente);	
			system("pause");
			system("cls");
			break;
		case 7: // INFORMAR QUANTIDADE DE PACIENTES IDOSOS > 60
			idosos(paciente);
			system("pause");
			system("cls");
			break;
		case 8:	
			w = 0;
			break;
		default:
			printf("\n\nOPCAO INVALIDA.\n\n");		
    }
    }

    return 0;
}