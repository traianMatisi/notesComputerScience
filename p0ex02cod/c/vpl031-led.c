/*
LED
João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.
 _     _   _       _   _  _   _   _
| | |  _|  _| |_| |_  |_   | |_| |_|
|_| | |_   _|   |  _| |_|  | |_|  _|

 6  2  5   5   4   5   6   3  7   6

Entrada
A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de Nlinhas, cada linha contendo um número (1 ≤ V ≤ 10^100) correspondente ao valor que João quer montar com os leds.

Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".

Exemplo:
Entrada
3
115380
2819311
23456

Saída
27 leds
29 leds
25 leds
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 10^100 = 10E+100
    int entradas;

    do
    {
        scanf("%i", &entradas);
    }
    while(entradas < 1 && entradas > 1000);
    
    long long int *numeros = malloc(entradas * sizeof(long long int));

    do
    {
        scanf("%i", &numeros);// total de numeros
    }
    while(numeros < 1 && numeros > 1000);

    for(int i = numeros; i >= 0; i--)
    
    return 0;
}