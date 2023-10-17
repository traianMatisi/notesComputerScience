#include <stdio.h>

int fatorial(int a);

void main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%i! = %i\n", i, fatorial(i));
    }
}

int fatorial(int a)
{
    if (a != 0) {
        return a *= fatorial(a-1);
    }
    else {
        return 1;
    }
}