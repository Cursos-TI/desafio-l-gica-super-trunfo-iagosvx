#include <stdio.h>

int main() {
   
    char cidade1[] = "Amazonas";
    unsigned long int populacao1 = 4281209;
    float area1 = 1559168.117;
    float PIB1 = 131.50; // bilhões
    int pontosTuristicos1 = 500;
    float densidade1 = (float)populacao1 / area1;

    char cidade2[] = "Recife";
    unsigned long int populacao2 = 1488920;
    float area2 = 218.0;
    float PIB2 = 60.0; // bilhões
    int pontosTuristicos2 = 50;
    float densidade2 = (float)populacao2 / area2;

    int escolha1, escolha2;
    float valor1_cidade1 = 0, valor1_cidade2 = 0;
    float valor2_cidade1 = 0, valor2_cidade2 = 0;
    float soma1, soma2;

    printf("===== SUPER TRUNFO - COMPARAÇÃO DE CIDADES =====\n");
    printf("Cartas: %s vs %s\n\n", cidade1, cidade2);

   
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Digite a opção (1-5): ");
    scanf("%d", &escolha1);

   
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == escolha1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica (menor vence)\n"); break;
        }
    }
    printf("Digite a opção (1-5): ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5) {
        printf("\nErro: Os atributos devem ser diferentes e válidos (1 a 5).\n");
        return 1;
    }

    
    switch (escolha1) {
        case 1:
            valor1_cidade1 = (float)populacao1;
            valor1_cidade2 = (float)populacao2;
            break;
        case 2:
            valor1_cidade1 = area1;
            valor1_cidade2 = area2;
            break;
        case 3:
            valor1_cidade1 = PIB1;
            valor1_cidade2 = PIB2;
            break;
        case 4:
            valor1_cidade1 = (float)pontosTuristicos1;
            valor1_cidade2 = (float)pontosTuristicos2;
            break;
        case 5:
            valor1_cidade1 = densidade1;
            valor1_cidade2 = densidade2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

  
    switch (escolha2) {
        case 1:
            valor2_cidade1 = (float)populacao1;
            valor2_cidade2 = (float)populacao2;
            break;
        case 2:
            valor2_cidade1 = area1;
            valor2_cidade2 = area2;
            break;
        case 3:
            valor2_cidade1 = PIB2;
            valor2_cidade2 = PIB2;
            break;
        case 4:
            valor2_cidade1 = (float)pontosTuristicos1;
            valor2_cidade2 = (float)pontosTuristicos2;
            break;
        case 5:
            valor2_cidade1 = densidade1;
            valor2_cidade2 = densidade2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    
    printf("\n===== COMPARAÇÃO =====\n");

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", cidade1, valor1_cidade1);
    printf("%s: %.2f\n", cidade2, valor1_cidade2);

    if (escolha1 == 5)
        printf("Resultado: %s venceu!\n", (valor1_cidade1 < valor1_cidade2) ? cidade1 : (valor1_cidade1 > valor1_cidade2) ? cidade2 : "Empate");
    else
        printf("Resultado: %s venceu!\n", (valor1_cidade1 > valor1_cidade2) ? cidade1 : (valor1_cidade1 < valor1_cidade2) ? cidade2 : "Empate");

    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", cidade1, valor2_cidade1);
    printf("%s: %.2f\n", cidade2, valor2_cidade2);

    if (escolha2 == 5)
        printf("Resultado: %s venceu!\n", (valor2_cidade1 < valor2_cidade2) ? cidade1 : (valor2_cidade1 > valor2_cidade2) ? cidade2 : "Empate");
    else
        printf("Resultado: %s venceu!\n", (valor2_cidade1 > valor2_cidade2) ? cidade1 : (valor2_cidade1 < valor2_cidade2) ? cidade2 : "Empate");

    
    float somado1 = (escolha1 == 5 ? -valor1_cidade1 : valor1_cidade1);
    somado1 += (escolha2 == 5 ? -valor2_cidade1 : valor2_cidade1);

    float somado2 = (escolha1 == 5 ? -valor1_cidade2 : valor1_cidade2);
    somado2 += (escolha2 == 5 ? -valor2_cidade2 : valor2_cidade2);

    printf("\n===== RESULTADO FINAL =====\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, somado1);
    printf("%s: %.2f\n", cidade2, somado2);

    if (somado1 > somado2)
        printf("Resultado Final: %s venceu a rodada!\n", cidade1);
    else if (somado2 > somado1)
        printf("Resultado Final: %s venceu a rodada!\n", cidade2);
    else
        printf("Resultado Final: Empate!\n");

    return 0;
}