#include <stdio.h>

int main() {
    // Declaração de Variáveis - Atributos das Cartas.
    char estado, codcarta[02], nomecidade[30];
    int populacao, pontostur;
    float area, pib;

    // Cadastrando as cartas.
    printf("Digite o Estado: ");
    scanf("%c, &estado\n");

    printf("Digite o Código da Carta: ");
    scanf("%s, &codcarta");

    printf("Digite o Nome da Cidade: ");
    scanf("%s, &nomecidade");

    printf("Digite a População: ");
    scanf("%d, &populacao");

    printf("Digite a Área: ");
    scanf("%f, &area");

    printf("Digite o PIB: ");
    scanf("%f, &pib");

    printf("Digite número de pontos turísticos: ");
    scanf("%f, &pontostur");
    
    return 0;
}
