#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para time()

int main()
{

    char card1_estado;
    char card1_codigo[3];
    char card1_nome_cidade[90];
    unsigned long int card1_populacao;
    float card1_area;
    float card1_pib;
    int card1_pontos_turisticos;

    char card2_estado;
    char card2_codigo[3];
    char card2_nome_cidade[90];
    unsigned long int card2_populacao;
    float card2_area;
    float card2_pib;
    int card2_pontos_turisticos;

    printf("\nDigite o estado de \'A\' a \'H\': ");
    scanf(" %c", &card1_estado);
    printf("\nDigite o código da carta que deve ser de 01 a 04 com apenas dois digitos: ");
    scanf(" %2s", card1_codigo);
    printf("\nDigite o nome da cidade: ");
    scanf(" %89[^\n]", card1_nome_cidade);
    printf("\nDigite o número aproximado da pupulação (somente valores inteiros): ");
    scanf(" %ld", &card1_populacao);
    printf("\nDigite o tamanho da cidade em metros quadrados: ");
    scanf(" %f", &card1_area);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &card1_pib);
    printf("\nDigite o numero de pontos turísticoas (somente valores inteiros): ");
    scanf(" %d", &card1_pontos_turisticos);

    printf("\n\n");

    printf("\nDigite o estado de \'A\' a \'H\': ");
    scanf(" %c", &card2_estado);
    printf("\nDigite o código da carta que deve ser de 01 a 04 com apenas dois digitos: ");
    scanf(" %2s", card2_codigo);
    printf("\nDigite o nome da cidade: ");
    scanf(" %89[^\n]", card2_nome_cidade);
    printf("\nDigite o número aproximado da pupulação (somente valores inteiros): ");
    scanf(" %ld", &card2_populacao);
    printf("\nDigite o tamanho da cidade em metros quadrados: ");
    scanf(" %f", &card2_area);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &card2_pib);
    printf("\nDigite o numero de pontos turísticoas (somente valores inteiros): ");
    scanf(" %d", &card2_pontos_turisticos);

    printf("\n\n");

    float card1_densidade_populacional = (float)card2_populacao / card2_area;

    float card1_pib_per_capita = card1_pib / (float)card1_populacao;

    float card1_superpoder = (float)card1_populacao + card1_area + card1_pib + (float)card1_pontos_turisticos + (card1_pib / (float)card1_populacao) - ((float)card1_populacao / card1_area);

    printf("Estado: %c \nCódigo: %c%2s \nNome da Cidade: %s \nPopulação: %ld \nAera (m^2): %.2f \nPIB: %.2f \nPontos Turísticos: %d \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \nSuper Poder: %.2f", card1_estado, card1_estado, card1_codigo, card1_nome_cidade, card1_populacao, card1_area, card1_pib, card1_pontos_turisticos, card1_densidade_populacional, card1_pib_per_capita, card1_superpoder);

    printf("\n\n");

    float card2_densidade_populacional = (float)card2_populacao / card2_area;

    float card2_pib_per_capita = card2_pib / card2_populacao;

    float card2_superpoder = (float)card2_populacao + card2_area + card2_pib + (float)card2_pontos_turisticos + (card2_pib / (float)card2_populacao) - ((float)card2_populacao / card2_area);

    printf("Estado: %c \nCódigo: %c%2s \nNome da Cidade: %s \nPopulação: %ld \nAera (m^2): %.2f \nPIB: %.2f \nPontos Turísticos: %d \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \nSuper Poder: %.2f", card2_estado, card2_estado, card2_codigo, card2_nome_cidade, card2_populacao, card2_area, card2_pib, card2_pontos_turisticos, card2_densidade_populacional, card2_pib_per_capita, card2_superpoder);

    printf("\n\n");

    /*if (card1_area > card2_area)
        printf("\nÁrea: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("\nÁrea: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    if (card1_populacao > card2_populacao)
        printf("População: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("População: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    if (card1_pib > card2_pib)
        printf("PIB: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("PIB: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    if (card1_pontos_turisticos > card2_pontos_turisticos)
        printf("Pontos Turísticos: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("Pontos Turísticos: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    if (card1_pib_per_capita > card2_pib_per_capita)
        printf("PIB per Capita: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("PIB per Capita: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    if (card1_densidade_populacional < card2_densidade_populacional)
        printf("Densidade Populacional: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("Densidade Populacional: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    if (card1_superpoder > card2_superpoder)
        printf("Super Poder: Card %c%2s venceu!\n", card1_estado, card1_codigo);
    else
        printf("Super Poder: Card %c%2s venceu!\n", card2_estado, card2_codigo);*/

    /*srand(time(NULL));

    int numeroAleatorio = (rand() % 7) + 1;

    printf("\n");*/

    printf();

    switch (numeroAleatorio)
    {
    case 1:
        if (card1_area > card2_area)
            printf("Área: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("Área: Card %c%2s venceu!\n", card2_estado, card2_codigo);
        break;
    case 2:
        if (card1_populacao > card2_populacao)
            printf("População: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("População: Card %c%2s venceu!\n", card2_estado, card2_codigo);
        break;
    case 3:
        if (card1_pib > card2_pib)
            printf("PIB: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("PIB: Card %c%2s venceu!\n", card2_estado, card2_codigo);
        break;
    case 4:
        if (card1_pontos_turisticos > card2_pontos_turisticos)
            printf("Pontos Turísticos: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("Pontos Turísticos: Card %c%2s venceu!\n", card2_estado, card2_codigo);
        break;
    case 5:
        if (card1_pib_per_capita > card2_pib_per_capita)
            printf("PIB per Capita: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("PIB per Capita: Card %c%2s venceu!\n", card2_estado, card2_codigo);
        break;
    case 6:
        if (card1_densidade_populacional < card2_densidade_populacional)
            printf("Densidade Populacional: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("Densidade Populacional: Card %c%2s venceu!\n", card2_estado, card2_codigo);
        break;
    case 7:
        if (card1_superpoder > card2_superpoder)
            printf("Super Poder: Card %c%2s venceu!\n", card1_estado, card1_codigo);
        else
            printf("Super Poder: Card %c%2s venceu!\n", card2_estado, card2_codigo);

    default:
        printf("Não foi possível selecionar um campo para comparação!\n");
        break;
    }

    printf("\n");

    return 0;
}