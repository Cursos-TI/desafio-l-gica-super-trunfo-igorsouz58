#include <stdio.h>
#include <stdlib.h>

// Super Trunfo - Cidades
int main() {
    int turisticos1, turisticos2;
    int populacao1, populacao2;
    int opcaomenu;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;
    float somadosatributos1, somadosatributos2;
    float inversodensidade1, inversodensidade2;

    char nomedojogador[80];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    char estado1[30], estado2[30];

    printf("Seja Bem-Vindo ao Super Trunfo - Cidades!\n\n");

    // Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite seu nome: ");
    scanf("%s", nomedojogador);
    printf("Olá, %s! Vamos começar.\n", nomedojogador);

    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade1);
    printf("Digite o Estado: ");
    scanf("%s", estado1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("\n");

    // Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade2);
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;

    inversodensidade1 = 1 / densidade1;
    inversodensidade2 = 1 / densidade2;

    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibcapita1 + inversodensidade1;
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibcapita2 + inversodensidade2;

    somadosatributos1 = superpoder1;
    somadosatributos2 = superpoder2;

    // Exibindo as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\nCidade: %s\nEstado: %s\n", codigo1, cidade1, estado1);
    printf("Turismo: %d\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f bi\n", turisticos1, populacao1, area1, pib1);
    printf("Densidade: %.2f hab/km²\nPIB per capita: R$ %.2f\n", densidade1, pibcapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\nCidade: %s\nEstado: %s\n", codigo2, cidade2, estado2);
    printf("Turismo: %d\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f bi\n", turisticos2, populacao2, area2, pib2);
    printf("Densidade: %.2f hab/km²\nPIB per capita: R$ %.2f\n", densidade2, pibcapita2);

    // Comparações
    //Resultado 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence
    printf("\n--- Comparações Rápidas ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turisticos1 > turisticos2);
    printf("Densidade Populacional (menor é melhor): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibcapita1 > pibcapita2);
    printf("Superpoder: %d\n", superpoder1 > superpoder2);

    // Menu Interativo
    printf("\n## MENU DE COMPARAÇÃO INTERATIVA ##\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - Soma dos Atributos\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcaomenu);

    printf("\n");

    switch (opcaomenu) {
        case 1:
            if (populacao1 > populacao2)
                printf("%s venceu com %d habitantes contra %d de %s.\n", cidade1, populacao1, populacao2, cidade2);
            else if (populacao1 < populacao2)
                printf("%s venceu com %d habitantes contra %d de %s.\n", cidade2, populacao2, populacao1, cidade1);
            else
                printf("Empate! Ambas as cidades têm %d habitantes.\n", populacao1);
            break;
        case 2:
            if (area1 > area2)
                printf("%s venceu com %.2f km² contra %.2f de %s.\n", cidade1, area1, area2, cidade2);
            else if (area1 < area2)
                printf("%s venceu com %.2f km² contra %.2f de %s.\n", cidade2, area2, area1, cidade1);
            else
                printf("Empate! Ambas as cidades têm %.2f km² de área.\n", area1);
            break;
        case 3:
            if (pib1 > pib2)
                printf("%s venceu com PIB de R$ %.2f bi contra R$ %.2f bi de %s.\n", cidade1, pib1, pib2, cidade2);
            else if (pib1 < pib2)
                printf("%s venceu com PIB de R$ %.2f bi contra R$ %.2f bi de %s.\n", cidade2, pib2, pib1, cidade1);
            else
                printf("Empate! Ambas têm PIB de R$ %.2f bi.\n", pib1);
            break;
        case 4:
            if (turisticos1 > turisticos2)
                printf("%s venceu com %d pontos turísticos contra %d de %s.\n", cidade1, turisticos1, turisticos2, cidade2);
            else if (turisticos1 < turisticos2)
                printf("%s venceu com %d pontos turísticos contra %d de %s.\n", cidade2, turisticos2, turisticos1, cidade1);
            else
                printf("Empate! Ambas têm %d pontos turísticos.\n", turisticos1);
            break;
        case 5:
            if (densidade1 < densidade2)
                printf("%s venceu com densidade de %.2f hab/km² contra %.2f de %s.\n", cidade1, densidade1, densidade2, cidade2);
            else if (densidade1 > densidade2)
                printf("%s venceu com densidade de %.2f hab/km² contra %.2f de %s.\n", cidade2, densidade2, densidade1, cidade1);
            else
                printf("Empate! Ambas têm densidade de %.2f hab/km².\n", densidade1);
            break;
        case 6:
            if (somadosatributos1 > somadosatributos2)
                printf("%s venceu na soma total dos atributos: %.2f contra %.2f de %s.\n", cidade1, somadosatributos1, somadosatributos2, cidade2);
            else if (somadosatributos1 < somadosatributos2)
                printf("%s venceu na soma total dos atributos: %.2f contra %.2f de %s.\n", cidade2, somadosatributos2, somadosatributos1, cidade1);
            else
                printf("Empate! Ambas as cidades têm soma total dos atributos de %.2f.\n", somadosatributos1);
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    printf("\nObrigado por jogar, %s!\n", nomedojogador);
    return 0;
}









