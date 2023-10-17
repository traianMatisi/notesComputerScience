#include <stdio.h>

int main(){
	
	//criando um vetores para acomodar os numeros da sequência e de suas somas
	int fb[46];
	int sm[46][46];
	int loop, i, j;
	
	//criando os termos iniciais que darão origem a sequência
	fb[0] = 0;
	fb[1] = 1;
	
	//laço de repetição para criar o vetor Fb[]
	for(loop = 2; loop < 46; loop++){
		fb[loop] = fb[loop-2] + fb[loop-1];
	}
	
	//laço para criar matriz com resultados das somas entre numeros de fibonnacci
	for(i = 0; i < 46; i++){
		for(j = 0; j < 46; j++){
			sm[i][j] = fb[i] + fb[j];
		}
	}
	
	//declarando as variáveis de verificação
	int e, k;
	
	//pedindo o total de entradas
	//printf("Quantas entradas? -> ");
	scanf("%d", &e);
	
	//declarando o vetor que vai conter as entradas e as saídas
	int n[e];
	char m[e];
	
	//criando o vetor N com as entradas a se testar e vetor M com saídas/solução
	for(k = 0; k < e; k++){
		//printf("Digite %da entrada: -> ", k+1);
		scanf("%d", &n[k]);
		m[k] = 'N';
	}
	
	//percorrendo a matriz SM[] e comparando com as entradas dadas
	for(k = 0; k < e; k++){
		for(i = 0; i < 16; i++){
			for(j = 0; j < 16; j++){
				if(n[k] == sm[i][j]){
					m[k] = 'S';
				}
			}
		}
	}
	
	//verificando quais entradas estão no vetor
	for(k = 0; k < e; k++){
		//printf("%d\n", n[k]);
		printf("%c\n", m[k]);
	}
	
	return 0;
}