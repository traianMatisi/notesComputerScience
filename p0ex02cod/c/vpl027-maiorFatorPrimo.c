/*
MAIOR FATOR PRIMO
Os fatores primos de 13195 são 5, 7, 13 e 29.
Qual é o maior fator primo do número 600851475143?
*/
#include <stdio.h>

int main(void)
{
    //long long int n = 13195;
    long long int n = 600851475143;// 600'851'475'143.00
    long long int primo = 2;// primeiro primo

    for(long long int i = 2; i <= n; i++)
    {
        //printf("% 5lli/% 2lli\n", n, i);
        if(n % i == 0)
        {
            //printf("MULTIPLO!!!\t>>> % 15lli | % 4lli\n", n, i);
            n /= i;
            primo = i;
            i = 1;
        }
    }
    printf("O maior fator primo e %i", primo);
    return 0;
}
// e possivel prever os primos p reduzir processamento? 2, 3, 5, 7, 11, 13, 17, 19...
// pensei em calcular os primos on the fly pra economizar processamento
// mas me parece que o processamento gasto nos primos seria o mesmo economizado os prevendo
// mais ainda, a solucao para tal ia gastar mais tempo de estudo