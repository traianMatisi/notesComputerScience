/*
MINUSCULO
Escreva um algoritmo que leia uma string de tamanho no máximo 200 caracteres e imprima o valor em minúsculo.

Exemplos:
Filipe
filipe
PEDRO
pedro
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *string = malloc(201 * sizeof(char));
    printf("\nDigite uma string de ate 200 caracteres\n\n\t>>> ");
    fgets(string, 200, stdin);
    for(int i = 0; string[i] != '\n'; i++)
    {
        if(string[i] >=65 && string[i] <= 90)
        {
            string[i] = string[i] - 'A' + 'a';
        }
    }
    putchar('\n');
    for(int i = 0; string[i] != '\n'; i++)
    {
        printf("%c", string[i]);
    }
    putchar('\t');//  ambos putchar e puts estao aqui para
    puts(string);//   testar se o fim do for no terminal usa toda
    return 0;//       a memoria alocada
}