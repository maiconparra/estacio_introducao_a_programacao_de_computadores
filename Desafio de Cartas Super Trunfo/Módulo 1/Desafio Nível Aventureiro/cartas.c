#include <stdio.h>


int main() {

    char card1_estado;
    char card1_codigo[3];
    char card1_nome_cidade[90];
    int card1_populacao;
    float card1_area;
    float card1_pib;
    int card1_pontos_turisticos;

    char card2_estado;
    char card2_codigo[3];
    char card2_nome_cidade[90];
    int card2_populacao;
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
    scanf(" %d", &card1_populacao);
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
    scanf(" %d", &card2_populacao);
    printf("\nDigite o tamanho da cidade em metros quadrados: ");
    scanf(" %f", &card2_area);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &card2_pib);
    printf("\nDigite o numero de pontos turísticoas (somente valores inteiros): ");
    scanf(" %d", &card2_pontos_turisticos);

    printf("\n\n");

    printf("Estado: %c \nCódigo: %c%2s \nNome da Cidade: %s \nPopulação: %d \nAera (m^2): %f \nPIB: %f \nPontos Turísticos: %d \nDensidade Populacional: %.2f \nPIB per Capita: %.2f", card1_estado, card1_estado, card1_codigo, card1_nome_cidade, card1_populacao, card1_area, card1_pib, card1_pontos_turisticos, card1_populacao / card1_area, card1_pib / card1_populacao);

    printf("\n\n");

    printf("Estado: %c \nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %d \nAera (m^2): %f \nPIB: %f \nPontos Turísticos: %d \nDensidade Populacional: %.2f \nPIB per Capita: %.2f", card2_estado, card2_estado, card2_codigo, card2_nome_cidade, card2_populacao, card2_area, card2_pib, card2_pontos_turisticos, card2_populacao / card2_area, card2_pib / card2_populacao);

    return 0;
} 