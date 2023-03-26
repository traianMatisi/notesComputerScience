#include <stdio.h>

int f(int n);

int main(){
    int n = 0;
    int r = 0;
    printf("Digite um número inteiro:  ");
    scanf("%i", &n);
    r = f(n);
    printf("Fatorial de %i = %i\n", n, r);
    return 0;
}

int f(int n){
    if(n >= 1)
        return n * f(n - 1);
    else
        return 1;
}