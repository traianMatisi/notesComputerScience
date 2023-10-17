/*
Frequencia de Aprovados de uma Turma
Faça um programa para encontrar a frequência de aprovados (nota>=5) de uma turma com N alunos. As notas são números inteiros de 0 a 10, caso diferente ignore.
Entrada
Primeira linha informa a quantidade de aluno, N.
A segunda linha, contém as notas dos alunos da turma, separadas por um espaço.
Saída
A primeira linha contém a frequência de aprovados da turma.
Exemplo:

Entrada
10
10 8 7 4 9 5 3 2 9 8
Saída
7
*/
#include <stdio.h>

int main(void)
{
    int total_alunos;
    int aprovados;

    printf("Digite a quantidade de entradas de notas\n-->");
    scanf("%i", &total_alunos);

    int *notas = malloc(total_alunos * sizeof(int));

    printf("Digite as notas\n");

    for(int i = 0; i < total_alunos; i++)
    {
        printf("%ia nota\n>>> ", i + 1);
        scanf("%i", &notas[i]);
    }

    for(int i = 0; i < total_alunos; i++)
    {
        if(notas[i] >= 5)
        {
            aprovados++;
        }
    }

    printf("Total de aprovados: %i alunos", aprovados);

    return 0;
}