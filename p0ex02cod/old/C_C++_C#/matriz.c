#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 256
//Exibe a matriz
void exibeMatriz(double **matriz, int m, int n){
     for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%2.7lf ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main (int ac, char **av){
    FILE   *p_arquivo = NULL;
    char   nomeArquivo[TAM];
    double **matriz;
    int    m;
    int    n;
    
    //copia o primeiro arquivo para a string: nomeArquivo
    strcpy(nomeArquivo, av[1]);
    
    
    printf("Nome do arquivo:[%s]\n", nomeArquivo); 
    p_arquivo = fopen(nomeArquivo, "r+");
    //verifica que o arquivo foi aberto, caso contrário retorna erro
    if (p_arquivo == NULL){
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        exit(EXIT_FAILURE);
    }
    //... Coloque o código....
    
    
    
    exibeMatriz(matriz, m, n);
    
    fclose(p_arquivo);
    return EXIT_SUCCESS;
}
