#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("�rvore, Caf�, �s, p�o, ni�o, ci�ncia");
    return 0;
}