#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int aluno, md, mdtot, x=0, n1, n2, mdtur;
    char resp[3];
    
    printf("Voc� � um aluno? [Sim] ou [N�o]\n");
    scanf("%s",&resp);
    fflush(stdin);
    
    if(strcmp(resp, "S") == 0 || strcmp(resp, "s") == 0 || strcmp(resp, "Sim") == 0 || strcmp(resp, "SIM") == 0 || strcmp(resp, "sim") == 0){
    	
    	printf("\nQual foi a sua nota na primeira prova? ");
    	scanf("%i",&n1);
    	fflush(stdin);
    	
    	printf("\nE qual foi a sua nota na segunda prova? ");
    	scanf("%i",&n2);
    	fflush(stdin);
    	
    	md = (n1 + n2)/2;
	}
	else{
		return 0;
	}
	
	mdtot += md;
    
    printf("\n\nE quantos alunos tem na sala de aula tirando voc�? ");
    scanf("%i",&aluno);
    fflush(stdin);
    
    printf("\nEnt�o, insira abaixo a nota de todos esses alunos"); 
	  
    while(x < aluno){
    	
    	printf("\nQual foi a nota na primeira prova? ");
    	scanf("%i",&n1);
    	fflush(stdin);
    	
    	printf("E qual foi a nota na segunda prova? ");
    	scanf("%i",&n2);
    	fflush(stdin);
    	
    	md = (n1 + n2)/2;	
    	mdtot += md;
    	x++;
    	
	}
	mdtur = mdtot/(aluno + 1);
	
	printf("\n\n\tA m�dia da turma � de: %d",mdtur);
	getchar();
}

