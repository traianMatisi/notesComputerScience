#include<stdio.h>
int main(){
	double temperatura;
	printf("Informe a temperatura:\n");
	scanf("%lf", &temperatura);
	printf("A temperatura eh %08.3f", temperatura);
	return 0;
}
