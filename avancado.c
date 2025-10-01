#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];        
    char nome1[50];         
    unsigned long int populacao1;
    float area1;
    float pib1;              
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;              
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    //dados carta 1

    printf("*** Cadastro da Carta 1 ***\n");
    printf("\n"); //espaço para melhor visualização
    printf("Digite o Estado (A-H): ");

    scanf("%c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");

    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");

    scanf("%s", nome1);  

    printf("Digite a População: ");

    scanf("%lu", &populacao1);

    printf("Digite a Área (km²): ");

    scanf(" %f", &area1);  //coloquei espaço para pular para o próximo scanf, foi a unica forma que deu certo


    printf("Digite o PIB (bilhões de reais): ");

    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");

    scanf("%d", &pontosTuristicos1);

    //dados carta 2

    printf("\n*** Cadastro da Carta 2 ***\n");
    printf("\n"); //espaço para melhor visualização

    printf("Digite o Estado (A-H): ");

    scanf(" %c", &estado2);    //coloquei espaço para pular para o próximo scanf, foi a unica forma que deu certo

    printf("Digite o Código da Carta (ex: B02): ");

    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");

    scanf("%s", nome2);

    printf("Digite a População: ");

    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");

    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");

    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");

    scanf("%d", &pontosTuristicos2);

    // cálculo

   densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações

    printf("\n*** Comparação de Cartas ***\n");
    printf("\n"); //espaço para melhor visualização
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
