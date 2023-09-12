#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	
    
    int op, dia, op2;
    float tot, pag;
    
    printf("\t Menu de Op��es de Quarto: ");
    printf("\n\n1- Quarto Standard - R$ 200,00 a di�ria");
    printf("\n2- Quarto Luxo - R$ 400,00 a di�ria");
    printf("\n3- Quarto Super Luxo - R$ 800,00 a di�ria");
    printf("\n\n\t Insira o n�mero correspondente ao quarto que voc� deseja escolher: ");
    scanf("%i",&op);
    fflush(stdin);
    
    while (op==1 || op==2 || op==3){
    
    system("cls");
    
    printf("Quantas di�rias ser�o? ");
    scanf("%i",&dia);
    fflush(stdin);
    
    system("cls");
    
    switch (op){
    	
    	case 1: //Standard
    		
			tot = 200 * dia;
    		
    		printf("Voc� contratou %i di�rias do Quarto Standard",dia);
    		printf("\nO valor total ser� de R$ %.2f",tot);
    		
    		printf("\n\n\t Menu de pagamento:");
    		printf("\n1- � vista desconto 15%%");
    		printf("\n2- � prazo acr�scimo 25%%");
    		printf("\n3- 2x com acr�scimo de 30%%");
    		printf("\n\n\t Insira a sua op��o de pagamento: ");
    		scanf("%i",&op2);
    		
    		system("cls");
    		
    		if(op2==1){ // Desconto de 15%
    			tot = tot - (tot * 0,15);
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			
    		else if(op2==2){ // Acr�scimo de 25%
    			tot = tot + (tot * 0,25);
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			
    		else if(op2==3){ //2x com acr�scimo de 30%
    			tot = (tot * 0,30)/2;
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			else{
				printf("Op��o inv�lida!");
			}
			
		break;

		case 2: //Luxo
    		
			tot = 400 * dia;
    		
    		printf("Voc� contratou %i di�rias do Quarto Luxo",dia);
    		printf("\nO valor total ser� de R$ %.2f",tot);
    		
    		printf("\n\n\t Menu de pagamento:");
    		printf("\n1- � vista desconto 15%%");
    		printf("\n2- � prazo acr�scimo 25%%");
    		printf("\n3- 2x com acr�scimo de 30%%");
    		printf("\n\n\t Insira a sua op��o de pagamento: ");
    		scanf("%i",&op2);
    		
    		system("cls");
    		
    		if(op2==1){ // Desconto de 15%
    			tot = tot - (tot * 0,15);
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			
    		else if(op2==2){ // Acr�scimo de 25%
    			tot = tot + (tot * 0,25);
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			
    		else if(op2==3){ //2x com acr�scimo de 30%
    			tot = (tot * 0,30)/2;
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
				}
			else{
				printf("Op��o inv�lida!");
			}

			
		break;    	

		case 3: //Super Luxo
    		
			tot = 800 * dia;
    		
    		printf("Voc� contratou %i di�rias do Quarto Super Luxo",dia);
    		printf("\nO valor total ser� de R$ %.2f",tot);
    		
    		printf("\n\n\t Menu de pagamento:");
    		printf("\n1- � vista desconto 15%%");
    		printf("\n2- � prazo acr�scimo 25%%");
    		printf("\n3- 2x com acr�scimo de 30%%");
    		printf("\n\n\t Insira a sua op��o de pagamento: ");
    		scanf("%i",&op2);
    		
    		system("cls");
    		
    		if(op2==1){ // Desconto de 15%
    			tot = tot - (tot * 0,15);
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			
    		else if(op2==2){ // Acr�scimo de 25%
    			tot = tot + (tot * 0,25);
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
			}
			
    		else if(op2==3){ //2x com acr�scimo de 30%
    			tot = (tot * 0,30)/2;
    			
    			printf("O valor total a pagar � de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo � de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido n�o � o suficiente!");
					}
				}
			else{
				printf("Op��o inv�lida!");
			}
			
		break;
		
		default:
			printf("Op��o inv�lida!");
	}
	getchar();
	break;
	} //fechamento do while	

	while (op<1 || op>3){
		printf("\nOp��o inv�lida!");
		break;
	}
}
