#include<stdio.h>

main(){

    /*Faça um algoritmo que leia as três notas de 30 alunos de uma turma.
    Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10*/
    /*Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado",
    caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.*/

    int i, numerosDeAlunos = 30;
    float MP, mediaGeral = 0.0, notas[numerosDeAlunos];

    for (int i = 0; i < numerosDeAlunos; i++){
         float nota1, nota2, nota3;

        printf("Digite as notas do aluno %d:\n", i + 1);
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Nota 3: ");
        scanf("%f", &nota3);

    MP = (nota1 * 2 + nota2 * 4 + nota3 * 3) / 10;

    notas[i] = MP;

    mediaGeral += MP;

    }printf("\nMédias Ponderadas dos Alunos:\n");
    for (int i = 0; i < numerosDeAlunos; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);


    }
    if (MP >= 7.0) {
            printf("Aluno %d: %.2f - Aprovado\n", i + 1, MP);
        } else {
            printf("Aluno %d: %.2f - Reprovado\n", i - 1, MP);
        }

    mediaGeral /= numerosDeAlunos;
    printf("\nMédia Geral da Turma: %.2f\n", mediaGeral);
}

