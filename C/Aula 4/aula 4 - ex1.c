#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
	int valid=0, x=0;
	float vlr=0, tot=0, media=0;
	
	while(valid!=5){
		x = x + 1;
		printf("Valor da conta %i: ", x);
		scanf("%f", &vlr);
		valid = valid + 1;
		tot = tot + vlr;
		media = tot/5;
	}
	system("cls");
	printf("Valor total: %.2f\n", tot);
	printf("Media: %.2f", media);
}
