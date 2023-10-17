#include <stdio.h>

void quantos_fatoriais(int entrada)
{
    int fatorial[10];
    int quantidade = 0, anteriores = 0, i, j;
    fatorial[0] = 1;
    for(i = 1; i <= 9; i++)
    {
        fatorial[i] = i * fatorial[i - 1];
    }
    for(j = i; j > -1; j--)
    {
        if(fatorial[j] > entrada)
        {
            anteriores = i - 1;
        }
    }
    for(i = anteriores; i > -1; i--)
    {
        quantidade += entrada/fatorial[i];
        entrada = entrada%fatorial[i];
    }
    printf("%d\n", quantidade);
}

int main()
{
    
    int entrada;
    scanf("%d", &entrada);
    quantos_fatoriais(entrada);

    return 0;
}