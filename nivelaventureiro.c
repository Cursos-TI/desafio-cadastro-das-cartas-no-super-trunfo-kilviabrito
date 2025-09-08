#include <stdio.h> 

int main() {   

    // Definição da struct para representar uma carta
    struct Carta {
        char estado;
        char codigo[10];
        char nomeCidade[50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional; // Adicionando densidade populacional
        float pibPerCapita; // Adicionando PIB per capita

    };

    struct Carta carta1, carta2;

    //dados da carta 1
printf("digite os dados da carta 1:\n");

printf("estado (A-H): ");
scanf(" %c", &carta1.estado);

printf("codigo da carta(ex: A01): ");
scanf("%s", carta1.codigo);

printf("Nome da cidade: ");
scanf("%s", carta1.nomeCidade);

printf("Populacao: ");
scanf("%d", &carta1.populacao);

    printf("Area (em km): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Calculando densidade populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    scanf("%f", &carta1.densidadePopulacional);

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);
    scanf("%f", &carta1.pibPerCapita);


    //dados da carta 2
    printf("digite os dados da carta 2:\n");

    printf("estado (A-H): ");
    scanf("%c", &carta2.estado);

    printf("codigo da carta(ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf("%s", carta2.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area:(em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calculando densidade populacional e PIB per capita
carta2.densidadePopulacional = carta2.populacao / carta2.area;
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    scanf("%f", &carta2.densidadePopulacional);

    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);
    scanf("%f", &carta2.pibPerCapita);

      // Exibir os dados das cartas

    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);
    return 0;
}






    










