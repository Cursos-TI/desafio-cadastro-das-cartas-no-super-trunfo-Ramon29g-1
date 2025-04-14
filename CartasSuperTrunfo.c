#include <stdio.h>

int main()      {
    /* Divisão (/) */

    char estado1 = 'A';
    char carta1 [4] = "A01" ;
    char    cidade1[20] ="São Paulo";
    int populacao1 = 5898000;
    float area1 =1202222.0;
    float pib1 = 12345267.0;
    int pontos_turisticos1 = 30;
    float desnsidade = 8102,47 hab/km²;
    float pib_per_capita1 = 56724.32;

    float quociente = populacao1 / area1; //A divisão de população1 por área1 resulta em 8102,47 

    float quociente = pib_per_capita1 / populacao1;  // Divisão de ponto flutuante 

    printf("Quociente: %d\n", quociente);

    printf("Quociente: %.2f\n", quociente);

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
    int populacao2 = 5898000;
    float area2 = 1202222.0;
    float pib2 =12345267.0;
    int pontos_turisticos2 = 30;
    float densidade = 5622,24 hab/km²;
    float pib_per_capita2 = 44532.91;
    
    float quociente = populacao2 / area2; //A divisão de população2 por área2 resulta em  5622,24

    float quociente = pib_per_capita2 / populacao2; //Divisão de ponto flutuante

    printf("Quociente: %d\n", quociente)

    prinf("Quociente: %.2f\n", quociente);

    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", carta2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %2.f km^2\n", area2);
    printf("pib: %2.f\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
 

    printf("\n");
    printf("\n");

    return 0;

}
