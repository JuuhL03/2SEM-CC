#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
	int valid=0, x=0;
	float vlr=0, tot=0, real=0;
	
	while(valid!=8){
		x = x + 1;
		printf("Cédula %i: ", x);
		scanf("%f", &vlr);
		valid = valid + 1;
		tot = tot + vlr;
	}
	real = tot / 5;
	system("cls");
	printf("Valor em dólar: %.2f\n", tot);
	printf("Valor em reais: %.2f", real);
	return 0;
}
