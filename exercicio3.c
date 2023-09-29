#include<stdio.h>

main(){

    /*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
    e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

    float A, B, C;
    printf("Digite as medidas do triângulo:\n");
    scanf("%.3f", &A, &B, &C);


    /*medidas de cada triangulo*/
    /*triangulo escaleno A = 10cm; B = 8cm; C = 4cm*/
    /*triangulo equilatero todos os 3 lados possuem 60 graus A = 15cm B = 15cm C = 15cm */
    /*triangulo isosceles possui dois lados congruentes A = 10cm B = 10cm C = 12cm */

    if(A>B && A>C && B<A && B>C && C<A && C<B){
        printf("Este é um triangulo escaleno\n");

    }else if(A == B || A == C || B == A || B == C || C == A || C == B){
        printf("Este é um triângulo equilatero\n");
        
    }else if(A == B || A != C || B != C){
        printf("Este é um triângulo isosceles\n");

    }else{
        printf("Não é possível formar um triângulo com esses lados.\n");}

}




