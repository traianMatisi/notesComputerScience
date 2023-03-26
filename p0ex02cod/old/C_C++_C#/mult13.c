#include <stdio.h>

int main(){
	
	int loop, soma, x, y;
	
	printf("Digite um valor inteiro: \n");
	scanf("%d", &x);
	printf("Digite outro valor inteiro: \n");
	scanf("%d", &y);
	
	soma = 0;
	
	
	
	if (x < y){
		for(loop = x; loop <= y; loop++){
			if(loop%13 != 0){
				soma = soma + loop;
			}
		}
	}
	
	if (y < x){
		for(loop = y; loop <= x; loop++){
			if(loop%13 != 0){
				soma = soma + loop;
			}
		}
	}
	printf("Soma = %d\n", soma);
	return 0;
}