#include <stdio.h>

int main(void)
{
    char nome[4] = "Yan";// caso tenha mais um char, \0 sera apagado
    char nomes[4] = "Vaz"; // compiladores recentes contornam seg fault

    gets(nomes);
    gets(nome);

    puts(nomes);
    puts(nome);

    return 0;
}
// gets nunca e seguro e -Wall alerta q gets NUNCA e seguro