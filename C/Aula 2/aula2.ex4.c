#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	
    
    int cargo;
    float sal, sal2;
    
    printf("Qual é o seu salário atual? ");
    scanf("%f",&sal);
    fflush(stdin);
    
    system("cls");
    
    printf("Menu de Cargos");
    printf("\n1- Analista de Sistemas");
    printf("\n2- Programador");
    printf("\n3- Operador de Sistemas");
    printf("\n\n\tInsira o número correspondente ao seu cargo: ");
    scanf("%i",&cargo);
    fflush(stdin);
    
    system("cls");
    
    switch (cargo){
    	
    	case 1: 
    		sal2 = (sal * 0,10) + 100;
    		printf("O seu salário antigo era de R$ %.2f \nO seu cargo é Analista de Sistemas \nE o novo salário é de R$ %.2f",sal,sal2);
    	break;
    	
    	case 2:
    		sal2 = (sal * 0,15) + 200;
    		printf("O seu salário antigo era de R$ %.2f \nO seu cargo é Programador \nE o novo salário é de R$ %.2f",sal,sal2);
    	
    	case 3:
    		sal2 = (sal * 0,25) + 50;
    		printf("O seu salário antigo era de R$ %.2f \nO seu cargo é Operador de Sistemas \nE o novo salário é de R$ %.2f",sal,sal2);
    	
    	default:
    		printf("Opção inválida!");
    	break;
	}
}
