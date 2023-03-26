#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int n, i, j, tmp;
	
	printf("Num de itens");
	scanf("%d", &n);
	
	int v[n];
	int u[n];
	
	i = 0;
	while(i < n){
		scanf("%d", &v[i]);
		i++;
	}
	
	i = 0;
	while(i < n){
		printf("%d, ", v[i]);
		i++;
	}
	
	for(i = 0, j = n-1; i < n; i++, j--){
		u[j] = v[i];
	}
	for(i = 0; i < n; i++){
		printf("%d, ", u[i]);
	}
	
	return 0;
}
