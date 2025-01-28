#include <stdio.h>

int main() {
    // Declaração de Variáveis - Atributos das Cartas.
    char estado, codcarta[02], nomecidade[30];
    int populacao, pontostur;
    float area, pib;

    // Cadastrando as cartas.
    printf("Digite o Estado: ");

    scanf("%c", &estado);

    printf("\nDigite o Código da Carta: ");
    scanf("%s", &codcarta);

    printf("\nDigite o Nome da Cidade: ");
    scanf("%s", &nomecidade);

    printf("\nDigite a População: ");
    scanf("%d", &populacao);

    printf("\nDigite a Área: ");
    scanf("%f", &area);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib);

    printf("\nDigite número de pontos turísticos: ");
    scanf("%d", &pontostur);

    // Exibição dos Dados das Cartas:
    printf("Estado: %c", estado);
    printf("\nCódigo da Carta: %s", codcarta);
    printf("\nNome da Cidade: %s", nomecidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea da Cidade: %f", area);
    printf("\nPIB da Cidade: %f", pib);
    printf("\nNúmero de pontos turísticos: %d", pontostur);

     return 0;
}
