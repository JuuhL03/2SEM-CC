#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu_pizza(){
	
	printf("\tCard�pio Pizzaria Happy!\n");
	printf("\n1- Calabresa R$ 48,00");
	printf("\n2- Quatro Queijos R$ 52,00");
	printf("\n3- Frango com Catupiry R$ 68,00\n\n");
	
}

int valor_qtd(float a, int b){
	return a * b;
}

int menu_pag(){
	
	printf("\n\n\tOp��es de Pagamento:");
	printf("\n1- Pagamento � vista desconto de 10%%");
	printf("\n2- Pagamento d�bito SEM desconto");
	printf("\n3- Pagamento cr�dito COM acr�scimo de 15%%");
	
}

int valor_troco(float a, float b){
	
	return a - b;
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	
    
    float c=48, q=52, f=68, tot, pag, troco, tot2;
    int sabor, qtd, op;
    
    menu_pizza();
    printf("\nInforme o n�mero correspondente ao sabor escolhido: ");
    scanf("%i",&sabor);
    fflush(stdin);

	printf("\nCerto, e qual ser� a quantidade? ");
	scanf("%i",&qtd);
    
    system("cls");
    
    if(sabor==1){
    	tot = valor_qtd(c, qtd);
		printf("Voc� escolheu o sabor Calabresa \nQuantidade %i \nValor total de R$ %.2f");
	}
	
    else if(sabor==2){
    	tot = valor_qtd(c, qtd);
		printf("Voc� escolheu o sabor Quatro Queijos \nQuantidade %i \nValor total de R$ %.2f");
	}
	
    else if(sabor==3){
    	tot = valor_qtd(c, qtd);
		printf("Voc� escolheu o sabor Frango com Catupiry \nQuantidade %i \nValor total de R$ %.2f");
	}
	
	else{
		printf("Op��o inv�lida!");
		system("exit");
	}
	
   	menu_pag();
   	printf("\nDigite o n�mero correspondente a forma de pagamento escolhida: ");
   	scanf("%i",&op);
   	fflush(stdin);
   	
   	switch(op){
   		
   		case 1:
   			tot2 = tot - (tot * 0,10);
   			printf("\nO total a pagar � de R$ %.2f",tot);
   			printf("\nInsira o valor a ser pago: ");
   			scanf("%f",&pag);
   			
   			if(pag > tot){
   				troco = valor_troco(pag, tot);
   				printf("\nO seu troco � de R$ %.2f",troco);
			   }
			   
			else if(pag == tot){
				printf("\nPagamento efetuado com sucesso!");
				getchar();
			}
			
			else{
				printf("\nValor inserido n�o � o suficiente!");
			}
		break;
		
   		case 2:
   			printf("\nO total a pagar � de R$ %.2f",tot);
   			printf("\nInsira o valor a ser pago: ");
   			scanf("%f",&pag);
   			
   			if(pag > tot){
   				troco = valor_troco(pag, tot);
   				printf("\nO seu troco � de R$ %.2f",troco);
			   }
			   
			else if(pag == tot){
				printf("\nPagamento efetuado com sucesso!");
				getchar();
			}
			
			else{
				printf("\nValor inserido n�o � o suficiente!");
			}
		break;
		
   		case 3:
   			tot2 = tot + (tot * 0,15);
   			printf("\nO total a pagar � de R$ %.2f",tot);
   			printf("\nInsira o valor a ser pago: ");
   			scanf("%f",&pag);
   			
   			if(pag > tot){
   				troco = valor_troco(pag, tot);
   				printf("\nO seu troco � de R$ %.2f",troco);
			   }
			   
			else if(pag == tot){
				printf("\nPagamento efetuado com sucesso!");
				getchar();
			}
			
			else{
				printf("\nValor inserido n�o � o suficiente!");
			}
		break;
		
		default:
			printf("\nOp��o inv�lida!");
		break;
	   }
}
