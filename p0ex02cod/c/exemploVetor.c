#include<stdio.h>

int main(void)
{
    int alunos;
    scanf("%i", &alunos);
    
    float *notas = malloc(alunos * sizeof(float));
    
    for(int i = 0; i < alunos; i++)
    {
        scanf("%f", &notas[i]);
    }
    
    for(int i = alunos; i > 0; i--)
    {
        printf("%.2f\n", notas[i-1]);
    }
}