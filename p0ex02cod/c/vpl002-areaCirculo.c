/*
VPL002 - ÁREA DO CÍRCULO - Ciencia da compuatacao - UFRRJ
A fórmula para calcular a área de uma circunferência é: area = π * raio^2.
Considerando para este problema que π = 3.14159:
-Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por π.

Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double).

Exemplos:
2.00
A=12.5664

100.64
A=31819.3103

150.00
A=70685.7750
*/
#include <stdio.h>

double PI = 3.14159;

int main(void)
{
    double r;
    scanf("%lf", &r);
    printf("A=%.4lf\n", r*r*PI);//C nao possui operador quadrado nativo
    return 0;
}
//atenção às letras do placeholder