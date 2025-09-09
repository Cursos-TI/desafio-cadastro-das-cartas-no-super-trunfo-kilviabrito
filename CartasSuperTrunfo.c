
#include <stdio.h>

int main() {

    char estado;
   char codigo [10];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int numerodepontosTuristicos;


    //dados da carta 1
    printf("digite os dados da carta 1:\n");
    printf("estado (A-H): ");
    scanf(" %c", &estado);

    printf("codigo da carta(ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &numerodepontosTuristicos);

    //dados da carta 2
    printf("digite os dados da carta 2:\n");
    printf("estado (A-H): ");
    scanf(" %c", &estado);

    printf("codigo da carta(ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &numerodepontosTuristicos);

 return 0;
}
 


