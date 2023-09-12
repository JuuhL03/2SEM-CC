#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float peso, tot, pre = 12.00, tl = 0, tv = 7.00;
    int op;
    
    printf("Digite o peso do prato (Kg): ");
    scanf("%f", &peso);
    
    
    printf("\nOpçõess:\n");
    printf("1 - Consumir no local (R$ 0,00)\n");
    printf("2 - Levar para viagem (R$ 7,00)\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &op);
    
    switch (op) {
    	case 1:
            tot = peso * pre + tl;
        break;
        case 2:
            tot = peso * pre + tv;
            break;
        default:
            printf("Opção incorreta");
            return ;
    }
    
    printf("Total: R$ %.2f\n", tot);
    
    return 0;
}

