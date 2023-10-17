#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int gameOn=1;
	int menor, maior, tmp, espaco, numero, tentativas, restantes, chute, iteracao, diferenca=0;
	float placar;
	char nivel, opcao;
	
	while(gameOn)
	{
		printf("Pensarei em um número inteiro aleatório num intervalo que você escolher.\n");		
		printf("Digite um número: ");
		scanf("%d", &menor);
		
		while(1)
		{
			printf("Digite outro número: ");
			scanf("%d", &maior);
			if(maior < menor)
			{
				tmp = menor;
				menor = maior;
				maior = tmp;
			}
			if(maior != menor)
			{
				break;
			}
		}
		
		if(menor >= 0 && maior >= 0)
		{
			espaco = 1 + (maior - menor);
		}
		else if(menor <= 0 && maior <= 0)
		{
			espaco = 1 + (abs(menor) - abs(maior));
		}
		else
		{
			espaco = 1 + abs(menor) + maior;
		}
		
		srand(time(0));
		numero = menor + (rand() % espaco);

		while(1)
		{
			printf("Selecione a dificuldade do jogo [f/m/d]: ");
			scanf(" %c", &nivel);
			if(nivel == 'f' || nivel == 'F')
			{
				tentativas = 1 + espaco/2;
				break;
			}
			if(nivel == 'm' || nivel == 'M')
			{
				tentativas = 1 + espaco/4;
				break;
			}
			if(nivel == 'd' || nivel == 'D')
			{
				tentativas = 1 + espaco/8;
				break;
			}
		}
		
		printf("Tente adivinhar o número que pensei entre %d e %d\n\n", menor, maior);	
		
		restantes = tentativas;
		for(iteracao = 0; iteracao < tentativas; iteracao++)
		{
			printf("Tentativa %d/%d\n", iteracao+1, tentativas);
			scanf("%d", &chute);
			if(chute < menor || chute > maior)
			{
				printf("Tentativa inválida, chute entre %d e %d\n\n", menor, maior);
				iteracao--;
				restantes++;
				continue;
			}
			else if(chute == numero)
			{
				printf("Parabéns, você acertou o número que escolhi!\n\n");
				break;
			}
			else if(chute < numero)
			{
				printf("Seu chute foi menor do que o número\n");
				menor = chute + 1;
				diferenca += (abs(numero) - abs(chute));
			}
			else
			{
				printf("Seu chute foi maior do que o número\n");
				maior = chute - 1;
				diferenca += (abs(chute) - abs(numero));
			}
			restantes--;
			printf("Tentativas restantes = %d\n\n", restantes);
		}
		
		placar = (float)(10000 * restantes)/(float)(tentativas + diferenca);
		printf("Número pensado = %d\n\n", numero);
		printf("Seu placar = (1000 * %d)/(%d + %d) = %.2f\n\n", restantes, tentativas, diferenca, placar);
		
		while(gameOn)
		{
			printf("Quer jogar novamente? [s/n] ");
			scanf(" %c", &opcao);
			if(opcao == 'n' || opcao == 'N')
			{
				gameOn = 0;
			}
			if(opcao == 's' || opcao == 'S')
			{
				break;
			}
		}
	}
	return 0;
}