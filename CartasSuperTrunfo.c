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
    float SuperPoderCarta1;

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
    float SuperPoderCarta2;

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
    int escolhaAtributo;

    //Menu para escolha de atributo
    printf("\nEscolha de Atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha o atributo de 1 a 5: \n");
    scanf("%d", &escolhaAtributo);

    //Comparando atributos
    switch (escolhaAtributo) {
    case 1:
        printf("\nComparação de cartas: Atributo População\n");
        printf("Carta 1 - %s: %lu\n", nomecidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomecidade2, populacao2);
    //Determinar Carta vencedora Atributo População
    if (populacao1>populacao2){
        printf("Resultado: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao1<populacao2){
        printf("Resultado: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Empatou!\n");
    }
        break;

    case 2:
        printf("\nComparação de cartas: Atributo Área\n");
        printf("Carta 1 - %s: %f\n", nomecidade1, area1);
        printf("Carta 2 - %s: %f\n", nomecidade2, area2);
        //Determinar Carta vencedora Atributo População
    if (area1>area2){
        printf("Resultado: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (area1<area2){
        printf("Resultado: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Empatou!\n");
    }
        break;

    case 3:
        printf("\nComparação de cartas: Atributo PIB\n");
        printf("Carta 1 - %s: %f\n", nomecidade1, PIB1);
        printf("Carta 2 - %s: %f\n", nomecidade2, PIB2);
        //Determinar Carta vencedora Atributo PIB
    if (PIB1>PIB2){
        printf("Resultado: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (PIB1<PIB2){
        printf("Resultado: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Empatou!\n");
    }
        break;

    case 4:
        printf("\nComparação de cartas: Atributo Número de Pontos Turísticos\n");
        printf("Carta 1 - %s: %d\n", nomecidade1, npontoturistico1);
        printf("Carta 2 - %s: %d\n", nomecidade2, npontoturistico2);
        //Determinar Carta vencedora Atributo Número de Pontos Turísticos
    if (npontoturistico1>npontoturistico2){
        printf("Resultado: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (npontoturistico1<npontoturistico2){
        printf("Resultado: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Empatou!\n");
    }
        break;

    case 5:
        printf("\nComparação de cartas: Atributo Densidade Populacional\n");
        printf("Carta 1 - %s: %f\n", nomecidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %f\n", nomecidade2, densidadepopulacional2);
        //Determinar Carta vencedora Atributo Densidade Populacional
    if (densidadepopulacional1<densidadepopulacional2){
        printf("Resultado: A Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (densidadepopulacional1>densidadepopulacional2){
        printf("Resultado: A Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Empatou!\n");
    }
        break;    
    
    default:
        printf("Opção inválida!\n");
        break;
    }
    
    return 0;
}