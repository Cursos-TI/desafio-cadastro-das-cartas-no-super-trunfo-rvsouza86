
#include<stdio.h>


int main() {

     char Carta1, Carta2;

     char estado1, estado2;     //'Estado'  é representado por uma letra de 'A' a 'H', é usado o especificador de formato %c.

     char codigo1[30], codigo2[20];  // 'Carta' é representado por uma letra e um numero,(EX.: A01). é usado o especificador de formato %s.

     char cidade1[50], cidade2[40];      // 'Cidade', é o nome de uma ciadade brasileira, é usado o especificador de formato.%s.

     int populacao1, populacao2;  // 'População', é a quantidade de habitantes que tem na cidade, é usado o especificador de formato  %d.
     
     float area1, area2;  //'Área', é o tamaho territorial da cidade em km², é usado o especificador de formato %f.

     float PIB1, PIB2;    // 'PIB', é o valor "Produto interno bruto" em bilhões de reais, é usado o especificador %f.

     int  pontosturisticos1, pontosturisticos2 ; // 'Pontos Turisticos' , é a quantidade de locais turísticos que contem na cidade, é usado o especificador de formato %d.
     
     float densidade1, densidade2; // densidade é o resultado da populacao dividido pela area
  
     float percapita1, percapita2; // percapita é o resultado do PIB dividido pela populaçao


     
     //as informações das cartas 1 e 2 sao preenchidas pelo usuário
     
     
     

     printf("Carta 1\n");

     printf("Digite uma letra entre 'A e H' para representar um estado: ");
     scanf("%c" , &estado1);

     printf("Codigo da carta: ");
     scanf("%s", codigo1);
    
    printf("Qual a cidade: ");
    scanf("%s", cidade1);
    
     printf("Quantidade de habitantes: ");
     scanf("%d", &populacao1);

     printf("Tamanho da cidade em Km²: ");
     scanf("%f", &area1);

     densidade1 = (float)populacao1 / area1; // calculo densidade1, populaçao1 / area1

     printf("Qual o PIB da cidade: ");
     scanf("%f", &PIB1);

     percapita1 = (float)PIB1 / populacao1; // calculo percapita1, PIB1 / populacao1
    
     
     printf("Pontos turísticos da sua cidade: ");
     scanf("%d", &pontosturisticos1);      



     printf("Carta 2:\n");

     printf("Digite uma letra entre 'A e H' para representar um estado: ");
     scanf(" %c", &estado2);

     printf("Codigo da carta: ");
     scanf("%s", codigo2);

     printf("Qual a cidade: ");
     scanf("%s", cidade2);

     printf("Quantidade de habitantes: ");
     scanf("%d", &populacao2);

     printf("Tamanho da cidade em km²: ");
     scanf("%f", &area2);

     densidade2 = (float)populacao2 / area2; // calculo densidade2, populaçao2 / area2

     printf("Qual o PIB da cidade: ");
     scanf("%f", &PIB2);

     percapita2 = (float)populacao2 / PIB2; // calculo percapita2, PIB2 / populacao2

     printf("Pontos turísticos da sua cidade: ");
     scanf("%d", &pontosturisticos2);


     printf("Carta 1\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("População: %d habitantes\n", populacao1);
     printf("Àrea: %.2f  km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", PIB1);
     printf("Pontos turísticos: %d\n", pontosturisticos1);
     printf("Densidade populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f reais\n\n",percapita1);


     printf("Carta 2\n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %d habitantes\n",populacao2);
     printf("Área: %.3f km²\n", area2);
     printf("PIB: %.3f bilhões de reais\n", PIB2);
     printf("Pontos turísticos: %d\n", pontosturisticos2);
     printf("Densidade populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f reais\n",percapita2);
     

    return 0;
}