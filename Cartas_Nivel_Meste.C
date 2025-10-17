#include <stdio.h>

int main () {

    //Definindo Variáveis para primeira carta.
    char Estado;
    char Codigo[20];
    char Nome_cidade[50];
    float PIB;
    float Densidade_populacional;
    unsigned long int Populacao;
    float Area_em_km2;
    int Pontos_turisticos;
    float PIB_per_capita;
    float Super_poder;

    //Definindo Variáveis para segunda carta.
    char Estado_2;
    char Codigo_2[20];
    char Nome_cidade_2[50];
    float PIB_2;
    float Densidade_populacional_2;
    unsigned long int Populacao_2;
    float Area_em_km2_2;
    int Pontos_turisticos_2;
    float PIB_per_capita_2;
    float Super_poder_2;

    //Entrada de dados
    printf("=== Bem-vindo ao jogo Super Trunfo ===\n");
    printf("Aqui você vai definir as estatísticas de duas cidades de sua escolha!\n\n");

    printf("***Carta 1***\n");

    printf("Digite a letra do Estado (De A até H): ");
        scanf(" %c", &Estado);

    printf("Digite o código do estado (Letra e número Ex: A01):");
        scanf(" %s", Codigo); // <- removido &

    printf("Digite o nome da cidade:");
        scanf(" %s", Nome_cidade); // <- removido &

    printf("Digite o PIB:");
        scanf(" %f", &PIB);

    printf("Digite a população:");
        scanf(" %lu", &Populacao);

    printf("Digite o número de pontos turísticos:");
        scanf(" %d", &Pontos_turisticos);

    //Carta 2
    printf("Ótimo! Agora, vamos para a segunda carta!\n");
        printf("***Carta 2***\n");

    printf("Digite a letra do Estado (De A até H): ");
        scanf(" %c", &Estado_2);

    printf("Digite o código do estado (Letra e número Ex: A01):");
        scanf(" %s", Codigo_2); // <- removido &

    printf("Digite o nome da cidade:");
        scanf(" %s", Nome_cidade_2); // <- removido &

    printf("Digite o PIB:");
        scanf(" %f", &PIB_2);

    printf("Digite a população:");
        scanf(" %lu", &Populacao_2);

    printf("Digite o número de pontos turísticos:");
        scanf(" %d", &Pontos_turisticos_2);

    printf(" O PIB Per Capita de %s é: %f", Nome_cidade_2, PIB_per_capita_2); // <- %s, removido &
    printf(" A densidade populacional de %s é: %f", Nome_cidade_2, Densidade_populacional_2); // <- %f, removido &, não %lu

    //Mostrando dados
    printf("Ótimo! Agora, vamos aos dados das cidades 1 e 2!\n");

    printf("O Estado é: %c\n", Estado); // <- removido &
    printf("O Código é: %s\n", Codigo); // <- removido &
    printf("O Nome da cidade é: %s\n", Nome_cidade); // <- removido &
    printf("O PIB é: %f\n", PIB); // <- removido &
    printf("A população é: %lu\n", Populacao); // <- removido &
    printf("A Área em KM² é: %f\n", Area_em_km2);
    printf("O número de pontos turísticos é: %d\n", Pontos_turisticos);
    printf(" O PIB Per Capita de %s é: %f\n", Nome_cidade, PIB_per_capita); // <- %s, removido &
    printf(" A densidade populacional de %s é: %f\n", Nome_cidade, Densidade_populacional); // <- %s, removido &
    printf(" O super poder é de: %f\n", Super_poder); // <- removido &

    printf("O Estado é: %c\n", Estado_2); // <- removido &
    printf("O Código é: %s\n", Codigo_2); // <- removido &
    printf("O Nome da cidade é: %s\n", Nome_cidade_2); // <- removido &
    printf("O PIB é: %f\n", PIB_2); // <- removido &
    printf("A população é: %lu\n", Populacao_2); // <- removido &
    printf("A Área em KM² é: %f\n", Area_em_km2_2);
    printf("O número de pontos turísticos é: %d\n", Pontos_turisticos_2);
    printf(" O PIB Per Capita de %s é: %f\n", Nome_cidade_2, PIB_per_capita_2); // <- %s, removido &
    printf(" A densidade populacional de %s é: %f\n", Nome_cidade_2, Densidade_populacional_2); // <- %s, removido &
    printf(" O super poder é de: %f\n", Super_poder_2); // <- removido &

    //Comparar os dados
    int vitoria_pop = Populacao > Populacao_2;
    int vitoria_area = Area_em_km2 > Area_em_km2_2;
    int vitoria_pib = PIB > PIB_2;
    int vitoria_turismo = Pontos_turisticos > Pontos_turisticos_2;
    int vitoria_densidade = Densidade_populacional < Densidade_populacional_2; // menor vence
    int vitoria_pibcapita = PIB_per_capita > PIB_per_capita_2;
    int vitoria_super = Super_poder > Super_poder_2;

    int vitoria_pop_2 = Populacao_2 > Populacao;
    int vitoria_area_2 = Area_em_km2_2 > Area_em_km2;
    int vitoria_pib_2 = PIB_2 > PIB;
    int vitoria_turismo_2 = Pontos_turisticos_2 > Pontos_turisticos;
    int vitoria_densidade_2 = Densidade_populacional_2 < Densidade_populacional; // menor vence
    int vitoria_pibcapita_2 = PIB_per_capita_2 > PIB_per_capita;
    int vitoria_super_2 = Super_poder_2 > Super_poder;

    Super_poder = vitoria_pop + vitoria_area + vitoria_pib +
                  vitoria_turismo + vitoria_densidade +
                  vitoria_pibcapita;

    Super_poder_2 = vitoria_pop_2 + vitoria_area_2 + vitoria_pib_2 +
                    vitoria_turismo_2 + vitoria_densidade_2 +
                    vitoria_pibcapita_2 + vitoria_super_2;

    int vencedor1= Super_poder > Super_poder_2;
    int vencedor2= Super_poder_2 > Super_poder;

    printf("Carta 1 venceu: %d\n", vencedor1); // <- removido &
    printf("Carta 2 venceu: %d\n", vencedor2); // <- removido &

    return 0;
}