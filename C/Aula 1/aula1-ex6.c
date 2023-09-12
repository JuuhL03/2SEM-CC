#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color B");

	int id=0;
	float quantidade=0, preco=0, total=0, desconto=0, pagar=0;

	printf("Digite o ID do produto (1, 2, 3 ou 4): ");
	scanf("%d", &id);

	switch (id) {

	case 1:
	preco = 100.00;
	desconto = 0.15;
	break;

	case 2:
	preco = 150.00;
	desconto = 0.19;
	break;

	case 3:
	preco = 200.00;
	desconto = 0.22;
	break;

	case 4:
	preco = 250.00;
	desconto = 0.25;
	break;

	default:
	printf("O ID inserido está inválido.\n");
	}

	printf("Digite a quantidade: ");
	scanf("%f", &quantidade);

	total = preco * quantidade;
	desconto = total * desconto;
	pagar = total - desconto;

	printf("\nValor total: R$ %.2f\n", total);
	printf("Valor a pagar: R$ %.2f\n", pagar);

}
