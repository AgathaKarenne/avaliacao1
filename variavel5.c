#include <stdio.h>
#include <math.h>

float calculaDistancia(int x1, int y1, int x2, int y2) {
    sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
}

int main()
{
    int x1,x2,y1,y2;
    float distancia;

    distancia = 0;
    while (distancia == 0) {
        scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
        distancia = calculaDistancia(x1,y1,x2,y2);
    }
    printf("%f", distancia);
}