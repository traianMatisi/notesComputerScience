#include <stdio.h>

int main(void)
{
    int a = 0, b = 1, c = 0, n;
    scanf("%i", &n);
    printf("-->%10.4i\n-->%8.2i\n", a, b);
    while(c <= n)
    {
        c = a + b;
        printf("-->%2.6i\n", c);
        a = b;
        b = c;
    }
    return 0;
}
// exemplos de formatacao do printf