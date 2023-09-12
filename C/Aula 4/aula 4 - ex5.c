#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
	int valid=0, x=1, i=0;
	float vlr=0, tot=0, 
	prod=0, pont1=0, pont2=0;
	
	for(i==0; i<=4; i++, x++){
		printf("Produto %i\n\n", x);
		printf("Valor do produto: ");
		scanf("%f", &vlr);
		pont1 = pont1 + vlr;
		system("cls");
	}
	
	system("cls");
	printf("Valor total: %.2f\n\n", pont1);
	system("pause");
	
	x=0;
	system("cls");
	while(valid!=5){
		x = x + 1;
		printf("Valor da conta %i: ", x);
		scanf("%f", &vlr);
		valid = valid + 1;
		pont2 = pont2 + vlr;
	}
	
	tot = pont1+pont2;
	
	system("cls");
	printf("Valor total 1: %.2f\n", pont1);
	printf("Valor total 2: %.2f\n\n", pont2);
	printf("Total a pagar: %.2f", tot);
}
