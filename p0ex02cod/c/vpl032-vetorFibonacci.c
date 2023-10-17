/*
FIBONACCI EM VETOR
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
Entrada
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.

Exemplo

Entrada
3
0
4
2

Saída
Fib(0) = 0
Fib(4) = 3
Fib(2) = 1
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int testes, n;

    long long int *fibonacci = malloc(60 * sizeof(long long int));
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    printf("Quantos testes realizar?\n>>> ");
    scanf("%i", &testes);

    printf("Quais indices deseja verificar?");
    for (int i = testes; i > 0; i--)
    {
        do
        {
            printf("\n>>> ");
            scanf("%i", &n);
        }
        while(n < 0 || n > 60);
        printf("fibonacci[%i] = %lli", n, fibonacci[n]);
    }
    return 0;
}