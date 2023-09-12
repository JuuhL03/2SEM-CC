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
    
    printf("Cardápio do Restaurante:\n");
    printf("Código - Nome do Prato - Preço\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s - R$ %.2f\n", i + 1, nomes[i], precos[i]);
    }
    
    printf("Digite o código do prato: ");
    scanf("%d", &codigo);
    
    if (codigo < 1 || codigo > 5) {
        printf("Código inválido.\n");
        return 0;
    }
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    
    total = precos(codigo - 1)* quantidade;
    
    printf("Opções de pagamento:\n");
    printf("1 - Cartão de Crédito (+ 5%% de taxa)\n");
    printf("2 - Cartão de Débito (+ 3%% de taxa)\n");
    printf("3 - Dinheiro (- 5%% de desconto)\n");
    printf("Escolha uma opção de pagamento: ");
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

