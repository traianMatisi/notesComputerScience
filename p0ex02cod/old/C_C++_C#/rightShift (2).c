#include <stdio.h>

int main(){
	
    int num, loop, temp, ult;
    
    scanf("%d", &num);
    
    int vetor[num];
    
    loop = 0;
    while(loop < num){
        scanf("%d", &vetor[loop]);
        loop++;
    }
    
    ult = vetor[num-1];
    
	loop = num-1;
    while(loop > 0){
        vetor[loop] = vetor[loop-1];
        loop--;
    }
    
    vetor[0] = ult;
    
    loop = 0;
    while(loop < num){
        printf("%d ", vetor[loop]);
        loop++;
    }
    return 0;
}