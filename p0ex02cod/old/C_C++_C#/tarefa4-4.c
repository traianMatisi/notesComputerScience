#include<stdio.h>
int main(){
	char palavra_1[11], palavra_2[11], palavra_3[11];//11 porque o último caractere é sempre o '\0'
	scanf("%s %s %s", palavra_1, palavra_2, palavra_3);
	printf("%10s %10s %10s\n", palavra_1, palavra_2, palavra_3);
	return 0;
}
