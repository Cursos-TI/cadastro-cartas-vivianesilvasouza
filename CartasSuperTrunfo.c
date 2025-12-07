#include <stdio.h>

int main (){
    // Declaração de variáveis para armazenar dados do estado e da cidade.
    // strings (arrays de char) para nomes e código, inteiros para população
    // e pontos turísticos, e floats para área e PIB.
    char nomeEstado[50], codidoCarta[5], NomeCidade[50];
    int populacao, numPontosTuristicos;
    float area, pib;

    //exibe o identificado da carta 
    printf("Carta 1: \n");

    //leitura dos dados 
    printf("Digite o nome do Estado: \n");
    scanf(" %[^\n]", nomeEstado);

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", codidoCarta);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", NomeCidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    while (getchar() != '\n');

    printf("Digite a area: \n");
    scanf("%f", &area);
    while (getchar() != '\n');

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    while (getchar() != '\n');

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numPontosTuristicos);
    while (getchar() != '\n');

    //este bloco por não criar um metodo, eu precisei repetir o código 
    // igual de cima, a única diferença é os nomes das variaveis que precisei mudar
    //pois dar erro por ser os mesmos nomes nas variaveis. 
    char nomeEstado2[50], codidoCarta2[5], NomeCidade2[50];
    int populacao2, numPontosTuristicos2;
    float area2, pib2;

    printf("Carta 2: \n");

    printf("Digite o nome do Estado: \n");
    scanf(" %[^\n]", nomeEstado2);

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", codidoCarta2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", NomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    printf("Digite a area: \n");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numPontosTuristicos2);
    while (getchar() != '\n');

    printf("\ncarta 1 \n Estado: %s \n Codigo da carta: %s \n Cidade: %s \n Populacao: %d \n Area: %.2f \n PIB: %.2f \n Pontos Turisticos: %d \n",
           nomeEstado, codidoCarta, NomeCidade, populacao, area, pib, numPontosTuristicos);

    printf("carta 2 \n Estado: %s \n Codigo da carta: %s \n Cidade: %s \n Populacao: %d \n Area: %.2f \n PIB: %.2f \n Pontos Turisticos: %d \n",
           nomeEstado2, codidoCarta2, NomeCidade2, populacao2, area2, pib2, numPontosTuristicos2);

}
