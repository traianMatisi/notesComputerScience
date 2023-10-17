#include<stdio.h>

int main(void)
{
    int n = 5;
    int numeros[5] = {30, 10, 50, 40, 20};
    for(int i = 0; i < n-1; i++)
    {
        printf("i = %i\n", i);
        for(int j = 1; j < n; j++)
        {
            printf("j = %i\n", j);
            if(i == j)
            {
                printf("i = j\n");
                continue;// teste break/continue
            }
            if(*(numeros+i) == *(numeros+j))// COMPARA CADA ENTRADA COM TODO VETOR ANTERIOR
            {
                printf("k\n");
            }
            else
            {
                printf("n\n");
            }
        }
    }
    return 0;
}