/*
DISTANCIA ENTRE DOIS PONTOS
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
D(A,B)=√((xa−xb)2+(ya−yb)2)

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

Exemplos
1.0
7.0
5.0
9.0
4.4721

-2.5
0.4
12.1
7.3
16.1484

2.5
-0.4
-12.2
.7.0
16.4575
*/
#include <stdio.h>
#include <math.h>//made wonder what is sqrt and how this lib was implemented

int main(void)
{
    double xi, xii, yi, yii, d;
    scanf("%lf%lf%lf%lf", &xi, &yi, &xii, &yii);
    d = sqrt(pow(xii-xi, 2) + pow(yii-yi, 2));
    printf("%.4lf\n", d);
    return 0;
}
//C nao possui operador exponencial embutido
//ou a definimos por meio de funcoes
//ou usamos a biblioteca math.h ou similar