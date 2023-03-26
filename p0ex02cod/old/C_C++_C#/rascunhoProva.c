#include <stdio.h>
#include <locale.h>

int fat(int n);
int comb(int n, int p);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, p;
	printf("Digite total de números possíveis:\t");
	scanf("%d", &n);
	printf("Digite números a apostar:\t");
	scanf("%d", &p);
	printf("Fatorial de %d = %lli\n", n, fat(n));
	printf("Possibilidades = %d\n", comb(n, p));
	return 0;
}

int fat(int n) {
	int f;
	if (n == 0){
		return 1;
	}
	else{
		return n*fat(n-1);
	}
	return f;
}

int comb(int n, int p){
	int c;
    c = fat(n) / fat (p) * fat(n-p);
	return c;
}
