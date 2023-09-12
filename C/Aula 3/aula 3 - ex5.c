#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

	int n;
	
	for(n = 0; n < 21; n = n + 2){
		printf("Numero: %i \n", n);
	}
}
