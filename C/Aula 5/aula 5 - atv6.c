#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int vlr, ma, me;

    printf("Digite um valor positivo (ou um valor negativo para sair): ");
    scanf("%d", &vlr);

    if (vlr < 0){
        printf("Nenhum valor positivo foi inserido.");
        return 0;

    }
    ma = vlr;
    me = vlr;

    do{
        printf("Digite um valor positivo (ou um valor negativo para sair): ");
        scanf("%d", &vlr);

        if (vlr >= 0){
            if (vlr > ma){
			   ma = vlr;
            }
            else if (vlr < me){
                me = vlr;
            }
        }
        
    }//fim do
    while (vlr >= 0);

    printf("\nO maior valor informado: %d", ma);
    printf("\nO menor valor informado: %d", me);
}
