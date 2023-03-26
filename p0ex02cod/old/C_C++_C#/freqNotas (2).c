#include <stdio.h>

int main(){
    
    int notas[20];
    int contador[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int provas, loop;
    
    scanf("%d", &provas);
    
    for(loop = 0; loop < provas; loop++){
        scanf("%d", &notas[loop]);
    }
    
    for(loop = 0; loop < provas; loop++){
        contador[notas[loop]] += 1;
    }
    
    for(loop = 0; notas[loop] != '\0'; loop++){
        printf("%d ", contador[loop]);
    }
    
    return 0;
}