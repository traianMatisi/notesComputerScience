#include <stdio.h>

int main(){
	int n, d, c;
	c = 0;
	scanf("%d", &n);
	for (d = 1; d <= n; d++){
		if (n % d == 0){
			c = c + 1;
		}
	}
	if (c == 2){
		printf("primo");
	}else{
		printf("nao");
	}
	return 0;
}