#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){    
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int i, n,dentro,fora;
	
	for(i=1; i<10; i++){
		printf("Informe um número entre 1 e 20: ");
		scanf("%d", &n);
		
		if(n > 20 || n < 1){
			fora++;
		}
		else{
			dentro++;
		}
	}
	
	printf("Números dentro do intervalo(10,20): %i
	\n Números fora do intervalo: %i", dentro, fora);
	
}
