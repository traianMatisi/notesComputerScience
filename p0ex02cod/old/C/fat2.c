#include <stdio.h> 
#include <stdlib.h>

int fat(int v){
    if (v < 2){
        return 1;
    }
    else
    {
        return (v*fat(v - 1));
    }
}

int main(int argc, char const *argv[]){
    int a, b;
    scanf("%d", &a);
    b = fat(a);
    printf("%d\n", b);
    return 0;
}