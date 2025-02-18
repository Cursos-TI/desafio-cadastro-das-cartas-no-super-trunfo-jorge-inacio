#include <stdio.h>

int main() {
    // Declaração de Variáveis - Atributos das Cartas.
    char estado, codcarta[3], nomecidade[30];
    int populacao, pontostur;
    float area, pib;

    // Cadastrando as cartas.
    printf("Digite o Estado: ");
    scanf(" %c", &estado);

    printf("Digite o Código da Carta: ");
    scanf(" %s", codcarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomecidade);

    printf("Digite a População: ");
    scanf(" %d", &populacao);

    printf("Digite a Área (Km2): ");
    scanf(" %f", &area);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib);

    printf("Digite número de pontos turísticos: ");
    scanf(" %d", &pontostur);

    // Exibição dos Dados das Cartas:
    printf("\n\nDados da Carta:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codcarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área da Cidade (Km2): %.2f\n", area);
    printf("PIB da Cidade (R$): %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontostur);

     return 0;
}
