#include <stdio.h>

int main(void)
{
    int n, soma = 0;
    scanf("%i", &n);
    for (int i = 0; i <= n; i++)
    {
        soma += i;
    }
    printf("%i", soma);
}