#include <stdio.h>

main()
{

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

    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votoNulo = 0, votoBranco = 0;
    int voto;

    printf("digite o numero do seu candidado:(ou 5 para voto nulo e 6 para voto em branco)");

    do
    {
        // ler o voto de todos os candidatos
        scanf("%d", &voto);

        // classificar os votos
        switch (voto)
        {
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
            break;
        case 5:
            votoNulo++;
            break;
        case 6:
            votoBranco++;
            break;
        case 0;
            break;
            default:
            printf("codigo invalido: tente novamente");
        }
    } while (voto != 0);

    // imprimir resultados da votação
    printf("\nResultado:\n");
    printf("Candidato 1: %d votos", candidato1);
    printf("Candidato 2: %d votos", candidato2);
    printf("Candidato 3: %d votos", candidato3);
    printf("Candidato 4: %d votos", candidato4);
    printf("Votos Nulos %d votos", votoNulo);
    printf("Votos em branco: %d votos", votoBranco);
}


  
 
