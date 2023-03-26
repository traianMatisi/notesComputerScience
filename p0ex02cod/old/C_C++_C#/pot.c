#include <stdio.h>

int pot(int b, int e);

int main()
{
    int b, e;
    scanf("%d%d",&b,&e);
    printf("%d", pot(b, e));
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