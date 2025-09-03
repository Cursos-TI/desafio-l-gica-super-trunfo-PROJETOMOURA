#include <stdio.h>

int main(){

//Cadastro variáveis
    char cod1[4], cod2[4], cidade1[50], cidade2[50], estado1[4], estado2[4];
    int populacao1, populacao2, turistico1, turistico2, opcao;
    float area1, area2, pib1, pib2, densidade1,densidade2, pib_percapita1, pib_percapita2;
    float superpoder1, superpoder2;
            
//Cadastro Carta 1
    printf("|=======================================|\n");
    printf("|====== *Desafio Super Trunfo* =========|\n");
    printf("|====== Comparação das Cartas  =========|\n");
    printf("|=======================================|\n");
    printf("\nCARTA 1\n");
    printf("Digite o Estado..........: ");
    scanf("%s", estado1);
    printf("Digite o Código..........: ");
    scanf("%s", cod1);
    printf("Digite o nome da Cidade..: ");
    scanf("%s", cidade1);
    printf("Digite a População.......: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (km²)......: ");
    scanf("%f", &area1);
    printf("Digite o PIB.............: ");
    scanf("%f", &pib1);
    printf("Digite Pontos Turísticos.: ");
    scanf("%d", &turistico1);
    
    printf("\n<<<<< Carta 1 >>>>>\n");
    //para o calculo da densidade populacional foi dividido a população peal área.
    //para o calculo do Pib per Capita foi multiplicado o número por 1bilhão
    //para que seja impreso um número em bilhão.
    densidade1 = (float)populacao1 / area1;
    pib_percapita1 = pib1 * 1000000000 / (float)populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + turistico1 + pib_percapita1 + (1 / densidade1);
    
    printf("Estado................: %s\n",estado1);
    printf("COD...................: %s\n", cod1);
    printf("Nome da Cidade........: %s\n", cidade1);
    printf("População.............: %d\n", populacao1);
    printf("Área total............: %.2f km²\n", area1);
    printf("PIB...................: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos.....: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita........: R$ %.2f\n", pib_percapita1);
    printf("Super Poder...........: %.2f\n", superpoder1);

    //Cadastro carta 2
    printf("\nCARTA 2\n");
    printf("Digite o Estado..........: ");
    scanf("%s", estado2);
    printf("Digite o código..........: ");
    scanf("%s", cod2);
    printf("Digite a Cidade..........: ");
    scanf("%s", cidade2);
    printf("Digite a População.......: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (km²)......: ");
    scanf("%f", &area2);
    printf("Digite o PIB.............: ");
    scanf("%f", &pib2);
    printf("Digite Pontos Turísticos.: ");
    scanf("%d", &turistico2);    
    
    printf("\n<<<<< Carta 2 >>>>>\n");
    densidade2 = (float)populacao2 / area2;
    pib_percapita2 = pib2 * 1000000000 / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + turistico2 + pib_percapita2 + (1 / densidade2);
   
    printf("Estado................: %s\n",estado2);
    printf("COD...................: %s\n", cod2);
    printf("Nome da Cidade........: %s\n", cidade2);
    printf("População.............: %d\n", populacao2);
    printf("Área total............: %.2f km²\n", area2);
    printf("PIB...................: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos.....: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita........: R$ %.2f\n", pib_percapita2);
    printf("Super Poder...........: %.2f\n", superpoder2);

    //O desafio nível Aventureiro. Criando um menu de opções em que o usuário pode escolher o atriputo que deseja comparar
    //Assim sendo, o programa exibe as informações das cartas, conforme a escolha e a carta vencedora
   
    printf("\n<<<< Carta 1 vs Carta 2 >>>\n");
    printf("Escolha o atributo no qual deseja batalhar\n");
    printf("\n1. População\n");
    printf("2. Área total\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    printf("\nDigite a o Atributo: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);     
       
        if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
        }else if(populacao2 > populacao1){
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    case 2:
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);   
    
        if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
        }else if (area2 > area1){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    case 3:
        printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib2);
       
        if (pib1 > pib2)
        {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);  
        }else if (pib2 > pib1){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    case 4:
        printf("Carta 1 - %s (%s): R$ %d\n", cidade1, estado1, turistico1);
        printf("Carta 2 - %s (%s): R$ %d\n", cidade2, estado2, turistico2);
       
        if (turistico1 > turistico2)
        {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);  
        }else if (turistico2 > turistico1){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    case 5:
        printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, densidade2);
       
        if (densidade1 < densidade2)
        {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);  
        }else if (densidade2 < densidade1){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    case 6:
        printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib_percapita1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib_percapita2);
       
        if (pib_percapita1 > pib_percapita2)
        {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);  
        }else if (pib_percapita2 > pib_percapita1){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    case 7:
        printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, superpoder1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, superpoder2);
       
        if (superpoder1 > superpoder2)
        {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);  
        }else if (superpoder2 > superpoder1){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }else{
        printf("\nEMPATE!\n");
        }
        break;
    default:
        printf("Opção Inválida");
        break;
    }

    return 0;
}