#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fibo(float n)
{
	n = (pow(((1 + sqrt(5))/2), n) - pow(((1 - sqrt(5))/2), n)) / (sqrt(5));
	return n;
}

int main()
{
	float n, resposta;
	scanf("%f", &n);
	resposta = fibo(n);
	printf("%.1f\n", resposta);
	return 0;
}