/*
MEDIAS PONDERADAS
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.
Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
Exemplo
Entrada

3
6.5 4.3 6.2
5.1 4.2 8.1
8.0 9.0 10.0


Saída

5.7
6.3
9.3
*/
#include <stdio.h>

int main(void)
{
    int n;
    double a, b, c;
    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        printf("%.2lf\n", (a * 2 + b * 3 + c * 5)/10);
    }
    return 0;
}