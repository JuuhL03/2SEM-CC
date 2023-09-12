#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
	int i=0, x=0, peso=0, maior=0;
    
    while(i<=4) {
    	x = x+1;
    	printf("Pessoa %i\n\n", x);
        printf("Peso da pessoa ");
        scanf("%i", &peso);
        i = i + 1;
        system("cls");
        	if(peso > maior){
        		maior = peso;
			}
    }
    system("cls");
	printf("Maior peso: %i", maior);
	
    return 0;
}

