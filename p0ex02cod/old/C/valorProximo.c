#include <stdio.h>

int main(){
	
	float v, prox, dist;
	int i, j, loop1, loop2;
	
    scanf("%d", &i);
    
    for(loop1 = 0, prox = 100.0, dist = 100.0; loop1 < i; loop1++){
    	
    	scanf("%d", &j);
    	scanf("%f", &v);
    	
    	float termos[j];
    	
    	for(loop2 = 0; loop2 < j; loop2++){
    		scanf("%f", &termos[loop2]);
    	}
		
		for(loop2 = 0; loop2 < j; loop2++){
			
			if(termos[loop2] < v){
				
				if(v - termos[loop2] < dist){
					dist = v - termos[loop2];
					prox = termos[loop2];
				}
				
			}
			
			if(termos[loop2] > v){
				
				if(termos[loop2] - v < dist){
					dist = termos[loop2] - v;
					prox = termos[loop2];
				}
			}
		}
		
		printf("%.1f\n", prox);
		dist = 100.0;
		prox = 100.0;
	}
	
	return 0;
}