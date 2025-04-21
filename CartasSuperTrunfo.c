#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

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

    float quociente = populacao1 / area1; //A divisão de população1 por área1 resulta em 8102,47 

    float quociente = pib_per_capita1 / populacao1;  // Divisão de ponto flutuante 

    printf("Quociente: %d\n", quociente);

    printf("Quociente: %.2f\n", quociente);

    int população1 = 5898000;
    int area1 = 120222.0;
    int pib1 = 12345267.0;
    int pib_per_capita1 = 56724.32;
    int densidade1 = 8102.47;
    int pontos_turisticos1 = 30;
    int resultado;

    resultado = populacao1 + area1 + pib1 + pib_per_capita1 + densidade1 + pontos_turisticos1;

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

    
    float quociente = populacao2 / area2; //A divisão de população2 por área2 resulta em  5622,24

    float quociente = pib_per_capita2 / populacao2; //Divisão de ponto flutuante

    int populacao2 = 6748000;
    int area2 = 1200.25;
    int pib2 = 300.50;
    int pib_per_capita2 = 56724.32;
    int densidade2 = 8102.47;
    int pontos_turisticos2 = 50;
    int resultado2;

    resultado2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade2 + pontos_turisticos2;
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
    return 0;

}
