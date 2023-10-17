#include <stdio.h>

int main(){
	
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
	
	//bubble sort para crescente usando WHILE aninhados
	i = 0;
	while(i < n){
		j = 0;
		while(j < n){
			if(v[j] > v[j+1]){
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
			j++;
		}
		i++;
	}
	
	i = 0;
	while(i < n){
		printf("%d, ", v[i]);
		i++;
	}
	
	//bubble sort para crescente usando FOR aninhados
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(v[j] > v[j+1]){
	        	tmp = v[j];
	        	v[j] = v[j+1];
	        	v[j+1] = tmp;
	    	}
	    }
	}
	
	i = 0;
	while(i < n){
		printf("%d, ", v[i]);
		i++;
	}
	
	//inverte vetor
	for(i = 0, j = n-1; i < n; i++, j--){
		u[j] = v[i];
	}
	for(i = 0; i < n; i++){
		printf("%d, ", u[i]);
	}
	
	return 0;
}
