#include <stdio.h>

int funcao(int n)
{
    int quant;
    if(n == 0)
    {
        return 1;
    }
    else
    {
        quant = n;
        return(quant + funcao(n - 1));
    }
}

int main()
{
    int loop, rept, itr, i;
    int vetorV[30], vetorU[100];
    scanf("%d", &itr);
    for(loop = 0; loop < itr; loop++)
    {
        scanf("%d", &vetorU[loop]);
        vetorV[loop] = funcao(vetorU[loop]);
    }
    for(loop = 0; loop < itr; loop++)
    {
        if(vetorU[loop] == 0)
        {
            printf("Caso %d: %d numero\n", loop + 1, vetorV[loop]);
            printf("%d\n", vetorU[loop]);
        }
        else
        {
            printf("Caso %d: %d numeros\n", loop + 1, vetorV[loop]);
            printf("0 ");
            for(rept = 1; rept <= vetorU[loop]; rept++)
            {
                for(i = 0; i < rept; i++)
                {
                    printf("%d ", rept);
                }
            }
            printf("\n");
        }
    }
    return 0;
}