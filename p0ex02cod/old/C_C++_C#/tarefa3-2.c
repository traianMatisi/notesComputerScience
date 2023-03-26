#include<stdio.h>

int main(void){
	float numero;
	printf("Por favor, informe um numero real:\n");
	scanf("%f", &numero);
	printf("O numero com precisao de duas casas decimais eh %.2f, tres casas decimais %.3f, quatro casas decimais eh %.4f\n", numero, numero, numero);
	return 0;
}
