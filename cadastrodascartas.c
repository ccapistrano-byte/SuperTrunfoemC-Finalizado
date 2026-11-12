#include <stdio.h>

int main(){

    char carta;
    char codigodacarta[32];
    char estado[32];
    char nomedacidade[50];
    float area;
    double pib;
    unsigned long int populacao;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
    float superpoder;
    long double invdensidadepopulacional;
    int n = 1;


    printf("**** Super Trunfo ****\n\n");
    printf("Carta 1 \n", carta);
    printf("Estado: A \n", estado);
    printf("Código da Carta: A01 \n", codigodacarta);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade);
    printf("A Cidade é: %s\n", nomedacidade);

    printf("Digite o Número da População: ");
    scanf("%u", &populacao);
    printf("O Número da População é:  %u\n", populacao);

    printf("Digite a Área: ");
    scanf("%f", &area);
    printf("A Área é: %.0f Km2\n", area);//separar numeros de letras

    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("O PIB é: R$%.0lf\n", pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticos);
    printf("Digite o Número de Pontos Turísticos é: %d\n", numerodepontosturisticos);

    densidadepopulacional = populacao / area; //populacao dividida pela area da a densidade populacional;
    printf("A Densidade Populacional é: %.2f hab/Km2\n", densidadepopulacional);

    pibpercapita = pib / populacao; //pib dividido pela populacao da o pib per capita;
    printf("O PIB per Capita e: R$%.2f\n\n", pibpercapita);

    invdensidadepopulacional = n / densidadepopulacional; //divisao inversa da densidade populacional;

    superpoder = populacao + area + pib + numerodepontosturisticos + pibpercapita + (double) densidadepopulacional; //soma de todos os atributos numericos
    printf("O Super Poder da Carta 1 e: %.2lf\n\n\n", superpoder);

    printf("--------------------------------------------------------------------- \n\n");

    char carta2;
    char estado2[32];
    char codigodacarta2[32];
    char nomedacidade2[50];
    float area2;
    double pib2;
    unsigned long int populacao2;
    int numerodepontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;
    long double invdensidadepopulacional2;

    printf("Carta 2 \n", carta2);
    printf("Estado: B \n", estado2);
    printf("Código da Carta: B01 \n", codigodacarta2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade2);
    printf("A Cidade é: %s\n", nomedacidade2);

    printf("Digite o Número da População: ");
    scanf("%lu", &populacao2);
    printf("O Número da População é:  %ld\n", populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("A Área é: %.0f Km2\n", area2);//separar numeros de letras

    printf("Digite o PIB: ");
    scanf("%lf", &pib2);
    printf("O PIB é: R$%.0lf\n", pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticos2);
    printf("Digite o Número de Pontos Turísticos é: %d\n", numerodepontosturisticos2);

    densidadepopulacional2 = populacao2 / area2; //populacao dividida pela area da a densidade populacional;
    printf("A Densidade Populacional é: %.2f hab/Km2\n", densidadepopulacional2);

    pibpercapita2 = pib2 / populacao2; //pib dividido pela populacao da o pib per capita;
    printf("O PIB per Capita e: R$%.2f\n\n", pibpercapita2);

    invdensidadepopulacional2 = n / densidadepopulacional2; //divisao inversa da densidade populacional;

    superpoder2 = populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (double) densidadepopulacional2; //soma de todos os atributos numericos
    printf("O Super Poder da Carta 2 e: %.2lf\n\n\n", superpoder2);

    printf("--------------------------------------------------------------------- \n\n");

    int comp1, comp2, comp3, comp4, comp5, comp6, comp7;

    comp1 = area > area2;
    comp2 = populacao > populacao2;
    comp3 = pib > pib2;
    comp4 = numerodepontosturisticos > numerodepontosturisticos2;
    comp5 = densidadepopulacional > densidadepopulacional2;
    comp6 = pibpercapita > pibpercapita2;
    comp7 = superpoder > superpoder2;

    printf("Comparação entre as cartas: \n");
    printf("A Comparacao das Cartas sera: Area, populacao, pib, numerodepontosturisticos, densidadepopulacional, pibpercapita, superpoder (respectivamente)\n");
    printf("A carta com valor 1 sera verdadeira e a carta com valor 0 sera falsa\n");
    printf("A carta 1 tem area maior que a carta 2 ?: %d\n", comp1);
    printf("A carta 1 tem populacao maior que a carta 2 ?: %d\n", comp2);
    printf("A carta 1 tem pib maior que a carta 2 ?: %d\n", comp3);
    printf("A carta 1 tem numerodepontosturisticos maior que a carta 2 ?: %d\n", comp4);
    printf("A carta 1 tem densidadepopulacional maior que a carta 2 ?: %d\n", comp5);
    printf("A carta 1 tem pibpercapita maior que a carta 2 ?: %d\n", comp6);
    printf("A carta 1 tem superpoder maior que a carta 2 ?: %d\n", comp7);

    printf("---------------------------------------------------------------------- \n\n");

    int escolhaAtributo1;
    int escolhaAtributo2;
    int resultado;
    float soma1, soma2;
    float valor1Carta1;
    float valor1Carta2;
    float valor2Carta1;
    float valor2Carta2;

    escolhaAtributo1 = area,populacao, pib, numerodepontosturisticos, densidadepopulacional, pibpercapita;
    escolhaAtributo2 = area2, populacao2, pib2, numerodepontosturisticos2, densidadepopulacional2, pibpercapita2;
    

    printf("Escolha o primeiro Atributo a comparar: \n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &escolhaAtributo1);

    printf("Escolha o Segundo Atributo a comparar: \n");
    

    switch (escolhaAtributo1) {
        case 1: 
            printf("2 - Area\n");
            printf("3 - Pib\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Popoulacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 2: 
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 5:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("6 - PIB per capita\n");
            break;
        case 6:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        default:
            printf("Escolha invalida\n");
         break;

    }
    
    scanf("%d", &escolhaAtributo2);

    switch (escolhaAtributo2) {
        case 1: 
            printf("2 - Area\n");
            printf("3 - Pib\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Popoulacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 2: 
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per capita\n");
            break;
        case 5:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("6 - PIB per capita\n");
            break;
        case 6:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        default:
            printf("Escolha invalida\n");
         break;
    }

        switch(escolhaAtributo1)
{
    case 1:
        valor1Carta1 = populacao;
        valor1Carta2 = populacao2;
        resultado = (valor1Carta1 > valor1Carta2) ? 1 : 0;
        break;

    case 2:
        valor1Carta1 = area;
        valor1Carta2 = area2;
        resultado = (valor1Carta1 > valor1Carta2) ? 1 : 0;
        break;

    case 3:
        valor1Carta1 = pib;
        valor1Carta2 = pib2;
        resultado = (valor1Carta1 > valor1Carta2) ? 1 : 0;
        break;
    case 4: 
        valor1Carta1 = numerodepontosturisticos;
        valor1Carta2 = numerodepontosturisticos2;
        resultado = (valor1Carta1 > valor1Carta2) ? 1 : 0;
        break;
    case 5: 
        valor1Carta1 = densidadepopulacional;
        valor1Carta2 = densidadepopulacional2;
        resultado = (valor1Carta1 < valor1Carta2) ? 1 : 0;
        break;
    case 6:
        valor1Carta1 = pibpercapita;
        valor1Carta2 = pibpercapita2;
        resultado = (valor1Carta1 > valor1Carta2) ? 1 : 0;
        break;
    default:
        printf("Opcao invalida!\n");
        break;
}
  

     switch(escolhaAtributo2)
{
    case 1:
        valor2Carta1 = populacao;
        valor2Carta2 = populacao2;
        resultado = (valor2Carta1 > valor1Carta2) ? 1 : 0;
        break;

    case 2:
        valor2Carta1 = area;
        valor2Carta2 = area2;
        resultado = (valor2Carta1 > valor1Carta2) ? 1 : 0;
        break;

    case 3:
        valor2Carta1 = pib;
        valor2Carta2 = pib2;
        resultado = (valor2Carta1 > valor1Carta2) ? 1 : 0;
        break;
    case 4: 
        valor2Carta1 = numerodepontosturisticos;
        valor2Carta2 = numerodepontosturisticos2;
        resultado = (valor2Carta1 > valor1Carta2) ? 1 : 0;
        break;
    case 5: 
        valor2Carta1 = densidadepopulacional;
        valor2Carta2 = densidadepopulacional2;
        resultado = (valor2Carta1 < valor1Carta2) ? 1 : 0;
        break;
    case 6:
        valor2Carta1 = pibpercapita;
        valor2Carta2 = pibpercapita2;
        resultado = (valor2Carta1 > valor1Carta2) ? 1 : 0;
        break;
    default:
        printf("Opcao invalida!\n");
        break;
}
  

    soma1 = valor1Carta1 + valor2Carta1;
    soma2 = valor1Carta2 + valor2Carta2;

  printf("------------------- RESULTADO DA COMPARACAO ENTRE AS CARTAS ---------------\n");

  

   if(soma1>soma2)
{
    printf("Carta 1 venceu! Obteve a soma de : %f\n", soma1);
}
else if(soma2>soma1)
{
    printf("Carta 2 venceu! Obteve a soma de : %.2f\n", soma2);
}
else
{
    printf("Empate!\n");
}

    return 0;
}