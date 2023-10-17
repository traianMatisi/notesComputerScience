#include <stdio.h>

int main(void)
{
    char nome[10];
    scanf("%s", nome);
    if(nome[0] >= 'a' && nome[0] <= 'z')
    {
        nome[0] -= 'a' - 'A';
    }
    for(int i = 0; nome[i] != '\0'; i++)
    {
        printf("%c", nome[i]);
    }
}