#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
	int valid=0, x=0;
	float vlr=0, tot=0, acres=0;
	
	while(valid!=3){
		x = x + 1;
		printf("Valor da conta %i: ", x);
		scanf("%f", &vlr);
		valid = valid + 1;
		tot = tot + vlr;
		acres = tot+(tot*0.15);
	}
	system("cls");
	printf("Valor total: %.2f\n", tot);
	printf("Valor com acréscimo: %.2f", acres);
}
