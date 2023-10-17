#include <stdio.h>

int main(){
	
	int num, loop;
	double a, b, c, media;
	
	scanf("%d", &num);
	
	for (loop = 0; loop < num; loop++){
		scanf("%lf%lf%lf", &a, &b, &c);
		media = (a * 2 + b * 3 + c * 5)/10;
		printf("%.1lf\n", media);
	}
	
	return 0;
}