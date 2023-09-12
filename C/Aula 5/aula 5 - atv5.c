#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int x, md, n, tot;
	
	do{
		printf("Informe um número positivo: ");
		scanf("%i", &n);
		x++;
		tot += n;

	}
	while (n > 0);
	
	tot = tot - 1;
	x = x - 1;
	md = tot/x;
	
	printf("\nUm número negativo foi informado.");

	printf("\nA soma dos números positivos é: %i", tot);
	printf("\nA média dos números positivos é: %i", md);
	printf("\nTotal de números positivos que foram lidos: %i", x);
}
