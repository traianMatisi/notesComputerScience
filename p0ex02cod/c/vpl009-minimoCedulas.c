/*
Leia um total inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o total pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o total lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um total inteiro N (0 < N < 1000000).

Saída
Imprima o total lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido.

Exemplos
576
576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00

11257
11257
112 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
0 nota(s) de R$ 1,00

503
503
5 nota(s) de R$ 100,00
0 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
0 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
*/
#include <stdio.h>

int main(void)
{
    int total;
    int notas[7] = {0, 0, 0, 0, 0, 0, 0};// aprendi mais tarde podemos inicicalizar com um so zero {0}
    float valor[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%i", &total);
    for(int i = 0; i < 7 ; i++)
    {
        notas[i] = total/valor[i];
        printf("%i nota(s) de R$ %.0f,00\n", notas[i], valor[i]);
        total = total - notas[i] * valor[i];
    }
    return 0;
}
//Ter especial cuidado com os placeholders nas operações e usar casting se necessário