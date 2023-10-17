#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define MAX 1000

float * inserir(float* a){
	int i,j;
	
	srand( (unsigned)time(NULL) );
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			a[(i*MAX)+j] = rand() % 20;
			}
	}

	return a;
}

float * zerar(float* a){
	int i,j;

	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			a[(i*MAX)+j] = 0;
			}
	}

	return a;
}

float * multiplicarM(float* a, float* b, float *c){
    float tot;
    clock_t ini, fim;

    ini = clock();
    #pragma omp parallel for shared(c) private(tot) 
	for(int i=0; i<MAX; i++){
			for(int j=0; j<MAX; j++){
				tot = 0;
				for(int k=0; k<MAX; k++){
					tot += a[i*MAX +k] * b[k*MAX +j];
					}
				c[i* MAX +j] = tot;
			}
		}
    fim = clock();
    double elapsed = ((double) (fim - ini));
    printf("Matriz feita, levou %lf \n", elapsed);

	return c;
}

int main(){
	float* m1;
	float* m2;
	float* m3;
	int i, j, k;
	m1 = (float*) malloc (MAX*MAX*sizeof(float));
	m2 = (float*) malloc (MAX*MAX*sizeof(float));
	m3 = (float*) malloc (MAX*MAX*sizeof(float));

    m1 = inserir(m1);
    m2 = inserir(m2);
    m3 = zerar(m3);

    m3 = multiplicarM(m1, m2, m3);
    free(m1);
    free(m2);
    free(m3);
    printf("liberou geral\n");
	return 0;
}
