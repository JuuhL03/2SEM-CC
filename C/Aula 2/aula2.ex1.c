#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int prod_nacional(){
	
	printf("------------------------------BITS&BYTES------------------------------");

	printf("\n\n\t\t Tabela de produtos NACIONAIS: \n");
	printf("\n\t 1- Smartwatch Samsung Galaxy - R$ 848,00 reais");
	printf("\n\t 2- Caixa de Som Multimidia Logitech z607 - R$ 599,99 reais");
	printf("\n\t 3- Roteador TP-Link Archer A6 - R$ 249,99 reais \n\n");

	printf("------------------------------BITS&BYTES------------------------------");

}

int prod_importado(){
	
	printf("------------------------------BITS&BYTES------------------------------");
	
	printf("\n\n\t\t Tabela de produtos IMPORTADOS: \n");
	printf("\n\t 1- Console Sony Playstation 5 - R$ 3.599,91 dólares");
	printf("\n\t 2- Placa de Vídeo RTX 3060 Asus - R$ 1.979,99 dólares");
	printf("\n\t 3- iPhone 14 - R$ 5.299,00 dólares \n\n");

	printf("------------------------------BITS&BYTES------------------------------\n\n\n");

	
}

int dol_real(float a, float b){ 	//Conversão de dólar para real

	return a * b;
	
}

int pagamento(){
	
	printf("------------------------------BITS&BYTES------------------------------");
	
	printf("\n\n\t\t Forma de Pagamento: \n");
	printf("\n\t 1- Pagamento a vista - desconto de 12%% ");
	printf("\n\t 2- Pagamento a prazo - acréscimo de 15%%");
	printf("\n\t 3- Parcela em 6x - acréscimo de 19%% \n\n");
	
	printf("------------------------------BITS&BYTES------------------------------");	
}

int entrega(){
	
	printf("------------------------------BITS&BYTES------------------------------");
	
	printf("\n\n\t\t Forma de Entrega: \n");
	printf("\n\t 1- Entrega expressa - taxa de 11%% ");
	printf("\n\t 2- Entrega convencional - taxa de 5%%");
	printf("\n\t 3- Retirar - taxa de 0%% \n\n");
	
	printf("------------------------------BITS&BYTES------------------------------");	
	
}

