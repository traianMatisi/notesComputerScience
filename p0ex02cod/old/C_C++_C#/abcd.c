#include<stdio.h>

struct DATA {
    int dia;
    int mes;
    int ano;
};

struct FUNCIONARIO {
    int matricula;
    struct DATA contratacao;
    float salario;
};

int main(void) {
    struct DATA atual;
    struct FUNCIONARIO dados;
    char exemplo;
    float salMin, aumento, soldo;
    int i = 0;

    scanf("%s", &exemplo);
    scanf("%d %d %d", &atual.dia, &atual.mes, &atual.ano);
    scanf("%f", &salMin);

    FILE *arquivo;

    arquivo = fopen("exemplo.dat", "rb");

    for (i = 0; fscanf(arquivo, "%s", &exemplo) != EOF; i++){
        
        fscanf(arquivo, "%d %d %d %d %f", &dados.matricula, &dados.contratacao.dia, &dados.contratacao.mes, &dados.contratacao.ano, &dados.salario);

        //fscanf(arquivo, %d, &dados.matricula);
        //fscanf(arquivo, %d, &dados.contratacao.dia);
        //fscanf(arquivo, %d, &dados.contratacao.mes);
        //fscanf(arquivo, %d, &dados.contratacao.ano);
        //fscanf(arquivo, %d, &dados.salario);

        if (dados.salario <= (3 * salMin)){
            aumento = dados.salario + (dados.salario * .15);
        }
        if (dados.salario > (3 * salMin) && dados.salario <= (5 * salMin)){
            aumento = dados.salario + (dados.salario * .125);
        }
        if (dados.salario > (5 * salMin) && dados.salario <= (10 * salMin)){
            aumento = dados.salario + (dados.salario * .1);
        }
        if(dados.salario > (10 * salMin)){
            aumento = dados.salario + (dados.salario * .05);
        }
        if ((atual.ano - dados.contratacao.ano) > 10){
            aumento = dados.salario + (dados.salario * .10);
        }

        soldo = ((aumento - dados.salario) / dados.salario) * 100;

        printf("%d R$%.2f R$%.2f %.1f%%", dados.matricula, dados.salario, aumento, soldo);
    }

    fclose(arquivo);

	return 0;
}
