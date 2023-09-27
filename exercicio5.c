#include<stdio.h>
#include<math.h>

main(){

    /*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2)
    e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: */

    int x1, x2, y1, y2;
    float distância, calculaDistância(x1,y1,x2,y2), calculaDistância = sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
   

    printf("Digite as coodernadas do primeiro ponto (x1, y1)");
    scanf("%d %d", &x1, &y1);
    printf("Digite as coodernadas do segundo ponto (x2, y2)");
    scanf("%d %d", &x2, &y2);

    distância = calculaDistância(x1,y1,x2,y2);

    printf("calculaDistância: %d", distância);
}