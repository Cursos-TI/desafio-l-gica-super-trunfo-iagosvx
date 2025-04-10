#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    char NomedaCidade1[] = "Amazonas";
    unsigned long int populacao1 = 4281209;
    float area1 = 1559168.117;
    float PIB1 = 131.50; // bilhões
    int PontosTuristicos1 = 500;

  
    char NomedaCidade2[] = "Recife";
    unsigned long int populacao2 = 1488920;
    float area2 = 218.0;
    float PIB2 = 60.0; // bilhões
    int PontosTuristicos2 = 50;

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    printf("===== SUPER TRUNFO - COMPARAÇÃO DE PAÍSES =====\n");
    printf("Cartas: %s vs %s\n\n", NomedaCidade1, NomedaCidade2);

    printf("1 - População:\n");
    printf("%s: %lu habitantes\n", NomedaCidade1, populacao1);
    printf("%s: %lu habitantes\n", NomedaCidade2, populacao2);
    if (populacao1 > populacao2)
        printf("Resultado: %s venceu!\n\n", NomedaCidade1);
    else if (populacao2 > populacao1)
        printf("Resultado: %s venceu!\n\n", NomedaCidade2);
    else
        printf("Resultado: Empate!\n\n");

    
    printf("2 - Área:\n");
    printf("%s: %.2f km²\n", NomedaCidade1, area1);
    printf("%s: %.2f km²\n", NomedaCidade2, area2);
    if (area1 > area2)
        printf("Resultado: %s venceu!\n\n", NomedaCidade1);
    else if (area2 > area1)
        printf("Resultado: %s venceu!\n\n", NomedaCidade2);
    else
        printf("Resultado: Empate!\n\n");

   
      printf("3 - PIB:\n");
    printf("%s: %.2f bilhões\n", NomedaCidade1, PIB1);
    printf("%s: %.2f bilhões\n", NomedaCidade2, PIB2);
      if (PIB1 > PIB2)
        printf("Resultado: %s venceu!\n\n", NomedaCidade1);
    else if (PIB2 > PIB1)
        printf("Resultado: %s venceu!\n\n", NomedaCidade2);
    else
        printf("Resultado: Empate!\n\n");

    
    printf("4 - Pontos Turísticos:\n");
    printf("%s: %d pontos\n", NomedaCidade1, PontosTuristicos1);
    printf("%s: %d pontos\n", NomedaCidade2, PontosTuristicos2);
    if (PontosTuristicos1 > PontosTuristicos2)
        printf("Resultado: %s venceu!\n\n", NomedaCidade1);
      else if (PontosTuristicos2 > PontosTuristicos1)
        printf("Resultado: %s venceu!\n\n", NomedaCidade2);
     else
        printf("Resultado: Empate!\n\n");

    printf("5 - Densidade Demográfica:\n");
    printf("%s: %.2f hab/km²\n", NomedaCidade1, densidade1);
    printf("%s: %.2f hab/km²\n", NomedaCidade2, densidade2);
    if (densidade1 < densidade2)
        printf("Resultado: %s venceu!\n\n", NomedaCidade1);
    else if (densidade2 < densidade1)
        printf("Resultado: %s venceu!\n\n", NomedaCidade2);
    else
        printf("Resultado: Empate!\n\n");

    return 0;
}