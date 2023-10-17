/*
NUMEROS PARES DE FIBONACCI
Cada novo termo na sequencia de Fibonacci é gerado ao somar os dois termos anteriores. Ao iniciar com 1 e 2, os 10 primeiros termos serão:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
Ao considerar os termos na sequencia de Fibonacci em que os valores não excedem X, encontre a soma dos termos pares.

Entrada
A entrada consiste de um valor inteiro positivo, X

Exemplo:
Entrada: 1000
Saida: 798
*/
#include <stdio.h>

int main(void)
{
    int soma = 0, a = 0, b = 1, c, x;// a e b nao iniciam em 1 e 2 apesar do pedido do programa
    scanf("%i", &x);
    while(b <= x)// nao excedem x, mas o incluem
    {
        
        c = a + b;
        printf("%0.4i + %0.4i = %0.4i\n", a, b, c);
        a = b;
        b = c;
        if(c % 2 == 0)
        {
            soma += c;
            printf("Acumulando c -> Soma = %0.4i\n", soma);
        }
        else
        {
            printf("Descartando termo impar\n");
        }
    }
    printf("Soma = %0.4i", soma);
    return 0;
}