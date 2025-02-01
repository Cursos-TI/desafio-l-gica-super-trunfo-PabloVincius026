
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
=
//

int main() {

    //inclusão das variaveis e seus tipos:
    int pontoturisticos, populacao,codcidade[4];
    char nomecidade[30],estado;
    float area, pib;
    
  //recebimento de dados do usuario:
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código da carta: \n");
    scanf("%d", &codcidade);

    printf("Nome da cidade: \n");
    scanf(" %s", &nomecidade);

    printf("Quantidade pontos turisticos: \n");
    scanf("%d", &pontoturisticos);
 
    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area da cidade: \n");
    scanf(" %f", &area);

    printf("Pib da cidade: \n");
    scanf(" %d", &pib);



    // Exibição dos Dados das Cartas:
    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %d\n", codcidade);
    printf("Cidade: %s\n", nomecidade);
    printf("Pontos Turisticos: %d\n", pontoturisticos);
    printf("Area: %.2f km²\n", area);
    printf("População: %d\n", populacao);
    printf("PIB: %.2d \n", pib);


    return 0;
}
