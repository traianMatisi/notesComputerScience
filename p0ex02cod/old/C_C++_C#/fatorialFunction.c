#include <stdio.h>

int fat(int f);

int main (){
	int f, res;
	printf("Digite um numero para obter seu fatorial:\t");
	scanf("%d", &f);
	res = fat(f);
	printf("%d\n", res);
	return 0;
}

int fat(int f){
	int fat = 1;
	while(f > 0){
		fat *= f;
		f--;
	}
	return fat;
}
