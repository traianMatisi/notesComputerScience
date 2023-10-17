/*
1 - Primeiro resolvemos as colunas e linhas com input 4, pois o único resultado possivel e das caixas em ordem crescente

*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
    // CHECANDO SE COMANDO DE EXECUCAO FOI VALIDO
    if(!(argc > 1))
    {
        printf(">>> To few arguments\n>>> Please, type the row/col values\n");
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        if(argv[i][0] == 12)
        {
            printf("Numeric values in arguments");
        }
    }
    

    // ALOCANDO VETOR DE INTEIROS P CONVERTIDOS DE **ARGV
    int*argi = malloc((argc-1) * sizeof(int));

    // IMPRIMINDO CADA **ARGV
    printf("argc = %i\n", argc);
    for (int i = 1; i < argc; i++)
    {
        printf("argv[%i] = %s\n", i, argv[i]);

    }
    printf("argv[0][0] = %c\n", argv[0][0]);
    printf("argv[0][1] = %c\n", argv[0][1]);
    printf("argv[0][2] = %c\n", argv[0][2]);
    printf("argv[0][3] = %c\n", argv[0][3]);
    printf("argv[0][4] = %c\n", argv[0][4]);
    printf("argv[0][5] = %c\n", argv[0][5]);
    printf("argv[0][6] = %c\n", argv[0][6]);
    printf("argv[0][7] = %c\n", argv[0][7]);
    printf("argv[1][0] = %c\n", argv[1][0]);
    printf("argv[1][1] = %c\n", argv[1][1]);
    printf("argv[1][2] = %c\n", argv[1][2]);
    printf("argv[1][3] = %c\n", argv[1][3]);
    printf("argv[1][4] = %c\n", argv[1][4]);
    printf("argv[1][5] = %c\n", argv[1][5]);
    printf("argv[1][6] = %c\n", argv[1][6]);
    printf("argv[1][7] = %c\n", argv[1][7]);

    return 0;    
}