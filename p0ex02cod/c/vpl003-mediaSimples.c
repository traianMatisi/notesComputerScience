/*
MÉDIA SIMPLES
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída
Calcule e imprima a variável MEDIA conforme exemplo abaixo, com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla precisão (double).

Exemplo
5.0
7.1
MEDIA = 6.43182

0.0
7.1
MEDIA = 4.84091

10.0
10.0
MEDIA = 10.00000
*/
#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("MEDIA = %2.5lf\n", (a*3.5+b*7.5)/11.0);
    return 0;
}
//sempre verificar os ponteiros &
//tive dificuldades por não saber que ((a*peso1 + b*peso2)/(peso1 + peso2)) resolvia