/*
NUMERO PRIMO
Escreva um programa em C que verifique se um número é primo. O algoritmo deve ter como entrada um número N > 0 qualquer. A saída deve indicar se o número é primo ou não.
Casos de Testes:
2
primo

3
primo

4
nao
*/
#include <stdio.h>

int main(void)
{
    int n, primo = 0;
    do
    {
        scanf("%i", &n);
    }
    while(n < 1);
    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0) primo++;//vide nota ao fim
    }
    if (primo == 1)
    {
        printf("É primo");
    }
    else
    {
        printf("Não é primo");
    }
    return 0;
}
//one liner demonstrando como funciona sintaxe do if sem chaves (valeu Braida!)