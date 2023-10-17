/*
IPOS DE TRIANGULOS
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
Saída
Imprima todas as classificações do triângulo especificado na entrada.
Exemplos
 7.0 5.0 7.0
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES

6.0 6.0 10.0
TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES

6.0 6.0 6.0
TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO

5.0 7.0 2.0
NAO FORMA TRIANGULO

6.0 8.0 10.0
TRIANGULO RETANGULO
*/
#include <stdio.h>
#include <math.h>

#define TAM 3

void swap(double*a, double*b);//exemplo pra lembrar como funciona passagem por referencia

int main(void)
{
    double segmentos[TAM] = {0};
 
    for(int i = 0; i < TAM; i++)
    {
        do
        {
            printf("%io segmento: ", i+1);
            scanf("%lf", &segmentos[i]);
        }
        while (segmentos[i] <= 0);
    }

    for(int i = TAM-1; i > 0; i--)
    {
        if(segmentos[i] > segmentos[i-1])
        {
            swap(&segmentos[i], &segmentos[i-1]);//PASSAGEM POR REFERENCIA &
        }
    }

    if(segmentos[2] + segmentos[1] > segmentos[0])
    {
        if(segmentos[0] != segmentos[1] && segmentos[1] != segmentos[2] && segmentos[2] != segmentos[0])
        {
            printf("Escaleno\t");
        }
        else if(segmentos[0] == segmentos[1] && segmentos[1] == segmentos[2])
        {
            printf("Equilatero\t");
        }
        else
        {
            printf("Isosceles\t");
        }

        if(segmentos[0] > sqrt(pow(segmentos[1],2) + pow(segmentos[2],2)))
        {
            printf("obtusangulo\n");
        }
        else if(segmentos[0] < sqrt(pow(segmentos[1],2) + pow(segmentos[2],2)))
        {
            printf("acutangulo\n");
        }
        else
        {
            printf("retangulo\n");
        }
    }
    else
    {
        printf("Os segmentos nao podem formam um triangulo\n");
    }
    return 0;
}
// É possivel usar recursão?
// & para índices de vetores sao obrigatórios
// Passagem por referência simulada
// Sempre será necessário ordenars os segmentos que compoem os lados do triângulo
// A soma dos lados menores não pode ser igual ou menor para podermos montar o triangulo
void swap(double*a, double*b)//PASSAGEM POR REFERENCIA *
{
    double tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}