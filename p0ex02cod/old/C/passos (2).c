#include<stdio.h>

int main(){
	
    int ent, num, loop, cont = 0, passos = 0;
    
    scanf("%d", &ent);
    
    for(loop = 0; loop < ent; loop++){
    	
		scanf("%d", &num);
		
    	while(num != 1){
    		
    		if(num % 2 == 0){
    			
				num = num / 2;
    			passos = passos + 1;
    			
	    	} else {
	    		
				num = 3 * num + 1;
	    		passos = passos + 1;
	    		
	    	}
    	}
    	
    	printf("%d\n", passos);
    	
    	passos = 0;
    }
    
    return 0;
}