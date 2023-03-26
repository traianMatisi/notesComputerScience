#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, d, R, R1, R2;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	d = (pow(b, 2)-4*a*c);
	
	if ((a>0) || (a<0)){
		if (d > 0){
			R1 = (-b+(sqrt(d)))/(2*a);
			R2 = (-b-(sqrt(d)))/(2*a);
			printf("R1 = %.5lf\n", R1);
			printf("R2 = %.5lf\n", R2);
		}
		else if (d == 0){
			R = (-b)/(2*a);
			printf("R = %.5lf\n", R);
		}
		else if (d < 0){
			printf("Impossivel calcular\n");
		}
}
	else
	{
		printf("Impossivel calcular\n");
	}
	return 0;
}