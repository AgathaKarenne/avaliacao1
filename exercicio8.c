#include <stdio.h>

main()
{

    /*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

    a) média do salário da população;

    b) média do número de filhos;

    c) maior salário;

    d) percentual de pessoas com salário até R$100,00.

    O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .*/

    int numeroDeFilhos, numeroDePessoas = 0;
    float mediaFilhos = 0, percentualSalarioAte100;
    double salario, mediaSalario = 0, maiorSalario = 0;

    do
    {
        printf("Digite o salário:");
        scanf("%lf", &salario);

        if (salario < 0)
        {
            break; // Saia do loop se o salário for negativo
        }

        printf("Digite o número de filhos:");
        scanf("%d", &numeroDeFilhos);

        mediaSalario += salario;
        mediaFilhos += numeroDeFilhos;
        numeroDePessoas++;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        if (salario <= 100.0)
        {
            percentualSalarioAte100++;
        }
    } while (1);

    mediaSalario /= numeroDePessoas;
    mediaFilhos /= numeroDePessoas;
    percentualSalarioAte100 = (percentualSalarioAte100 / numeroDePessoas) * 100.0;

    printf("\nEstatísticas da pesquisa:\n");
    printf("a) Média do salário da população: %.2lf\n", mediaSalario);
    printf("b) Média do número de filhos: %.2lf\n", mediaFilhos);
    printf("c) Maior salário: %.2lf\n", maiorSalario);
    printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualSalarioAte100);
}
