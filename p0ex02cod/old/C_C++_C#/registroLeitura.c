#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 512
typedef struct registro{
    char nome[TAM];
    float cr;
}tpRegistro;

void exibe( tpRegistro *registros, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%s \t\t%1.3f\n", registros[i].nome, registros[i].cr);

    }
}

int main (int ac, char **av){
    tpRegistro *registros;
    int        t;
    FILE       *p_arquivo;
    char        nomeArquivo[TAM];
    
    strcpy(nomeArquivo, av[1]);
    printf("Arquivo de leitura: [%s]\n", nomeArquivo);
    //Escrever o código para abrir o arquivo e ler os registros do arquivo
    //Lembrar: é preciso alocar a memória primeiro
        // .... ///
    exibe(registros, t);
    
    return EXIT_SUCCESS;
}
