#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
	float peso=0, tot=0, desc=0, result=0;
	int op=0;
  	
  	printf("Digite o peso do produto: ");
  	scanf("%f", &peso);
  	
  	system("cls");
  	
  	if(peso <= 100) {
  		result = peso * 35.90;
	  }
	else if(peso > 100 || peso <= 200) {
		result = peso * 32.99;
	}
	else if(peso > 200) {
		result = peso * 29.99;
	}
	else{
		printf("Peso digitado está incorreto");
	}
  	
  	printf("\nSelecione o pagamento\n");
  	printf("(1) A - 9%% \n");
  	printf("(2) B - 11%% \n");
  	printf("(3) C - 100 \n");
  	printf("Digite a opção: ");
  	scanf("%i", &op);
  	
	switch (op){
    	case 1:
    		desc = result * 0.9;
			tot = result - desc;
    		printf("\nResultado: %.2f", tot);
    		break;
    	
    	case 2:
    		desc = result * 0.11;
			tot = result - desc;
    		printf("\nResultado: %.2f", tot);
    		break;
    
    	case 3:
    		tot = result - 100;
    		printf("\nResultado: %.2f", tot);
    		break;
    					    
    	default:
    		desc = result * 0.05;
    		tot = (result + desc) + 59.99;
    		printf("\nResultado: %.2f", tot);
    		break;
  	}
 
  	getchar();
}
