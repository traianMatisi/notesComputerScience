/*
FÓRMULA DE BHASKARA
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
Entrada
Leia três valores de ponto flutuante (double) A, B e C.
Saída
Se não houver possibildade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
Exemplos
10.0 20.1 5.1
R1 = -0.29788
R2 = -1.71212

0.0 20.0 5.0
Impossivel calcular

10.3 203.0 5.0
R1 = -0.02466
R2 = -19.68408

10.0 3.0 5.0
Impossivel calcular
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, d, x1, x2;

    scanf("%lf%lf%lf", &a, &b, &c);
    d = (pow(b,2) - 4*a*c);
    printf("Coeficiente A: %.5lf\n",a);
    printf("Coeficiente B: %.5lf\n",b);
    printf("Coeficiente C: %.5lf\n",c);
    printf("B^2: %.5lf\n", pow(b,2));
    printf("-4ac: %.5lf\n", -4*a*c);
    printf("Discriminante da raiz: %.5lf\n", d);
    if(d < 0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        x1 = (-b - sqrt(d))/(2*a);
        x2 = (-b + sqrt(d))/(2*a);
        printf("x' = %.5lf\nx'' = %.5lf", x1, x2);
    }
    return 0;
}