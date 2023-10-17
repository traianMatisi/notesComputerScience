/*
VETOR DE NUMEROS DISTINTOS
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, preencha o vetor com N números diferentes. Caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número.

Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém os valores que deverão ser lidos, separados por um espaço.
Saída
A primeira linha apresenta os elementos do vetor, separados por um espaço.

Exemplo
Entrada
10
7 1 3 2 3 4 5 5 6 7 8 9 2 10
Saida
7 1 3 2 4 5 6 8 9 10
*/
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char**argv)
{
    int n, have = FALSE;

    printf("Digite o total de entradas do vetor\n>>> ");
    scanf("%i", &n);

    printf("n = %i\n", n);

    int*numeros = malloc(n * sizeof(int));
    printf("%i bytes alocados\n", n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("%ia entrada\n>>> ", i+1);
            scanf("%i", numeros + i);
            if(i != 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if(*(numeros+i) == *(numeros+j))
                    {
                        have == TRUE;
                    }
                }
            }
        }
        while(have == TRUE);
        printf("Fim do for %i\n", i);
    }

    printf("Outta for\n")
    for (int i = 0; i < n; i++)
    {
        printf("%i ", *(numeros+i));
    }
    return 0;
}
// Ha um conflito no pedido do programa e no seu exemplo
// Ou eu peco os numeros 1 a 1 verificando se ja foi digitado
// ou eu peco uma so entrada separada por espacos
// Necessario esclarecimento pelo professor