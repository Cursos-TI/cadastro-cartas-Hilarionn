#include <stdio.h>

int main () {


    //Definindo Variáveis para primeira carta.
char Estado;
char Codigo[20];
char Nome_cidade[50];
int PIB;
float Densidade_populacional;
int Populacao;
float Area_em_km2;
int Pontos_turisticos;
float PIB_per_capita;
float Super_poder;

//Definindo Variáveis para segunda carta.
char Estado_2;
char Codigo_2[20];
char Nome_cidade_2[50];
int PIB_2;
float Densidade_populacional_2;
int Populacao_2;
float Area_em_km2_2;
int Pontos_turisticos_2;
float PIB_per_capita_2;
float Super_poder_2;



// Desenvolvendo a lógica - Operações

Densidade_populacional = Populacao / Area_em_km2;
Densidade_populacional_2 = Populacao_2 / Area_em_km2_2;

PIB_per_capita = PIB / Populacao;
PIB_per_capita_2 = PIB_2 / Populacao_2;

Super_poder = 
Super_poder_2 = 


//Entrada de dados
printf("=== Bem-vindo ao jogo Super Trunfo ===\n");
    printf("Aqui você vai definir as estatísticas de duas cidades de sua escolha!\n\n");

printf("***Carta 1***\n");

printf("Digite a letra do Estado (De A até H): ");
    scanf(" %c", &Estado_);

    printf("Digite o código do estado (Letra e númerp Ex: A01):");
    scanf(" %s", &Codigo);

    printf("Digite o nome da cidade:");
    scanf(" %C", Nome_cidade);

    printf("Digite o PIB:");
    scanf(" %f", PIB);

    printf("Digite a população:");
    scanf(" %d", &Populacao);

    printf("Digite o número de pontos turísticos:");
    scanf(" %d", &Pontos_turisticos);

   
    
//Carta 2


printf("Ótimo! Agora, vamos para a segunda carta!\n");
    printf("***Carta 2***\n");

    printf("Digite a letra do Estado (De A até H): ");
    scanf(" %c", &Estado_2);

    printf("Digite o código do estado (Letra e númerp Ex: A01):");
    scanf(" %s", &Codigo_2);

    printf("Digite o nome da cidade:");
    scanf(" %C", Nome_cidade_2);

    printf("Digite o PIB:");
    scanf(" %f", PIB_2);

    printf("Digite a população:");
    scanf(" %d", &Populacao_2);

    printf("Digite o número de pontos turísticos:");
    scanf(" %d", &Pontos_turisticos_2);

    printf(" O PIB Per Capita de %c é: %f", &Nome_cidade_2, &PIB_per_capita_2);
    printf(" A densidade populacional de %c é: %f", &Nome_cidade_2, &Densidade_populacional_2);


//Cálculo de super poder





//Mostrando dados


printf("Ótimo! Agora, vamos aos dados das cidades!");

printf("O Estado é: %c\n", Estado);
printf("O Código é: %s\n", Codigo);
printf("O Nome da cidade é: %s\n", Nome_cidade);
printf("O PIB é: %f\n", PIB);
printf("A população é: %f\n", Populacao);
printf("A Área em KM² é: %f\n", Area_em_km2);
printf("O número de pontos turísticos é: %d\n", Pontos_turisticos);
printf(" O PIB Per Capita de %c é: %f\n", &Nome_cidade, &PIB_per_capita);
printf(" A densidade populacional de %c é: %f\n", &Nome_cidade, &Densidade_populacional);
printf(" O super poder é de: %d\n", Super_poder);




return 0;
}
