#include<stdlib.h>

typedef struct
{
    int *lista;
    int size;
} VETOR;

VETOR * ordena(VETOR *a) {

    int i, j, tmp;
    VETOR *b = (VETOR *)malloc(sizeof(VETOR));
    b->size = a->size;
    
    i = 0;
    while(i < a->size - 1){
        j = 0;
        while(j < a->size - 1){
            if (a->lista[j] < a->lista[i]){
                tmp = a->lista[i];
                a->lista[i] = a->lista[j];
                a->lista[j] = tmp;
            }
            j++;
        }
        i++;
    }
    b->lista = (int *)malloc(a->size * sizeof(int));
    b->lista = a->lista;
    return b;
}