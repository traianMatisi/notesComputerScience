/*
MAIOR E POSIÇÃO
Leia 5 valores inteiros. Apresente então o maior valor lido e a posição dentre os 5 valores lidos.
Entrada
O arquivo de entrada contém 5 números inteiros, positivos e distintos.
Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo
Exemplo

Entrada
2
113
45
34565
6
Saida
34565
4
*/
#include <stdio.h>

int main(void)
{
    int pos = 0, maior = 0;
    int num[5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &num[i]);
        if(num[i] > maior)
        {
            maior = num[i];
            pos = i + 1;
        }        
    }
    printf("%i\n%i\n", maior, pos);
    return 0;
}