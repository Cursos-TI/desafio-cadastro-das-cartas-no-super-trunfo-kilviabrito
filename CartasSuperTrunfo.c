

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

      // Exibir os dados das cartas

    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontosTuristicos);
    return 0;






    









} 
 


