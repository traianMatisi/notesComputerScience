#include <stdio.h>

int main(){
    double a, r;
    const double pi = 3.14159;
    scanf("%lf", &r);
    a = pi * r * r;
    printf("A=%.4lf", a);
    return 0;
}