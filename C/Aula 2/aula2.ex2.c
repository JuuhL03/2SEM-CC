#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	
    
    int op, dia, op2;
    float tot, pag;
    
    printf("\t Menu de Opções de Quarto: ");
    printf("\n\n1- Quarto Standard - R$ 200,00 a diária");
    printf("\n2- Quarto Luxo - R$ 400,00 a diária");
    printf("\n3- Quarto Super Luxo - R$ 800,00 a diária");
    printf("\n\n\t Insira o número correspondente ao quarto que você deseja escolher: ");
    scanf("%i",&op);
    fflush(stdin);
    
    while (op==1 || op==2 || op==3){
    
    system("cls");
    
    printf("Quantas diárias serão? ");
    scanf("%i",&dia);
    fflush(stdin);
    
    system("cls");
    
    switch (op){
    	
    	case 1: //Standard
    		
			tot = 200 * dia;
    		
    		printf("Você contratou %i diárias do Quarto Standard",dia);
    		printf("\nO valor total será de R$ %.2f",tot);
    		
    		printf("\n\n\t Menu de pagamento:");
    		printf("\n1- À vista desconto 15%%");
    		printf("\n2- À prazo acréscimo 25%%");
    		printf("\n3- 2x com acréscimo de 30%%");
    		printf("\n\n\t Insira a sua opção de pagamento: ");
    		scanf("%i",&op2);
    		
    		system("cls");
    		
    		if(op2==1){ // Desconto de 15%
    			tot = tot - (tot * 0,15);
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			
    		else if(op2==2){ // Acréscimo de 25%
    			tot = tot + (tot * 0,25);
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			
    		else if(op2==3){ //2x com acréscimo de 30%
    			tot = (tot * 0,30)/2;
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			else{
				printf("Opção inválida!");
			}
			
		break;

		case 2: //Luxo
    		
			tot = 400 * dia;
    		
    		printf("Você contratou %i diárias do Quarto Luxo",dia);
    		printf("\nO valor total será de R$ %.2f",tot);
    		
    		printf("\n\n\t Menu de pagamento:");
    		printf("\n1- À vista desconto 15%%");
    		printf("\n2- À prazo acréscimo 25%%");
    		printf("\n3- 2x com acréscimo de 30%%");
    		printf("\n\n\t Insira a sua opção de pagamento: ");
    		scanf("%i",&op2);
    		
    		system("cls");
    		
    		if(op2==1){ // Desconto de 15%
    			tot = tot - (tot * 0,15);
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			
    		else if(op2==2){ // Acréscimo de 25%
    			tot = tot + (tot * 0,25);
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			
    		else if(op2==3){ //2x com acréscimo de 30%
    			tot = (tot * 0,30)/2;
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
				}
			else{
				printf("Opção inválida!");
			}

			
		break;    	

		case 3: //Super Luxo
    		
			tot = 800 * dia;
    		
    		printf("Você contratou %i diárias do Quarto Super Luxo",dia);
    		printf("\nO valor total será de R$ %.2f",tot);
    		
    		printf("\n\n\t Menu de pagamento:");
    		printf("\n1- À vista desconto 15%%");
    		printf("\n2- À prazo acréscimo 25%%");
    		printf("\n3- 2x com acréscimo de 30%%");
    		printf("\n\n\t Insira a sua opção de pagamento: ");
    		scanf("%i",&op2);
    		
    		system("cls");
    		
    		if(op2==1){ // Desconto de 15%
    			tot = tot - (tot * 0,15);
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			
    		else if(op2==2){ // Acréscimo de 25%
    			tot = tot + (tot * 0,25);
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
			}
			
    		else if(op2==3){ //2x com acréscimo de 30%
    			tot = (tot * 0,30)/2;
    			
    			printf("O valor total a pagar é de R$ %.2f",tot);
    			printf("\nInsira o valor a ser pago: ");
    			scanf("%f",&pag);
    			
    				if (pag >= tot){
    					pag = pag - tot;
    					printf("\nObrigado! Agora o seu saldo é de R$ %.2f",pag);
					}
					else{
						printf("\nOps! O valor inserido não é o suficiente!");
					}
				}
			else{
				printf("Opção inválida!");
			}
			
		break;
		
		default:
			printf("Opção inválida!");
	}
	getchar();
	break;
	} //fechamento do while	

	while (op<1 || op>3){
		printf("\nOpção inválida!");
		break;
	}
}
