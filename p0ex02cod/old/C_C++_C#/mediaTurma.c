#include <stdio.h>

int main(){
	
	int alunos, loop, descarte;
	float notas, soma;
	soma = 0;
	loop = 1;
	descarte = 0;
	
	//printf("Quantos alunos ha na sala?\n");
	scanf("%d", &alunos);
	
	while (loop <= alunos){
	    
		//printf("Digite a %da nota: -> ", loop);
		scanf("%f", &notas);
		
		if ((notas >= 0) && (notas <= 10)){
		    soma += notas;
		    loop += 1;
		}
		
		else{
			descarte++;
			loop += 1;	
		}
	}
	printf("%.1f", soma/(alunos-descarte));
	return 0;
}