#include <stdio.h>

int main(){
	int i, j, c;
	int linhas, colunas, objetos, posicao;
	
	printf("Tamanho do Labirinto:\n\n");
	scanf("%d %d", &linhas, &colunas);
	
	char labirinto[linhas][colunas];
	int beco[20];
	
	printf("criando o labirinto...\n\n");
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf(" %c", &labirinto[i][j]);
		}
	}
	
	printf("imprimindo o labirinto...\n\n");
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%c", labirinto[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Localizando i no labirinto...\n\n");
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("laco %d %d \n", i, j);
			if(labirinto[linhas][colunas] == 'i')
			printf("coordenadas %d, %d", i, j);
		}
	}
	
	return 0;
}

