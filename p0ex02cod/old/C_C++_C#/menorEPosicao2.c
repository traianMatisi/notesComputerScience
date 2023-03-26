#include <stdio.h>

int main(){
	
	int num, loop, menor, posicao;
	
	
	scanf("%d", &num);
	
	menor = 999;
	int vetor[num];
	loop = 0;
	
	while (loop < num){
	    scanf("%d", &vetor[loop]);
		if (vetor[loop] < menor){
			menor = vetor[loop];
			posicao = loop;
		}
		loop++;
	}
	
	printf("Menor valor: %d\nPosicao: %d", menor, posicao);
	
	return 0;
}