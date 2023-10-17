#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 1000000000

double **allocMatrix(int m, int n);
double parallelMultiply(double** matrixA, double** matrixB, double** matrixC, int dimension);
double **freeMatrix(double **a,int m);

int main(){

    double** m1;
    double** m2;
    double** m3;

    int n = 5;
    double tempo;

    m1 = allocMatrix(n, n);
    m2 = allocMatrix(n, n);
    m3 = allocMatrix(n, n);

    tempo = parallelMultiply(m1, m2, m3, n);

    printf("A multiplicacao levou %lf segundos \n", tempo);
    /**/
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%lf ", m3[i][j] );
        }
        printf("\n");
    }
    /**/
    m1 = freeMatrix(m1, 5);
    m2 = freeMatrix(m2, 5);
    m3 = freeMatrix(m3, 5);

    return 0;
}

double **allocMatrix(int m, int n){
    double **a;
    int i;
    a = (double **) malloc(m*sizeof(double *));
    if (a==NULL) exit(1);

    for (i = 0; i < m; i++) {
    a[i]= (double*) malloc(n*sizeof(double));
    if (a[i]==NULL) exit(1);
    }
    /**/
    printf("Alocou as linhas da matriz \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = rand() % MAX + MIN;
		}
	}
	printf("Alocou as colunas da matriz\n");
    /**/
    return a;
}

double parallelMultiply(double** matrixA, double** matrixB, double** matrixC, int dimension){

    clock_t t;

    t = clock();
	//#pragma omp parallel for
	for(int i = 0; i < dimension; i++){
		for(int j = 0; j < dimension; j++){
			for(int k = 0; k < dimension; k++){
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
		
			}
		}
	}

	t = clock() - t;
	double elapsed = ((double)t)/CLOCKS_PER_SEC;

	return elapsed;
}

double **freeMatrix(double **a,int m){
if (a!=NULL) {

for (int i = 0; i < m; i++)
    if(a[i]!=NULL) free(a[i]);
}
free(a);
/**/
printf("Memoria liberada chefe\n");
/**/
 return NULL;
}
