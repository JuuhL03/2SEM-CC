#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese"); 
	 system("color B");

	int i,n,maior;
	
	for(i=0;i<=10;i++){
		printf("\n Número:");
		scanf("%i", n);
		
		if(n > 10){
			maior++;
		}
		else{
			break;
		}
	}
	
	printf("O maior número é: %i", maior);
}
