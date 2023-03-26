#include <stdio.h>
#include <string.h>

int main(){
    
    int repeticoes, i, j, k = 0, aparece_mais, casa;
    int aparece[26];
    char entrada[201], saida[26];
    
    scanf("%d ", &repeticoes);
    
    for(i = 0; i < repeticoes; i++){
        fgets(entrada, 200, stdin);   
        
        aparece_mais = 0;
        memset(aparece, 0, sizeof(aparece));
        for(j = 0; entrada[j] != '\0'; j++){
            if(entrada[j] >= 'A' && entrada[j] <= 'Z'){
                casa = entrada[j] - 'A';
                ++aparece[casa];
                if(aparece[casa] > aparece_mais){
                    aparece_mais = aparece[casa];
                }
            }
            if(entrada[j] >= 'a' && entrada[j] <= 'z'){
                casa = entrada[j] - 'a';
                ++aparece[casa];
                if(aparece[casa] > aparece_mais){
                    aparece_mais = aparece[casa];
                    
                }
            }
        }
        
        for(j = 0, k = 0; j < 26; j++){
            if(aparece[j] == aparece_mais){
                saida[k] = j + 'a';
                k++;
            }
        }
        saida[k] = '\0';
        fputs(saida, stdout);
        printf("\n");
        for(j = 0; saida[j] != '\0'; j++){
            saida[j] = 0;
        }
    }
    return 0;
}