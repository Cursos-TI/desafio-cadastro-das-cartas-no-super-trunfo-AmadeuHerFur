#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Amadeu Furtado

#include <stdio.h>
//Primeiro o código deve receber os valores para a primeira carta
//Será apresentado o pedido dos dados e posterior coleta, um a um

int main() {
   printf("Informações referentes ao estado A\n");
   printf("Informe o Código para a primeira carta:\n");
   scanf("%s" , &codigo1); 
   printf("Informe uma cidade para esta Carta\n");
   scanf("%s" , &cidade1);
   printf("Informe o valor para a População\n");
   scanf("%d" , &populacao1);
   printf("Informe o valor para a Área\n");
   scanf("%f" , &area1);
   printf("Informe o valor para o PIB\n");
   scanf("%f" , &pib1);
   printf("Informe o valor para o Número de Pontos Turísticos1\n");
   scanf ("%d" , &ponto1);
   
   float densidade1 = (float) populacao1 / area1;
   float capita1 = (float) pib1 / populacao1;
   float poder1 = (float) 1/densidade1 + populacao1 + area1+ pib1 + ponto1 + capita1 
//Após a coleta de dados serão exibidos os valores infromado que comporão a carta 1

   printf("A primeira carta terá os seguintes valores:\n");
   printf("Código da Carta: %s\n" , codigo1 );
   printf("Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %f\n", area1);
   printf("PIB: %f\n", pib1);
   printf("Pontos Turísticos: %d\n" , ponto1);

   printf("Densidade Populacional: %f\n" , densidade1); 
   printf("PIB per Capita: %f\n" , capita1);
   printf("Superpoder: %f\n", poder1);

//Nesse segundo momento acontecerá a captura dos dados para a segunda carta
   
   printf("Informações referentes ao estado B\n");
   printf("Informe o Código a segunda carta:\n");
   scanf("%s" , &codigo2);
   printf("Informe uma cidade para esta Carta\n");
   scanf(%s , &cidade2);
   printf("Informe o valor para a População\n");
   scanf(%d , &populacao2);
   printf("Informe o valor para a Área\n");
   scanf(%f , &area2);
   printf("Informe o valor para o PIB\n");
   scanf(%f , &pib2);
   printf("Informe o valor para o Número de Pontos Turísticos1\n");
   scanf (%d , &ponto2);

   float densidade2 = (float) populacao2 / area2;
   float capita2 = (float) pib2 / populacao2;
   float poder2 = (float) 1/densidade2 + populacao2 + area2+ pib2 + ponto2 + capita2 
   
//Após a coleta de dados serão exibidos os valores informados que comporão a carta 2

   printf("A segunda carta terá os seguintes valores:",\n);
   printf("Código da Carta: %s\n" , codigo2); 
   printf("Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %f\n", area2);
   printf("PIB: %f\n", pib2);
   printf("Pontos Turísticos: %d\n" , ponto2);   

   printf("Densidade Populacional: %d\n" , densidade2);
   printf("PIB per Capita: %d\n" , capita2); 
   printf("Superpoder: %f\n", poder2);
   
//Nível Intermediário: Os dados referentes à Densidade Populacional e PIB per Capita serão inseridos na porção superior/iniciante do código para fins de melhor organização   
//Nível Mestre: Os dado referente ao superpoder serão inseridos na porção superior/iniciante do código para fins de melhor organização
// Nível Mestre: A comparação de cartas será feita abaixo

   
   
   
  return 0;
}


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  
