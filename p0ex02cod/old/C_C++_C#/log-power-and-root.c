// HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

// Function declarations
double power(double base, double expoente);
double root(double indice, double base);

// Main
int main(void)
{
	// Config characters
	setlocale(LC_ALL,""); // Allow UTF-8 and Unicode characters
	
	// Variables
	int True = 1; // Controls main WHILE loop
	double base, expoente, indice, resposta; // Inputs and outputs
	char operacao; // Conditions variable
	char continua; //int True control

	while(True)
	{
		// Choosing operation
		printf("\nQual operação vc deseja realizar?\n[P] potenciação\n[R] radiciação\n[L] logaritmo\n\n>>> ");
		scanf(" %c", &operacao);

		// Operations power and root
		if(operacao == 'p' || operacao == 'P')
		{
			printf("Digite a base da potência: \n");
			scanf("%lf", &base);
			printf("Digite o expoente da potência: \n");
			scanf("%lf", &expoente);
			resposta = power(base, expoente);
			printf("%lf\n", resposta);
		}
		else if(operacao == 'r' || operacao == 'R')
		{
			printf("Digite o índice da raiz: \n");
			scanf("%lf", &indice);
			printf("Digite a base da raiz: \n");
			scanf("%lf", &base);
			resposta = root(indice, base);
			printf("%lf\n", resposta);
		}

		// Continue condition
		printf("Deseja realizar nova operação?\n[S/N]\n>>> ");
		scanf(" %c", &continua);
		if(continua == 's' || continua == 'S')
		{
			True = 1;
		}
		else if(continua == 'n' || continua == 'N')
		{
			True = 0;
		}
	}
		
	return 0;
}

// Functions
double power(double base, double expoente)
{
	double resultado;
	resultado = pow(base, expoente);
	return resultado;
}

double root(double indice, double base)
{
	double resultado;
	resultado = pow(base, 1.0/indice);
	return resultado;
}
