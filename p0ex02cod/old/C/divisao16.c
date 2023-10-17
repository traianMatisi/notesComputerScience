#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float n, i, h;
	
	printf("Digite o número a ser convertido para 0x: ");
	scanf("%f", &n);
	
	float tamanho = sizeof(n);
	
	printf("%f", tamanho);
	
	return 0;
}
