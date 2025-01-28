#include <stdio.h>

int main() {
    // Declaração de Variáveis - Atributos das Cartas.
    char estado, codcarta[04], nomecidade[30];
    int populacao, pontostur;
    float area, pib;

    // Cadastrando as cartas.
    printf("Digite o Estado: ");
    scanf(" %c", &estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", codcarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área (Km2): ");
    scanf("%f", &area);

    printf("Digite o PIB (R$): ");
    scanf("%f", &pib);

    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontostur);

    // Exibição dos Dados das Cartas:
    printf("\nEstado: %c", estado);
    printf("\nCódigo da Carta: %s", codcarta);
    printf("\nNome da Cidade: %s", nomecidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea da Cidade (Km2): %.2f", area);
    printf("\nPIB da Cidade (R$): %.2f", pib);
    printf("\nNúmero de pontos turísticos: %d", pontostur);

     return 0;
}
