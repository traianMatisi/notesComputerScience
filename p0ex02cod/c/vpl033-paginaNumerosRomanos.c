/*
Numeração Romana para Números de Página

A ECI (Editio Chronica Incredibilis ou Editora de Crônicas Incríveis) é muito tradicional quando se trata de numerar as páginas de seus livros. Ela sempre usa a numeração romana para isso. E seus livros nunca ultrapassam as 999 páginas pois, quando necessário, dividem o livro em volumes.
Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na numeração romana.
Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.
Entrada
A entrada é um número inteiro positivo N (0 < N < 1000).
Saída
A saída é o número N escrito na numeração romana em uma única linha. Use sempre letras maiúsculas.
Exemplos de Entrada e Saída:
666
DCLXVI

83
LXXXIII

999
CMXCIX
*/
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        scanf("%i", &n);
    }
    while(n < 0 || n > 999);
    
    char numeros[3];
    for(int i = 0; i < 3; i++)
    {
        numeros[i] = n % 10;
        n /= 10;
    }

    switch(numeros[0])
    {
    case 1:// C
        printf("C");
        break;
    case 2:// CC
        printf("CC");
        break;
    case 3:// CCC
        printf("CCC");
        break;
    case 4:// CD
        printf("CD");
        break;
    case 5:// D
        printf("D");
        break;
    case 6:// DC
        printf("DC");
        break;
    case 7:// DCC
        printf("DCC");
        break;
    case 8:// DCCC
        printf("DCCC");
        break;
    case 9:// CM
        printf("CM");
        break;
    }
    switch(numeros[1])
    {
    case 1:// X
        printf("X");
        break;
    case 2:// XX
        printf("XX");
        break;
    case 3:// XXX
        printf("XXX");
        break;
    case 4:// XL
        printf("XL");
        break;
    case 5:// L
        printf("L");
        break;
    case 6:// LX
        printf("LX");
        break;
    case 7:// LXX
        printf("LXX");
        break;
    case 8:// LXXX
        printf("LXXX");
        break;
    case 9:// XC
        printf("XC");
        break;
    }
    switch(numeros[1])
    {
    case 1:// I
        printf("I");
        break;
    case 2:// II
        printf("II");
        break;
    case 3:// III
        printf("III");
        break;
    case 4:// IV
        printf("IV");
        break;
    case 5:// V
        printf("V");
        break;
    case 6:// VI
        printf("VI");
        break;
    case 7:// VII
        printf("VII");
        break;
    case 8:// VIII
        printf("VIII");
        break;
    case 9:// IX
        printf("IX");
        break;
    }
    printf("\n");
    return 0;
}