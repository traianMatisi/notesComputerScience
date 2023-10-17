/*
Dona Mônica é mãe de três filhos que têm idades diferentes. Ela notou que, neste ano, a soma das idades dos seus três filhos é igual à idade dela. Neste problema, dada a idade de dona Mônica e as idades de dois dos filhos, seu programa deve computar e imprimir a idade do filho mais velho.

Por exemplo, se sabemos que dona Mônica tem 52 anos e as idades conhecidas de dois dos filhos são 14 e 18 anos, então a idade do outro filho, que não era conhecida, tem que ser 20 anos, poisa soma das três idades tem que ser 52.

Portanto, a idade do filho mais velho é 20. Em mais um exemplo, se dona Mônica tem 47 anos e as idades de dois dos filhos são 21 e 9 anos, então o outro filho tem que ter 17 anos e, portanto, a idade do filho mais velho é 21.

Entrada

A primeira linha da entrada contém um inteiro M representando a idade de dona Mônica.  A segunda linha da entrada contém um inteiro A representando a idade de um dos filhos. A terceira linha da entrada contém um inteiro B representando a idade de outro filho.

Saída

Seu programa deve imprimir uma linha, contendo um número inteiro, representando a idade do filho mais velho de dona Mônica.

Restrições

40<= M <= 110
1 <= A < M
1 <= B < M
A != B

Exemplo de entrada 1
52
14
18
Exemplo de saída 1
20

Exemplo de entrada 2
47
21
9
Exemplo de saída 2
21
*/
#include <stdio.h>

int main(void)
{
    int m, a, b, c, cont = 0;
    // verificar as 56'175,00 possiveis idades de c no laço
    // algumas combinações não são possiveis dadas as restrições
    /*for(m = 40; m <= 110; m++)
    {
        for(a = 1; a < 40; a++)
        {
            for(b = 2; b < 40; b++)
            {
                c = m - (a + b);
                if(a != b && b != c && c != a && c < 40)
                {
                    printf("Possiveis idades: %d - %d - %d - %d\n", m, a, b, c);
                    cont++;
                }
            }
        }
    }
    printf("%i possibilidades\n", cont);
    a=b=c=m=0;*/
    scanf("%i%i%i", &m, &a, &b);
    c = m - (a + b);
    if(a == b || a >= 40 || b == c || b >= 40 || c == a || c >= 40 || m < 40 || m > 110)
    {
        //printf("Valores fora do escopo das restricoes\n"); //o VPL não pede tratamento de erros
    }
    else if(a > b && a > c)
    {
        printf("%i", a);
    }
    else if(b > c)
    {
        printf("%i", b);
    }
    else
    {
        printf("%i", c);
    }
    return 0;
}