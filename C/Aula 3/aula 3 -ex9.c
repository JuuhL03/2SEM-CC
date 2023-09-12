#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    int i, n, menor;

    for (i = 0; i <= 10; i++) {
        printf("\nNúmero: ");
        scanf("%i", &n);

        if (i == 0 || n < menor) {
            menor = n;
        } 
		
		else {
            break;
        }
    }

    printf("O menor número é: %i", menor);

    return 0;
}
