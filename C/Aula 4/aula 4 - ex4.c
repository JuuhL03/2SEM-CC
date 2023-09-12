#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
	int valid=0, x=0, op=0;
	float vlr=0, tot=0, desc=0, acres=0;
	
	while(valid!=8){
		x = x + 1;
		printf("Produto %i: ", x);
		scanf("%f", &vlr);
		valid = valid + 1;
		tot = tot + vlr;
	}
	system("cls");
	printf("Valor total: %.2f\n\n", tot);
	printf("-------------------------\n\n");
	printf("Menu de opções pagamento");
	printf("\n\n-------------------------\n\n");
	printf("(1) À vista - 10%%\n");
	printf("(2) À prazo + 15%%\n");
	printf("\n\n-------------------------\n\n");
	
	printf("Opção de pagamento: ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			
			desc = tot - (tot*0.1);
			
			system("cls");
			printf("Opção escolhida - 1 A vista");
			printf("\nValor a pagar: %.2f", tot);
			printf("\n\nValor a pagar com desconto: %.2f", desc);
			break;
		case 2:
			acres = tot + (tot*0.15);
			
			system("cls");
			printf("Opção escolhida - 2 A prazo");
			printf("\nValor a pagar: %.2f", tot);
			printf("\n\nValor a pagar com desconto: %.2f", acres);
			break;
		default:
			system("cls");
			printf("Opção errada\n\n");
			return 0;
	}
	return 0;
}
