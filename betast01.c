#include <stdio.h>
#include <string.h>

int main() {
    int pont1, pont2, pop1, pop2;//variaveis de pontos turísticos e populaçãp
    float area1, area2, pib1, pib2;//variaveis de area e pib
    char estado1, estado2;//variaveis de estado 
    char codigo1[4];//variavel sem valor com tamanho de 3 caracteres
    char codigo2[4];
    char cidade1[50], cidade2[50];

    printf("Digite a inicial do seu estado, entre A a H :\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo do seu estado:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade?:\n");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &pop1);

    printf("Qual a área total da cidade:\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Essa cidade tem quantos pontos turísticos?:\n");
    scanf("%d", &pont1);

    /*Usei #include  <string.h> e tbm  ("%[^\n]") na linha de cidade para capturar cidades
    com duas palavras */
    printf("Dados da primeira carta armazenados!\n");
    printf("Segunda carta\n");

    printf("Digite a inicial do seu estado, entre A a H :\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo do seu estado:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade?:\n");
    scanf(" %[^\n]", cidade2); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &pop2);

    printf("Qual a área total da cidade:\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Essa cidade tem quantos pontos turísticos?:\n");
    scanf("%d", &pont2);
// apos coleta agora apresentação das cartas ! uso de \n para dar espaç
    printf("\n");
    printf("Carta 1 :\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População da cidade: %d\n", pop1);
    printf("Área da cidade: %.2fkm²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos da cidade: %d\n", pont1);

     printf("\n");//espaço antes da segunda carta

    printf("Carta 2 :\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População da cidade: %d\n", pop2);
    printf("Área da cidade: %.2fkm²\n", area2);
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos da cidade: %d\n", pont2);
    return 0;

}

   


