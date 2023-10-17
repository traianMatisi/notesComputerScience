/*
CONVERSÃO DE TEMPO
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

Exemplos
556
0:9:16

1
0:0:1

140153
38:55:53
*/
#include <stdio.h>

int main(void)
{
    int seg, min, hr;
    scanf("%i", &seg);
    hr = seg/3600;
    seg %= 3600;
    min = seg/60;
    seg %= 60;
    printf("%i:%i:%i\n", hr, min, seg);
    return 0;
}
//podemos fazer com o resto ou subtraindo o resultado em estágios
//aqui escolhi por fazer com o resto