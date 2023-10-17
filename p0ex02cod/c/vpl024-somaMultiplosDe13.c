/*
múltiplos de 13
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
Entrada
O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.
Saída
Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.
Exemplo

Entrada
100
200

Saida
13954
*/
#include <stdio.h>

int main(void)
{
    int a, b, tmp, soma = 0;

    scanf("%i%i", &a, &b);

    if(a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = 0; a <= b; i++, a++)
    {
        printf("Ciclo:%3.i --> ", i + 1);    
        if(a % 13 == 0)
        {
            printf("soma = %3.i\n", soma);
            continue;
        }
        else
        {
            soma += a;
            printf("soma = %3.i\n", soma);
        }
    }

    printf("Soma = %i", soma);

    return 0;
}