#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float sal = 0, totsal = 0, medsal=0;
	int funci=0;
	
	do{
		printf("Informe o seu sal�rio, caso n�o seja um funcion�rio digite [0]: ");
		scanf("%f", &sal);
		funci++;
		
		totsal += sal;	
		medsal = totsal/funci;
		
	}
	while(sal != 0);

	funci = funci - 1;
	printf("\n O total de funcion�rios �: %.2f", funci);
	printf("\n O valor total de sal�rio �: R$ %.2f", totsal);
	printf("\n A m�dia salarial da empresa �: R$ %.2f", medsal);
}
