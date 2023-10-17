#include <stdio.h>

int main(void)
{
    char nome[10];
    scanf("%s", nome);
    for(int i = 0; nome[i] != '\0'; i++)
    {
        printf("%c", nome[i]);
    }
    printf("%s", nome);
}
