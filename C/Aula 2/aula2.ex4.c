#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	
    
    int cargo;
    float sal, sal2;
    
    printf("Qual � o seu sal�rio atual? ");
    scanf("%f",&sal);
    fflush(stdin);
    
    system("cls");
    
    printf("Menu de Cargos");
    printf("\n1- Analista de Sistemas");
    printf("\n2- Programador");
    printf("\n3- Operador de Sistemas");
    printf("\n\n\tInsira o n�mero correspondente ao seu cargo: ");
    scanf("%i",&cargo);
    fflush(stdin);
    
    system("cls");
    
    switch (cargo){
    	
    	case 1: 
    		sal2 = (sal * 0,10) + 100;
    		printf("O seu sal�rio antigo era de R$ %.2f \nO seu cargo � Analista de Sistemas \nE o novo sal�rio � de R$ %.2f",sal,sal2);
    	break;
    	
    	case 2:
    		sal2 = (sal * 0,15) + 200;
    		printf("O seu sal�rio antigo era de R$ %.2f \nO seu cargo � Programador \nE o novo sal�rio � de R$ %.2f",sal,sal2);
    	
    	case 3:
    		sal2 = (sal * 0,25) + 50;
    		printf("O seu sal�rio antigo era de R$ %.2f \nO seu cargo � Operador de Sistemas \nE o novo sal�rio � de R$ %.2f",sal,sal2);
    	
    	default:
    		printf("Op��o inv�lida!");
    	break;
	}
}
