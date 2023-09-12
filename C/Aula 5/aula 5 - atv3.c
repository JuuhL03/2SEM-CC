#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int x=0, op=0;
    float aluno=0, h=0, m=0;
	
	do{
		printf("Insira o seu sexo, considere: [1] Masculino [2] Feminino: ");
		scanf("%i", &op);
		
		if(op == 1){
			h++;
			aluno = aluno + (m + h);
		}
		if(op == 2){
			m++;
			aluno = aluno + (m + h);
		}
		
	}
	while(op == 2 || op == 1);
	
	printf("\n O total de alunos na sala é de : %.0f\n", aluno);
	printf("\n O total de homens na sala é: %.0f\n", h);	
	printf("\n O total de mulheres na sala é: %.0f\n", m);
}
