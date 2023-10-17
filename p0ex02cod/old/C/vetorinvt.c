#include <stdio.h>

int main(){
	int num;
    int loop = 0, rept = 0;
	
	scanf("%d", &num);
	
    int vetor[num], rotev[num];

    for(loop = 0; loop < num; loop++){
        scanf("%d", &vetor[loop]);
    }
    
    loop = 0;
    
	for(rept = num-1; rept >= 0; rept--){
        rotev[loop] = vetor[rept];
        loop++;
    }
    
    for(loop = 0; loop < num; loop++){
        printf("%d ", rotev[loop]);
	}
    return 0;
}