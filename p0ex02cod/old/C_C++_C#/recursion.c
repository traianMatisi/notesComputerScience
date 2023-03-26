#include <stdio.h>

void piramid(int h);

int main()
{
    int height;

    printf("Digite altura da pirâmide:  ");
    scanf("%i", &height);
    piramid(height);
    
    return 0;
}

void piramid(int h)
{
    if(h == 0)
        return;
    piramid(h-1);
    for(int i = 0; i < h; i++)
        printf("#");
    printf("\n");
}