#include <stdio.h>

int main(){
	
	int loop, entrada, maior, posicao;
	
	for(loop = 1; loop <= 5; loop++){
		scanf("%d", &entrada);
		if (maior < entrada){
			maior = entrada;
			posicao = loop;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", posicao);
	
	return 0;
}