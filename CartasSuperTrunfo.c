
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main(){
    char estado1;
    char cod_carta1[4];
    char nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    printf("ESTADO DE (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código do estado, de 01 a 04 (ex: A01): \n");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade1);

    printf("Sua população é de : \n" );
    scanf("%d", &populacao1);

    printf("Quantidades de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos1);

    printf("Digite a Área em Km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    float bilhao1 = pib1* 1000000000;
    float densidade1 = (float) populacao1 / area1;
    float pibpercapita1 = bilhao1 / populacao1;

    

    char estado2;
    char cod_carta2[4];
    char nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("ESTADO DE (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado, de 01 a 04 (ex: A01): \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Sua população é de : \n" );
    scanf("%d", &populacao2);

    printf("Quantidades de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos2);

    printf("Digite a Área em Km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    float bilhao2 = pib2 * 1000000000;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita2 = bilhao2 / populacao2;


    printf("DADOS DA CARTA NÚMERO 1 \n");
    printf("ESTADO: %c\n", estado1);
    printf("Código da Carta:%s\n", cod_carta1);
    printf("Nome da cidade: %s\n",nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Quantidades de Pontos Turisticos: %i\n", pontos_turisticos1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("DADOS DA CARTA NÚMERO 2\n");
    printf("ESTADO: %c\n", estado2);
    printf("Código da Carta:%s\n", cod_carta2);
    printf("Nome da cidade: %s\n",nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Quantidades de Pontos Turisticos: %i\n", pontos_turisticos2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km \n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}
