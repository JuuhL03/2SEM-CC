#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int x, md, n, tot;
	
	do{
		printf("Informe um n�mero positivo: ");
		scanf("%i", &n);
		x++;
		tot += n;

	}
	while (n > 0);
	
	tot = tot - 1;
	x = x - 1;
	md = tot/x;
	
	printf("\nUm n�mero negativo foi informado.");

	printf("\nA soma dos n�meros positivos �: %i", tot);
	printf("\nA m�dia dos n�meros positivos �: %i", md);
	printf("\nTotal de n�meros positivos que foram lidos: %i", x);
}
