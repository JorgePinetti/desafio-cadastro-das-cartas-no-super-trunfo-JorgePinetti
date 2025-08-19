#include <stdio.h>
int main()
{

    // Variáveis para a Carta 1
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[20];
    unsigned long int populacaoCidade1;
    float areaCidade1;
    float pibCidade1;
    int turismoCidade1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1 = 0.0f;
    int pontosCarta1 = 0;

    // Variáveis para a Carta 2
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[20];
    unsigned long int populacaoCidade2;
    float areaCidade2;
    float pibCidade2;
    int turismoCidade2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2 = 0.0f;
    int pontosCarta2 = 0;

    printf("Super trunfo: Cadastro de cartas\n");

    // Cadastrando carta 1
    printf("\nCarta 1\n");
    printf("\nInsira a inicial do estado: ");
    scanf(" %c", &estado1);

    printf("Insira o codigo da carta: ");
    scanf("%s", codigoCarta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Insira a populacao da cidade: ");
    scanf("%lu", &populacaoCidade1);

    printf("Insira area da cidade em Km2: ");
    scanf("%f", &areaCidade1);

    printf("Insira o pib da cidade: ");
    scanf("%f", &pibCidade1);

    printf("Insira a qtde de pontos turisticos da cidade: ");
    scanf("%d", &turismoCidade1);

    // Calculos para Carta 1
    densidadePopulacional1 = (float)populacaoCidade1 / areaCidade1;
    pibPerCapita1 = pibCidade1 / (float)populacaoCidade1;
    superPoder1 = (float)populacaoCidade1 + areaCidade1 + pibCidade1 + (float)turismoCidade1 + (1.0f / densidadePopulacional1);

    // Exibir Carta 1
    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %lu\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f hab/km2\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
           estado1, codigoCarta1, nomeCidade1, populacaoCidade1, areaCidade1, pibCidade1,
           turismoCidade1, densidadePopulacional1, pibPerCapita1, superPoder1);

    // Cadastrando carta 2
    printf("\nCarta 2\n");
    printf("\nInsira a inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Insira o codigo da carta: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Insira a populacao da cidade: ");
    scanf("%lu", &populacaoCidade2);

    printf("Insira area da cidade em Km2: ");
    scanf("%f", &areaCidade2);

    printf("Insira o pib da cidade: ");
    scanf("%f", &pibCidade2);

    printf("Insira a qtde de pontos turisticos da cidade: ");
    scanf("%d", &turismoCidade2);

    // Calculos para Carta 2
    densidadePopulacional2 = (float)populacaoCidade2 / areaCidade2;
    pibPerCapita2 = pibCidade2 / (float)populacaoCidade2;
    superPoder2 = (float)populacaoCidade2 + areaCidade2 + pibCidade2 + (float)turismoCidade2 + (1.0f / densidadePopulacional2);

    // Exibir Carta 2
    printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %lu\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f hab/km2\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
           estado2, codigoCarta2, nomeCidade2, populacaoCidade2, areaCidade2, pibCidade2,
           turismoCidade2, densidadePopulacional2, pibPerCapita2, superPoder2);


    //Batalha de cartas
    printf("\nIniciando batalha de cartas...\n");

    if(populacaoCidade1 > populacaoCidade2){
            printf("Populacao: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(populacaoCidade1 < populacaoCidade2){
        printf("Populacao: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("Populacao: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}



    if(areaCidade1 > areaCidade2){
            printf("Area: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(areaCidade1 < areaCidade2){
        printf("Area: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("Area: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}


    if(turismoCidade1 > turismoCidade2){
            printf("Pontos turisticos: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(turismoCidade1 < turismoCidade2){
        printf("Pontos turisticos: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("Pontos turisticos: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}


    if(pibCidade1 > pibCidade2){
            printf("PIB: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(pibCidade1 < pibCidade2){
        printf("PIB: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("PIB: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}


    if(pibPerCapita1 > pibPerCapita2){
            printf("Pib per Capita: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(pibPerCapita1 < pibPerCapita2){
        printf("Pib per Capita: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("Pib per Capita: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}



    if(densidadePopulacional1 < densidadePopulacional2){
            printf("Densidade populacional: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(densidadePopulacional1 > densidadePopulacional2){
        printf("Densidade populacional: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("Densidade Populacional: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}



    if(superPoder1 > superPoder2){
            printf("Super Poderes: Carta 1 venceu!\n");
            pontosCarta1 += 1;}
    else if(superPoder1 < superPoder2){
        printf("Super Poderes: Carta 2 venceu!\n");
        pontosCarta2 += 1;
    }else{
    printf("Super Poderes: Empate!\n");
    pontosCarta1 += 1;
    pontosCarta2 += 1;}

    printf("\nFim da batalha\n");


    if(pontosCarta1 > pontosCarta2){
            printf("A carta 1 e a vencedora!\n");}
    else if(pontosCarta1 < pontosCarta2){
        printf("A carta 2 e a vencedora!\n");
    }else{
    printf("As duas cartas empataram!\n");}

    return 0;
}
