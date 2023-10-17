#include <stdio.h>

void swap(int *a, int *b);

void main(void)
{
    int couple[] = {7, 11};
    printf("X = %i\nY = %i\n", couple[0], couple[1]);
    swap(&couple[0], &couple[1]);
    printf("X = %i\nY = %i\n", couple[0], couple[1]);
}

void swap
(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}