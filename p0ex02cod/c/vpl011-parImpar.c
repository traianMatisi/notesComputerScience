/*
PAR OU ÍMPAR
Escreva um programa em C que receba um número como entrada e imprima se este número é par ou ímpar
Casos de Testes:
1
impar

2
par

*/
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%i", &a);
    if(a % 2)
    {
        printf("Impar");
    }
    else
    {
        printf("Par");
    }
    return 0;
}