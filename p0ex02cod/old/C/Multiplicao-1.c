#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include <omp.h>
#define MIN 1
#define MAX 10

double **allocMatrix(int m, int n){
    double **a;
    int i;
    a = (double **) malloc(m*sizeof(double *));
    if (a==NULL) exit(1);

    for (i=0;i<m;i++) {
    a[i]= (double*) malloc(n*sizeof(double));
    if (a[i]==NULL) exit(1);
    }
    printf("alocou as linhas da matriz \n");
    
     srand( (unsigned)time(NULL) );
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			a[i][j] = rand() % MAX + MIN;
		}
	}
		printf("alocou as colunas\n");

    return a;
}

double **zerarMatrix(int m, int n){
    double **a;
    int i;
    a = (double **) malloc(m*sizeof(double *));
    if (a==NULL) exit(1);

    for (i=0;i<m;i++) {
    a[i]= (double*) malloc(n*sizeof(double));
    if (a[i]==NULL) exit(1);
    }
    printf("alocou as linhas da matriz \n");
    
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			a[i][j] = 0;
		}
	}
		printf("alocou as colunas\n");

    return a;
}

double MultiplicarMatriz(double** matrixA, double** matrixB, double** matrixC, int dimension){

    double start, fim;
	
    start= omp_get_wtime();
   
	for(int i=0; i<dimension; i++){
		for(int j=0; j<dimension; j++){
			for(int k=0; k<dimension; k++){
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
		
			}
		}
	}
	
	fim = omp_get_wtime();
	double elapsed = ((double) (fim - start));

	return elapsed;
}

double **freeMatrix(double **a,int m){
if (a!=NULL) {
int i;
for (i=0;i<m;i++)
if(a[i]!=NULL) free(a[i]);
}
free(a);
	printf("memoria liberada chefe\n");
 return NULL;
}

int main(){
    double** m1;
    double** m2;
    double** m3;

    int n=1200;
    double tempo;

    m1 = allocMatrix(n, n);
    m2 = allocMatrix(n, n);
    m3 = zerarMatrix(n, n);

    tempo = MultiplicarMatriz(m1, m2, m3, n);

    printf(" a multiplicação levou %lf milisegundos \n", tempo);

    int i, j;

   /* for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        printf("%lf ", m3[i][j] );
        }
        printf("\n");
    }*/


    m1 = freeMatrix(m1, n);
    m2 = freeMatrix(m2, n);
    m3 = freeMatrix(m3, n);

    return 0;
}
