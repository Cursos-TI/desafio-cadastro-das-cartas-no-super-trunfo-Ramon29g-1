#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()      {
    /* Divisão (/) */

    char estado1 = 'A';
    char carta1 [4] = "A01" ;
    char    cidade1[20] ="São Paulo";
    int populacao1 = 5898000;
    float area1 =1202222.0;
    float pib1 = 12345267.0;
    int pontos_turisticos1 = 30;
    float densidade1 = 8102.47;
    float pib_per_capita1 = 56724.32;
    float super_poder1 = 608307874.0;

    float quociente = (float)populacao1 / area1; //A divisão de população1 por área1 resulta em 8102,47 

    float quociente = (float)pib_per_capita1 / populacao1;  // Divisão de ponto flutuante 

    printf("Quociente: %d\n", quociente);

    printf("Quociente: %.2f\n", quociente);

    int população1 = 5898000;
    int area1 = 120222.0;
    int pib1 = 12345267.0;
    int pib_per_capita1 = 56724.32;
    int densidade1 = 8102.47;
    int pontos_turisticos1 = 30;
    int resultado;

    resultado = (float)populacao1 + area1 + pib1 + pib_per_capita1 + densidade1 + pontos_turisticos1;

    printf("A soma de %d e %d é: %d\n", populacao1, area1, pib1, pib_per_capita1, densidade1, pontos_turisticos1); //Exibe o resultado


    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", carta1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %2.f km^2\n", area1);
    printf("pib: %2.f\n", pib1);
    printf("pontos turisticos: %d\n", pontos_turisticos1);
    


    printf("\n");//comando de pular linha
    printf("\n");// comando de pular linha

    char estado2 =  'A';
    char carta2[4] = "A02";
    char cidade2[20] ="Campinas";
    int populacao2 = 6748000;
    float area2 =1200.25 km²;
    float pib2 =300.50;
    int pontos_turisticos2 = 50;
    float densidade = 8102.47 hab/km²;
    float pib_per_capita2 = 56724.32;
    float super_poder2 = 681437774.0;

    
    float quociente = (float)populacao2 / area2; //A divisão de população2 por área2 resulta em  5622,24

    float quociente = (float)pib_per_capita2 / populacao2; //Divisão de ponto flutuante

    int populacao2 = 6748000;
    int area2 = 1200.25;
    int pib2 = 300.50;
    int pib_per_capita2 = 56724.32;
    int densidade2 = 8102.47;
    int pontos_turisticos2 = 50;
    int resultado2;

    resultado2 = (float)populacao2 + area2 + pib2 + pib_per_capita2 + densidade2 + pontos_turisticos2;
    printf("A soma de %d e %d é: %d\n", populacao2, area2, pib2, pib_per_capita2, densidade2, pontos_turisticos2); //Exibe o resultado

    unsigned int super_poder = 608307874.0;
    unsigned int super_poder2 = 681437774.0;





    printf("Quociente: %d\n", quociente)

    printf("Quociente: %.2f\n", quociente);

    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", carta2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %2.f km^2\n", area2);
    printf("pib: %2.f\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);



    printf("\n");
    //Lógica de comparação

    if densidade1 > densidade2 {
        printf("A carta1 venceu\n");
    } else if densidade1< densidade2 {
        printf("A carta2 venceu\n");
    } else {
        printf("Empate\n");
    }

    switch (super_poder) {
        case 1:
            printf("A carta1 venceu\n");
            break;
        case 2:
            printf("A carta2 venceu\n");
            break;
        default:
            printf("Empate\n");
            break;

    }
    

    printf("Escolha uma carta (1 ou 2): ");
    printf("A. carta1\n");
    printf("B. carta2\n");

    printf("Escolha a comparação");
    printf("A. População1\n");
    printf("B. Área1\n");
    printf("C. PIB1\n");
    printf("D. Pontos Turísticos1\n");
    printf("E. Densidade1\n");
    printf("F. PIB per capita1\n");
    printf("G. Super Poder1\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A carta1 venceu\n");
            } else if (populacao1 < populacao2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A carta1 venceu\n");
            } else if (area1 < area2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A carta1 venceu\n");
            } else if (pib1 < pib2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("A carta1 venceu\n");
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            if (densidade1 > densidade2) {
                printf("A carta1 venceu\n");
            } else if (densidade1 < densidade2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 6:
            if (pib_per_capita1 > pib_per_capita2) {
                printf("A carta1 venceu\n");
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 7:
            if (super_poder1 > super_poder2) {
                printf("A carta1 venceu\n");
            } else if (super_poder1 < super_poder2) {
                printf("A carta2 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }
    printf("Escolha a comparação");
    printf("A. População2\n");
    printf("B. Área2\n");
    printf("C. PIB2\n");
    printf("D. Pontos Turísticos2\n");
    printf("E. Densidade2\n");
    printf("F. PIB per capita2\n");
    printf("G. Super Poder2\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            if (populacao2 > populacao1) {
                printf("A carta2 venceu\n");
            } else if (populacao2 < populacao1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            if (area2 > area1) {
                printf("A carta2 venceu\n");
            } else if (area2 < area1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            if (pib2 > pib1) {
                printf("A carta2 venceu\n");
            } else if (pib2 < pib1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            if (pontos_turisticos2 > pontos_turisticos1) {
                printf("A carta2 venceu\n");
            } else if (pontos_turisticos2 < pontos_turisticos1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            if (densidade2 > densidade1) {
                printf("A carta2 venceu\n");
            } else if (densidade2 < densidade1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 6:
            if (pib_per_capita2 > pib_per_capita1) {
                printf("A carta2 venceu\n");
            } else if (pib_per_capita2 < pib_per_capita1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        case 7:
            if (super_poder2 > super_poder1) {
                printf("A carta2 venceu\n");
            } else if (super_poder2 < super_poder1) {
                printf("A carta1 venceu\n");
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opção inválida.\n");

    }
    return 0;

}
