#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j, c;
	
	
	
	//printf("Tam matrix: ")
	scanf("%d", &n);
	
	char v1[n][n];
		
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%c", &v1[i][j]);
		}	
	}
	
	char vetor[n][n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%c", v1[i][j]);
		}		
		printf("\n");
	}
	
	return 0;
}