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

    int escolha;
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha);

    printf("\nResultado da comparacao:\n");

    switch (escolha)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Carta 1 vence por populacao.\n");
        }
        else
        {
            printf("Carta 2 vence por populacao.\n");
        }
        break;
    case 2:
        if (area1 > area2)
        {
            printf("Carta 1 vence por area.\n");
        }
        else
        {
            printf("Carta 2 vence por area.\n");
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("Carta 1 vence por PIB.\n");
        }
        else
        {
            printf("Carta 2 vence por PIB.\n");
        }
        break;
    case 4:
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Carta 1 vence por pontos turisticos.\n");
        }
        else
        {
            printf("Carta 2 vence por pontos turisticos.\n");
        }
        break;
    case 5:
        if (densidade_pop1 < densidade_pop2)
        {
            printf("Carta 1 vence por densidade populacional.\n");
        }
        else
        {
            printf("Carta 2 vence por densidade populacional.\n");
        }
        break;
    default:
        printf("Escolha invalida.\n");
    }

    return 0;
}