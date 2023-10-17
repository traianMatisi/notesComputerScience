#include <stdio.h>

int main(){
	int numero, soma, loop;
	
	//printf("Digite numero natural limite: \n");
	scanf("%d", &numero);
	
	int fibo[41];
	fibo[0] = 0;
	fibo[1] = 1;
	
	soma = 0;
	
	for (loop = 2; loop < 41; loop++){
		fibo[loop] = fibo[loop - 2] + fibo[loop - 1];
	}
	
	for (loop = 0; fibo[loop] < numero; loop++){
		if((fibo[loop]%2 == 0)){
			soma += fibo[loop];
		}
	}
	
	printf("%d", soma);
	
	return 0;
}