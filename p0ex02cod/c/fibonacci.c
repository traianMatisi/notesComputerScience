#include <stdio.h>

int main(void)
{
    int a = 0, b = 1, c = 0, n;
    scanf("%i", &n);
    printf("-->%.5i\n-->%.5i\n", a, b);
    while(c <= n)
    {
        c = a + b;
        printf("-->%.5i\n", c);
        a = b;
        b = c;
    }
    return 0;
}
// exemplos de formatacao do printf