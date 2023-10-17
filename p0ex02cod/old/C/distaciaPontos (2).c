#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, d, a, b;
    //printf("Insira as coordenadas cartesianas do primeiro ponto:");
    scanf("%f %f", &x1, &y1);
    //printf("Insira as coordenadas cartesianas do segundo ponto:");
    scanf("%f %f", &x2, &y2);
    a = x2 - x1;
    b = y2 - y1;
    d = sqrt(pow(a, 2) + pow(b, 2));
    printf("%.4f", d);
    return 0;
}