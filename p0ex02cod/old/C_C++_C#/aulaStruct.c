#include <stdio.h>

struct ponto {
	float x;
	float y;
};

struct ponto le(void){
	struct ponto tmp;
	printf("Digite x e y: ");
	scanf("%f %f", &tmp.x, &tmp.y);
	return tmp;
}

int main(){
	struct ponto p = le();
	printf("X = %.2f\nY = %.2f", p.x, p.y);
	return 0;
}
