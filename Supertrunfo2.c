#include <stdio.h>


int main() {
    
    char estado2 = 'B';
    char estado1 = 'A';
    char codigo1[3] = "A01";
    char cidade2[20] = "Rio de Janeiro";
    char codigo2[3] = "B02";
    char cidade1[20] = "São Paulo";
    int pop1 = 12325000;
    int pop2 = 6748000;
    int tur1 =50, tur2 =30;
    float area1 =1521.11, area2 =1200.25;
    float pib1 =699.28, pib2 =300.5;
    


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

    // desafio aventureiro
    int menu1, menu2, resultado1 =0, resultado2 =0;

    printf("\n\nSelecione o 1º atributo:\n");
    printf("1 - População\n");
    printf("2 - Pontos turisticos\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n\n");

    scanf ("%d", &menu1);


    switch (menu1)    {
        case 1:
            printf("Cidade 1: %s \n", cidade1);
            printf("População: %d \n", pop1);
            printf("Cidade 2: %s \n", cidade2);
            printf("População: %d \n", pop2);
                 if (pop1>pop2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(pop1<pop2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 2:
            printf("Cidade 1: %s \n", cidade1);
            printf("Pontos turísticos: %d \n", tur1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Pontos turísticos: %d \n", tur2);
                 if (tur1>tur2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(tur1<tur2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 3:
            printf("Cidade 1: %s \n", cidade1);
            printf("Area: %d \n", area1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Area: %d \n", area2);
                 if (area1>area2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(area1<area2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate\n");
                    }
        break;

        case 4:
            printf("Cidade 1: %s \n", cidade1);
            printf("PIB: %d \n", pib1);
            printf("Cidade 2: %s \n", cidade2);
            printf("PIB: %d \n", pib2);
                 if (pib1>pib2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(pib1<pib2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 5:
            printf("Cidade 1: %s \n", cidade1);
            printf("Densidade populacional: %d \n", DP1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Densidade populacional: %d \n", DP2);
                 if (DP2>DP1) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(DP2<DP1)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 6:
            printf("Cidade 1: %s \n", cidade1);
            printf("PIB per capita: %d \n", PPC1);
            printf("Cidade 2: %s \n", cidade2);
            printf("PIB per capita: %d \n", PPC2);
                 if (PPC1>PPC2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(PPC1<PPC2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 7:
            printf("Cidade 1: %s \n", cidade1);
            printf("Super poder: %d \n", super1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Super poder: %d \n", super2);
                 if (super1>super2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(super1<super2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;
        
        default:
        printf ("Opção inválida\n");
            }

    printf("\n\nSelecione o 2º atributo:\n");
    printf("Obs: A opção deve ser diferente da primeira\n");
    printf("1 - População\n");
    printf("2 - Pontos turisticos\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n\n");

    scanf ("%d", &menu2);

            if (menu1 == menu2)
            {
                printf("Você escolheu o mesmo atributo!\n");
            }
                    else  {
            }           switch (menu2)
            {
            case 1:
            printf("Cidade 1: %s \n", cidade1);
            printf("População: %d \n", pop1);
            printf("Cidade 2: %s \n", cidade2);
            printf("População: %d \n", pop2);
                 if (pop1>pop2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(pop1<pop2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 2:
            printf("Cidade 1: %s \n", cidade1);
            printf("Pontos turísticos: %d \n", tur1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Pontos turísticos: %d \n", tur2);
                 if (tur1>tur2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(tur1<tur2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 3:
            printf("Cidade 1: %s \n", cidade1);
            printf("Area: %d \n", area1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Area: %d \n", area2);
                 if (area1>area2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(area1<area2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 4:
            printf("Cidade 1: %s \n", cidade1);
            printf("PIB: %d \n", pib1);
            printf("Cidade 2: %s \n", cidade2);
            printf("PIB: %d \n", pib2);
                 if (pib1>pib2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(pib1<pib2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 5:
            printf("Cidade 1: %s \n", cidade1);
            printf("Densidade populacional: %d \n", DP1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Densidade populacional: %d \n", DP2);
                 if (DP2>DP1) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(DP2<DP1)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 6:
            printf("Cidade 1: %s \n", cidade1);
            printf("PIB per capita: %d \n", PPC1);
            printf("Cidade 2: %s \n", cidade2);
            printf("PIB per capita: %d \n", PPC2);
                 if (PPC1>PPC2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(PPC1<PPC2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

        case 7:
            printf("Cidade 1: %s \n", cidade1);
            printf("Super poder: %d \n", super1);
            printf("Cidade 2: %s \n", cidade2);
            printf("Super poder: %d \n", super2);
                 if (super1>super2) {
                    printf("%s foi a vencedora!\n", cidade1);
                    resultado1++;
                }       else if(super1<super2)   {
                    printf("%s foi a vencedora!\n", cidade2);
                    resultado2++;
                }       else    {
                        printf("Houve um empate!\n");
                    }
        break;

            default:
            printf("Opção inválida!");

            break;
            }
            
        if (resultado1>resultado2) {
            printf("%s venceu!\n", cidade1);
        }
            else if (resultado1<resultado2) {
                printf("%s venceu!\n", cidade2);
            }

            else {
                printf("Houve um empate!\n");
            }
    


    return 0;
        }

