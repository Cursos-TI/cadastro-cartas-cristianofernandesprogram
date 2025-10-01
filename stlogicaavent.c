#include <stdio.h>

int main() {
    // Dados das cartas
    char nome1[50] = "São Paulo"; //Mantive estados para usar os mesmo dados anteriores
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("***Comparação de Cartas***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n*** Comparação entre %s e %s ***\n", nome1, nome2);

    switch(opcao) {
        case 1: // População
            printf("População:\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB:\n");
            printf("%s: %.2f bilhões de US$\n", nome1, pib1);
            printf("%s: %.2f bilhões de US$\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica - menor vence
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha de 1 a 5.\n");
            break;
    }

    return 0;
}