int linha(){
	
	printf("------------------------------BITS&BYTES------------------------------");
	
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	


	//produtos nacionais

	prod_nacional();

	int prod, qtd;
	float prod1=848, prod2=599.99, prod3=249.99, b=4.98, tot, tot2;
	float prod4=3599.91, prod5=1979.99, prod6=5299, tot3, tot4;
	float pag;
	int resp2, resp3;
	char resp;
	
	printf("\n\n\t Informe a númeração correspondente ao produto você gostaria de adquirir: ");
	scanf("%i",&prod);
	fflush(stdin);
	
	while(prod <=0 || prod >= 4){
		
		printf("\nOpção de produto inválida!\n\n");
		
		printf("\n\n\t Informe a númeração CORRETA do produto você gostaria de adquirir: ");
		scanf("%i",&prod);
		fflush(stdin);
	}	
	
	printf("\n\t E a quantidade? ");
	scanf("%i",&qtd);
	fflush(stdin);

	while(qtd < 1){
		printf("\nQuantidade inválida!\n\n");
	
		printf("\n\t Informe a quantidade CORRETA: ");
		scanf("%i",&qtd);
		fflush(stdin);		
	}

	if(prod == 1){
		tot = prod1 * qtd;
	}
	else if(prod == 2){
		tot = prod2 * qtd;
	}
	else if(prod == 3){
		tot = prod3 * qtd;
	}
	
	
	printf("\nDeseja adicionar mais algum produto NACIONAL? <S/N> \n\n");
	scanf("%s",&resp);
	fflush(stdin);
	
	
	while(resp == 's' || resp == 'S'){
		
	printf("\n\n\t Informe a númeração correspondente ao produto você gostaria de adquirir: ");
	scanf("%i",&prod);
	
		while(prod <=0 || prod >= 4){
		
			printf("\nOpção de produto inválida!\n\n");
		
			printf("\n\n\t Informe a númeração CORRETA do produto você gostaria de adquirir: ");
			scanf("%i",&prod);
			fflush(stdin);
		}	
	
	printf("\n\t E a quantidade? ");
	scanf("%i",&qtd);
	fflush(stdin);

		while(qtd < 1){
			printf("\nQuantidade inválida!\n\n");
	
			printf("\n\t Informe a quantidade CORRETA: ");
			scanf("%i",&qtd);
			fflush(stdin);		
		}


	if(prod == 1){
		tot2 = prod1 * qtd;
	}
	else if(prod == 2){
		tot2 = prod2 * qtd;
	}
	else if(prod == 3){
		tot2 = prod3 * qtd;
	}
	else{
		printf("\nOpção de produto inválida\n\n!");
	}
	if(qtd <= 0){
		printf("\nQuantidade inválida!\n\n");
	}
	
	printf("\nDeseja adicionar mais algum produto NACIONAL? <S/N> \n\n");
	scanf("%s",&resp);
	fflush(stdin);
		
		tot = tot + tot2;

	} //fim do while
	
	
	if(resp != 'n' && resp != 's'){
		
		printf("\nOpção inválida!\n\n");
		return main();
	}

	printf("\n\n\t Produtos NACIONAIS, valor total R$ %.2f",tot);
	
	system("cls");
	
	
	
	
	//Produtos importados
	
	prod_importado();
	
	printf("\n\n\t Informe a númeração correspondente ao produto você gostaria de adquirir: ");
	scanf("%i",&prod);
	fflush(stdin);
	
	while(prod <= 0 || prod >= 4){
		
		printf("\nOpção de produto inválida!\n\n");
		
		printf("\n\n\t Informe a númeração CORRETA do produto você gostaria de adquirir: ");
		scanf("%i",&prod);
		fflush(stdin);
	}	
	
	printf("\n\t E a quantidade? ");
	scanf("%i",&qtd);
	fflush(stdin);

	while(qtd < 1){
		printf("\nQuantidade inválida!\n\n");
	
		printf("\n\t Informe a quantidade CORRETA: ");
		scanf("%i",&qtd);
		fflush(stdin);		
	}

	if(prod == 1){
		tot3 = prod4 * qtd;
	}
	else if(prod == 2){
		tot3 = prod5 * qtd;
	}
	else if(prod == 3){
		tot3 = prod6 * qtd;
	}
	
	
	printf("\nDeseja adicionar mais algum produto IMPORTADO? <S/N> \n\n");
	scanf("%s",&resp);
	fflush(stdin);
	
	
	while(resp == 's' || resp == 'S'){
		
	printf("\n\n\t Informe a númeração correspondente ao produto você gostaria de adquirir: ");
	scanf("%i",&prod);
	
		while(prod <= 0 || prod >= 4){
		
			printf("\nOpção de produto inválida!\n\n");
		
			printf("\n\n\t Informe a númeração CORRETA do produto você gostaria de adquirir: ");
			scanf("%i",&prod);
			fflush(stdin);
		}	
	
	printf("\n\t E a quantidade? ");
	scanf("%i",&qtd);
	fflush(stdin);

		while(qtd < 1){
			printf("\nQuantidade inválida!\n\n");
	
			printf("\n\t Informe a quantidade CORRETA: ");
			scanf("%i",&qtd);
			fflush(stdin);		
		}


	if(prod == 1){
		tot3 = prod4 * qtd;
	}
	else if(prod == 2){
		tot3 = prod5 * qtd;
	}
	else if(prod == 3){
		tot3 = prod6 * qtd;
	}
	else{
		printf("\nOpção de produto inválida\n\n!");
	}
	if(qtd <= 0){
		printf("\nQuantidade inválida!\n\n");
	}
	
	printf("\nDeseja adicionar mais algum produto IMPORTADO? <S/N> \n\n");
	scanf("%s",&resp);
	fflush(stdin);
		
		tot3 = tot3 + tot4;

	} //fim do while
	
	
	if(resp != 'n' && resp != 's'){
		
		printf("\nOpção inválida!\n\n");
		return main();
	}
	
	tot3 = dol_real(tot3, b); //conversão dólar
	
	system("cls");
	
	linha();
	
	printf("\n\n\t Produtos NACIONAIS, valor total R$ %.2f",tot);
	printf("\n\t Produtos IMPORTADOS, valor total R$ %.2f",tot3);
	
	pag = tot3 + tot;
	
	printf("\n\n\t Valor total a pagar R$ %.2f\n\n",pag);
	
	entrega(); //taxas de entrega
	
	printf("\nInsira a opção correspondente a sua forma de entrega: ");
	scanf("%i",&resp2);
	fflush(stdin);
	
	while(resp2 <= 0 || resp2 >= 4){
		printf("\nInsira CORRETAMENTE a opção correspondente a sua forma de entrega: ");
		scanf("%i",&resp2);
		fflush(stdin);
	}
	
	switch(resp2){
		
		case 1: //acrescimo de 11%
			pag = pag + (pag * 0.11);
		break;
		
		case 2: //acrescimo de 5%
			pag = pag + (pag * 0.5);
		break;
		
		case 3: //sem taxa
			pag = pag;
		break;
		
		default:
			printf("\nOpção inválida");
	}

	pagamento();
	
	printf("\nInsira a opção correspondente a sua forma de pagamento: ");
	scanf("%i",&resp3);
	fflush(stdin);
	
	while(resp2 <= 0 || resp2 >= 4){
		printf("\nInsira CORRETAMENTE a opção correspondente a sua forma de pagamento: ");
		scanf("%i",&resp2);
		fflush(stdin);
	}
	
	switch(resp3){
		
		case 1: //desconto de 12%
			pag = pag - (pag * 0.12);
			printf("\nO valor a ser pago é de R$ %.2f",pag);
		break;
		
		case 2: //acrescimo de 15%
			pag = pag + (pag * 0.15);
			printf("\nO valor a ser pago é de R$ %.2f",pag);
		break;
		
		case 3: //acrescimo de 19%
			pag = (pag * 0.19)/6;
			printf("\nO valor a ser pago é de R$ %.2f",pag);
		break;
		
		default:
			printf("\nOpção inválida");
	}
	
}


