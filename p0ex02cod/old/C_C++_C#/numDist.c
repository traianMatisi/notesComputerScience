#include <stdio.h>

int main(){
    int vetor[30];
    int tam, loop, rept, ent, comp, cont;
    
    scanf("%d", &tam);
    
    cont = 0;
    for(loop = 0; cont != tam ;loop++)
    {
        comp = 0;
        scanf("%d", &ent);
        for(rept = 0; vetor[rept] != '\0'; rept++)
        {
            if(ent == vetor[rept])
            {
                comp = 1;
                break;
            }
        }
        if(comp == 0)
        {
            vetor[cont] = ent;
            cont++;
        }
    }
    for(loop = 0; loop < tam; loop++)
    {
        printf("%d ", vetor[loop]);
    }
    return 0;
}