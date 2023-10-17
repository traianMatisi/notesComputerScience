#include<stdio.h>
int main(){
	float cadeia_1[21], cadeia_2[21];//duas cadeias com tamanho maximo 20, o ultimo caractere eh para o '\0'
	printf("Infome duas palavras com tamanho no maximo 20:\n");
	scanf("%s %s", cadeia_1, cadeia_2);
	printf("%s, %s\n", cadeia_1, cadeia_2);
	return 0;
}
