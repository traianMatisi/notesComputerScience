#include<stdio.h>

int main(){
	
	int s, k, loop1, loop2, loop3;
	char comparador[4][10] = {
	{},
	{}, 
	{}, 
	{}
	};
	
    scanf("%d", &s);
    
    char result[s];
    for(loop1 = 0; loop1 < s; loop1++){
    	result[loop1] = 'S';
	}
    
    loop1 = 0;
    while (loop1 < s){
    	
    	scanf("%d", &k);
    	char nome[k];
    	
    	loop2 = 0;
    	do {
    		
    		scanf("%s", nome);
    		for(loop3 = 0; loop3 < k; loop3++){
    			if(nome[loop3] == '4' || nome[loop3] == 'A'){
    				nome[loop3] = 'a';
				}
				if(nome[loop3] == '3' || nome[loop3] == 'E'){
    				nome[loop3] = 'e';
				}
				if(nome[loop3] == '2' || nome[loop3] == 'Z'){
    				nome[loop3] = 'z';
				}
				if(nome[loop3] == '1' || nome[loop3] == 'I'){
    				nome[loop3] = 'i';
				}
				if(nome[loop3] == '0' || nome[loop3] == 'O'){
    				nome[loop3] = 'o';
				}
				if (nome[loop3] >= 'A' && nome[loop3] < 'Z'){ 
					nome[loop3] = nome[loop3] -'A' + 'a';
				}
				
				comparador[loop3][10] = nome[k];
			}
			
			//print para verificar a mudanca dos caracteres em um padrao minusculo
        	printf("%s\n", nome);
        	
        	//print para verificar entradas na matriz de strings
        	//printf("Comparador: %s\n", comparador[0][10]);
        	//printf("Comparador: %s\n", comparador[1][10]);
        	//printf("Comparador: %s\n", comparador[2][10]);
        	//printf("Comparador: %s\n", comparador[3][10]);
        	
        	loop2++;
        
		} while (loop2 < 4);
		
		loop1++;
	}
	
	return 0;
}