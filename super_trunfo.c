#include <stdio.h>

int main() {

    //declarando as variáveis para a Carta 1
    char estado1, codigo1[3], cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    //declarando as variáveis para a Carta 2
    char estado2, codigo2[3], cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    //Entradas para a Carta 1
    printf("Informações para a Carta 1\n");

    printf("Informe uma letra de A a H representando o estado: ");
    scanf(" %c", &estado1);

    printf("Informe o código, sendo um número de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área em quilometros quadrados da cidade: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    
    //Entradas para a Carta 2
    printf("Informações para a Carta 2\n");

    printf("Informe uma letra de A a H representando o estado: ");
    scanf(" %c", &estado2);
    
    printf("Informe o código, sendo um número de 01 a 04: ");
    scanf("%s", codigo2);
    
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Informe a área em quilometros quadrados da cidade: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    //Imprimindo as informações da Carta 1
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c", estado1);
    printf("%s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    //Imprimindo as informações da Carta 2
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c", estado2);
    printf("%s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;

}

// Carta 1:
// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50