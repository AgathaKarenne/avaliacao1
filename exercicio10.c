#include<stdio.h>
#include<stdlib.h>

main(){

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

    	char cidade = 200;
    	char maiorCidade, menorCidade;
	int numeroDeVeiculos, cd, numeroDeAcidentes,terminar;
	int mediaCidade, mediaVeiculo = 0,mediaAcidente,mediaVeiculosRS,mediaAcidenteRS;
	float indice,maiorIndice,menorIndice,media,mediaRS, RS;

	while(terminar!=0)
	{

		printf("\nQual o codigo da cidade");
		scanf("%s",&cd);
		printf("\nDigite o numero de veiculos");
		scanf("%d",&numeroDeVeiculos);
		printf("\nDigite o numero de acidentes");
		scanf("%d",&numeroDeAcidentes);

		cidade++;

		if (numeroDeVeiculos > 0)
			mediaVeiculo = mediaVeiculo + numeroDeVeiculos;

		if(mediaAcidente > 0)
			mediaAcidente = mediaAcidente + numeroDeAcidentes;       

		indice = numeroDeAcidentes / numeroDeVeiculos;

        if(cidade==0)                 
		{
			maiorCidade=cidade;
			maiorIndice=indice;
			menorCidade=indice;
			menorIndice=cidade;

		}

		if(indice>maiorIndice)
		{
			maiorCidade=cidade;
			maiorIndice=indice; 
		}  
		if(indice<menorIndice)
		{              
			menorCidade=cidade;
			menorIndice=indice;                 
		}              
		media=mediaVeiculo/mediaCidade;

			if(cidade == RS){
			mediaVeiculosRS = mediaVeiculosRS + mediaVeiculo;
			mediaAcidenteRS = mediaAcidenteRS + mediaAcidente;
			mediaRS = mediaVeiculosRS/mediaAcidenteRS;
	    }
		printf("Digite 0 para terminar e ver o resultado e 1 para continuar o formulario");
		scanf("%d",&terminar);

    } 


	printf("\nA cidade que possui maior indice de acidente foi:%s",maiorCidade);
	printf("\nSeu indice foi: %5.2f",maiorIndice);
	printf("\nA cidade que possui menor indice de acidente foi:%s",menorCidade);
	printf("\nSeu indice foi:%5.2f",menorIndice);
	printf("\nA media de veiculos nas cidades brasileiras e:%5.2f",media);
	printf("\nA media de acidentes no estado do Pernambuco foi:%5.2f",mediaRS);
	getchar();
	getchar();

}
