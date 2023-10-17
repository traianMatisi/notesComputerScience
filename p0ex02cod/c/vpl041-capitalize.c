/*
UPPER CASE
Dado uma palavra (string), coloque ela em upper case (primeira letra em caixa alta, as demais em caixa baixa).
Entrada
A primeira linha de entrada contém a palavra a ser lida.
Saída
A primeira linha apresenta a palavra lida em upper case.
Exemplo
Entrada
computacao
Saida
Computacao
*/
#include<stdio.h>

int main(void)
{
    char buffer[33];
    scanf("%s", buffer);
    if(buffer[0] >= 97 && buffer[0] <= 122)
    {
        buffer[0] = buffer[0] - 'a' + 'A';
    }
    printf("%s\n", buffer);
    return 0;
}