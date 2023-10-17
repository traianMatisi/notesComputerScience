#include <stdio.h>

int main(){
	
	int alunos, notas, loop, aprovados;
	
	//printf("Quantos alunos fizeram prova? \n");
	scanf("%d", &alunos);
	
	aprovados = 0;
	
	//printf("Digite as notas das avaliacoes: \n");
	for (loop = 0; loop < alunos; loop++){
		scanf("%d", &notas);
		if ((notas >= 5) && (notas <= 10)){
			aprovados = aprovados + 1;
		}
	}
	
	printf("%d", aprovados);
	
	return 0;
}