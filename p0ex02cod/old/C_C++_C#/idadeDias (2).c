#include <stdio.h>

int main(){
    int idade, anos, meses, dias;
    //printf("Informe sua idade em dias:\n");
    scanf("%d", &idade);
    anos = idade/365;
    meses = (idade%365)/30;
    dias = (idade%365)%30,
    printf("%d ano(s) %d mes(es) %d dia(s)", anos, meses, dias);
    return 0;
}