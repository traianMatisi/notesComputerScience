#include <stdio.h>

int main(){
	double n1, n2, media;
	printf("Digite a nota da P1:\n");
	scanf("%lf", &n1);
	printf("Digite a nota da P2:\n");
	scanf("%lf", &n2);
	media = ((n1 * 3.5) + (n2 * 7.5))/11;
	printf("MEDIA = %.5lf", media);
	return 0;
}