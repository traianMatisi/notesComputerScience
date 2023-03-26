#include <stdio.h>

int main()
{
    int seek, size, i, found = -1;
    scanf("%d", &seek);
    scanf("%d", &size);
    int vetor[size];
    for(i = 0; i < size; i++)
    {
        scanf("%d", &vetor[i]);
        if(seek == vetor[i])
        {
            found = i;
            break;
        }
    }
    printf("%d", found);
    return 0;
}