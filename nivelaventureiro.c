#include <stdio.h>

int main() {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area, pib;
    int pontosTuristicos;
    float densidade_populacional;
    float pib_per_capita;
    

    // ---------------- Carta 1 ----------------
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / (float)populacao;


    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita da cidade 1: %.2f\n", pib_per_capita);

    // ---------------- Carta 2 ----------------
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / (float)populacao;
    

    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita da cidade 2: %.2f\n", pib_per_capita);

    

    return 0;
}
