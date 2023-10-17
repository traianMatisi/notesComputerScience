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
    char*buffer;
    fgets(buffer, 255, stdin);
    *(buffer) = *(buffer) - 'a' + 'A';
    for(int i = 0; *(buffer+i) != '\0'; i++)
    {
        if(*(buffer+i) == ' ')
        {
            *(buffer+(i+1)) = *(buffer+(i+1)) - 'a' + 'A';
        }
    }   
    printf("%s", buffer);
    return 0;
}
// Errei bastante nao desreferenciando em varias instancias