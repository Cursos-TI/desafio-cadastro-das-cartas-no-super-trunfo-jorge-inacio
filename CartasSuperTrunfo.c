#include <stdio.h>

int main() {

    // Declaração de Variáveis - Atributos das Cartas.

    // Dados da carta 1.
    char estado1, codcarta1[3], nomecidade1[30];
    int populacao1, pontostur1;
    float area1, pib1;

    // Dados da carta 2.
    char estado2, codcarta2[3], nomecidade2[30];
    int populacao2, pontostur2;
    float area2, pib2;
    
    // Cadastrando a carta 1.
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: ");
    scanf("%s", codcarta1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (Km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib1);

    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontostur1);

    // Cadastrando a carta 2.
    printf("\n\nDigite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", codcarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (Km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib2);

    printf("Digite número de pontos turísticos: ");
    scanf(" %d", &pontostur2);

    // Exibição dos Dados da Carta 1:
    printf("\n\nDados da Carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área da Cidade (Km2): %.2f\n", area1);
    printf("PIB da Cidade (R$): %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontostur1);

    // Exibição dos Dados da Carta 2:
    printf("\n\nDados da Carta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área da Cidade (Km2): %.2f\n", area2);
    printf("PIB da Cidade (R$): %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontostur2);

     return 0;
}