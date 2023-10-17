/*
QUINTA MENOR NOTA DE UMA TURMA
Dado uma entrada de N números inteiros ([0, 10] e N > 5), faça um programa que mostre a quinta menor nota.
Entrada
A primeira linha de entrada contem um único inteiro N, indicando o número de notas que deverão ser lidas em seguida. A segunda linha contém os valores das notas que deverão ser lidas, separadas por um espaço.
Saída
A primeira linha apresenta a quinta menor nota.
Exemplo
Entrada
15
7 1 3 2 3 4 5 5 6 10 7 8 9 2 10
Saida
5
*/
#include <stdio.h>
#include <stdlib.h>

//Ambas definicoes abaixo servem a solucao alternativa do problema
//#define TRUE 1
//#define FALSE 0

int main(void)
{
    int enesima, rank, menor;
    int total_alunos = 0;
    printf("Digite o total de notas do alunos:\n>>> ");
    scanf("%i", &total_alunos);
    int*notas = malloc(total_alunos * sizeof(int));
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
    rank = 5; menor = 0; enesima = 0;// Esse codigo serve para o enesimo termo, aqui para o 5o
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
    /*
    for(int i = 0; i < total_alunos; i++)
    {
        printf("Nota[%i] = %.2i\n", i, *(notas + i));
    }
    */
    free(notas);
    return 0;
}
// nao consigo resolver o buffer para entradas erradas de [S/N]
// atualizacao: eu errava no teste != e == do char, e nao no buffer
// Tive dificuldade pois estava procurando num vetor ordenado como se nao estivesse ordenado
