/*
Xª MENOR NOTA DE UMA TURMA

Dado uma entrada de N números inteiros ([0, 10] e N > 5) e um número inteiro X (N>X), faça um programa que mostre a Xª menor nota.
Entrada
A primeira linha de entrada contém dois inteiros, N e X, indicando o número de notas que deverão ser lidas em seguida e o valor de X. A segunda linha contém os valores das notas que deverão ser lidas, separadas por um espaço.
Saída
A primeira linha apresenta a Xª menor nota.
Exemplo
Entrada
15 5
7 1 3 2 3 4 5 5 6 10 7 8 9 2 10
Saida
5
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int total_alunos = 0, enesima = 0, menor = 0, rank;

    printf("Digite o total de notas do alunos:\n>>> ");
    scanf("%i", &total_alunos);
    int*notas = malloc(total_alunos * sizeof(int));

    printf("Digite a posicao ou rank da nota que gostaria de saber:\n>>> ");
    scanf("%i", &rank);
    // CAPTURA DE ENTRADAS
    for(int i = 0; i < total_alunos; i++)
    {
        scanf("%i", notas+i);// notas[total_alunos]
    }
    // BUBBLE SORT PARA ORGANIZAR O RANK DAS ENTRADAS
    int tmp;// Declarada aqui por legibilidade
    for(int i = 0; i < total_alunos; i++)
    {
        for (int j = 0; j < total_alunos-1; j++)
        {
            if(*(notas + j) > *(notas + (j+1)))
            {
                tmp = *(notas + j);
                *(notas + j) = *(notas + (j + 1));
                *(notas + (j + 1)) = tmp;
            }
        }
    }
    //rank = 5; menor = 0; enesima = 0;
    for(int i = 0; i < total_alunos-1; i++)// O vetor varrido foi ordenado nesse codigo
    {
        if(menor < *(notas+i))
        {
            menor = *(notas+i);
            enesima++;
            if(enesima == rank)
            {
                printf("A %ia menor nota e %i", enesima, menor);
                free(notas);
                return 0;
            }
        }
    }
    free(notas);
    return 0;
}
// Refatoracao da VPL anterior
