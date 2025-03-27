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
    
    char Carta1;

    char estado1;  

    char carta1[12];  

    char cidade1[50];     

    int populacao1 ;  
    
    float area1;  

    float PIB1;   

    int  pontosturisticos1 ; 

    
    
    //os atributos da carta são preenchidos pelo jogador
    
    

    printf("Carta 1:\n");

    printf("Digite uma letra entre 'A' e 'H' para representar um estado: ");
    scanf("%c" , &estado1);

    printf("codigo da carta: ");
    scanf("%s", &carta1);
   
   printf("Qual a cidade:");
   scanf("%s", &cidade1);
   
    printf("Quantidade de habitantes:");
    scanf("%d", &populacao1);

    printf("tamanho da cidade em Km²:");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade:");
    scanf("%f", &PIB1);
    
    printf("Pontos turísticos da sua cidade:");
    scanf("%d", &pontosturisticos1);      



    printf("Carta 1:%c\n", Carta1);
    printf("Estado: %c\n ", estado1);
    printf("Código:  %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Àrea: %f  km²\n", area1);
    printf("PIB: %f  bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    

    return 0;
}
