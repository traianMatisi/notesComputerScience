/*
MULTIPLOS DE 3 E 5
Se listarmos todos os números naturais menores do que 10 que são múltiplos de 3 ou 5, temos: 3, 5, 6 e 9. E a soma desses múltiplos é 23.
Encontre a soma de todos os múltiplos de 3 e 5 menores do que X.
Entrada
Primeira linha informa um inteiro positivo X. 
Saída
Imprima a soma de todos os valores divisíveis por 3 e 5 maiores que 0 e menores que X.
*/
#include <stdio.h>

int main(void)
{
    int x, soma = 0;
    scanf("%i", &x);
    for(int i = 0; i < x; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma += i;
        }
    }
    printf("Soma = %i", soma);
    return 0;
}