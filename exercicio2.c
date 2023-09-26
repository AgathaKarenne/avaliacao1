#include <stdio.h>

main() {

    //Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
    // Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.

    float chicoAltura = 1.50; // 1,50 metros em centímetros
    float zeAltura = 1.10;   // 1,10 metros em centímetros
    int anos = 0;

    while (zeAltura <= chicoAltura ) {
        chicoAltura += 2; // Chico cresce 2 centímetros por ano
        zeAltura += 3;    // Zé cresce 3 centímetros por ano
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}
