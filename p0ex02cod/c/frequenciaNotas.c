#include <stdio.h>

int main(void)
{
    int alunos, nota;
    scanf("%i", &alunos);

    int *notas = malloc(sizeof(int) * alunos);

    for(int i = 0; i < alunos; i++)
    {
        scanf("%i", &nota);
        *(notas+i) = nota;
    }

    for(int i = 0; i < 11; i++)
    {
        printf("Notas %i: %.0f %%\n", i, 100.0 * notas[i]/alunos);
    }
}