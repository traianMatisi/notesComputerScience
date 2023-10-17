#include <stdio.h>

float fp(float a, float b);
float fm(float a, float b);

int main(void){
	float a, b, soma, subt;
	printf("Digite A: ");
	scanf("%f",&a);
	printf("Digite B: ");
	scanf("%f",&b);
	soma = fp(a, b);
	subt = fm(a, b);
	printf("Soma = %.1f\n", soma);
	printf("Subt = %.1f\n", subt);
	return 0;
}

float fp(float a, float b){
	return a + b;
}

float fm(float a, float b){
	return a - b;
}
