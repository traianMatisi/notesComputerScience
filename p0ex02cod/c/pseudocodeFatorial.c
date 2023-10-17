/*
Fatorial baseado em pseudocodigo de videoaula no YouTube do Filipe Braida
*/
#include <stdio.h>

int main(void)
{
    int fat = 1;
    int n;
    printf("Digite um numero natural inteiro:\t");
    scanf("%i", &n);
    printf("%i! = ", n);
    while (n > 1)
    {
        fat *= n;
        n -= 1;
    }
    printf("%i\n", fat);
    return 0;
}