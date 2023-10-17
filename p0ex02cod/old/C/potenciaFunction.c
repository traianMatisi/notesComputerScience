#include <stdio.h>

float pot(float b, float e);

int main(){
	float b, e, res;
	printf("Calcule uma potencia:\n");
	printf("Base: ");
	scanf("%f", &b);
	printf("Expoente: ", &e);
	scanf("%f", &e);
	res = pot(b, e);
	printf("Resultado = %.3f", res);
	return 0;
}

float pot(float b, float e){
	float pot = 1;
	int i = 0;
	while(i < e){
		pot *=  b;
		i++;
	}
	return pot;
}
