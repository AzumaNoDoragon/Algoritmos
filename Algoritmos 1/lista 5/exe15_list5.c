#include <stdio.h>
#include <locale.h>
#include <math.h>  // Para a função pow

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Definindo as variáveis
    float taxa, aplicacao, valor_acumulado;
    int meses;

    // Solicita ao usuário as entradas
    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &aplicacao);

    printf("Digite a taxa de juros mensal (em percentual): ");
    scanf("%f", &taxa);

    printf("Digite o número de meses (n): ");
    scanf("%d", &meses);

    // Convertendo a taxa para forma decimal
    taxa = taxa / 100;

    // Calculando o valor acumulado usando a fórmula fornecida
    valor_acumulado = (((pow(1 + taxa, meses) - 1) / taxa) * aplicacao);

    // Exibindo o valor acumulado
    printf("O valor acumulado após %d meses é: R$ %.2f\n", meses, valor_acumulado);

    return 0;
}
