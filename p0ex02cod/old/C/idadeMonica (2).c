#include <stdio.h>

int main(){
	int a, b, c, m;
	scanf("%d %d %d", &m, &a, &b);
	c=m-(a+b);
	/*
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", m);
	*/
	if (a>b){
		if(a>c)
		printf("%d", a);
		else
		printf("%d", c);
	}
	else{
		if(b>c)
		printf("%d", b);
		else
		printf("%d", c);
	}
	return 0;
}