#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int *array = malloc(sizeof(int) * n);//tive q pesquisar alocacao dinamica
    for(int i = 0; i < n; i++)
    {
        *(array+i) = i;//array[i]
    }
    for(int i = 0; i < n; i++)
    {
        printf("array[%i] = %i\n", i, *(array+i));
    }
    for(int i = 0; i < n; i++)
    {
        *(array+i) += 1;// ++ so funciona pra incrementos, nao pra operandos (whatever that means)
    }
    for(int i = 0; i < n; i++)
    {
        printf("array[%i] = %i\n", i, *(array+i));
    }
    free(array);
    return 0;
}