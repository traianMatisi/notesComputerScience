#include <stdio.h>

#define PI 3.14159

int main(void)
{
    double A, r;
    scanf("%lf", &r);
    A = PI*r*r;
    printf("%.4lf\n", A);
}