#include <stdio.h>

#define TAM 11

int main(void)
{
    int a[TAM] = {11, 11, 19, 7, 13, 11, 5, 17, 11, 3, 2};
    int b[TAM] = {2, 3, 5, 7, 11, 11, 11, 11, 13, 17, 19};
    int tmp, size = TAM;

    // {11, 11, 7, 13, 11, 5, 17, 11, 3, 2, 19}
    
    for(int i = 0; i < TAM-1; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        size--;// size foi criado para NÃO verificarmos o ultimos numeros do laço j
    }

    for(int i = TAM-1; i >= 0; i--)
    {
        printf("| a[%i] = %i | b[%i] = %i\n", i, a[i], i, b[i]);
    }
}