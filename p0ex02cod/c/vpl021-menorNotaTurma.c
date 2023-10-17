/*
MENOR NOTA DA TURMA
Faça um programa para encontrar a menor nota de uma turma com N alunos. As notas são números inteiros de 0 a 10, caso diferente ignore.
Entrada
Primeira linha informa a quantidade de aluno, N.
A segunda linha, contém as notas dos alunos da turma, separadas por um espaço.
Saída
A primeira linha contém a menor nota da turma.
Exemplo:

Entrada
10
10 8 7 4 9 5 3 2 9 8
Saída
2
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, menor = 10;
    scanf("%i", &n);
    int *array = malloc(sizeof(int) * n);//tive q pesquisar alocacao dinamica
    for (int i = 0; i < n; i++)
    {
        *(array+i) = -1;
    }
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Digite a %ia nota\n--> ", i + 1);
            scanf("%i", array+i);// nao usa & pois ja e ponteiro, e aqui e sua aritmetica
        }
        while (*(array+i) < 0 || *(array+i) > 10);
    }
    for (int i = 0; i < n; i++)
    {
        if(*(array+i) < menor)
        {
            menor = *(array+i);
        }
    }
    printf("menor nota = %i", menor);
    free(array);
    array = NULL;
    return 0;
}
// problema nao e explicito se float e double devem ser ignorados no scanf de int
// notas a serem digitadas numa mesma linha sao aceitas pelo scanf e inclui valores apos espaco