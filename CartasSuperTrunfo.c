#include <stdio.h>

int main() {
    // essas variáveis são sobre a carta 1
    int turistico1;
    unsigned long int populacao1;
    float area1, PIB1, densidade1, capta1, superPoder1;
    char estado1;
    char codigo1[4]; 
    char cidade1[50];

    // Implementação dos dados da segunda carta 
    int turistico2;
    unsigned long int populacao2;
    float area2, PIB2, densidade2, capta2, superPoder2;
    char estado2;
    char codigo2[4]; 
    char cidade2[50];

   // Variáveis para contagem de vitórias
    int vitorias1 = 0, vitorias2 = 0;

    printf ("___ BEM VINDO AO SUPER TRUNFO ___\n");

    printf ("___ POR FAVOR, PREENCHA OS DADOS DA CARTA 1 ___\n");
    printf ("Digite uma letra de A a H: \n");
    scanf ("%c", &estado1);

    printf ("Digite um código com a letra do estado seguida de um número de 01 a 04 (ex: A01, F03)\n");
    scanf ("%s", codigo1);

    printf ("Informe o nome de uma cidade que pertence ao estado informado (Sem espaço): \n");
    scanf("%s", cidade1);

    printf ("Informe a população dessa cidade (Sem uso de pontuação): \n");
    scanf ("%lu", &populacao1);

    printf ("Informe a área em km² da cidade (Sem uso de pontuação): \n");
    scanf ("%f", &area1); 

    printf ("Informe o PIB da cidade (Sem uso de pontuação): \n");
    scanf ("%f", &PIB1);

    printf ("Informe a quantidade de pontos turísticos da cidade: \n");
    scanf ("%d", &turistico1);

    printf ("___CARTA 1___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.3f\n PIB: %.3f\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, turistico1);

    densidade1 = populacao1 / area1;
    capta1 = PIB1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + PIB1 + turistico1 + capta1 + (1.0 / densidade1);

    printf ("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf ("PIB per capita: %.2f\n\n", capta1);

    printf ("___ AGORA PREENCHA OS DADOS DA CARTA 2 ___\n");
    printf ("Digite uma letra de A a H: \n");
    scanf (" %c", &estado2);

    printf ("Digite um código com a letra do estado seguida de um número de 01 a 04 (ex: A01, F03)\n");
    scanf ("%s", codigo2);

    printf ("Informe o nome de uma cidade que pertence ao estado informado (Sem espaço): \n");
    scanf("%s", cidade2);

    printf ("Informe a população dessa cidade (Sem uso de pontuação): \n");
    scanf ("%lu", &populacao2);

    printf ("Informe a área em km² da cidade (Sem uso de pontuação): \n");
    scanf ("%f", &area2); 

    printf ("Informe o PIB da cidade (Sem uso de pontuação): \n");
    scanf ("%f", &PIB2);

    printf ("Informe a quantidade de pontos turísticos da cidade: \n");
    scanf ("%d", &turistico2);

    densidade2 = populacao2 / area2;
    capta2 = PIB2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + PIB2 + turistico2 + capta2 + (1.0 / densidade2);

    printf ("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf ("PIB per capita: %.2f\n", capta2);

    printf ("___CARTA 2___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.3f\n PIB: %.3f\n Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, turistico2);

    printf ("AS CARTAS FORAM ORGANIZADAS DA SEGUINTE FORMA: \n");

    printf ("___CARTA 1___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.3f\n PIB: %.3f\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, turistico1);
    printf ("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf ("PIB per capita: %.2f\n\n", capta1);

    printf ("___CARTA 2___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %lu\n Área: %.3f\n PIB: %.3f\n Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, turistico2);
    printf ("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf ("PIB per capita: %.2f\n\n", capta2);

    // COMPARAÇÃO
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turistico1 > turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // MENOR vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", capta1 > capta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
