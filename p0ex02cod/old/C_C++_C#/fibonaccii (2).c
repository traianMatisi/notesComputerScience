#include <stdio.h>

int main(){
	
	//criando um vetores para acomodar os numeros da sequência e de suas somas
	int fb[61];
	int id[20];
	int loop, termos, ind;
	
	//criando os termos iniciais que darão origem a sequência
	fb[0] = 0;
	fb[1] = 1;
	
	//laço de repetição para criar o vetor Fb[]
	for(loop = 2; loop < 61; loop++){
		fb[loop] = fb[loop-2] + fb[loop-1];
	}
	
	//printf("Quantos termos serao pesquisados?");
	scanf("%d", &termos);
	
	for(loop = 0; loop < termos; loop++){
		//printf("Digite o índice: ");
		scanf("%d", &ind);
		id[loop] = fb[ind];
		printf("Fib(%d) = %d\n", ind, id[loop]);
	}
	
	return 0;
}