#include <stdio.h>

int main(){
	
	float x;
	scanf("%f", &x);
	
	if ((x >= 0) && (x <= 25)){
		printf("%.2f\nIntervalo [0,25]", x);
	}
	else if ((x > 25) && (x <= 50)){
		printf("%.2f\nIntervalo (25,50]", x);
	}
	else if ((x > 50) && (x <= 75)){
		printf("%.2f\nIntervalo (50,75]", x);
	}
	else if ((x > 75) && (x <= 100)){
		printf("%.2f\nIntervalo (75,100]", x);
	}
	else{
		printf("Fora de intervalo");
	}
	return 0;
}