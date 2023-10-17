#include <stdio.h>

float vetor(float vet[], int a);

int main(){
	
	int i, a;
	
	printf("Quantos itens?: ");
	scanf("%d", &a);
	
	float vet[a];
	
	for(i = 0; i < a; i++){
		printf("Digite %do item: ", i+1);
		scanf("%f", &vet[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < a; i++){
		printf("%.1f\n", vet[i]);
	}
	
	vetor(vet, a);
	
	printf("\n");
	
	for(i = 0; i < a; i++){
		printf("%.1f\n", vet[i]);
	}
	
	return 0;
}

float vetor(float vet[], int a){
	int i;
	for(i = 0; i < a; i++){
		vet[i] += 1.5;
	}
}
