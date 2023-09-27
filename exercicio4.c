#include<stdio.h>
#include<math.h>

main(){

    /*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
    e se for classificá-los (imprimi-los) segundo os ângulos.*/
    
    float A, B, C;
    printf("Digite o valor de A");
    scanf("%f", &A);
    printf("Digite o valor de B");
    scanf("%f", &B);
    printf("Digite o valor de C");
    scanf("%f", &C);
    
    /*(Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

    if(A == 90 && B< 90 && C<90){ //triângulo retângulo A-hipotenusa tem 90 graus, B e C são catetos menores que 90 graus
        printf("é um triângulo retângulo (ângulo de 90 graus)\n");

    }else if(A > 90 || A < 180 && B < 90 && C < 90){//triângulo obtusângulo A - 126.9 B - 19.4 C - 33.7 possui um dos seus ângulos internos com medida maior que 90° e menor que 180°, ou seja, um ângulo obtuso.*/
        printf("é um triângulo obtusângulo (ângulo maior que 90 graus)\n");

    }else if(A < 90 && B < 90 && C < 90){//triângulo acutângulo todos os lados possuem valor menor que 90 graus//
        printf("é um triângulo acutângulo (ângulo menor que 90 graus)\n");
    
    }else{
        printf("Não é possível formar um triângulo com esses lados.\n");}
    
}

