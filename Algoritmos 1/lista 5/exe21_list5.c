#include <stdio.h>

int main() {
    float valorPrestacao, taxaJuros, tempoAtraso, valorAtualizado;

    // Solicita os dados ao usu�rio
    printf("Digite o valor da presta��o: ");
    scanf("%f", &valorPrestacao);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxaJuros);
    printf("Digite o tempo de atraso (em meses): ");
    scanf("%f", &tempoAtraso);

    // Calcula o valor atualizado da presta��o
    valorAtualizado = valorPrestacao + (valorPrestacao * (taxaJuros / 100) * tempoAtraso);

    // Exibe o valor atualizado
    printf("O valor da presta��o atualizada com atraso �: %.2f\n", valorAtualizado);

    return 0;
}
