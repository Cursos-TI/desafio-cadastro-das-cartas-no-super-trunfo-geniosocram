#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - países\n");
    char carta1[20] ;
    char Estado [20] = "Bahia";
    char codigo[20] = "B01";
    char Cidade[20] = "Savaldor";
    int População = 200000000;
    float Àrea = 600.00000, km2;
    float PIB = 62.9,B ;
    int numerodepontosTuristicos = 100;

    printf("carta1: %s\n", carta1);

printf("Digite o nome do Estado:");
scanf("%s", Estado);
printf("Estado: %s\n", Estado);

printf("Digite o Codigo:");
scanf("%s", codigo );
printf("Codigo: %s\n", codigo);

printf("Nome da Cidade: %s\n", Cidade);


printf("População: %d\n", População);


printf("Área: %f\n", Àrea);


printf("numeros de Ponto turisticos: %d\n", numerodepontosTuristicos);

   


// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
