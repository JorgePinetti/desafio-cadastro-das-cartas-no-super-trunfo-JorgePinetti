#include <stdio.h>
int main()
{

	char estado;
	char codigoCarta[4];
	char nomeCidade[20];
	int populacaoCidade;
	float areaCidade;
	float pibCidade;
	int turismoCidade;

	float densidadePopulacional;
	float pibPerCapita;

	printf("Super trunfo: Cadastro de cartas\n");

	printf("\nCarta 1\n");

	printf("\nInsira a inicial do estado: ");
	scanf("%c", &estado);

	printf("Insira o codigo da carta: ");
	scanf("%s", &codigoCarta);

	printf("Insira o nome da cidade: ");
	scanf("%s", &nomeCidade);

	printf("Insira a populacao da cidade: ");
	scanf("%d", &populacaoCidade);

	printf("Insira area da cidade em Km2: ");
	scanf("%f", &areaCidade);

	printf("Insira o pib da cidade: ");
	scanf("%f", &pibCidade);

	printf("Insira a qtde de pontos turisticos da cidade: ");
	scanf("%d", &turismoCidade);

	densidadePopulacional = populacaoCidade / areaCidade;
	pibPerCapita = pibCidade / populacaoCidade;

	printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacaoo: %d\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f hab/km2\nPIB per Capita: R$ %.2f\n", estado, codigoCarta, nomeCidade, populacaoCidade, areaCidade, pibCidade, turismoCidade,densidadePopulacional, pibPerCapita);

	printf("\nCarta 2\n");

	printf("\nInsira a inicial do estado: ");
	scanf(" %c", &estado);

	printf("Insira o codigo da carta: ");
	scanf("%s", &codigoCarta);

	printf("Insira o nome da cidade: ");
	scanf("%s", &nomeCidade);

	printf("Insira a populacao da cidade: ");
	scanf("%d", &populacaoCidade);

	printf("Insira area da cidade em Km2: ");
	scanf("%f", &areaCidade);

	printf("Insira o pib da cidade: ");
	scanf("%f", &pibCidade);

	printf("Insira a qtde de pontos turisticos da cidade: ");
	scanf("%d", &turismoCidade);

	densidadePopulacional = populacaoCidade / areaCidade;
	pibPerCapita = pibCidade / populacaoCidade;

	printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacaoo: %d\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f hab/km2\nPIB per Capita: R$ %.2f\n", estado, codigoCarta, nomeCidade, populacaoCidade, areaCidade, pibCidade, turismoCidade,densidadePopulacional, pibPerCapita);

	return 0;
}
