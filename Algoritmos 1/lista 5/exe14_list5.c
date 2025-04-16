#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float taxa_fixa_diaria, taxa_por_km, desconto, valor_total;
    int dias, km_rodado;
    
    // Lendo os dados de entrada
    printf("Digite a taxa fixa por dia: ");
    scanf("%f", &taxa_fixa_diaria);

    printf("Digite a taxa por km rodado: ");
    scanf("%f", &taxa_por_km);

    printf("Digite o número de dias alugados: ");
    scanf("%d", &dias);

    printf("Digite o número de quilômetros rodados: ");
    scanf("%d", &km_rodado);

    // Calculando o valor da taxa fixa sem desconto
    float taxa_fixa_sem_desconto = taxa_fixa_diaria * dias;

    // Calculando o desconto de 10% sobre a taxa fixa
    desconto = taxa_fixa_sem_desconto * 0.10;

    // Calculando o valor total do aluguel
    valor_total = (taxa_fixa_sem_desconto - desconto) + (km_rodado * taxa_por_km);

    // Exibindo os resultados
    printf("\nResumo do aluguel:\n");
    printf("Número de dias alugados: %d\n", dias);
    printf("Quilometragem rodada: %d km\n", km_rodado);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor total do aluguel: R$ %.2f\n", valor_total);

    return 0;
}
