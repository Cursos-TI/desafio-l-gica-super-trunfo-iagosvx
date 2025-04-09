#include <stdio.h>

    int main() {
    
        char estado1 = 'AM';
        char codigo1[] = "A01";
        char NomedaCidade1[] = "Amazonas";
        unsigned long int populacao1 = 4281209;
        float area1 = 1559168.117;
        float PIB1 = 131.50; // em bilhões
        int NumerodePontosTuristicos1 = 500;
    
       
        char estado2 = 'PE';
        char codigo2[] = "B02";
        char NomedaCidade2[] = "Recife";
        unsigned long int populacao2 = 1488920;
        float area2 = 218;
        float PIB2 = 60; // em bilhões
        int NumerodePontosTuristicos2 = 50;
    
        
        float DensidadePopulacional1 = (float)populacao1/area1;
        float DensidadePopulacional2 = (float)populacao2/area2;
        float PIBperCapita1 = (PIB1 * 1e9)/populacao1;
        float PIBperCapita2 = (PIB2 * 1e9)/populacao2;
    
    printf("Comparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s : %lu habitantes\n", NomedaCidade1, estado1, populacao1);
    printf("Carta 2 - %s : %lu habitantes\n", NomedaCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomedaCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
