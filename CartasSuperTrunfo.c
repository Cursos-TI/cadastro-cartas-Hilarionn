#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Primeira Carta
  char Letra_1 = 'A';
  char Codigo_1 [20] =  "A01";
  char Nome_da_cidade_1 [20] = "Fortaleza";
  int populacao_1 = 500000;
  float Area_em_km2_1 = 318.8;
  float PIB_1 = 300000;
  int Numero_de_pontos_turisticos_1 = 50;

  //Segunda Carta

  char Letra_2 = 'A';
  char Codigo_2 [20] =  "A01";
  char Nome_da_cidade_2 [20] = "Fortaleza";
  int populacao_2 = 500000;
  float Area_em_km2_2 = 318.8;
  float PIB_2 = 300000;
  int Numero_de_pontos_turisticos_2 = 50;

printf("Seja Bem Vindo ao jogo Super Trunfo! \n" "Aqui você vai definir as estatísticas de duas cidades de sua escolha! \n" "Boa sorte!\n");
  // Área para entrada de dados
printf("Digite a letra: \n");
scanf(" %c", &Letra_1);

printf("Digite o Código: \n");
scanf(" %s",Codigo_1);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]s", Nome_da_cidade_1);

printf("Digite o número da população: \n");
scanf(" %d",&populacao_1);

printf("Digite a Área em KM²: \n");
scanf(" %f",&Area_em_km2_1);

printf("Digite o PIB: \n");
scanf(" %f",&PIB_1);

printf("Digite agora, o número de pontos turísticos: \n");
scanf(" %d", &Numero_de_pontos_turisticos_1);


printf("Ótimo! Agora, vamos para o segundo cartão! \n");

printf("Digite a letra: \n");
scanf(" %c", &Letra_2);

printf("Digite o Código: \n");
scanf(" %s",Codigo_2);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]s", Nome_da_cidade_2);

printf("Digite o número da população: \n");
scanf(" %d",&populacao_2);

printf("Digite a Área em KM²: \n");
scanf(" %f",&Area_em_km2_2);

printf("Digite o PIB: \n");
scanf(" %f",&PIB_2);

printf("Digite agora, o número de pontos turísticos: \n");
scanf(" %d", &Numero_de_pontos_turisticos_2);


printf("Excelente! Vamos verificar!\n");
printf("Primeiro cartão:\n");


  // Área para exibição dos dados da cidade

printf("Estado: %c\n", Letra_1);
printf("Código: %s\n" Codigo_1);
printf("Nome da cidade: %[^\n]s", Nome_da_cidade_1);
printf("Número de Habitantes: %d", populacao_1);
printf("Área em KM²: %f", Area_em_km2_1);
printf("PIB: %f", PIB_1);
printf("Pontos turísticos encontrados: %d", Numero_de_pontos_turisticos_1);

printf("Excelente! Agora, o segundo cartão:\n");


printf("Estado: %c\n", Letra_2);
printf("Código: %s\n" Codigo_2);
printf("Nome da cidade: %[^\n]s", Nome_da_cidade_2);
printf("Número de Habitantes: %d", populacao_2);
printf("Área em KM²: %f", Area_em_km2_2 KM²);
printf("PIB: %f", PIB_2);
printf("Pontos turísticos encontrados: %d", Numero_de_pontos_turisticos_2);


return 0;
} 
