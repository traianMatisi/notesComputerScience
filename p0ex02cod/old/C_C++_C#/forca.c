#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, k=0;
    char segredo[] = "LIQUIDIFICADOR";
    char palavra[strlen(segredo)];
    char conv, chute;
    char chutes[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char dec;
    int gameOn=1;
    //int len;
	/*printf("Digite a palavra secreta: ");
    fgets(segredo, 29, stdin);*/ //palavras capturadas com fgets possuem strlen 1+ e \n ou \0 embutido nele
	//len = strlen(segredo);

    //gerando forca
    char forca[8][12] = {{"___________ "},
                         {"|/        | "},
                         {"|         | "},//cabeca [3][10]
                         {"|        (_)"},//tronco [4][10]
                         {"|           "},//pernaDir [5][9]
                         {"|           "},
                         {"|           "},
                         {"|           "}};
    
    //gerando palavra vazia (underscores)
    for(i = 0; i < strlen(segredo); i++)
	{
        palavra[i] = '_';
	}

    while(gameOn)
    {
		printf("\nstrlen segredo = %d\n", strlen(segredo));
		printf("strlen segredo = %d\n\n", strlen(palavra));
        
        //imprimindo a forca
        for(i = 0; i < 8; i++)
        {
            for(j = 0; j < 12; j++)
            {
                printf("%c", forca[i][j]);
            }
            printf("\n");
        }

        //imprimindo vazios (underscores) e letras adivinhadas
        printf("|:: ");
        for(i = 0; i < strlen(segredo); i++)
        {
            printf("%c ", palavra[i]);
        }

        //imprimindo chutes nao realizados
        printf("\n\nChutes possiveis --> [");
        for(i = 0; i < strlen(chutes); i++)
        {
        	printf("%c ", chutes[i]);
        }
        printf("]\n");
        
        //capturando entrada
        printf("Tente adivinhar uma letra: ");
        scanf(" %c", &conv);//variavel para coversao do chute para maiusculo
		chute = conv - 'a' + 'A';//conversor de letra para maiusculo
		
		//apaga letra da lista de chutes possiveis
        for(i = 0; i < strlen(chutes); i++)
        {
        	if(chutes[i] == chute)
        	{
        		chutes[i] = ' ';
        	}
        }
        
		for(i = 0, j = 0; i < strlen(segredo); i++)//variavel j sao os erros de caracteres, k sao os acertos
		{
			if(segredo[i] == chute)//se chute for igual a letra no indice, substitui e acrescenta acerto k
			{
				palavra[i] = chute;        		
				k++;
			}
			else//senao cadeia de eventos pra desenhar boneco enforcado
			{
				j++;
				if(j == strlen(segredo) && forca[3][10] != 'O')//cabeca
				{
				forca[3][9] = ' ';
				forca[3][10] = 'O';
				forca[3][11] = ' ';
				}
				else if(j == strlen(segredo) && forca[4][10] != '|')//tronco
				{
					forca[4][10] = '|';
				}
				else if(j == strlen(segredo) && forca[4][9] != '/')//braco direito
				{
					forca[4][9] = '/';
				}
				else if(j == strlen(segredo) && forca[4][11] != '\\')//braco esquerdo
				{
					forca[4][11] = '\\';
				}
				else if(j == strlen(segredo) && forca[5][9] != '/')//perna direita
				{
					forca[5][9] = '/';
				}
				else if(j == strlen(segredo) && forca[5][11] != '\\')//perna esquerda e fim de jogo
				{
					forca[5][11] = '\\';
					//imprimindo a forca
					for(i = 0; i < 8; i++)
					{
						for(j = 0; j < 12; j++)
						{
						printf("%c", forca[i][j]);
						}
						printf("\n");
					}

					//imprimindo vazios (underscores) e letras adivinhadas
					printf("|:: ");
					for(i = 0; i < strlen(segredo); i++)
					{
						printf("%c ", palavra[i]);
					}

					//imprimindo chutes nao realizados
					printf("\n\nChutes possiveis --> [");
					for(i = 0; i < strlen(chutes); i++)
					{
						printf("%c ", chutes[i]);
					}
					printf("]\n");
					printf("Que peninha, voce perdeu o jogo. A palavra secreta era %s", segredo);
					gameOn = 0;
				}
			}
			
			//printf("%d\n%d\n", k, strlen(segredo));
			if(k == strlen(segredo))//se total de acertos for igual ao total de letras nao ha mais letras a serem adivinhadas
			{
				//imprimindo a forca
				for(i = 0; i < 8; i++)
				{
					for(j = 0; j < 12; j++)
					{
					printf("%c", forca[i][j]);
					}
					printf("\n");
				}

				//imprimindo vazios (underscores) e letras adivinhadas
				printf("|:: ");
				for(i = 0; i < strlen(segredo); i++)
				{
					printf("%c ", palavra[i]);
				}
				//imprimindo chutes nao realizados
				printf("\n\nChutes possiveis --> [");
				for(i = 0; i < strlen(chutes); i++)
				{
					printf("%c ", chutes[i]);
				}
				printf("]\n");
				printf("Parabens, voce adivinhou a palavra secreta\n");
				gameOn = 0;
			}
		}
	}
    return 0;
}