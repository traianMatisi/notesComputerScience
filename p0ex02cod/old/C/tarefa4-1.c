#include<stdio.h>
int main(){
	char nome[61];
	
	char nome_completo[61];
	
	scanf("%s ", nome); //recebe o nome com scanf, o espa�o em branco no fim � para eliminar o <enter> do fluxo de entrada
	
	fgets(nome_completo, 61, stdin); // recebe o seu nome com fgets
	
	puts(nome); //imprime a primeira vari�vel com puts
	
	printf("%s\n", nome_completo); //imprime a segunda vari�vel com printf
	
	return 0;
}
