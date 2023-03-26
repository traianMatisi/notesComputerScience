#include <stdio.h>

int main(){
	int total, cm, cq, vt, dz, cc, ds, um;
	scanf("%d", &total);
	cm = total/100;
	cq = (total%100)/50;
	vt = ((total%100)%50)/20;
	dz = (((total%100)%50)%20)/10;
	cc = ((((total%100)%50)%20)%10)/5;
	ds = (((((total%100)%50)%20)%10)%5)/2;
	um = (((((total%100)%50)%20)%10)%5)%2;
	printf("%d\n", total);
	printf("%d nota(s) de R$ 100,00\n", cm);
	printf("%d nota(s) de R$ 50,00\n", cq);
	printf("%d nota(s) de R$ 20,00\n", vt);
	printf("%d nota(s) de R$ 10,00\n", dz);
	printf("%d nota(s) de R$ 5,00\n", cc);
	printf("%d nota(s) de R$ 2,00\n", ds);
	printf("%d nota(s) de R$ 1,00\n", um);
	return 0;
}