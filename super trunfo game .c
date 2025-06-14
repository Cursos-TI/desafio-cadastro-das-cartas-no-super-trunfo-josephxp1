#include <stdio.h>

int main()
{
    // estrutura do game
    char estado;
    char codigo[4];
    //c ou s no char 
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTur;
    // jogador number 1

    printf("jogador numner 1 on.\n");
    // estado cartas tipo char
    printf("Digite o estado de A-H:\n");
    scanf("%c", &estado);

    // codigo da carta tipo char
    printf("Digite o codigo de com a letra ex:A)1 (01-04) :\n");
    scanf("%c", &codigo);

    // nome da cidade  tipo char
    printf("digite o nome da cidade.\n");
    scanf("%c", &nomeCidade);

    // populacao  tipo int
    printf("Digite a populacao.\n");
    scanf("%d", &populacao);

    // area tipo float
    printf("Digite a area:\n");
    scanf("%f", &area);

    // pib tipo float
    printf("digite o pib:\n");
    scanf("%f", &pib);

    // numero de ponto t. tipo int
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &numPontosTur);

    // jogador number 2

    printf("jogador numner 2 on.\n");
    // estado cartas tipo char
    printf("Digite o estado de A-H:\n");
    scanf("%c", &estado);

    // codigo da carta tipo char
    printf("Digite o codigo de com a letra ex:A)1 (01-04) :\n");
    scanf("%c", &codigo);

    // nome da cidade  tipo char
    printf("digite o nome da cidade.\n");
    scanf("%c", &nomeCidade);

    // populacao  tipo int
    printf("Digite a populacao.\n");
    scanf("%d", &populacao);

    // area tipo float
    printf("Digite a area:\n");
    scanf("%f", &area);

    // pib tipo float
    printf("digite o pib:\n");
    scanf("%f", &pib);

    // numero de ponto t. tipo int
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &numPontosTur);

    return 0;
}
