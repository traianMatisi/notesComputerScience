#include <stdio.h>

int main(){
	char nome[11];
	double salario, vendas, soldo;
	//printf("Informe seu nome:\n");
	fgets(nome, 11, stdin);
	//printf("Informe seu salario:\n");
	scanf("%lf", &salario);
	//printf("Informe seu total de vendas:\n");
	scanf("%lf", &vendas);
	soldo = salario + vendas * 0.15;
	printf("TOTAL = R$ %.2lf", soldo);
	return 0;
}