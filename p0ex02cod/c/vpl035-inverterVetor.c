/*
INVERTE VETOR
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Mostre o vetor após a troca.
Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém cada um dos N valores, separados por um espaço.
Saída
A primeira linha apresenta os elementos do vetor invertido, separados por um espaço.

Exemplo
Entrada
10
1 2 3 4 5 6 7 8 9 10

Saida
10 9 8 7 6 5 4 3 2 1
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, tmp;
    printf("Digite o total de entradas do vetor\n>>> ");
    scanf("%i", &n);

    int *x = malloc(n * sizeof(int));

    // LENDO AS ENTRADAS
    for(int i = 0; i < n; i++)
    {
        printf("%ia entrada\n>>> ", i+1);
        scanf("%i", x+i);
    }

    // IMPRIMINDO NA ORDEM ORIGINAL
    for(int i = 0; i < n; i++)
    {
        printf("%i ", *(x+i));
    }
    putchar('\n');

    // REARRANJANDO VETOR
    for(int i = 0, j = n-1; i < j; i++, j--)
    {
         tmp = *(x+i);
         *(x+i) = *(x+j);
         *(x+j) = tmp;
    }

    // IMPRIMINDO REARRANJADO
    for(int i = 0; i < n; i++)
    {
        printf("%i ", *(x+i));
    }

    return 0;
}