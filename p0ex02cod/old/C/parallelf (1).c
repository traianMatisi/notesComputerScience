#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX

float **allocMatrix(int m, int n){
    float **a;
    int i;
    a = (float **) malloc(m*sizeof(float *));
    if (a==NULL) exit(1);

    for (i=0;i<m;i++) {
    a[i]= (float*) malloc(n*sizeof(float));
    if (a[i]==NULL) exit(1);
    }

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			a[i][j] = rand() % MAX + MIN;
		}
	}

    return a;
}

double parallelMultiply(double** matrixA, double** matrixB, double** matrixC, int dimension){

    time_t start, fim;

    start= time(NULL);
	#pragma omp parallel for
	for(int i=0; i<dimension; i++){
		for(int j=0; j<dimension; j++){
			for(int k=0; k<dimension; k++){
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}

	fim = time(NULL);
	double elapsed = difftime(fim, start);

	return elapsed;
}

float **freeMatrix(float **a,int m){
if (a!=NULL) {
int i;
for (i=0;i<m;i++)
if(a[i]!=NULL) free(a[i]);
}
free(a);

 printf("liberou!\n");
 return NULL;
}

int main(){
    float** m1;
    float** m2;
    float** m3;

    int n=5;
    double tempo;

    m1 = allocMatrix(5, 5);
    m2 = allocMatrix(5, 5);

    tempo = parallelMultiply(m1, m2, m3, n);

    printf(" a multiplicação levou %lf segundos \n", tempo);

    int i, j;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        printf("%f ", m3[i][j] );
        }
        printf("\n");
    }


    m1 = freeMatrix(m1, 5);
    m2 = freeMatrix(m2, 5);
    m3 = freeMatrix(m3, 5);

    return 0;
}
