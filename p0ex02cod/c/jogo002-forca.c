#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define  FALSE 0

#define ROW 8
#define COL 12

int main(int argc, char**argv)
{
    int length = 0, total_erros = 0;
    int gameon = TRUE, erro = FALSE;
    char chute;
    char doll[] = {' ', 'O', '|', '/', '\\', '/', '\\'};
    char forca[ROW][COL] =
    {
        {"___________ "},
        {"|/        | "},
        {"|         | "},
        {"|        (_)"},//cabeca [3][10]
        {"|           "},//tronco [4][10]
        {"|           "},//pernaDir [5][9]
        {"|           "},
        {"|           "}
    };
    // TO UPPER
    for(int i = 0; argv[1][i] != '\0'; i++)
    {
        if(argv[1][i] > 96 && argv[1][i] < 123)
        {
            argv[1][i] -= ('a' + 'A');
        }        
    }

    // LENGTH INIT
    for(int i = 0; argv[1][i] != '\0'; i++)
    {
        length++;
    }

    // STR CPY
    char*palavra = malloc(length * sizeof(char));
    for(int i = 0; i < length; i++)
    {
        palavra[i] = argv[1][i];
    }

    // STR LCN INIT
    char*lacuna = malloc(length * sizeof(char));
    for(int i = 0; i < length; i++)
    {
        lacuna[i] = '_';
    }

    do
    {    
        // HIDE STR
        system("cls");

        // MTX FRC PRT
        for(int i = 0; i < ROW; i++)
        {
            for(int j = 0; j < COL; j++)
            {
                printf("%c", forca[i][j]);
            }
            putchar('\n');
        }    

        // STR LCN PRT
        printf(":::>>> ");
        for(int i = 0; i < length; i++)
        {
            printf("%c", lacuna[i]);
        }
        putchar('\n');

        do
        {
            printf("Chute uma letra\n>>> ");
            scanf(" %c", &chute);
            // TO UPPER
            if(chute > 96 && chute < 123)
            {
                chute = chute - 'a' + 'A';
            }
            printf("Seu chute foi %i", chute);
            // IS ALPHA?
            if(!(chute > 64 && chute < 91))
            {
                printf("Chute invalido\nDigite apenas letras");
            }   
        }
        while(!(chute > 64 && chute < 91));

        // STR CMP
        erro = TRUE;
        for(int i = 0; i < length; i++)
        {
            if(chute == palavra[i])
            {
                lacuna[i] = palavra[i];
                erro = FALSE;
            }
        }
        if (erro == TRUE)
        {
            total_erros++;
        }

        switch(total_erros)
        {
            case 1:
                forca[3][9] = doll[0];
                forca[3][10] = doll[1];
                forca[3][11] = doll[0];
                break;
            case 2:
                forca[4][10] = doll[2];
                break;
            case 3:
                forca[4][9] = doll[3];
                break;
            case 4:
                forca[4][11] = doll[4];
                break;
            case 5:
                forca[5][9] = doll[5];
                break;
            case 6:
                forca[5][11] = doll[6];
                gameon = FALSE;
                printf("GAME OVER!");
                break;
        }
    }
    while(gameon);
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("%c", forca[i][j]);
        }
        putchar('\n');
    }
    /*
    FILE*forcaWords = fopen("jogo002-forca.txt", "a");    
    fprintf(forcaWords, argv[1]);
    fprintf(forcaWords, "\n");
    //fgets(palavra, 255, forcaWords);
    //printf("%s", palavra);
    fclose(forcaWords);
    */
   free(palavra);
   free(lacuna);
    return 0;
}