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

    


    printf("Informe a letra do 2º estado: ");
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


    // calculo de densidade populacional (DP) e Pib per capita (PPC)
    float DP1 =pop1/area1;
    float DP2 =pop2/area2;
    float PPC1 =pib1/pop1;
    float PPC2 =pib2/pop2;

    // super poder
    long int super1 =pop1+area1+pib1+tur1+PPC1-DP1;
    long int super2 =pop2+area2+pib2+tur2+PPC2-DP2;


    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d \n", tur1);
    printf("Densidade populacional: %.2f hab/km² \n", DP1);
    printf("PIB per capita: %.2f R$ \n", PPC1);
    printf("Super Poder: %.2lu \n\n", super1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d \n", tur2);
    printf("Densidade populacional: %.2f hab/km² \n", DP2);
    printf("PIB per capita: %.2f R$ \n", PPC2);
    printf("Super Poder: %.2lu \n\n", super2);


    int rpop, rtur, rarea, rpib, rDP, rPPC, rsuper;
    rpop =pop2>pop1;
    rpop++;
    rtur =tur2>tur1;
    rtur++;
    rarea =area2>area1;
    rarea++;
    rpib =pib2>pib1;
    rpib++;
    rDP =DP1>DP2;
    rDP++;
    rPPC =PPC2>PPC1;
    rPPC++;
    rsuper =super2>super1;
    rsuper++;

    // desafio mestre parte 1
    printf("Exibindo resultados: ");
    printf("População: Carta %d venceu \n", rpop);
    printf("Turismo: Carta %d venceu \n", rtur);
    printf("Area: Carta %d venceu \n", rarea);
    printf("PIB: Carta %d venceu \n", rpib);
    printf("Densidade Populacional: Carta %d venceu \n", rDP);
    printf("PIB per capita: Cidade %d venceu \n", rPPC);
    printf("Super poder: Cidade %d venceu \n\n\n", rsuper);

    //desafio iniciante de logica
    printf("Comparativo população:\n");
    printf("Carta 1: %s, população = %d \n", cidade1, pop1);
    printf("Carta 2: %s, população = %d \n", cidade2, pop2);

    if (pop1>pop2) {
        printf("%s venceu!", cidade1);
        
    }   else {
        printf("%s venceu!", cidade2);
    }

    return 0;
    
}
