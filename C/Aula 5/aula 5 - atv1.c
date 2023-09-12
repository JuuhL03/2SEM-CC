#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    
	setlocale(LC_ALL, "Portuguese");
    system("color B");
	
	int n, num = 0;
	float soma = 0;
	
	do{
		printf("Digite um número: ");
		scanf("%i", &num);
		
		if(num <= 0){
			n = 1;
		}
		soma += num;
	}
	while(n == 0);	
		printf("\nA soma de todos esses números informados é: %.2f", soma);
}
