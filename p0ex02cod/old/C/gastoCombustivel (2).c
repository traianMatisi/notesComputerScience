#include <stdio.h>

int main(){
    float horas, velocidade, combustivel;
    printf("Digite o total de horas de viagem:\n");
    scanf("%f", &horas);
    printf("Digite a velocidade media da viagem:\n");
    scanf("%f", &velocidade);
    combustivel = (velocidade * horas)/12;
    printf("%.3f", combustivel);
    return 0;
}