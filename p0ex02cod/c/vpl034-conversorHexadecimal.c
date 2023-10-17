/*
Converter para Hexadecimal

Os dados armazenados no computador estão em binário. Uma forma 
econômica de ver estes números é usar a base 16 (hexadecimal).
Sua tarefa consiste em escrever um programa que, dado um número natural na base 10, mostre sua representação em hexadecimal.
OBS: Não vale utilizar o scanf/printf para gerar o número.

Entrada
A entrada é um número inteiro positivo V na base 10 (1 ≤ V ≤ 2 x 10^9).

Saída
A saída é o mesmo número V na base 16 em uma única linha (não esqueça do caractere de fim-de-linha). Use letras maiúsculas, conforme os exemplos.
Exemplos
10
A

15
F

16
10

31
1F

65535
FFFF
*/
#include <stdio.h>

int main(void)
{
    int v, l = 0;
    long long int higher = 20000000000;
    char vet[20];
    int resto, i;

    do
    {
        printf("Digite o decimal para conversao\n>>> ");
        scanf("%i", &v);
    }
    while(v < 1 || v > higher);

    for(i = 0; (v / 16) > 0; i++)// i foi iniciaizado fora para uso depois do fim do for
    {
        resto = v % 16;
        switch(resto)
        {
        case 15:// F
        vet[i] = 'F';
            break;
        case 14:// E
        vet[i] = 'E';
            break;
        case 13:// D
        vet[i] = 'D';
            break;
        case 12:// C
        vet[i] = 'C';
            break;
        case 11:// B
        vet[i] = 'B';
            break;
        case 10:// A
        vet[i] = 'A';;
            break;
        default:
        vet[i] = resto + '0';
            break;
        }
        v /= 16;
        l++;
    }

    switch(v)
    {
    case 15:// F
    vet[i] = 'F';
        break;
    case 14:// E
    vet[i] = 'E';
        break;
    case 13:// D
    vet[i] = 'D';
        break;
    case 12:// C
    vet[i] = 'C';
        break;
    case 11:// B
    vet[i] = 'B';
        break;
    case 10:// A
    vet[i] = 'A';;
        break;
    default:
    vet[i] = v + '0';
        break;
    }

    for(int i = l; i >= 0; i--)
    {
        printf("%c", vet[i]);
    }

    return 0;
}