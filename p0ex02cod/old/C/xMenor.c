#include <stdio.h>

int main(){
    
    int notas[50];
    int menor[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tam, loop, quinta, cont, enes;
    
    scanf("%d", &tam);
    scanf("%d", &enes);
    
    cont = 0;
    for(loop = 0; loop < tam; loop++)
    {
        scanf("%d", &notas[loop]);
        menor[notas[loop]] += 1;
    }
    for(loop = 0; loop < 12; loop++)
    {
        if(menor[loop] > 0)
        {
            cont++;
            if(cont == enes)
            {
                quinta = loop;
            }
        }
    }
    printf("%d", quinta);
    return 0;
}