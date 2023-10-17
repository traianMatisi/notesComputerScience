/*
SEGUNDA MENOR NOTA DA TURMA
Faça um programa para encontrar a segunda menor nota distinta de uma turma com N alunos. As notas são números inteiros de 0 a 10, caso diferente ignore.
Entrada
Primeira linha informa a quantidade de aluno, N.
A segunda linha, contém as notas dos alunos da turma, separadas por um espaço.
Saída
A primeira linha contém a segunda menor nota distinta da turma.
Exemplo:

Entrada
10
10 8 7 4 9 5 3 2 9 8
Saída
3
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
    int n, redim;
    scanf("%i", &n);
    redim = n;
    int *array = malloc(sizeof(int) * n);//tive q pesquisar alocacao dinamica
    for (int i = 0; i < n; i++)// populando array
    {
        *(array+i) = -1;
    }
    for(int i = 0; i < n; i++)// imprimindo array
    {
        printf("%i\n", *(array+i));
    }
    for (int i = 0; i < n; i++)// definindo valores do array
    {
        do
        {
            printf("Digite a %ia nota\n--> ", i + 1);
            scanf("%i", array+i);// nao usa & pois ja e ponteiro, e aqui e sua aritmetica
        }
        while(*(array+i) < 0 || *(array+i) > 10);
    }
    for(int i = 0; i < n; i++)// imprimindo array
    {
        printf("%i\n", *(array+i));
    }
    for (int i = 0; i < n-1; i++)// bubble sort no array
    {
        for (int j = 0; j < redim-1; j++)
        {
            if(*(array+j) > *(array+j+1))
            {
                swap(array+j, array+j+1);// nao sei bem se & e eletivo aqui, funcionou sem
            }
        }
        redim--;
    }
    for(int i = 0; i < n; i++)// imprimindo array
    {
        printf("%i\n", *(array+i));
    }
    for (int i = 1; i < n; i++)//cuidado ao comparar 2 itens em arrays, int i=1, n-1, i<=n, etc
    {
        printf("%io laco\narray[0] = %i\narray[%i] = %i\n\n", i, *(array/*+0*/), i, *(array+i));
        if (*(array+i) > *(array+0))// somei zero apenas para fins didaticos de *(array+0) == array[0]
        {
            printf("2a menor nota distinta = %i\n", *(array+i));
            break;
        }
    }
    free(array);
    array = NULL;
    return 0;
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}