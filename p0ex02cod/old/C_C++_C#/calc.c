#include <stdio.h>

float op(float a, float b, float *soma, float *subt, float *div, float *mult);

int main(){
	
	float a, b, c, d, e, f;
	
	printf("Digite A: ");
	scanf("%f", &a);
	printf("Digite B: ");
	scanf("%f", &b);
	
	op(a, b, &c, &d, &e, &f);
	
	printf("Soma = %.1f\n", c);
	printf("Subt = %.1f\n", d);
	printf("Div  = %.1f\n", e);
	printf("Mult = %.1f\n", f);
	
}

float op(float a, float b, float *soma, float *subt, float *div, float *mult){
	*soma = a + b;
	*subt = a - b;
	*div = a / b;
	*mult = a * b;
}
