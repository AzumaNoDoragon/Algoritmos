#include <stdio.h>
#include <locale.h>
#include <math.h>  // Para a fun��o pow

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Definindo as vari�veis
    float taxa, aplicacao, valor_acumulado;
    int meses;

    // Solicita ao usu�rio as entradas
    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &aplicacao);

    printf("Digite a taxa de juros mensal (em percentual): ");
    scanf("%f", &taxa);

    printf("Digite o n�mero de meses (n): ");
    scanf("%d", &meses);

    // Convertendo a taxa para forma decimal
    taxa = taxa / 100;

    // Calculando o valor acumulado usando a f�rmula fornecida
    valor_acumulado = (((pow(1 + taxa, meses) - 1) / taxa) * aplicacao);

    // Exibindo o valor acumulado
    printf("O valor acumulado ap�s %d meses �: R$ %.2f\n", meses, valor_acumulado);

    return 0;
}
