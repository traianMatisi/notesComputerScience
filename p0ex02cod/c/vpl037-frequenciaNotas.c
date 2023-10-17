/*
FREQUENCIA DE NOTAS DE UMA TURMA
Faça um programa que leia N notas de uma turma. Considerando que as notas são números inteiros de 0 a 10, faça um programa que mostre a frequência de cada nota.
Entrada
A primeira linha de entrada contem um único inteiro N, indicando o número de notas que deverão ser lidas em seguida. A segunda linha contém os valores das notas que deverão ser lidas, separadas por um espaço.
Saída
A primeira linha apresenta a frequência de cada nota, separadas por um espaço.
Exemplo
Entrada
15
7 1 3 2 3 4 5 5 6 10 7 8 9 2 10
Saida
1 2 2 1 2 1 2 1 1 2
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    
    printf("Digite o total de entradas:\n>>> ");
    scanf("%i", &n);
    
    int*notas = malloc(n * sizeof(int));
    int freq[11] = {0};// 11 POSSIVEIS NOTAS

    for(int i = 0; i < n; i++)
    {
        scanf("%i", notas+i);
    }

    for(int i = 0; i < n; i++)// Estamos incluindo a frequencia de notas 0
    {
        freq[notas[i]]++;// INDICES ANINHADOS
    }

    for(int i = 1; i < 11; i++)// Não estamos imprimindo notas zero (i = 0) por erro no pedido do exercicio
    {
        printf("freq[%i] = %i\n", i, freq[i]);
    }

    return 0;
}
// O pedido da vpl esta ambiguo como a anterior
// Mas com um pouco de raciocinio consegui entender esse pedido corretamente
// Moral dessa VPL: Podemos aninhar indices de vetores