#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[200];
	int loop;
	
	fgets (nome, 199, stdin);
	
	for(loop = 0; loop < strlen(nome); loop++){
		if(nome[loop] >= 'A' && nome[loop] <= 'Z'){
            nome[loop] = nome[loop] - 'A' + 'a';
        }
	}
	
	printf("%s", nome);
	
	return 0;
}