#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // essas variáveis são sobre a carta 1

    int turistico1, populacao1;
    float area1, PIB1;
    char estado1;
    char codigo1[4]; 
    char cidade1[50];

    // Implementação dos dados da segunda carta 

    int turistico2, populacao2;
    float area2, PIB2;
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("___ BEM VINDO AO SUPER TRUNFO ___\n");

    printf ("___ POR FAVOR, PREENCHA OS DADOS DA CARTA 1 ___\n");
     
    printf ("Digite uma letra de A a H: \n");
        scanf ("%c", &estado1);

    printf ("Digite um código com a letra do estado seguida de um número de 01 a 04 (ex: A01, F03)\n");
        scanf ("%s", codigo1);

    printf ("Informe o nome de uma cidade que pertence ao estado informado (Sem espaço): \n");
        scanf("%s", cidade1);

    printf ("Informe a população dessa cidade (Sem uso de pontuação): \n");
        scanf ("%d", &populacao1);

    printf ("Informe a área em km² da cidade (Sem uso de pontuação): \n");
        scanf ("%f", &area1); 

    printf ("Informe o PIB da cidade (Sem uso de pontuação): \n");
        scanf ("%f", &PIB1);

    printf ("Informe a quantidade de pontos turísticos da cidade: \n");
         scanf ("%d", &turistico1);

printf ("___CARTA 1___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, turistico1);

 printf ("___ AGORA PREENCHA OS DADOS DA CARTA 2 ___\n");
     
    printf ("Digite uma letra de A a H: \n");
        scanf (" %c", &estado2); 
    /* É usado o espaço antes do %c para o código ler o
     "Enter" (Pula linha - \n) que ficou guardado no buffer sistema. */

    printf ("Digite um código com a letra do estado seguida de um número de 01 a 04 (ex: A01, F03)\n");
        scanf ("%s", codigo2);

    printf ("Informe o nome de uma cidade que pertence ao estado informado (Sem espaço): \n");
        scanf("%s", cidade2);

    printf ("Informe a população dessa cidade (Sem uso de pontuação): \n");
        scanf ("%d", &populacao2);

    printf ("Informe a área em km² da cidade (Sem uso de pontuação): \n");
        scanf ("%f", &area2); 

    printf ("Informe o PIB da cidade (Sem uso de pontuação): \n");
        scanf ("%f", &PIB2);

    printf ("Informe a quantidade de pontos turísticos da cidade: \n");
         scanf ("%d", &turistico2);

printf ("___CARTA 2___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, turistico2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf ("AS CARTAS FORAM ORGANIZADAS DA SEGUINTE FORMA: \n");

printf ("___CARTA 1___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, turistico1);

printf ("___CARTA 2___  \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, turistico2);


    return 0;
}
