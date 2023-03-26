#include <stdio.h>

int main(void)
{
    int n = 15;
    int *p = &n;
    printf("%i\n", n);
    printf("%p\n", &n);
    printf("%p\n", p);
    printf("%p\n", &p);
}