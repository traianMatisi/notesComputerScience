#include<stdio.h>

int main(void){
	int numero_inteiro;
	float numero_real;
	char caractere;
	
	printf("Por favor, informe um número inteiro, um número real e um caractere:\n");
	scanf("%d %f %c", &numero_inteiro, &numero_real, &caractere);
	printf("O numero inteiro eh %d, o numero real eh %f e o caractere eh %c\n", numero_inteiro, numero_real, caractere);
	return 0;
}
