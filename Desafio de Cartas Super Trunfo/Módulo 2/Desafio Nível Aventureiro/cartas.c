#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Programa: Jogo de Cartas Super Trunfo - Cidades Brasileiras
 * 
 * Descrição: Este programa implementa uma versão simplificada do jogo Super Trunfo
 * com cartas representando cidades brasileiras. O usuário insere dados para duas
 * cartas e depois escolhe uma categoria para comparação, determinando a carta vencedora.
 * 
 * Cada carta contém:
 * - Estado (letra de A a H)
 * - Código (dois dígitos de 01 a 04)
 * - Nome da cidade
 * - População
 * - Área (em metros quadrados)
 * - PIB
 * - Número de pontos turísticos
 * 
 * Valores calculados:
 * - Densidade populacional (população/área)
 * - PIB per capita (PIB/população)
 * - Super poder (fórmula composta)
 */

int main()
{
    // Definição das variáveis para a primeira carta
    char card1_estado;                // Estado (A-H)
    char card1_codigo[3];             // Código da carta (01-04)
    char card1_nome_cidade[90];       // Nome da cidade
    unsigned long int card1_populacao; // População da cidade
    float card1_area;                 // Área em metros quadrados
    float card1_pib;                  // Produto Interno Bruto
    int card1_pontos_turisticos;      // Número de pontos turísticos

    // Definição das variáveis para a segunda carta
    char card2_estado;
    char card2_codigo[3];
    char card2_nome_cidade[90];
    unsigned long int card2_populacao;
    float card2_area;
    float card2_pib;
    int card2_pontos_turisticos;

    // Coleta de dados para a primeira carta
    printf("\nDigite o estado de \'A\' a \'H\': ");
    scanf(" %c", &card1_estado);
    printf("\nDigite o código da carta que deve ser de 01 a 04 com apenas dois digitos: ");
    scanf(" %2s", card1_codigo);
    printf("\nDigite o nome da cidade: ");
    scanf(" %89[^\n]", card1_nome_cidade);
    printf("\nDigite o número aproximado da população (somente valores inteiros): ");
    scanf(" %ld", &card1_populacao);
    printf("\nDigite o tamanho da cidade em metros quadrados: ");
    scanf(" %f", &card1_area);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &card1_pib);
    printf("\nDigite o numero de pontos turísticos (somente valores inteiros): ");
    scanf(" %d", &card1_pontos_turisticos);

    printf("\n\n");

    // Coleta de dados para a segunda carta
    printf("\nDigite o estado de \'A\' a \'H\': ");
    scanf(" %c", &card2_estado);
    printf("\nDigite o código da carta que deve ser de 01 a 04 com apenas dois digitos: ");
    scanf(" %2s", card2_codigo);
    printf("\nDigite o nome da cidade: ");
    scanf(" %89[^\n]", card2_nome_cidade);
    printf("\nDigite o número aproximado da população (somente valores inteiros): ");
    scanf(" %ld", &card2_populacao);
    printf("\nDigite o tamanho da cidade em metros quadrados: ");
    scanf(" %f", &card2_area);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &card2_pib);
    printf("\nDigite o numero de pontos turísticos (somente valores inteiros): ");
    scanf(" %d", &card2_pontos_turisticos);

    printf("\n\n");

    // Cálculo dos valores derivados para a primeira carta
    float card1_densidade_populacional = 0.0;
    float card1_pib_per_capita = 0.0;
    
    // Cálculo da densidade populacional (evitando divisão por zero)
    if (card1_area > 0) {
        card1_densidade_populacional = (float)card1_populacao / card1_area;
    }
    
    // Cálculo do PIB per capita (evitando divisão por zero)
    if (card1_populacao > 0) {
        card1_pib_per_capita = card1_pib / (float)card1_populacao;
    }
    
    // Fórmula do super poder: população + área + PIB + pontos turísticos + PIB per capita - densidade populacional
    // Usando os valores já calculados para evitar divisões por zero
    float card1_superpoder = (float)card1_populacao + card1_area + card1_pib + (float)card1_pontos_turisticos + card1_pib_per_capita - card1_densidade_populacional;

    // Exibição dos dados da primeira carta
    printf("Estado: %c \nCódigo: %c%2s \nNome da Cidade: %s \nPopulação: %ld \nÁrea (m^2): %.2f \nPIB: %.2f \nPontos Turísticos: %d \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \nSuper Poder: %.2f", card1_estado, card1_estado, card1_codigo, card1_nome_cidade, card1_populacao, card1_area, card1_pib, card1_pontos_turisticos, card1_densidade_populacional, card1_pib_per_capita, card1_superpoder);

    printf("\n\n");

    // Cálculo dos valores derivados para a segunda carta
    float card2_densidade_populacional = 0.0;
    float card2_pib_per_capita = 0.0;
    
    // Cálculo da densidade populacional (evitando divisão por zero)
    if (card2_area > 0) {
        card2_densidade_populacional = (float)card2_populacao / card2_area;
    }
    
    // Cálculo do PIB per capita (evitando divisão por zero)
    if (card2_populacao > 0) {
        card2_pib_per_capita = card2_pib / (float)card2_populacao;
    }
    
    // Fórmula do super poder: população + área + PIB + pontos turísticos + PIB per capita - densidade populacional
    // Usando os valores já calculados para evitar divisões por zero
    float card2_superpoder = (float)card2_populacao + card2_area + card2_pib + (float)card2_pontos_turisticos + card2_pib_per_capita - card2_densidade_populacional;

    // Exibição dos dados da segunda carta
    printf("Estado: %c \nCódigo: %c%2s \nNome da Cidade: %s \nPopulação: %ld \nÁrea (m^2): %.2f \nPIB: %.2f \nPontos Turísticos: %d \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \nSuper Poder: %.2f", card2_estado, card2_estado, card2_codigo, card2_nome_cidade, card2_populacao, card2_area, card2_pib, card2_pontos_turisticos, card2_densidade_populacional, card2_pib_per_capita, card2_superpoder);

    printf("\n\n");

    // Menu de opções para comparação das cartas

    printf("\nPara comparar as cartas, digite a letra correspondente ao campo desejado:\n");
    printf("A - Área\n");
    printf("P - População\n");
    printf("I - PIB\n");
    printf("T - Pontos Turísticos\n");
    printf("D - Densidade Demográfica\n");

    // Leitura da opção escolhida pelo usuário
    char opcao;
    printf("\n\nInsira a opção para comparação:\n");
    scanf(" %c", &opcao);

    // Comparação das cartas com base na opção escolhida
    switch (opcao)
    {
    case 'A':
        // Comparação por área - vence quem tem maior área
        if(card1_area != 0 && card2_area != 0)
        {
            if (card1_area > card2_area)
                printf("Área: Card %c%2s venceu!\n", card1_estado, card1_codigo);
            else if (card1_area < card2_area)
                printf("Área: Card %c%2s venceu!\n", card2_estado, card2_codigo);
            else
                printf("Área: Empate! Ambas as cartas têm a mesma área.\n");
        }
        else
        {
            // Tratamento para casos onde uma ou ambas as áreas são zero
            if (card1_area == 0 && card2_area == 0)
                printf("Ambas as cartas têm área igual a zero, não há vitória para nenhum dos dois!.\n");
            else if (card1_area == 0)
                printf("Card %c%2s tem área zero, não há vitória para nenhum dos dois!\n", card1_estado, card1_codigo);
            else
                printf("Card %c%2s tem área zero, não há vitória para nenhum dos dois!\n", card2_estado, card2_codigo);
        }
        break;
    case 'P':
        // Comparação por população - vence quem tem maior população
        if(card1_populacao != 0 && card2_populacao != 0)
        {
            if (card1_populacao > card2_populacao)
                printf("População: Card %c%2s venceu!\n", card1_estado, card1_codigo);
            else if (card1_populacao < card2_populacao)
                printf("População: Card %c%2s venceu!\n", card2_estado, card2_codigo);
            else
                printf("População: Empate! Ambas as cartas têm a mesma população.\n");
        }
        else
        {
            // Tratamento para casos onde uma ou ambas as populações são zero
            if (card1_populacao == 0 && card2_populacao == 0)
                printf("Ambas as cartas têm população igual a zero, não há vitória para nenhum dos dois!.\n");
            else if (card1_populacao == 0)
                printf("Card %c%2s tem população zero, não há vitória para nenhum dos dois!\n", card1_estado, card1_codigo);
            else
                printf("Card %c%2s tem população zero, não há vitória para nenhum dos dois!\n", card2_estado, card2_codigo);
        }
        break;
    case 'I':
        // Comparação por PIB - vence quem tem maior PIB
        if(card1_pib != 0 && card2_pib != 0)
        {
            if (card1_pib > card2_pib)
                printf("PIB: Card %c%2s venceu!\n", card1_estado, card1_codigo);
            else if (card1_pib < card2_pib)
                printf("PIB: Card %c%2s venceu!\n", card2_estado, card2_codigo);
            else
                printf("PIB: Empate! Ambas as cartas têm o mesmo PIB.\n");
        }
        else
        {
            // Tratamento para casos onde um ou ambos os PIBs são zero
            if (card1_pib == 0 && card2_pib == 0)
                printf("Ambas as cartas têm PIB igual a zero, não há vitória para nenhum dos dois!.\n");
            else if (card1_pib == 0)
                printf("Card %c%2s tem PIB zero, não há vitória para nenhum dos dois!\n", card1_estado, card1_codigo);
            else
                printf("Card %c%2s tem PIB zero, não há vitória para nenhum dos dois!\n", card2_estado, card2_codigo);
        }
        break;
    case 'T':
        // Comparação por pontos turísticos - vence quem tem mais pontos
        if (card1_pontos_turisticos != 0 && card2_pontos_turisticos != 0)
        {
            if (card1_pontos_turisticos > card2_pontos_turisticos)
                printf("Pontos Turísticos: Card %c%2s venceu!\n", card1_estado, card1_codigo);
            else if (card1_pontos_turisticos < card2_pontos_turisticos)
                printf("Pontos Turísticos: Card %c%2s venceu!\n", card2_estado, card2_codigo);
            else
                printf("Pontos Turísticos: Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
        }
        else
        {
            // Tratamento para casos onde um ou ambos têm zero pontos turísticos
            if (card1_pontos_turisticos == 0 && card2_pontos_turisticos == 0)
                printf("Ambas as cartas têm pontos turísticos igual a zero, não há vitória para nenhum dos dois!.\n");
            else if (card1_pontos_turisticos == 0)
                printf("Card %c%2s tem pontos turísticos zero, não há vitória para nenhum dos dois!\n", card1_estado, card1_codigo);
            else
                printf("Card %c%2s tem pontos turísticos zero, não há vitória para nenhum dos dois!\n", card2_estado, card2_codigo);
        }
        break;
    case 'D':
        // Comparação por densidade populacional - vence quem tem MENOR densidade
        // Nota: Para densidade populacional, o valor menor é considerado melhor (menos congestionamento)
        if (card1_densidade_populacional != 0 && card2_densidade_populacional != 0)
        {
            if (card1_densidade_populacional < card2_densidade_populacional)
                printf("Densidade Populacional: Card %c%2s venceu!\n", card1_estado, card1_codigo);
            else if (card1_densidade_populacional > card2_densidade_populacional)
                printf("Densidade Populacional: Card %c%2s venceu!\n", card2_estado, card2_codigo);
            else
                printf("Densidade Populacional: Empate! Ambas as cartas têm a mesma densidade populacional.\n");
        }
        else
        {
            // Tratamento para casos onde uma ou ambas as densidades são zero
            if (card1_densidade_populacional == 0 && card2_densidade_populacional == 0)
                printf("Ambas as cartas têm densidade populacional igual a zero, não há vitória para nenhum dos dois!.\n");
            else if (card1_densidade_populacional == 0)
                printf("Card %c%2s tem densidade populacional zero, não há vitória para nenhum dos dois!\n", card1_estado, card1_codigo);
            else
                printf("Card %c%2s tem densidade populacional zero, não há vitória para nenhum dos dois!\n", card2_estado, card2_codigo);
        }
        break;
    default:
        // Tratamento para opção inválida
        printf("Não foi possível selecionar um campo para comparação, porque '%c' não é uma opção válida!\n", opcao);
        break;
    }

    printf("\n");

    return 0;
}
