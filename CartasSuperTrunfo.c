#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - países\n");
    char carta1[20] ;
    char Estado  = 'B';
    char codigo[20] = "B01";
    char Cidade[20] = "Savaldor";
    int População = 200000000;
    float Área = 150.50;
    float PIB = 690.900;
    int numerodepontosTuristicos = 100;

   printf("carta1: %s\n", carta1);

   printf("Digite o nome do Estado:");
   scanf("%c", &Estado);
   printf("Estado: %c\n", Estado);

   printf("Digite o Codigo:");
   scanf("%s", codigo );
   printf("Codigo: %s\n", codigo);

   printf("Digite o nome da Cidade:");
   scanf("%s", Cidade);
   printf("Nome da Cidade: %s\n", Cidade);

   printf("Digite o numero de população:");
   scanf("%d", &População);
   printf("População: %d\n", População);

   printf("Digite o tamanho da Área:");
   scanf("%f", &Área);
   printf("Área: %.2f km² \n",Área);
 

   printf("Digite o numero do PIB:");
   scanf("%f", &PIB);
   printf("PIB: %.2f Bilhões\n", PIB);

   printf("Digite o numero de pontos Turisticos:");
   scanf("%d",  &numerodepontosTuristicos);
   printf("numeros de Pontos turisticos: %d\n", numerodepontosTuristicos);

   char carta2[20];
   char estado = 'c';
   char Codigo [20] = "C02";
   char cidade [20] = " Fortaleza";
   int população = 2000000;
   float área = 150.62;
   float Pib = 333.10;
   int Numerodepontosturisticos = 50;

   printf("carta2:%s\n", carta2);
  
  printf("Digite o nome do Estado:");
  scanf("%c",&estado);
  printf("Estado: %c\n", estado);

   printf("Digite o codigo:");
   scanf("%s", codigo);
   printf("Codigo:%s\n", codigo);

   printf("Digite o nome da cidade:");
   scanf("%s", cidade);
   printf("Cidade: %s\n", cidade);

   printf("Digite o nume de população:");
   scanf("%d", &população);
   printf("população:%d\n", população);

   printf("Digite o tamanho da Área:");
   scanf("%f", &área);
   printf("Área: %.2f km²\n", área);

   printf("Digite o numero do PIB:");
   scanf("%f",&Pib); 
   printf("PIB: %2.f Bilhões\n", Pib);

   printf("Digite o numero de pontos Turisticos:");
   scanf("%d", &Numerodepontosturisticos);
   printf("Numero de pontos Turisticos: %d\n", Numerodepontosturisticos);








  return 0;
}
