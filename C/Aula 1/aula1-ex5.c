#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
	int qtd=0, p=0, op=0;
	float result=0, tot=0, desc=0;
  	
  	printf("Cardápio de bebidas");
  	printf("\n(1) Laranja = 10 \n");
  	printf("(2) Limao = 20\n");
  	printf("(3) = 100\n");
  	
  	printf("Digite a opção: ");
  	scanf("%i", &p);
  	printf("Agora, a quantidade: ");
  	scanf("%i", &qtd);
  	
  	switch(p){
  		case 1:
  			result = 10 * qtd;
  			printf("\nTotal: %.2f\n\n", result);
  			break;
  		
		case 2:
  			result = 20 * qtd;
  			printf("\nTotal: %.2f\n\n", result);
  			break;
  			
		case 3:
  			result = 100 * qtd;
  			printf("\nTotal: %.2f\n\n", result);
  			break;  
  		
		default:
    		printf ("Opção incorreta\n");
    		break;
	  }
	  
  	printf("Formas de pagamento\n");
  	printf("(1) Dinherio - 10%% \n");
  	printf("(2) Debito - 5%% \n");
  	printf("(3) Credito + 10%% \n");  	
  	printf("Digite a opcao: ");
  	scanf("%i", &op);
  	
  	system("cls");
  	
  	
	switch (op){
    	case 1:
    		desc = result * 0.1;
			tot = result - desc;
    		printf("\nResultado: %.2f", tot);
    		break;
    	
    	case 2:
    		desc = result * 0.05;
			tot = result - desc;
    		printf("\nResultado: %.2f", tot);
    		break;
    
    	case 3:
    		desc = result * 0.1;
    		tot = result + desc;
    		printf("\nResultado: %.2f", tot);
    		break;
    					    
    	default:
    		printf ("Opção incorreta!\n");
    		break;
  	}
 
  	getchar();
}
