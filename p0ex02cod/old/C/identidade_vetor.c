#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define MAX 1500


int * inserir(int* a){
	int i,j;
	
	srand( (unsigned)time(NULL) );
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			if(i==j)
			//a[(i*MAX)+j] = rand() % 2;
			a[(i*MAX)+j] = 1;
			else
			a[(i*MAX)+j] = 0;
			}
	}
	//a[873*MAX +873] = 3;
	return a;
}


int verificar(int* a){
	int i, j, iOff, validar = 1;
    
    	double ini, fim, elapsed;
    	ini = omp_get_wtime();
   	 #pragma omp  parallel private(i, j, iOff)
    	{
	    	#pragma omp for 
	   	for(i=0; i<MAX; i++){
			if(validar == 0) continue;
			iOff = i * MAX;
			for(j=0; j<MAX; j++){
				if(i == j){
					if(a[iOff + j] != 1){
						validar = 0;
						fim = omp_get_wtime();
						elapsed = ((double) (fim - ini));
						printf("tempo de verificação dos elementos da matriz %lf \n", elapsed);
						printf("erro achado na linha %d e coluna %d \n", i, j);
						break;
						 } 
					}
					else{
						if(a[iOff + j] != 0){
						validar = 0;
						fim = omp_get_wtime();
						elapsed = ((double) (fim - ini));
						printf("tempo de verificação dos elementos da matriz %lf \n", elapsed);
						printf("erro achado na linha %d e coluna %d \n", i, j);
						break;
						 }
					}
				}
			}
	}
    if(validar == 0) return validar;	
    fim = omp_get_wtime();
    elapsed = ((double) (fim - ini));
    printf("tempo de verificação de todos os elementos da matriz %lf \n", elapsed);
	
	return validar;
}

int main(){
	int* m1;
	
	int V, i, j;
	m1 = (int*) malloc (MAX*MAX*sizeof(int));
	
	m1 = inserir(m1);
	
		
	V = verificar(m1);
	
	if(V == 1){
		printf("Matriz é identidade \n");
	}
	else{
		printf("Matriz invalida \n");
	}
    	free(m1);
    	printf("liberou geral\n");
	return 0;
}
