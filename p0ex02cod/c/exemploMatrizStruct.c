#include <stdio.h>

typedef struct MATRIZ//caso se venha a referenciar esse struct dentro dele mesmo, nomeamos aqui
{
    float valor;
    int i, j;
}
MATRIZ;//Nome do tipo final

int main(int argc, char**argv)
{
    int i = 5, j = 5;

    printf("Digite as dimensões 'i' e 'j' da matriz\n>>> ");
    scanf("%i%i", &i, &j);



    struct MATRIZ A[5];

    /*
    Inacabada. Preciso de ideias
    */
}
