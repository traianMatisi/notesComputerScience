#include <stdio.h>

int main()
{
    int notas[50];
    int menor[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tam, loop, quinta, cont = 0;
    scanf("%d", &tam);
    for(loop = 0; loop < tam; loop++)
    {
        scanf("%d", &notas[loop]);
        menor[notas[loop]] += 1;
    }
    for(loop = 0; loop < 11; loop++)
    {
        if(menor[loop] > 0)
        {
            cont++;
            if(cont == 5)
            {
                quinta = loop;
            }
        }
    }
    printf("%d", quinta);
    return 0;
}