#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");	
	
	int qtd, p, op;
	float res=0, par=0, tot=0, acres=0;
  	
  	printf("Eletrodomésticos à venda:\n");
  	printf("(1) Geladeira -> 10 \n");
  	printf("(2) Tv -> 20\n");
  	printf("(3) Celular -> 100\n");

  	
  	printf("Digite a opcao: ");
  	scanf("%i", &p);
  	printf("Digite a quantidade: ");
  	scanf("%i", &qtd);
  	
  	system("cls");
  	
  	switch(p){
  		case 1:
  			res = 10 * qtd;
  			printf("Total: %.2f\n\n", res);
  			break;
  		
		case 2:
  			res = 20 * qtd;
  			printf("Total: %.2f\n\n", res);
  			break;
  			
		case 3:
  			res = 100 * qtd;
  			printf("Total: %.2f\n\n", res);
  			break;  
  		
		default:
    		printf ("Opção incorreta\n");
    		break;
	  }
	  
  	printf("Formas de pagamento:\n");
  	printf("(1) Parcelado 3x + 0%% \n");
  	printf("(2) Parcelado 6x + 0%% \n");
  	printf("(3) Parcelado 9x + 17%% \n");
  	
  	printf("Digite a opção: ");
  	scanf("%i", &op);
  	
  	system("cls");
  	
  	
	switch (op){
    	case 1:
    		par = res / 3;
    		tot = res;
    		printf("Valor parcelas: %.2f", par);
    		printf("\nResultado: %.2f", tot);
    		break;
    	
    	case 2:
    		par = res / 6;
    		tot = res;
    		printf("Valor parcelas: %.2f", par);
    		printf("\nResultado: %.2f", tot);
    		break;
    
    	case 3:
    		par = res / 9;
    		acres = res * 0.17;
    		tot = res + acres;
    		printf("Valor parcelas: %.2f", par);
    		printf("\nResultado: %.2f", tot);
    		break;
    					    
    	default:
    		printf ("Opção incorreta\n");
    		break;
  	}
 
  	getchar();
  	
  	
  	
}
