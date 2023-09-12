#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    int n;
    float t= 0.0,ced[8];
	
	for(n = 0; n < 8; n++){
		printf("Qual o valor da cédula %i? ", n + 1);
		scanf("%f", &ced[n]);
		
		t += ced[n];
	}
	
	printf("Valor total das cédulas é de: R$ %.2f", t);
	
    return 0;
}

