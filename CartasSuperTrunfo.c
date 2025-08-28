#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     
    //====== CARTA 1 ========
    int pontosturisticos1;
    unsigned long int populacao1;
    float area1;
    float SuperPoder1;
    double densidadepopulacional1, pib1, pibpercapita1;
    char estado1;
    char nomecidade1[50], codigocarta1[10];
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     
    printf("==== CADASTRO DA CARTA1 ==== \n");

        printf("Digite um Estado (A-H): ");
        scanf(" %c" , &estado1);

        printf("Digite o Código da Carta (ex:A01): ");
        scanf("%s" , &codigocarta1);

        printf("Digite o Nome da Cidade: ");
        scanf("%s" , &nomecidade1);

        printf("Digite o Numero da População: ");
        scanf("%lu" , &populacao1);

        printf("Digite a Área: ");
        scanf("%f" , &area1);

        printf("Digite o Pib da Cidade: ");
        scanf("%lf" , &pib1);

        printf("Digite a Quantidade de Pontos Turísticos: ");
        scanf("%d" , &pontosturisticos1);

        // CÁLCULOS

        densidadepopulacional1 = populacao1 / area1;
        pibpercapita1 = (pib1 * 1000000000) / populacao1;
        SuperPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);

        printf("=== RESULTADO CARTA1 === \n");
       
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
      
    // ==== EXIBIÇÃO ====
        printf("O Estado é: %c \n" , estado1);
        printf("O Código da Carta é: %s \n" , codigocarta1);
        printf("O Nome da Cidade é: %s \n" , nomecidade1);
        printf("O Número da População é: %lu Habitantes \n" , populacao1);
        printf("A Área é: %.2f KM² \n" , area1);
        printf("O Pib é: %.2lf Bilhões \n" , pib1);
        printf("O Pontos  Turísticos é: %d \n" , pontosturisticos1);
        printf("A Densidade Populacional é: %.2lf HAB/KM²\n" , densidadepopulacional1);
        printf("O Pib per Capita é: %.2lf REAIS\n" , pibpercapita1);


        // ==== CARTA2 ====
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2;
    float SuperPoder2;
    double densidadepopulacional2, pib2, pibpercapita2;
    char estado2, nomecidade2[50], codigocarta2[10];

        printf(" ==== CADASTRO DA CARTA2 ==== \n ");

        printf("Digite um Estado (A-H):");
        scanf(" %c" , &estado2);

        printf("Digite o Código da Carta (ex:A02): ");
        scanf("%s" , &codigocarta2);

        printf("Digite o Nome da Cidade: ");
        scanf("%s" , &nomecidade2); 

        printf("Digite o Numero da População: ");
        scanf("%lu" , &populacao2);

        printf("Digite a Área: ");
        scanf("%f" , &area2);

        printf("Digite o Pib da Cidade: ");
        scanf("%lf" , &pib2);

        printf("Digite a Quantidade de Pontos Turísticos: ");
        scanf("%d" , &pontosturisticos2);

        //CALCULOS
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = (pib2 * 1000000000) / populacao2;
        SuperPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

        printf("==== RESULTADO DA CARTA2 ==== \n");

        // ==== EXIBIÇÃO ====

        printf("O Estado é: %c \n" , estado2);
        printf("O Código da Carta é: %s \n" , codigocarta2);
        printf("O Nome da Cidade é: %s \n" , nomecidade2);
        printf("O Número da População é: %lu Habitantes \n" , populacao2);
        printf("A Área é: %.2f KM² \n" , area2);
        printf("O Pib é: %.2lf Bilhões \n" , pib2);
        printf("O Pontos  Turísticos é: %d \n" , pontosturisticos2);
        printf("A Densidade Populacional é: %.2lf HAB/KM² \n" , densidadepopulacional2);
        printf("O Pib per Capita é: %.2lf REAIS\n" , pibpercapita2);
        

        //RESULTADO DAS CARTAS

        printf("==== COMPARAÇÃO DAS CARTAS ==== \n");

        printf("População: Carta 1 Venceu (%d) \n" , populacao1 > populacao2);
        printf("Área: Carta 1 Venceu (%d) \n" , area1 > area2);
        printf("Pib: Carta 1 Venceu (%d) \n" , pib1 > pib2);
        printf("Pontos Turísticos: Carta 1 Venceu (%d) \n" , pontosturisticos1 > pontosturisticos2);
        printf("Densidade Populacional: Carta 1 Venceu (%d) \n" , densidadepopulacional1 < densidadepopulacional2);
        printf("Pib per Capita: Carta 1 Venceu (%d) \n" , pibpercapita1 > pibpercapita2);
        printf("Super Poder: Carta 1 Venceu (%d) \n" , SuperPoder1 > SuperPoder2);

        return 0;
}
