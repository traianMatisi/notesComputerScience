#include <stdio.h>

int main(void)
{
    int numero, linhas, colunas, soma[3] = {0};
    
    printf("\nDigite a ordem da matriz:\n");
    printf("Linhas(m): ");
    scanf("%i", &linhas);
    printf("Colunas(n): ");
    scanf("%i", &colunas);
    
    int matriz[linhas][colunas];
    
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("Digite o elemento (%i,%i): ", i+1, j+1);
            scanf("%i", &numero);
            matriz[i][j] = numero;            
        }
    }

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf(" %i  ", matriz[i][j]);            
        }
        printf("\n");
    }
    
    if(linhas == colunas)
    {
        for(int i = 0, j = 0; i < linhas; i++, j++)
        {
            soma[0] += matriz[i][j];
        }
        printf("Somatorio diagonal principal = %i\n", soma[0]);

        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
            {
                if(i > j)
                {
                    break;
                }
                else
                {
                    soma[1] += matriz[i][j];
                }  
            }
        }
        printf("Somatorio triangulo superior = %i\n", soma[1]);

        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
            {
                if(i < j)
                {
                    break;
                }
                else
                {
                    soma[2] += matriz[i][j];
                }
            }
        }
        printf("Somatorio triangulo inferior = %i\n", soma[2]);
    }
}