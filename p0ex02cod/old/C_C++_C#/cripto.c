#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
// / T t

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int digitos, i;
	char *senha;
	
	printf("Escolha quantidade de dígitos de sua chave: ");
	scanf("%d", &digitos);
	
	senha = (char*) malloc(digitos * sizeof(char));
	
	srand(time(0));
	
	for(i = 0; i < digitos; i++)
	{
		senha[i] = (rand() % 96) + 32;
	}
	
	printf("\n\n:Início:\n\n[:: ");
	
	for(i = 0; i < digitos; i++)
	{
		printf("%c", senha[i]);
	}
	
	printf(" ::]\n\n:Fim:\n\n");
	
	return 0;
}