#include <stdio.h>

int main()
{
    int entrada, i, controle;
    scanf("%d ", &entrada);
    
    controle = entrada/1000;
    entrada -= controle*1000;
    
    while(controle > 0)
    {
        printf("M");
        controle--;
    }
    
    
    controle = entrada/100;
    entrada -= controle*100;
    
    while(controle > 0)
    {
        if (controle == 9)
        {
            printf("CM");
            controle = 0;
        }
        if (controle < 9 && controle >= 5)
        {
            printf("D");
            controle -= 5;
        }
        if (controle < 5 && controle > 0)
        {
            printf("C");
            controle--;
        }
    }
    
    controle = entrada/10;
    entrada -= controle*10;
    
    while(controle > 0)
    {
        if (controle == 9)
        {
            printf("XC");
            controle = 0;
        }
        if (controle < 9 && controle >= 5)
        {
            printf("L");
            controle -= 5;
        }
        if (controle < 5 && controle > 0)
        {
            printf("X");
            controle--;
        }
    }
    
    controle = entrada;
    
    while(controle > 0)
    {
        if (controle == 9)
        {
            printf("IX");
            controle = 0;
        }
        if (controle < 9 && controle >= 5)
        {
            printf("V");
            controle -= 5;
        }
        if (controle < 5 && controle > 0)
        {
            printf("I");
            controle--;
        }
    }
    
    entrada -= entrada;

    printf("\n");
    return 0;
}