#include <stdio.h>

int main()
{
    int i;
    char vetor[1001];
    
    while (scanf("%s", vetor) != EOF){
        int esq = 0, dir = 0;
        for(i = 0; vetor[i] != '\0'; i++){
            if(vetor[i] == '('){
                esq++;
            }
            else if(vetor[i] == ')'){
                dir++;
            }
            if(dir > esq){
                break;
            }
        }
        if(esq == dir){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }

    return 0;
}