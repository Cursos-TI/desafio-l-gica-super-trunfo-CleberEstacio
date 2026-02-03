
#include <stdio.h>

int main(){		//segundo condigo
    
    /* Declaração das variáveis da Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    /* Declaração das variáveis da Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    /* ============================
       LEITURA DA CARTA 1
    ============================ */

    printf("Cadastro da Carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    /* Cálculos Carta 1 */
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    /* ============================
       LEITURA DA CARTA 2
    ============================ */

    printf("\nCadastro da Carta 2\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    /* Cálculos Carta 2 */
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    /* ============================
       EXIBIÇÃO DOS DADOS
    ============================ */

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPerCapita2);

    /* ======================================
       ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
       1 = População
       2 = Área
       3 = PIB
       4 = Densidade Populacional
       5 = PIB per capita
    ====================================== */

    int atributo = 1;  // <<< ALTERE AQUI SE QUISER

    printf("\n=====================================\n");
    printf("COMPARACAO DE CARTAS\n");

    if (atributo == 1) {

        printf("\nAtributo: Populacao\n");
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }

    else if (atributo == 4) {

        printf("\nAtributo: Densidade Populacional\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);

        // REGRA ESPECIAL: menor densidade vence
        if (densidade1 < densidade2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }

    return 0;
}
