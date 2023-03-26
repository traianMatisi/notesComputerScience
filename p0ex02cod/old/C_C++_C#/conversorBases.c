#include <stdio.h>

int pot(int b, int e);

int main()
{
    int b, e;
    int num, bas, conv, div, rest, dec, i, RESP;
    float inte, deci;
    
    printf("Informe um numero e sua base numerica.\n");
    printf("Numero: ");
    scanf("%d", &num);
    printf("Base:\t");
    scanf("%d", &bas);

    printf("Digite a base numerica para conversao desejada: ");
    scanf("%d", &conv);

    inte = num/1;
    deci = num-inte;
    div = num;
    b = bas;

    for(i = 0, dec = 0; div != 0; i++)
    {
        rest = div%10;
        dec = dec + (pot(bas, i) * rest);
        div = div / 10;
        //printf(" + [%d * %d^%d]", rest, bas, i);
    }

    printf("=\n%d em decimal --> %d //::\\\\ ", num, dec);

    for(i = 0, rest = 0, RESP = 0; dec != 0; i++)
    {
        rest = dec%conv;
        RESP = RESP + (pot(10, i) * rest);
        dec = dec / conv;
        //printf("+ [%d * %d^%d]", rest, 10, i);
    }
    
    printf("--> em base %d --> %d\n", conv, RESP);

    return 0;
}

int pot(int b, int e)
{
    int i, p=1;
    for(i = 0; i < e; i++)
    {
        p = p * b;
    }
    return p;
}