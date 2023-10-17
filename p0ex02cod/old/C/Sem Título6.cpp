#include <stdio.h>
#include <stdlib.h>

//[10, 1, 2, 7] -> [1, 2, 7, 10]  

typedef struct
{
    int *lista;
    int size;
} VETOR;

int main(){
	int lista[4] = {2, 3, 5, 7};
	VETOR V;
	V.size = 4;
	
	int i = 0;
	V.lista = (int*) malloc(V.size*sizeof(int));
	if (V.lista == NULL){
		perror("Erro ao alocar memória\n");
		exit (1);
	}
	V.lista[V.size] = {1,2,3,4};
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(v[j] > v[j+1]){
	        	tmp = v[j];
	        	v[j] = v[j+1];
	        	v[j+1] = tmp;
	    	}
	    }
	}
	free(V.lista);
	return 0;
}

VETOR * ordena(VETOR *a) {
	int i = 0;
	V.lista = (int*) malloc(V.size*sizeof(int));
	if (lista == NULL){
		perror("Erro ao alocar memória\n");
		exit (1);
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(v[j] > v[j+1]){
	        	tmp = v[j];
	        	v[j] = v[j+1];
	        	v[j+1] = tmp;
	    	}
	    }
	}
	free(V.lista);
    return NULL;
}
