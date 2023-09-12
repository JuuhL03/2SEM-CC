#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
	int x = 1;
	float md = 0, prod = 0, tot = 0;
	
	do{
		printf("Informe o valor do produto: ");
		scanf("%f", &prod);
		tot += prod;
		x++;
	}
	while(x <= 5);
	md = (tot)/5;
	printf("\nA média dos valores dos produtos informados é: R$%.2f", md);
}
