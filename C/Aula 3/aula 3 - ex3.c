#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    int i=0,alun = 15, resp[alun], curso[4] = {0}, errado = 0;

    printf("Digite a série de cada aluno (1 para 1 ano de Ciência da Computação, 
    2 para 2 ano de Ciência da Computação, 3 para 3 ano de Ciência da Computação, 
    4 para 4 ano de Ciência da Computação): \n");

    for (i = 0; i < alun; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &resp[i]);

       
        if (resp[i] < 1 || resp[i] > 4) {
            errado++;
        } else {
            curso[resp[i] - 1]++; 
        }
    }

    printf("Total de alunos no 1 ano de Ciência da Computação: %i \n", curso[0]);
    printf("Total de alunos no 2 ano de Ciência da Computação: %i \n", curso[1]);
    printf("Total de alunos no 3 ano de Ciência da Computação: %i \n", curso[2]);
    printf("Total de alunos no 4 ano de Ciência da Computação: %i \n", curso[3]);
    printf("Respostas erradas: %i \n", errado);

    return 0;
}

