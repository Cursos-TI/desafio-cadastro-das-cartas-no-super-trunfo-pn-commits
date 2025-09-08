#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado2, estado1, codigo1[3], cidade2[10];
    char codigo2[3];
    char cidade1[10];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;

    printf("Informe a letra do 1º estado: \n");
    scanf("%c", &estado1);

    printf("Informe o codigo da 1º carta: \n");
    scanf("%s", codigo1);

    printf("Informe o nome da 1ª cidade: \n");
    scanf("%s", cidade1);

    printf("Informe a população da 1º cidade: \n");
    scanf("%d", &pop1);

    printf("Informe a área da 1ª cidade: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da 1ª cidade: \n");
    scanf("%f", &pib1);

    printf("Informe o número de Pontos Turísticos da 1ª cidade: \n");
    scanf("%d", &tur1);

    


    printf("\n\n\nInforme a letra do 2º estado:  \n");
    scanf("%c", &estado2);

    printf("Informe o codigo da 2º carta: \n");
    scanf("%s", codigo2);

    printf("Informe o nome da 2ª cidade: \n");
    scanf("%s", cidade2);

    printf("Informe a população da 2º cidade: \n");
    scanf("%d", &pop2);

    printf("Informe a área da 2ª cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da 2ª cidade: \n");
    scanf("%f", &pib2);

    printf("Informe o número de Pontos Turísticos da 2ª cidade: \n");
    scanf("%d", &tur2);

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d \n\n", tur1);

        
    

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d \n", tur2);

    return 0;
    
}
