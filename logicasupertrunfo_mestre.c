#include <stdio.h>

int main(){
    char cod1[4], cod2[4];
    int populacao1, populacao2, turistico1, turistico2, atributo1, atributo2;
    float area1, area2, pib1, pib2, densidade1,densidade2, pib_percapita1, pib_percapita2;
    float resultado1, resultado2;
    char opcao;   

populacao1 = 680000;
area1 = 1200.5;
pib1 = 78.4;
turistico1 = 60;
densidade1 = (float)populacao1 / area1;
pib_percapita1 = pib1 * 1000000000 / (float)populacao1;

populacao2 = 590000;
area2 = 1200.5;
pib2 = 75.9;
turistico2 = 50;
densidade2 = (float)populacao2 / area2;
pib_percapita2 = pib2 * 1000000000 / (float)populacao2;

   
    printf("\n<<<< Bem-Vindo ao Jogo >>>\n");
 
    printf("\n(a) Carta 1\n");
    printf("(b) Carta 2\n");
    printf("\nEscolha sua Carta: ");
    scanf("%c", &opcao);

    switch (opcao){
    case 'a':
    case 'A':
        printf("Você escolheu a Carta 1\n");
        printf("\nEscolha os Atributos\n");
        printf("(1) População\n");
        printf("(2) Área total\n");
        printf("(3) PIB\n");
        printf("(4) Pontos Turísticos\n");
        printf("(5) Densidade Populacional\n");
        printf("(6) PIB per Capita\n");
    
        printf("\nAtributo 1: ");
        scanf("%d", &atributo1);

        printf("Atributo 2: ");
        scanf("%d", &atributo2);
        if (atributo1 == atributo2)
        {
            printf("\nEscolha atributos diferente!\n");
        }else{
            switch (atributo1)
            {
            case 1:
                printf("Carta 1 - Rio de Janeiro (RJ) - População: %d\n", populacao1);
                printf("Carta 2 - Espirito Santo (ES) - População: %d\n", populacao2);
                resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
            case 2:
                printf("Carta 1 - Rio de Janeiro (RJ) - Área Total: %.2f km²\n", area1);
                printf("Carta 2 - Espirito Santo (ES) - Área Total: %.2f km²\n", area2);
                resultado1 = area1 > area2 ? 1 : 0;
            break;
            case 3:
                printf("Carta 1 - Rio de Janeiro (RJ) - Valor do PIB: R$ %.2f\n", pib1);
                printf("Carta 2 - Espirito Santo (ES) - Valor do PIB: R$ %.2f\n", pib2);
                resultado1 = pib1 > pib2 ? 1 : 0;
            break;
            case 4:
                printf("Carta 1 - Rio de Janeiro (RJ) - Pontos Turísticos: %d\n", turistico1);
                printf("Carta 2 - Espirito Santo (ES) - Pontos Turísticos: %d\n", turistico2);
                resultado1 = turistico1 > turistico2 ? 1 : 0;
            break;
            case 5:
                printf("Carta 1 - Rio de Janeiro (RJ) - Densidade Populacional: %.2f\n", densidade1);
                printf("Carta 2 - Espirito Santo (ES) - Densidade Populacional: %.2f\n", densidade2);
                resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
            case 6:
                printf("Carta 1 - Rio de Janeiro (RJ) - PIB per Capita: R$ %.2f\n", pib_percapita1);
                printf("Carta 2 - Espirito Santo (ES) - PIB per Capita: R$ %.2f\n", pib_percapita2);
                resultado1 = pib_percapita1 > pib_percapita2 ? 1 : 0;
            break;
            default:
                printf("Opção inválida!\n");
            break;
            }

            switch (atributo2)
            {
                case 1:
                    printf("Carta 1 - Rio de Janeiro (RJ) - População: %d\n", populacao1);
                    printf("Carta 2 - Espirito Santo (ES) - População: %d\n", populacao2);
                    resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
                case 2:
                    printf("Carta 1 - Rio de Janeiro (RJ) - Área Total: %.2f km²\n", area1);
                    printf("Carta 2 - Espirito Santo (ES) - Área Total: %.2f km²\n", area2);
                    resultado2 = area1 > area2 ? 1 : 0;
                break;
                case 3:
                    printf("Carta 1 - Rio de Janeiro (RJ) - Valor do PIB: R$ %.2f\n", pib1);
                    printf("Carta 2 - Espirito Santo (ES) - Valor do PIB: R$ %.2f\n", pib2);
                    resultado2 = pib1 > pib2 ? 1 : 0;
                break;
                case 4:
                    printf("Carta 1 - Rio de Janeiro (RJ) - Pontos Turísticos: %d\n", turistico1);
                    printf("Carta 2 - Espirito Santo (ES) - Pontos Turísticos: %d\n", turistico2);
                    resultado2 = turistico1 > turistico2 ? 1 : 0;
                break;
                case 5:
                    printf("Carta 1 - Rio de Janeiro (RJ) - Densidade Populacional: %.2f\n", densidade1);
                    printf("Carta 2 - Espirito Santo (ES) - Densidade Populacional: %.2f\n", densidade2);
                    resultado2 = densidade1 < densidade2 ? 1 : 0;
                break;
                case 6:
                    printf("Carta 1 - Rio de Janeiro (RJ) - PIB per Capita: R$ %.2f\n", pib_percapita1);
                    printf("Carta 2 - Espirito Santo (ES) - PIB per Capita: R$ %.2f\n", pib_percapita2);
                    resultado2 = pib_percapita1 > pib_percapita2 ? 1 : 0;
                break;
                default:
                    printf("Opção inválida!\n");
                break;
                }

            }        
    break;
    case 'b':
    case 'B':
        printf("Você escolheu a Carta 2\n");
        printf("\nEscolha os Atributos\n");
        printf("(1) População\n");
        printf("(2) Área total\n");
        printf("(3) PIB\n");
        printf("(4) Pontos Turísticos\n");
        printf("(5) Densidade Populacional\n");
        printf("(6) PIB per Capita\n");
    
        printf("\nAtributo 1: ");
        scanf("%d", &atributo1);

        printf("Atributo 2: ");
        scanf("%d", &atributo2);
          
        if (atributo1 == atributo2)
        {
            printf("\nEscolha atributos diferente!\n");
        }else{
            
            switch (atributo1)
            {
            case 1:
                printf("Carta 2 - Espirito Santo (ES) - População: %d\n", populacao2);
                printf("Carta 1 - Rio_de_Janeiro (RJ) - População: %d\n", populacao1);
                resultado1 = populacao2 > populacao1 ? 1 : 0;
            break;
            case 2:
                printf("Carta 2 - Espirito Santo (ES) - Área Total: %.2f km²\n", area2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Área Total: %.2f km²\n", area1);
                resultado1 = area2 > area1 ? 1 : 0;
            break;
            case 3:
                printf("Carta 2 - Espirito Santo (ES) - Valor do PIB: R$ %.2f\n", pib2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Valor do PIB: R$ %.2f\n", pib1);
                resultado1 = pib2 > pib1 ? 1 : 0;
            break;
            case 4:
                printf("Carta 2 - Espirito Santo (ES) - Pontos Turísticos: %d\n", turistico2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Pontos Turísticos: %d\n", turistico1);
                resultado1 = turistico2 > turistico1 ? 1 : 0;
            break;
            case 5:
                printf("Carta 2 - Espirito Santo (ES) - Densidade Populacional: %.2f\n", densidade2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Densidade Populacional: %.2f\n", densidade1);
                resultado1 = densidade2 < densidade1 ? 1 : 0;
            break;
            case 6:
                printf("Carta 2 - Espirito Santo (ES) - PIB per Capita: R$ %.2f\n", pib_percapita2);
                printf("Carta 1 - Rio de Janeiro (RJ) - PIB per Capita: R$ %.2f\n", pib_percapita1);
                resultado1 = pib_percapita2 > pib_percapita1 ? 1 : 0;
            break;
            default:
                printf("Opção inválida!\n");
            break;
            }

            switch (atributo2)
            {
            case 1:
                printf("Carta 2 - Espirito Santo (ES) - População: %d\n", populacao2);
                printf("Carta 1 - Rio_de_Janeiro (RJ) - População: %d\n", populacao1);
                resultado2 = populacao2 > populacao1 ? 1 : 0;
            break;
            case 2:
                printf("Carta 2 - Espirito Santo (ES) - Área Total: %.2f km²\n", area2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Área Total: %.2f km²\n", area1);
                resultado2 = area2 > area1 ? 1 : 0;
            break;
            case 3:
                printf("Carta 2 - Espirito Santo (ES) - Valor do PIB: R$ %.2f\n", pib2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Valor do PIB: R$ %.2f\n", pib1);
                resultado2 = pib2 > pib1 ? 1 : 0;
            break;
            case 4:
                printf("Carta 2 - Espirito Santo (ES) - Pontos Turísticos: %d\n", turistico2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Pontos Turísticos: %d\n", turistico1);
                resultado2 = turistico2 > turistico1 ? 1 : 0;
            break;
            case 5:
                printf("Carta 2 - Espirito Santo (ES) - Densidade Populacional: %.2f\n", densidade2);
                printf("Carta 1 - Rio de Janeiro (RJ) - Densidade Populacional: %.2f\n", densidade1);
                resultado2 = densidade2 < densidade1 ? 1 : 0;
            break;
            case 6:
                printf("Carta 2 - Espirito Santo (ES) - PIB per Capita: R$ %.2f\n", pib_percapita2);
                printf("Carta 1 - Rio de Janeiro (RJ) - PIB per Capita: R$ %.2f\n", pib_percapita1);
                resultado2 = pib_percapita2 > pib_percapita1 ? 1 : 0;
            break;
            default:
                printf("Opção inválida!\n");
            break;
            }
        }
            break;
            default:
                printf("Opção inválida!\n");
                break;                
    }
    
    if (resultado1 && resultado2)
    {
        printf("\n\n*** Parabéns você ganhou! ***\n\n");
    }else if (resultado1 != resultado2){
        printf("\n\n***EMPATE***\n\n");
    }else{
        printf("\n\n***Infelizmente, você perdeu!***\n\n");
    } 

 return 0;
}