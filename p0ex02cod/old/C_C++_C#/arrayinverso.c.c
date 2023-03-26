#include <stdio.h>

int main(){
	
	int n, i, j;
	
	printf("Num de itens: ");
	scanf("%d", &n);
	
	int v[n];
	int u[n];
	
	for(i = 0; i < n; i++){
		printf("%do item: ", i + 1);
		scanf("%d", &v[i]);		
	}
	for(i = 0; i < n; i++){
		printf("%d, ", v[i]);		
	}
	for(i = 0, j = n-1; i < n; i++, j--){
		u[j] = v[i];
	}
	for(i = 0; i < n; i++){
		printf("%d, ", u[i]);
	}
	return 0;
}
