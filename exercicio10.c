#include <stdio.h>
#include <string.h>

#define CIDADES 200

/*Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:

- código da cidade

- estado (RS, SC, PR, SP, RJ, ...)
rio grande do sul, santa catarina, parana,sao paulo, rio de janeiro
- número de veículos de passeio (em 1992)

- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

b) qual a média de veículos nas cidades brasileiras

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/

int main()
{
	// Inicialização dos arrays para armazenar os dados
	int codigos[CIDADES];
	int veiculos[CIDADES];
	int acidentes[CIDADES];

	// Leitura dos dados das cidades
	for (int i = 0; i < CIDADES; i++)
	{
		printf("Cidade %d:\n", i + 1);
		printf("Código: ");
		scanf("%d", &codigos[i]);
		printf("Número de veículos de passeio (em 1992): ");
		scanf("%d", &veiculos[i]);
		printf("Número de acidentes com vítimas (em 1992): ");
		scanf("%d", &acidentes[i]);
	}

	// a) Encontrar o maior e o menor índice de acidentes de trânsito
	int maiorIndice = 0, menorIndice = 0;
	for (int i = 1; i < CIDADES; i++)
	{
		if ((float)acidentes[i] / veiculos[i] > (float)acidentes[maiorIndice] / veiculos[maiorIndice])
		{
			maiorIndice = i;
		}
		if ((float)acidentes[i] / veiculos[i] < (float)acidentes[menorIndice] / veiculos[menorIndice])
		{
			menorIndice = i;
		}
	}

	printf("\na) Maior índice de acidentes de trânsito: Cidade %d", codigos[maiorIndice]);
	printf("   Menor índice de acidentes de trânsito: Cidade %d", codigos[menorIndice]);

	// b) Calcular a média de veículos nas cidades brasileiras
	int somaVeiculos = 0;
	for (int i = 0; i < CIDADES; i++)
	{
		somaVeiculos += veiculos[i];
	}
	float mediaVeiculos = (float)somaVeiculos / CIDADES;

	printf("\nb) Média de veículos nas cidades brasileiras: %.2f\n", mediaVeiculos);

	// c) Calcular a média de acidentes com vítimas entre as cidades do Rio Grande do Sul
	int somaAcidentesRS = 0;
	int numCidadesRS = 0;
	for (int i = 0; i < CIDADES; i++)
	{
		if (strcmp(codigos[i], "RS") == 0)
		{
			somaAcidentesRS += acidentes[i];
			numCidadesRS++;
		}
	}
	float mediaAcidentesRS = (float)somaAcidentesRS / numCidadesRS;

	printf("\nc) Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

	return 0;
}
