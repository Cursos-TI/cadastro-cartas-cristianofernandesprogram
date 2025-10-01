#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];        
    char nome1[50];         
    int populacao1;
    float area1;
    float pib1;              
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;              
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    //dados carta 1

    printf("*** Cadastro da Carta 1 ***\n");
    printf("Digite o Estado (A-H): ");

    scanf("%c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");

    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");

    scanf("%s", nome1);  

    printf("Digite a População: ");

    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");

    scanf(" %f", &area1);  //coloquei espaço para pular para o próximo scanf, foi a unica forma que deu certo


    printf("Digite o PIB (bilhões de reais): ");

    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");

    scanf("%d", &pontosTuristicos1);

    //dados carta 2

    printf("\n*** Cadastro da Carta 2 ***\n");

    printf("Digite o Estado (A-H): ");

    scanf(" %c", &estado2);    //coloquei espaço para pular para o próximo scanf, foi a unica forma que deu certo

    printf("Digite o Código da Carta (ex: B02): ");

    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");

    scanf("%s", nome2);

    printf("Digite a População: ");

    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");

    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");

    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");

    scanf("%d", &pontosTuristicos2);

    // cálculo

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // conversão para reais

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Saída de dados

    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}