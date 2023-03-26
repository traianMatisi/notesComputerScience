#include <stdio.h>

int main(){
    
    char vetor[60];
    int i;
    
    fgets(vetor, 60, stdin);
    
    if(vetor[0] >= 'a' && vetor[0] <= 'z'){
        vetor[0] = vetor[0] - 'a' + 'A';
    }
    
    for(i = 0; vetor[i] != '\0'; i++){
        if(vetor[i] == ' ' && vetor[i + 1] >= 'a' && vetor[i + 1] <= 'z'){
            vetor[i + 1] = vetor[i + 1] - 'a' + 'A';
        }
    }
    
    puts(vetor);
    
    return 0;
}