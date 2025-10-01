#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3];
    char codigo1[4];        
    char nome1[50];        
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2[3];
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
    
    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Comparação de cartas
    printf("\n***Comparacao de Cartas***\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

