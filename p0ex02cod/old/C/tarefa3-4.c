#include<stdio.h>

int main(void){
	int numero_inteiro;
	float numero_real;
	char caractere;
	
	printf("Por favor, informe um n�mero inteiro, um n�mero real e um caractere:\n");
	scanf("%d %f %c", &numero_inteiro, &numero_real, &caractere);
	printf("O numero inteiro eh %d, o numero real eh %f e o caractere eh %c\n", numero_inteiro, numero_real, caractere);
	return 0;
}
