#include <stdio.h>
#include <stdlib.h>

int main(void){
	float *v;
	int n, i;
	
	printf("Digite numero de itens: ");
	scanf("%d", &n);
	
	v = (float *) malloc(n * sizeof(float));
	if (v == NULL){
		printf("Erro ao alocar memoria");
		exit(1);
	}
	
	for (i = 0; i < n; i++){
		scanf("%f", &*(v+i));
	}
	
	for (i = 0; i < n; i++){
		printf("%.1f\n", *(v+i));
	}
	
	free(v);
	
	return 0;
}
