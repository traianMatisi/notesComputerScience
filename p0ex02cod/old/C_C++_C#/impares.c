#include <stdio.h>

int main(){
	
	int x, y, i, s;
	s = 0;
	printf("Digite dois numeros inteiros:\n");
	scanf("%d%d", &x, &y);
	
	if (x == y){
		printf("0\n");
		return 0;
	}
	
	if ((x < y) && (x % 2 == 0)){
		for (i = x; i < y; i++){
			if (i % 2 != 0){
				s = s + i;
			}
		}
		printf("%d", s);
		return 0;
	}
	
	if ((x < y) && (x % 2 != 0)){
		for (i = x + 1; i < y; i++){
			if (i % 2 != 0){
				s = s + i;
			}
		}
		printf("%d", s);
		return 0;
	}
	
	if ((x > y) && (y % 2 == 0)){
		for (i = y; i < x; i++){
			if (i % 2 != 0){
				s = s + i;
			}
		}
		printf("%d", s);
		return 0;
	}
	
	if ((x > y) && (y % 2 != 0)){
		for (i = y + 1; i < x; i++){
			if (i % 2 != 0){
				s = s + i;
			}
		}
		printf("%d", s);
		return 0;
	}
	
	return 0;
}