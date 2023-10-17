/*
MEDIA DA TURMA
Faça um programa para encontrar a média das notas de uma turma com N alunos. As notas são números inteiros de 0 a 10, caso diferente ignore.

Entrada
Primeira linha informa a quantidade de aluno, N.
A segunda linha, contém as notas dos alunos da turma, separadas por um espaço.
Saída
A primeira linha contém a média da turma.
Exemplo:

Entrada
10
10 8 7 4 9 5 3 2 9 8
Saída
6.5
*/
#include <stdio.h>

int main(void)
{
    int n;
    double soma;
    scanf("%i", &n);
    double notas[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }
    printf("Media = %.1lf\n", soma/n);
    return 0;
}