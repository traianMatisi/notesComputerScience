/*
SOMA DOS ÍMPARES CONSECUTIVOS I
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
Entrada
O arquivo de entrada contém dois valores inteiros.
Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
Exemplo
 6
-5
5

15
12
13

11
11
0
*/
#include <stdio.h>

int main(void)
{
    int a, b, tmp, sum = 0;

    scanf("%i%i", &a, &b);

    if(a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    a++;

    while(a < b)
    {
        if(a % 2 != 0)
        {
            sum += a;
        }
        a++;
    }
    return 0;
}