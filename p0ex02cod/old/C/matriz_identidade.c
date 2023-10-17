#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define MAX 1200


int **allocMatrix(int m, int n){
    int **a;
    int i;
    a = (int **) malloc(m*sizeof(int *));
    if (a==NULL) exit(1);

    for (i=0;i<m;i++) {
    a[i]= (int*) malloc(n*sizeof(int));
    if (a[i]==NULL) exit(1);
    }
    printf("alocou as linhas da matriz \n");
     srand( (unsigned)time(NULL) );
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i==j)
			a[i][j] = 1;
			else
			a[i][j] = 0;
		}
	}
		printf("alocou as colunas\n");
	//a[873][873] = 3;
    return a;
}

int **freeMatrix(int **a,int m){
if (a!=NULL) {
int i;
for (i=0;i<m;i++)
if(a[i]!=NULL) free(a[i]);
}
free(a);
	printf("memoria liberada chefe\n");
 return NULL;
}

int verificar(int **a){
	int i, j, validar = 1;
	double elapsed, ini, fim;
	
	ini = omp_get_wtime();
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			if(i==j){
				if(a[i][j] != 1){
				validar = 0;
				fim = omp_get_wtime();
				elapsed = ((double) (fim - ini));
				printf("tempo de verificação doselementos da matriz %lf \n", elapsed);
				printf("erro achado na linha %d e coluna %d \n", i, j);
				return validar;
				}
			}
			else{
				if(a[i][j] != 0){
				validar = 0;
				fim = omp_get_wtime();
				elapsed = ((double) (fim - ini));
				printf("tempo de verificação do elementos da matriz %lf \n", elapsed);
				return validar;
				}
				
			}
		}
	
	}
	fim = omp_get_wtime();
	elapsed = ((double) (fim - ini));
	printf("tempo de verificação de todos os elementos da matriz %lf \n", elapsed);
	
		return validar;
	}

int main(){
	int **m;
	int i, j, validar;
		
	m = allocMatrix(MAX, MAX);
	
	
	validar = verificar(m);
	
	if(validar == 1){
		printf("Matriz é identidade \n");
	}
	else{
		printf("Matriz invalida \n");
	}
	
	m = freeMatrix(m, MAX);
	return 0;
}
