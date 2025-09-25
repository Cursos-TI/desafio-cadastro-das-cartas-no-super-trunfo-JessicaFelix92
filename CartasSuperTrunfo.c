#include <stdio.h>

int main() {
    // Variáveis da carta 1
    unsigned long int populacao1;
    int npontoturistico1;
    float area1;
    float PIB1;
    char estado1;
    char codigocarta1[5];
    char nomecidade1[20];
    float densidadepopulacional1;
    float PIBpercapita1;

    // Variáveis da carta 2
    unsigned long int populacao2;
    int npontoturistico2;
    float area2;
    float PIB2;
    char estado2;
    char codigocarta2[5];
    char nomecidade2[20];
    float densidadepopulacional2;
    float PIBpercapita2;

    //Solicitar que usuário informe dados da carta 1.
    printf("Inserir dados da Carta 1:\n"); 
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código: ");
    scanf("%s", codigocarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontoturistico1);

    // Operadores matemáticos: Calcular densidade e Pib per capta Carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    PIBpercapita1 = PIB1 / (float) populacao1;

    //Solicitar que usuário informe dados da carta 2.
    printf("\nInserir dados da Carta 2:\n"); 
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código: ");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontoturistico2);

    // Operadores matemáticos: Calcular densidade e Pib per capta Carta 2
    densidadepopulacional2 = (float) populacao2 / area2;
    PIBpercapita2 = (float) PIB2 / populacao2;

    // Imprimir dados da carta 1.
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\n", estado1, codigocarta1); 
    printf("Nome da Cidade: %s\nPopulação: %lu habitantes\n", nomecidade1, populacao1);
    printf("Área: %.2f Km²\nPIB: R$ %.2f\n", area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n", npontoturistico1);
    // Imprimir densidade e PIB per capita Carta 1.
    printf("Densidade Populacional: %.2f hab./Km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita1);

    // Imprimir dados da carta 2.
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\n", estado2, codigocarta2); 
    printf("Nome da Cidade: %s\nPopulação: %lu habitantes\n", nomecidade2, populacao2);
    printf("Área: %.2f Km²\nPIB: R$ %.2f\n", area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", npontoturistico2);
    // Imprimir densidade e PIB per capita Carta 2.
    printf("Densidade Populacional: %.2f hab./Km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita2);

    //Variável para escolha de atributo
    int escolhaAtributo1, escolhaAtributo2;
    float pontuacao1C1 = 0, pontuacao1C2 = 0, pontuacao2C1 = 0, pontuacao2C2 = 0, soma1 = 0, soma2 = 0;

    //Menu para escolha de atributo
    printf("\nEscolha do primeiro Atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolhaAtributo1);

    //Menu para escolha do segundo atributo
    printf("\nEscolha do Segundo Atributo\n");
    if (escolhaAtributo1 != 1)
    printf("1. População\n");
    if (escolhaAtributo1 != 2)
    printf("2. Área\n");
    if (escolhaAtributo1 != 3)
    printf("3. PIB\n");
    if (escolhaAtributo1 != 4)
    printf("4. Número de Pontos Turísticos\n");
    if (escolhaAtributo1 != 5)
    printf("5. Densidade Populacional\n");
    if (escolhaAtributo1 != 6)
    printf("6. PIB per Capita\n");
    printf("Escolha o segundo atributo (Deve ser diferente do primeiro atributo): ");
    scanf("%d", &escolhaAtributo2);

    //Comparando atributos escolha 1
    switch (escolhaAtributo1) {
    case 1:
        printf("\nComparação de cartas do primeiro atributo: População\n");
        printf("Carta 1 - %s: %lu\n", nomecidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomecidade2, populacao2);
        if (populacao1>populacao2){
        printf("Resultado Atributo 1: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao1<populacao2){
        printf("Resultado Atributo 1: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 1: Empatou!\n");
    }
        pontuacao1C1 = populacao1;
        pontuacao1C2 = populacao2;
        break;

    case 2:
        printf("\nComparação de cartas do primeiro atributo: Área\n"); 
        printf("Carta 1 - %s: %.2f\n", nomecidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, area2);
        if (area1>area2){
        printf("Resultado Atributo 1: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (area1<area2){
        printf("Resultado Atributo 1: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 1: Empatou!\n");
    }
        pontuacao1C1 = area1;
        pontuacao1C2 = area2;
        break;

    case 3:
        printf("\nComparação de cartas do primeiro atributo: PIB\n");
        printf("Carta 1 - %s: %.2f\n", nomecidade1, PIB1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, PIB2); 
        if (PIB1>PIB2){
        printf("Resultado Atributo 1: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (PIB1<PIB2){
        printf("Resultado Atributo 1: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 1: Empatou!\n");
    }
        pontuacao1C1 = PIB1;
        pontuacao1C2 = PIB2;
        break;        
    
    case 4:
        printf("\nComparação de cartas do primeiro atributo: Número de Pontos Turísticos\n");
        printf("Carta 1 - %s: %d\n", nomecidade1, npontoturistico1);
        printf("Carta 2 - %s: %d\n", nomecidade2, npontoturistico2);
        if (npontoturistico1>npontoturistico2){
        printf("Resultado Atributo 1: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (npontoturistico1<npontoturistico2){
        printf("Resultado Atributo 1: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 1: Empatou!\n");
    }
        pontuacao1C1 = npontoturistico1;
        pontuacao1C2 = npontoturistico2;
        break;

    case 5:
        printf("\nComparação de cartas do primeiro atributo: Densidade Populacional\n");
        printf("Carta 1 - %s: %.2f\n", nomecidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, densidadepopulacional2);
        if (densidadepopulacional1<densidadepopulacional2){
        printf("Resultado Atributo 1: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (densidadepopulacional1>densidadepopulacional2){
        printf("Resultado Atributo 1: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 1: Empatou!\n");
    }
        pontuacao1C1 = -densidadepopulacional1;
        pontuacao1C2 = -densidadepopulacional2;
        break;

    case 6:
        printf("\nComparação de cartas do primeiro atributo: PIB per Capita\n");
        printf("Carta 1 - %s: %.2f\n", nomecidade1, PIBpercapita1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, PIBpercapita2);
        if (PIBpercapita1>PIBpercapita2){
        printf("Resultado Atributo 1: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (PIBpercapita1<PIBpercapita2){
        printf("Resultado Atributo 1: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 1: Empatou!\n");
    }
        pontuacao1C1 = PIBpercapita1;
        pontuacao1C2 = PIBpercapita2;   
        break; 
          
    default:
        printf("Opção inválida!\n");
        break;
    }

    //Comparando atributos escolha 2
    if (escolhaAtributo1 == escolhaAtributo2)
    {
        printf("\nVocê escolheu o mesmo atributo!\n");
    } else {
        switch (escolhaAtributo2)
        {
    case 1:
        printf("\nComparação de cartas do segundo atributo: População\n");
        printf("Carta 1 - %s: %lu\n", nomecidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomecidade2, populacao2);
        if (populacao1>populacao2){
        printf("Resultado Atributo 2: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao1<populacao2){
        printf("Resultado Atributo 2: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 2: Empatou!\n");
    }
        pontuacao2C1 = populacao1;
        pontuacao2C2 = populacao2;
        break;

    case 2:
        printf("\nComparação de cartas do segundo atributo: Área\n"); 
        printf("Carta 1 - %s: %.2f\n", nomecidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, area2);
        if (area1>area2){
        printf("Resultado Atributo 2: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (area1<area2){
        printf("Resultado Atributo 2: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 2: Empatou!\n");
    }
        pontuacao2C1 = area1;
        pontuacao2C2 = area2;
        break;

    case 3:
        printf("\nComparação de cartas do segundo atributo: PIB\n"); 
        printf("Carta 1 - %s: %.2f\n", nomecidade1, PIB1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, PIB2); 
        if (PIB1>PIB2){
        printf("Resultado Atributo 2: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (PIB1<PIB2){
        printf("Resultado Atributo 2: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 2: Empatou!\n");
    }
        pontuacao2C1 = PIB1;
        pontuacao2C2 = PIB2;
        break;        
    
    case 4:
        printf("\nComparação de cartas do segundo atributo: Número de Pontos Turísticos\n");
        printf("Carta 1 - %s: %d\n", nomecidade1, npontoturistico1);
        printf("Carta 2 - %s: %d\n", nomecidade2, npontoturistico2);
        if (npontoturistico1>npontoturistico2){
        printf("Resultado Atributo 2: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (npontoturistico1<npontoturistico2){
        printf("Resultado Atributo 2: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 2: Empatou!\n");
    }
        pontuacao2C1 = npontoturistico1;
        pontuacao2C2 = npontoturistico2;
        break;

    case 5:
        printf("\nComparação de cartas do segundo atributo: Densidade Populacional\n");
        printf("Carta 1 - %s: %.2f\n", nomecidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, densidadepopulacional2);
        if (densidadepopulacional1<densidadepopulacional2){
        printf("Resultado Atributo 2: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (densidadepopulacional1>densidadepopulacional2){
        printf("Resultado Atributo 2: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 2: Empatou!\n");
    }
        pontuacao2C1 = -densidadepopulacional1;
        pontuacao2C2 = -densidadepopulacional2;
        break;

    case 6:
        printf("\nComparação de cartas do segundo atributo: PIB per Capita\n");
        printf("Carta 1 - %s: %.2f\n", nomecidade1, PIBpercapita1);
        printf("Carta 2 - %s: %.2f\n", nomecidade2, PIBpercapita2);
        if (PIBpercapita1>PIBpercapita2){
        printf("Resultado Atributo 2: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (PIBpercapita1<PIBpercapita2){
        printf("Resultado Atributo 2: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado Atributo 2: Empatou!\n");
    }
        pontuacao2C1 = PIBpercapita1;
        pontuacao2C2 = PIBpercapita2;   
        break;
          
    default:
        printf("Opção inválida!\n");
        break;
    } 
}

    //Realizar a soma das cartas
    soma1 = pontuacao1C1 + pontuacao2C1;
    soma2 = pontuacao1C2 + pontuacao2C2;
    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nomecidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", nomecidade2, soma2);

    //Resultado
    printf("\nVencedor Super Trunfo:\n");
    soma1 > soma2 ? printf("A Carta 1 (%s) venceu!\n", nomecidade1) :
    soma2 > soma1 ? printf("A Carta 2 (%s) venceu!\n", nomecidade2) :
    printf("Empate!\n");

return 0;

}