#include <stdio.h>

int main() {

    //Definindo todas as variáveis
    char estado, codigo[4], nome[30];
    int populacao, pontos_turisticos;
    float area, pib;

    char estado2, codigo2[4], nome2[30];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    //Armazenando todas as variáveis
    printf("Digite o estado da primeira cidade:");
    scanf(" %c", &estado);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área (em km²) da primeira cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos);
    printf("\n");

    printf("Digite o estado da segunda cidade:");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²) da segunda cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    //Imprimindo todas as variáveis armazenadas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
