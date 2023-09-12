#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float precos[] = {20.00, 15.00, 25.00, 18.00, 30.00};  
    char nomes[][50] = {"Prato 1", "Prato 2", "Prato 3", "Prato 4", "Prato 5"};  
    int quantidade, codigo, pagamento;
    float total, desconto, pagar;
    
    printf("Card�pio do Restaurante:\n");
    printf("C�digo - Nome do Prato - Pre�o\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s - R$ %.2f\n", i + 1, nomes[i], precos[i]);
    }
    
    printf("Digite o c�digo do prato: ");
    scanf("%d", &codigo);
    
    if (codigo < 1 || codigo > 5) {
        printf("C�digo inv�lido.\n");
        return 0;
    }
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    
    total = precos(codigo - 1)* quantidade;
    
    printf("Op��es de pagamento:\n");
    printf("1 - Cart�o de Cr�dito (+ 5%% de taxa)\n");
    printf("2 - Cart�o de D�bito (+ 3%% de taxa)\n");
    printf("3 - Dinheiro (- 5%% de desconto)\n");
    printf("Escolha uma op��o de pagamento: ");
    scanf("%d", &pagamento);
    
    switch (pagamento) {
        case 1:
            pagar = total * 1.05;
            break;
        case 2:
            pagar = total * 1.03;
            break;
        case 3:
            desconto = total * 0.05;
            pagar = total - desconto;
            break;
        default:
            pagar = total;
            break;
    }
    
    printf("Valor total: R$ %.2f\n", total);
    printf("Valor a pagar: R$ %.2f\n", pagar);
    
    return 0;
}

