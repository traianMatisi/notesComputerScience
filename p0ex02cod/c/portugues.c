#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("Árvore, Café, às, pão, niño, ciência");
    return 0;
}