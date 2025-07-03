#include <stdio.h>

int main() {
    printf("Desafio das Cartas no SuperTrunfo\n");
    printf("Novo Commit\n");

}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_da_Cidade = 22;
    char nome_da_Cidade[50] = "Fortaleza";
    int populacao = 2687000; // População estimada
    float area = 313.0; // Área em km²
    float pib = 1000000000.0; // PIB em reais
    int pontosTuristicos = 10; // Número de pontos turísticos
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo_da_Cidade);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_Cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Cidade:\n");
    printf("Código: %d\n", codigo_da_Cidade);
    printf("Nome: %s\n", nome_da_Cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    

    return 0;
}
