#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    int c, x, y, prod;
    float p, ptot = 0.0;

    printf("\nInsira a quantidade de clientes a serem atendidos: ");
    scanf("%i", &c);
    fflush(stdin);

	if(c == 0){
		x=1;
	
	    while (x < c) {
        	printf("\nInsira quantos produtos deseja comprar: ");
        	scanf("%i", &prod);
        	fflush(stdin);
       		x++;

        	while (y <= prod) {
            	printf("\nInsira o preço dos produtos: R$ ");
            	scanf("%f", &p);
            	fflush(stdin);

            	ptot = ptot + p;
            	y++;
        	}

        	y = 1;
		}

  	printf("\n\n\tValor total igual a R$: %.2f", ptot);
	getchar();
	}
	
	else{
		while (x < c) {
        	printf("\nInsira quantos produtos deseja comprar: ");
        	scanf("%i", &prod);
        	fflush(stdin);
       		x++;

        	while (y <= prod) {
            	printf("\nInsira o preço dos produtos: R$ ");
            	scanf("%f", &p);
            	fflush(stdin);

            	ptot = ptot + p;
            	y++;
        	}

        	y = 1;
		}
	}
	printf("\n\n\tValor total igual a R$: %.2f", ptot);
	getchar();
}
