#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    char digito = 'S';
    int total_alunos = 0;
    double *notas = malloc(total_alunos * sizeof(double));
    do
    {
        do
        {
            printf("Entre com o valor da %ia nota:\n>>> ", total_alunos + 1);
            scanf("%lf", (notas + total_alunos));
            if(*(notas + total_alunos) >= 0 && *(notas + total_alunos) <= 10)
            {
                printf("%ia entrada aceita\n", total_alunos + 1);
            }
            else
            {
                printf("Entrada invalida, digite um numero entre 00.00 e 10.00\n\n");
            }
        }
        while(*(notas + total_alunos) < 0 || *(notas + total_alunos) > 10);
        total_alunos++;

        printf("Deseja entrar com outra nota? [S/N]\n>>> ");           
        do
        {
            scanf(" %c", &digito);
        }
        while(!(digito == 'S' || digito == 's' || digito == 'N' || digito == 'n'));

        if(digito == 'S' || digito == 's')
        {
            notas = realloc(notas, (total_alunos + 1) * sizeof(double));
        }
    }
    while(digito == 'S' || digito == 's');

    double tmp;
    for(int i = 0; i < total_alunos; i++)
    {
        for (int j = 0; j < total_alunos - 1; j++)
        {
            if(*(notas + j) > *(notas + (j+1)))
            {
                tmp = *(notas + j);
                *(notas + j) = *(notas + (j + 1));
                *(notas + (j + 1)) = tmp;
            }
        }
    }

    for(int i = 0; i < total_alunos; i++)
    {
        printf("Nota[%i] = %.2lf\n", i, *(notas + i));
    }

    free(notas);
    return 0;
}
// nao consigo resolver o buffer para entradas erradas de [S/N]
// atualizacao: eu errava no teste != e == do char, e nao no buffer
