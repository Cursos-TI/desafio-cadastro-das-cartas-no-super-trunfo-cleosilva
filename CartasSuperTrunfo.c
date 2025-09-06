#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // dados carta 1
    // dados carta 1
    char estado_card1;
    char codigo_carta_card1[3];
    char nome_cidade_card1[50];
    // int populacao_card1; // comentando exercicio anterior
    unsigned long int populacao_card1;
    float area_card1;
    float pib_card1;
    int pontos_turisticos_card1;

    // dados carta 2
    char estado_card2;
    char codigo_carta_card2[3];
    char nome_cidade_card2[50];
    // int populacao_card2;
    unsigned long int populacao_card2;
    float area_card2;
    float pib_card2;
    int pontos_turisticos_card2;

    printf("Digite os dados do primeiro cartão:\n");
    printf("Digite a letra do Estado (A até H): \n");
    scanf("%s", &estado_card1);

    printf("Digite o código do cartão (Letra do estado e números de 01 a 04. Ex: A01): \n");
    scanf("%s", &codigo_carta_card1);

    printf("Digite o nome da ciade: \n", nome_cidade_card1);
    scanf("%s", &nome_cidade_card1);

    printf("Digite a população: \n");
    scanf("%d", &populacao_card1);

    printf("Digite a área: \n");
    scanf("%f.2km²", &area_card1);

    printf("Digite o pib: \n");
    scanf("%f.2", &pib_card1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_card1);

    // dados cartão 2
    printf("Digite os dados do segundo cartão:\n");
    printf("Digite a letra do Estado (A até H): \n");
    scanf("%s", &estado_card2);

    printf("Digite o código do cartão (Letra do estado e números de 01 a 04. Ex: A01): \n");
    scanf("%s", &codigo_carta_card2);

    printf("Digite o nome da ciade: \n", nome_cidade_card2);
    scanf("%s", &nome_cidade_card2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_card2);

    printf("Digite a área: \n");
    scanf("%f.2km²", &area_card2);

    printf("Digite o pib: \n");
    scanf("%f.2", &pib_card2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_card2);

    // Atributos calculados
    float densidade1 = populacao_card1 / area_card1;
    float densidade2 = populacao_card2 / area_card2;
    float pib_percapita1 = pib_card1 * 1000000000 / populacao_card1; // PIB bilhões → reais
    float pib_percapita2 = pib_card2 * 1000000000 / populacao_card2;

    // Super Poder
    float super1 = populacao_card1 + area_card1 + pib_card1 + pontos_turisticos_card1 + pib_percapita1 + (1 / densidade1);
    float super2 = populacao_card2 + area_card2 + pib_card2 + pontos_turisticos_card2 + pib_percapita2 + (1 / densidade2);

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado_card1);
    printf("Código: %s\n", codigo_carta_card1);
    printf("Nome da Cidade: %s\n", nome_cidade_card1);
    printf("População: %d\n", populacao_card1);
    printf("Área: %.2f km²\n", area_card1);
    printf("PIB: %.2f bilhões de reais\n", pib_card1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_card1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado_card2);
    printf("Código: %s\n", codigo_carta_card2);
    printf("Nome da Cidade: %s\n", nome_cidade_card2);
    printf("População: %d\n", populacao_card2);
    printf("Área: %.2f km²\n", area_card2);
    printf("PIB: %.2f bilhões de reais\n", pib_card2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_card2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

    // Comparações (1 se Carta 1 vence, 0 se Carta 2 vence)
    printf("\n=== Comparação ===\n");
    printf("População: %d\n", populacao_card1 > populacao_card2);
    printf("Área: %d\n", area_card1 > area_card2);
    printf("PIB: %d\n", pib_card1 > pib_card2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_card1 > pontos_turisticos_card2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: %d\n", pib_percapita1 > pib_percapita2);
    printf("Super Poder: %d\n", super1 > super2);

    return 0;
}
