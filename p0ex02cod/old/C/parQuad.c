#include <stdio.h>
#include <math.h>

int main (){
	int n, i, q;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		if (i % 2 == 0){
			q = pow(i, 2);
			printf("%d^2 = %d\n", i, q);
		}
	}
	
	return 0;
}