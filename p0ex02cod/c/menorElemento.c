#include <stdio.h>

int main(void)
{
    int quantidade, i, menor = 11, posicao = 0;
    int notas[50];

    scanf("%d", &quantidade);

    for(i = 0; i < quantidade; i++)
    {
        scanf("%d", &notas[i]);
    }

    for(i = 0; i < quantidade; i++)
    {
        if (notas[i] < menor)
        {
            menor = notas[i];
            posicao = i;
        }
    }
    return 0;
}