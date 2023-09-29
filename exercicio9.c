#include<stdio.h>

main(){

    /*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos.
     Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

    - 1,2,3,4 = voto para os respectivos candidatos;

    - 5 = voto nulo;

    - 6 = voto em branco;

    Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

    - total de votos para cada candidato;

    - total de votos nulos;

    - total de votos em branco;

    Como finalizador do conjunto de votos, tem-se o valor 0*/

    int candidato1, candidato2, candidato3, candidato4, voto = 0;
    float votoNulo, votoBranco;

    printf("informe os votos para os respectivos candidatos");

   while (voto != 0){
   scanf("%d", &voto);
        if (voto == 1)
            printf("Você votou no candidato numero 1");  
        candidato1++;
        if (voto == 2)
        printf("Você votou no candidato numero 2");
        candidato2++;
        if (voto == 3)
        printf("Você votou no candidato numero 3");
        candidato3++;
    }
    
    while (voto != 1,2,3,4){
        if (voto == 5)
            printf("Você votou nulo");
            votoNulo++;
        if (voto == 6)
            printf("Você votou em branco");
            votoBranco++;
    }
        
}
    

 