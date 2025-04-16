#include <stdio.h>

int main() {
    float valorPrestacao, taxaJuros, tempoAtraso, valorAtualizado;

    // Solicita os dados ao usuário
    printf("Digite o valor da prestação: ");
    scanf("%f", &valorPrestacao);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxaJuros);
    printf("Digite o tempo de atraso (em meses): ");
    scanf("%f", &tempoAtraso);

    // Calcula o valor atualizado da prestação
    valorAtualizado = valorPrestacao + (valorPrestacao * (taxaJuros / 100) * tempoAtraso);

    // Exibe o valor atualizado
    printf("O valor da prestação atualizada com atraso é: %.2f\n", valorAtualizado);

    return 0;
}
