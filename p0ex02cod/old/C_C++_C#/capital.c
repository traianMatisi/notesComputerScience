#include <stdio.h>

int main(){
    
    int i;
    char nome[200];
    
    scanf("%s", nome);
    
    for(i=0; nome[i] >= i; i++){
        if (nome[i] >= 'A' && nome[i] < 'a'){
            nome[i] = nome[i] -'A' + 'a';
            continue;
        }
    }
    nome[0] = nome[0] - 'a' + 'A';
    
    printf("%s\n", nome);
    
    return 0;
}