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
    char arq;
    float salMin, aumento, soldo;
    int i = 0;

    scanf("%s", &arq);
    scanf("%d %d %d", &atual.dia, &atual.mes, &atual.ano);
    scanf("%f", &salMin);

    FILE *arquivo;

    arquivo = fopen("arq.dat", "rb");

    for (i = 0; fscanf(arquivo, "%s", &arq) != EOF; i++){
        
        fscanf(arquivo, "%d %d %d %d %f", &dados.matricula, &dados.contratacao.dia, &dados.contratacao.mes, &dados.contratacao.ano, &dados.salario);

        //fscanf(arquivo, %d, &dados.matricula);
        //fscanf(arquivo, %d, &dados.contratacao.dia);
        //fscanf(arquivo, %d, &dados.contratacao.mes);
        //fscanf(arquivo, %d, &dados.contratacao.ano);
        //fscanf(arquivo, %d, &dados.salario);

        if (dados.salario <= (3 * salMin)){
            aumento = dados.salario + (dados.salario * 1.15);
        }
        else if (dados.salario <= (5 * salMin)){
            aumento = dados.salario + (dados.salario * 1.125);
        }
        else if (dados.salario <= (10 * salMin)){
            aumento = dados.salario + (dados.salario * 1.1);
        }
        else{
            aumento = dados.salario + (dados.salario * 1.05);
        }

        if ((atual.ano - dados.contratacao.ano) > 10){
            aumento = dados.salario + (dados.salario * 1.10);
        }

        soldo = ((aumento - dados.salario) / dados.salario) * 100;

        printf("%d R$ %.2f R$ %.2f %.1f\n", dados.matricula, dados.salario, aumento, soldo);
    }

    fclose(arquivo);

	return 0;
}
