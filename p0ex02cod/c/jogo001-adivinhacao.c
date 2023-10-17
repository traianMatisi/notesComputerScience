#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int dificuldade, tentativas, segundos, numero, chute, placar = 1000;    

    do
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("|  Bem vindo ao jogo de adivinhacao   |");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\nEscolha uma dificuldade:\n\n[ 1 - Facil ]\n[ 2 - Medio ]\n[ 3 - Bruto ]\n");
        scanf("%i", &dificuldade);
    }
    while(dificuldade < 1 || dificuldade > 3);
    
    switch(dificuldade)
    {
        case 1:
            tentativas = 15;
            break;
        case 2:
            tentativas = 10;
            break;
        case 3:
            tentativas = 5;
            break;
    }

    // METODO 1 DE NUMERO ALEATORIO
    //srand((unsigned)time(NULL));
    //numero = rand() % 100;

    // METODO 2 DE NUMERO ALEATORIO
    srand(time(0));
    numero = rand() % 100;

    do
    {
        if(tentativas == 0)
        {
            printf("Acabaram suas chances\nGame over\n");
            break;
        }
        printf("Voce tem %i tentativas\n", tentativas);
        printf("Chute um numero:\n>>> ");
        scanf("%i", &chute);
        if(chute > 99 || chute < 0)
        {
            printf("Numero invalido\nDigite um numero enter 0 e 99\n");
            continue;
        }        
        if(chute < numero) printf("O numero sorteado e maior\n");
        else if(chute > numero) printf("O numero sorteado e menor\n");
        else printf("Voce acertou o numero. Parabens\n"); 
        tentativas--;
        placar -= abs(chute - numero);
    }
    while(chute != numero);

    printf("Placar: %i", placar);

    return 0;    
}
// Dicas de melhorias:
// Deixar o usuario escolher o limite do numero aleatorio
// Deixar o usuario definir o fim de execucao do jogo, mesmo depois de terminar uma patida
// Avisar de numeros ja tentados