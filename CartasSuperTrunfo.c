#include <stdio.h>

int main() {
    // --- CARTA 1 ---
    char nomeEstado[50], codidoCarta[5], NomeCidade[50];
    int populacao, numPontosTuristicos;
    float area, pib;
    float densidade1, pibPerCapita1;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", nomeEstado);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codidoCarta);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade);
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numPontosTuristicos);

    // Cálculos da Carta 1
    densidade1 = (float)populacao / area;
    pibPerCapita1 = pib / (float)populacao;

    // --- CARTA 2 ---
    char nomeEstado2[50], codidoCarta2[5], NomeCidade2[50];
    int populacao2, numPontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", nomeEstado2);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codidoCarta2);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numPontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n==============================\n");
    printf("CARTA 1: %s (%s)\n", NomeCidade, nomeEstado);
    printf("Densidade: %.2f hab/km² | PIB per Capita: %.2f\n", densidade1, pibPerCapita1);
    
    printf("CARTA 2: %s (%s)\n", NomeCidade2, nomeEstado2);
    printf("Densidade: %.2f hab/km² | PIB per Capita: %.2f\n", densidade2, pibPerCapita2);
    printf("==============================\n");

    // --- LÓGICA DE COMPARAÇÃO ---
    // Atributo escolhido: População
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s: %d\n", NomeCidade, populacao);
    printf("Carta 2 - %s: %d\n", NomeCidade2, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade);
    } else if (populacao2 > populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}