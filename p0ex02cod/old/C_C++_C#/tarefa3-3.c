#include<stdio.h>

int main(void){
	int nota1, nota2, temp;
	printf("Por favor, informe os valores da nota 1 e da nota 2:\n");
	scanf("%d %d", &nota1, &nota2);
	temp = nota2;
	nota2 = nota1;
	nota1 = temp;
	printf("O valor atual da nota1 eh %d e da nota2 eh %d\n", nota1, nota2);
	return 0;
}
