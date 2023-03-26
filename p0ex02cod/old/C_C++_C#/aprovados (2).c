#include <stdio.h>

int main(){
    
	char nome[51], sobrenome[51];
	float n1, n2, med;
	int i, entr;
	FILE *arq;
	arq = fopen("arquivo.txt", "r");
	for(i = 0; fscanf(arq, "%s %s;", nome, sobrenome) != EOF; i++){
		fscanf(arq, "%f;", &n1);
		fscanf(arq, "%f;", &n2);
		med = (n1 + n2)/2;
		if (med >= 5){
			printf("%s %s %.1f %.1f %.1f aprovado\n", nome, sobrenome, n1, n2, med);
		}
		else{
			printf("%s %s %.1f %.1f %.1f reprovado\n", nome, sobrenome, n1, n2, med);
		}
	}
	fclose(arq);
	return 0;
}