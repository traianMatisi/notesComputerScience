#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int n, i, h, c;
	
	printf("Digite o número a ser convertido para 0x: ");
	scanf("%d", &n);
	
	int hex[11] = {0000000000};
	
	c = 0;
	i = 0;
	while(n != 0){
		hex[i] = n%16;
		n = n/16;
		c++;
		i++;
	}
	
	for(i = 10; i >= 0; i--){
		printf("%d", hex[i]);
	}
		
	return 0;
}
