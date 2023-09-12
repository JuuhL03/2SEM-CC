#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    float tot = 0.0;
    for (int i = 1; i <= 8; i++) {
        float prod;
        printf("Digite o preço do produto %d: ", i);
        scanf("%f", &prod);
        tot += prod;
    }

    int pag;
    printf("\nEscolha a forma de pagamento (1 - 5x com 15%% de juros, 2 - 12x com 22%% de juros): ");
    scanf("%d", &pag);

    if (pag == 1) {
        float parcela = tot * 1.15 / 5;
        printf("\nValor total a pagar: %.2f\n", tot);
        printf("Valor da parcela (5x com 15%% de juros): %.2f\n", parcela);
    } else if (pag == 2) {
        float parcela = tot * 1.22 / 12;
        printf("\nValor total a pagar: %.2f\n", tot);
        printf("Valor da parcela (12x com 22%% de juros): %.2f\n", parcela);
    } else {
        printf("\nValor total a pagar: %.2f\n", tot);
        printf("Forma de pagamento errada.\n");
    }

    return 0;
}
