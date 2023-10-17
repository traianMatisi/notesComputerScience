#include <stdio.h>

int main(){
    
	char nome[51], sobrenome[51];
	float n1, n2;
	int i, entr;
	
	FILE *arq;
	arq = fopen("arquivo.txt", "r");
	
	fscanf(arq, "%d", &entr);
	
	for(i = 0; fscanf(arq, "%s %s", nome, sobrenome) != EOF; i++){
		fscanf(arq, "%f", &n1);
		fscanf(arq, "%f", &n2);
		
		if((n1 + n2)/2 > 7.0){
			printf("%s %s\n", nome, sobrenome);
		}
	}
	fclose(arq);
	
	return 0;
}