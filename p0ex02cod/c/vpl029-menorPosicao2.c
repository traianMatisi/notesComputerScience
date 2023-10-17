/*
Menor e Posição II

Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.
Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém cada um dos N valores, separados por um espaço.
Saída
A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.

Exemplo
Entrada
10
1 2 3 4 -5 6 7 8 9 10

Saida
Menor valor: -5
Posicao: 4
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, indice;
    double menor = 10;

    printf("Digite o total de entradas\n>>> ");
    scanf("%i", &n);
    double *notas = malloc(n * sizeof(double));

    for (int i = 0; i < n; i++)
    {
        printf("Digite a %i entrada\n>>> ", i+1);
        scanf("%lf", &notas[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(menor > notas[i])
        {
            menor = notas[i];
            indice = i;
        }
    }

    printf("Menor nota = %.2lf\n", menor);
    printf("Indice = %i\n", indice);

    return 0;
}