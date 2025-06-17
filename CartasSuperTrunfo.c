#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Amadeu Furtado

#include <stdio.h>
//A primeira parte deve declarar as variáveis utilizadas para cada carta

//Primeiro o código deve ser escrito para a primeira carta
//Serão inseridos dados para a a cidade Fortaleza no Ceará

int main() {
   char Estado = 'A'
   char Codigo = 'A01'
   char Cidade = 'Fortaleza'
   int Populacao = 2428678
   float Area = 313.8
   float PIB = 73.4
   int Pontos = 15

   printf("1. Estado: %c\n", Estado)
   printf("2. Código da Carta: %s\n", Codigo)
   printf("3. Nome da Cidade: %s\n", Cidade)
   printf("4. População: %d Milhões\n", Populacao)
   printf("5. Área: %f KM²\n", Area)
   printf("6. PIB: %f Bilhões\n", PIB)
   printf("7. Número de Pontos Turísticos %d\n", Pontos)

// Nessa segunda parte do código serão inseridos os dados da segunda carta
// O código em si será o mesmo, modificano-se apenas os dados para a segunda carta      
//Serão inseridos dados para a a cidade Rio de Janeiro no Rio de Janeiro

   char Estado = 'B'
   char Codigo = 'B01'
   char Cidade = 'Rio de Janeiro'
   int Populacao = 2428678
   float Area = 1255.3
   float PIB = 359.64
   int Pontos = 20

   printf("1. Estado: %c\n", Estado)
   printf("2. Código da Carta: %s\n", Codigo)
   printf("3. Nome da Cidade: %s\n", Cidade)
   printf("4. População: %d Milhões\n", Populacao)
   printf("5. Área: %f KM²\n", Area)
   printf("6. PIB: %f Bilhões\n", PIB)
   printf("7. Número de Pontos Turísticos %d\n", Pontos)
      
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

  
