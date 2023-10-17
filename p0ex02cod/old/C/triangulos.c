#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, t;
	scanf("%f", &a);
	scanf("%f", &b);
	if (b > a){
		t = b;
		b = a;
		a = t;
	}
	scanf("%f", &c);
	if (c > a){
		t = c;
		c = a;
		a = t;
	}
	if (a >= b + c){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	if (pow(a, 2) == pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO RETANGULO\n");
		return 0;
	}
	if (pow(a, 2) > pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else{
		printf("TRIANGULO ACUTANGULO\n");
	}
	if ((a == b) && (b == c)){
		printf("TRIANGULO EQUILATERO\n");
	}
	else{
		printf("TRIANGULO ISOSCELES\n");
	}
	if ((a != b) && (b != c) && (c != a)){
		printf("TRIANGULO ESCALENO\n");
	}
	return 0;
}