#include <stdio.h>

int main(){
	int n, i, j, c;
	
	//printf("Tam matrix: ")
	//scanf("%d", &n);
	
	float v1[3][3] = {{0.0, 0.1, 0.2},
					  {1.0, 1.1, 1.2},
					  {2.0, 2.1, 2.2}};
		
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%.1f ", v1[i][j]);
		}		
		printf("\n");
	}
	
	return 0;
}
