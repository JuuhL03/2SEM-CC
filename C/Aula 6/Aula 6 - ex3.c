#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int n, i=2;
    char resp[100];
    
    printf("Insira um número qualquer: ");
    scanf("%i",&n);
    fflush(stdin);
    
    sprintf(resp,"Números incluídos no intervalo de 1 a %i: ",n);
    
    while(i < n){
    	sprintf(resp, "%s %i", resp, i);
    	i++;
	}
	
	printf("%s\n", resp);
}
