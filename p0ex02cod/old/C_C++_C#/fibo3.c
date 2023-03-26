#include <stdio.h> 
#include <stdlib.h>

int contador;

int fib(int v){
    contador++;
    if (v<2){
        return v;
    }
    else{
        return (fib(v-1)+fib(v-2));
    }
}

int main(int argc, char const *argv[]){
    int n, res;
    scanf("%d", &n);
    res = fib(n);
    printf("%d\n", res);
    return 0;
}