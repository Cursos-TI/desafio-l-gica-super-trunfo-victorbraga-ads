#include <stdio.h>

int main()
{
    char estado1[15], codigo1[4], cidade1[20];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    char estado2[15], codigo2[4], cidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Codigo: ");
    scanf(" %[^\n]", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo: ");
    scanf(" %[^\n]", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    float densidade_pop1 = (float)populacao1 / area1;
    float densidade_pop2 = (float)populacao2 / area2;

    int escolha1, escolha2;
    printf("\nEscolha os atributos para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha2);

    printf("\nResultado da comparacao:\n");

    int resultado1 = 0, resultado2 = 0;

    switch (escolha1)
    {
    case 1:
        resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1
                                                                               : 0;
        break;
    case 2:
        resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? -1
                                                           : 0;
        break;
    case 3:
        resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1
                                                       : 0;
        break;
    case 4:
        resultado1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2) ? -1
                                                                                                               : 0;
        break;
    case 5:
        resultado1 = (densidade_pop1 < densidade_pop2) ? 1 : (densidade_pop1 > densidade_pop2) ? -1
                                                                                               : 0;
        break;
    default:
        printf("Primeira escolha invalida.\n");
        return 1;
    }

    switch (escolha2)
    {
    case 1:
        resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1
                                                                               : 0;
        break;
    case 2:
        resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? -1
                                                           : 0;
        break;
    case 3:
        resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1
                                                       : 0;
        break;
    case 4:
        resultado2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2) ? -1
                                                                                                               : 0;
        break;
    case 5:
        resultado2 = (densidade_pop1 < densidade_pop2) ? 1 : (densidade_pop1 > densidade_pop2) ? -1
                                                                                               : 0;
        break;
    default:
        printf("Segunda escolha invalida.\n");
        return 1;
    }

    if (resultado1 > resultado2)
    {
        printf("Carta 1 vence com base nas escolhas.\n");
    }
    else if (resultado1 < resultado2)
    {
        printf("Carta 2 vence com base nas escolhas.\n");
    }
    else
    {
        printf("Empate com base nas escolhas.\n");
    }

    return 0;
}