#include <stdio.h>

int main(){
	
	int loop, soma, x;
	//printf("Digite um numero inteiro: \n");
	scanf("%d", &x);
	soma = 0;
	
	for(loop = 0; loop < x; loop++){
		if((loop%3 == 0) || (loop%5 == 0)){
			soma = soma + loop;
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}