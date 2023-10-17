#include <stdio.h>

void swap(double*a, double*n);

int main(void)
{
    double a = 3, b = 4;
    printf("a = %i\nb = %i\n", a, b);
    swap(&a, &b);
    printf("a = %i\nb = %i\n", a, b);
    return 0;
}

void swap(double*a, double*b)
{
    double tmp;
    if(a < b)
    {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
}