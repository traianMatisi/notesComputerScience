#include<stdio.h>
int main(){
	float numero_1, numero_2, numero_3, media;
	printf("Infome tres numeros reais:\n");
	scanf("%f %f %f", &numero_1, &numero_2, &numero_3);
	media = (numero_1 + numero_2 + numero_3)/3;
	printf("A media eh %f\n", media);
	return 0;
}
