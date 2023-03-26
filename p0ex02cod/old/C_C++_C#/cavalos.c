#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int b[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int i, j, c, men, mad, inicio;
	
	men = 0;
	for(i = 0; b[i] != '\0'; i++){	
		c = 0;
		mad = b[i] + 19;
		for(j = i; b[j] != '\0'; j++){
			if(b[j] >= b[i] && b[j] <= mad){
				c++;
			}
		}
		if(c > men){
			men = c;
			inicio = i;
		}
	}
	printf("maior = %d inicio = %d\n", men, inicio);
	
	return 0;
}