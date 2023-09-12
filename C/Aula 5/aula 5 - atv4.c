#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float sal = 0, totsal = 0, medsal=0;
	int funci=0;
	
	do{
		printf("Informe o seu salário, caso não seja um funcionário digite [0]: ");
		scanf("%f", &sal);
		funci++;
		
		totsal += sal;	
		medsal = totsal/funci;
		
	}
	while(sal != 0);

	funci = funci - 1;
	printf("\n O total de funcionários é: %.2f", funci);
	printf("\n O valor total de salário é: R$ %.2f", totsal);
	printf("\n A média salarial da empresa é: R$ %.2f", medsal);
}
