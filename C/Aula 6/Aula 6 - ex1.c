#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int p=2, i=1, n=1;
    char resul[100];


	sprintf(resul,"Números pares inclusos no intervalo de 1 a 10: ");

    for(p == 2; p <= 10; p = p + 2){	
		sprintf(resul, "%s %i", resul, p);
	}
	printf("%s\n", resul);
	
	
	sprintf(resul,"Números ímpares inclusos no intervalo de 1 a 10: ");	
	
	while(i >= 1 && i <= 10){
		
		i = i + 2;				
		sprintf(resul, "%s %i", resul, i);
	}
	printf("%s\n", resul);
		
		
	sprintf(resul,"Números pares inclusos no intervalo de 1 a 10: ");
		
	do{	
 		sprintf(resul, "%s %i", resul, n);
		n++;	
	}
	while(n == 1 && n <= 10);
	printf("%s", resul);
}

