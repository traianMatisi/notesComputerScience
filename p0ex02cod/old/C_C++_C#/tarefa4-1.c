#include<stdio.h>
int main(){
	char nome[61];
	
	char nome_completo[61];
	
	scanf("%s ", nome); //recebe o nome com scanf, o espaço em branco no fim é para eliminar o <enter> do fluxo de entrada
	
	fgets(nome_completo, 61, stdin); // recebe o seu nome com fgets
	
	puts(nome); //imprime a primeira variável com puts
	
	printf("%s\n", nome_completo); //imprime a segunda variável com printf
	
	return 0;
}
