#include <stdio.h>

void soma(int *point, int stop){
    int res = 0;
    while(stop > 0)
    {
        res += *point;
        point++;
        stop--;
    }
    printf("%d\n", res);
}

int main()
{
    int entry, stop, i, j, vetor[50];
    scanf("%d", &entry);
    for(i = 0; i < entry; i++)
    {
        scanf("%d", &stop);
        for(j = 0; j < stop; j++)
        {
            scanf("%d ", &vetor[j]);
        }
        soma(vetor, stop);
    }
    return 0;
}