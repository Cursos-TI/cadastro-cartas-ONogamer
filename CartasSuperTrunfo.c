#include <stdio.h>

int main(){
    char estado1;
    char cod_carta1[4];
    char nome_cidade1[50];
    int pontos_turisticos1;
    float area1, pib1;
    unsigned long int populacao1;


    printf("================CARTA 01===================\n");
    
    printf("ESTADO DE (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código do estado, de 01 a 04 (ex: A01): \n");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade1);

    printf("Sua população é de : \n" );
    scanf("%lu", &populacao1);

    printf("Quantidades de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos1);

    printf("Digite a Área em Km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    
    float densidade1 = populacao1 / area1;
    float pibpercapita1 =  (pib1 * 1000000000) / populacao1;

    

    char estado2;
    char cod_carta2[4];
    char nome_cidade2[50];
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2;

    printf("===============CARTA 02==================\n");
    
    printf("ESTADO DE (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado, de 01 a 04 (ex: A01): \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Sua população é de : \n" );
    scanf("%lu", &populacao2);

    printf("Quantidades de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos2);

    printf("Digite a Área em Km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    float densidade2 = (float) populacao2 / area2;
    float pibpercapita2 =  (pib2 * 1000000000) / populacao2;
    

    printf("ESTADO: %c\n", estado1);
    printf("Código da Carta:%s\n", cod_carta1);
    printf("Nome da cidade: %s\n",nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Quantidades de Pontos Turisticos:%i \n", pontos_turisticos1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);



    printf("ESTADO: %c\n", estado2);
    printf("Código da Carta:%s\n", cod_carta2);
    printf("Nome da cidade: %s\n",nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Quantidades de Pontos Turisticos:%i \n", pontos_turisticos2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km \n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

     /* Inverso da densidade populacional */
    float inverso_densidade1 = 1 / densidade1;
    float inverso_densidade2 = 1 / densidade2;

    /* Super Poder */
    float superpoder1 = 
        (float)populacao1 +
        area1 +
        pib1 +
        pontos_turisticos1 +
        pibpercapita1 +
        inverso_densidade1;

    float superpoder2 = 
        (float)populacao2 +
        area2 +
        pib2 +
        pontos_turisticos2 +
        pibpercapita2 +
        inverso_densidade2;

    printf("\n========== COMPARAÇÃO DE CARTAS ==========\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);

    /* Densidade: menor vence */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    printf("\nSuper Poder da carta %s: %.2f\n", nome_cidade1, superpoder1);
    printf("Super Poder da carta %s: %.2f\n", nome_cidade2, superpoder2);
    return 0;
}