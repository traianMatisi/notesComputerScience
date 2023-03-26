#include <stdio.h>

int main(){
    int n = 0;
    int r = 1;
    printf("Digite um número inteiro:  ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        r *= i;
    }
    printf("Fatorial de %i = %i\n", n, r);
    return 0;
}