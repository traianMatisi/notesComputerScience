#include <stdio.h>
#include <math.h>

void dec_para_bin(int entrada)
{
    int i = 0, j;
    int vetor[30];
    while(entrada > 1)
    {
        vetor[i] = entrada%2;
        entrada /= 2;
        i++;
    }
    vetor[i] = entrada;
    for(j = i; j >= 0; j--)
    {
        printf("%d", vetor[j]);
        if(j==0)
        {
            printf(" bin");
        }
    }
    printf("\n");
}

void dec_para_hex(int entrada)
{
    int i = 0, j;
    char vetor[30];
    while(entrada > 15)
    {
        if(entrada%16 > 9)
        {
            vetor[i] = (entrada%16) % 10 + 'a';  
            entrada = entrada/16;
            i++;
        }
        else
        {
            vetor[i] = entrada%16 + '0';
            entrada = entrada/16;
            i++;
        }
    }
    if(entrada > 9)
    {
        vetor[i] = (entrada % 10) + 'a';
        i++;
    }
    else
    {
        vetor[i] = entrada + '0';
        i++;
    }
    for(j = i - 1; j >= 0; j--)
    {
        printf("%c", vetor[j]);
        if(j==0)
        {
            printf(" hex");
        }
    }
    printf("\n");
}

void bin_para_hex(int entrada)
{
    int decimal = 0, i = 0;
    while(entrada > 1)
    {
        decimal += (entrada%10) * pow(2, i);
        entrada = entrada/10;
        i++;
    }
    decimal += entrada * pow(2, i);
    dec_para_hex(decimal);
}

void bin_para_dec(int entrada)
{
    int decimal = 0, i = 0;
    while(entrada > 1)
    {
        decimal += (entrada%10) * pow(2, i);
        entrada = entrada/10;
        i++;
    }
    decimal += entrada * pow(2, i);
    printf("%d dec\n", decimal);
}

int main(void)
{
    int entrada, i, j, k;
    long int vetor[30];
    char numero[30], palavra[30];
    scanf("%d", &entrada);
    for(i = 0; i < entrada; i++)
    {
        vetor[i] = 0;
        scanf("%s", numero);
        scanf("%s", &palavra[i]);
        if(palavra[i] == 'h')
        {
            for(j = 0; numero[j] != '\0'; j++){}
            for(k = 0; numero[k] != '\0'; k++)
            {
                if(numero[k] >= 'A' && numero[k] <= 'Z')
                {
                    vetor[i] += (numero[k] - 'A' + 10) * pow(16, j - 1);
                    j--;
                }
                else if(numero[k] >= 'a' && numero[k] <= 'z')
                {
                    vetor[i] += (numero[k] - 'a' + 10) * pow(16, j - 1);
                    j--;
                }
                else
                {
                    vetor[i] += (numero[k] - '0') * pow(16, j - 1);
                    j--;
                }
            }
        }
        else
        {
            for(j = 0; numero[j] != '\0'; j++){}
            for(k = 0; numero[k] != '\0'; k++)
            {
                vetor[i] += (numero[k] - '0') * pow(10, j - 1);
                j--;
            }
        }
    }
    for(i = 0; i < entrada; i++)
    {
        switch(palavra[i])
        {
            case 'b':
                printf("Case %d\n", i + 1);
                bin_para_dec(vetor[i]);
                bin_para_hex(vetor[i]);
                break;
                
            case 'd':
                printf("Case %d\n", i + 1);
                dec_para_hex(vetor[i]);
                dec_para_bin(vetor[i]);
                break;
                
            case 'h':
                printf("Case %d\n", i + 1);
                printf("%ld dec\n", vetor[i]);
                dec_para_bin(vetor[i]);
                break;
        }
    }
    return 0;
}
