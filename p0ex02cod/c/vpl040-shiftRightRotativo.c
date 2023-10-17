/*
SHIFT RIGHT ROTATIVO
Dado uma entrada de N números inteiros ([0, 10] e N > 5), faça um programa que imprima como a saída um shift right rotativo da sequência de números lidos.
Entrada
A primeira linha de entrada contém um único inteiro, N, indicando a sequência de número que deverão ser lidas em seguida. A segunda linha contém os valores que deverão ser lidas, separadas por um espaço.
Saída
A primeira linha apresenta a sequência de números após o shift right rotativo, separados por espaço.
Exemplo
Entrada
15
7 1 3 2 3 4 5 5 6 10 7 8 9 2 10
Saida
10 7 1 3 2 3 4 5 5 6 10 7 8 9 2
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int entradas, tmp;
    printf("Digite o total de entradas");
    scanf("%i", &entradas);
    int*valores = malloc(entradas * sizeof(int));
    for(int i = 0; i < entradas; i++)
    {
        //printf("%ia entrada:\n>>> ", i+1);
        scanf("%i", valores+i);
    }
    // SHIFT RIGHT
    tmp = *(valores+(entradas-1));// Ultimo elemento do vetor
    for(int i = entradas-1; i > 0; i--)
    {
        *(valores+(i)) = *(valores+(i-1));
    }
    *(valores+0) = tmp;

    for(int i = 0; i < entradas; i++)
    {
        printf("%i ", *(valores+i));
    }
    putchar("\n");
    // SHIFT LEFT
    tmp = *(valores+0);// Ultimo elemento do vetor
    for(int i = 0; i < entradas-1 ; i++)
    {
        *(valores+(i)) = *(valores+(i+1));
    }
    *(valores+(entradas-1)) = tmp;

    for(int i = 0; i < entradas; i++)
    {
        printf("%i ", *(valores+i));
    }
    putchar('\n');
    free(valores);
    return 0;
}
// Me dei a liberdade de incluir um shift left