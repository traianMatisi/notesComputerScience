#include <stdio.h>

int main(){
	
	int alunos, loop;
	int nota, menor;
	
	//printf("Digite a quantidade de alunos: \n");
	scanf("%d", &alunos);
	menor = 10;
	
	for(loop = 1; loop <= alunos; loop++){
		
		//printf("Digite a %da nota:\n", loop);
		scanf("%d", &nota);
		if ((nota >= 0) && (menor > nota)){
			menor = nota;
		}
	}
	printf("%d\n", menor);
	return 0;
}