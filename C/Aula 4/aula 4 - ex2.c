#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
	int num=1, x=0;
	
	while(num<=33){
		x = x + 1;
		num = num + 2;
		printf("Número %i: %i\n", x, num);
		num = num + 1;
	}
}
