#include <stdio.h>

int main(int argc, char**argv)
{
    // IMPRIME NUMERO DE ARGUMENTOS
    //printf("argc = %i\n", argc);

    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j] != '\0'; j++)
        {
            printf("%i", argv[i][j] - '0');
        }
        putchar('\n');
    }
    
    return 0;
}