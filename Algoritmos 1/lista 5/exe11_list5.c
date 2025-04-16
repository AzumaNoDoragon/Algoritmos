#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorDolar, taxaDolar, percentualICMS, percentualLucro;
    float valorReais, valorComICMS, valorComLucro, valorFinal;

    // Lendo os valores de entrada
    printf("Digite o valor da compra em dólares: ");
    scanf("%f", &valorDolar);

    printf("Digite a taxa do dólar no dia da compra: ");
    scanf("%f", &taxaDolar);

    printf("Digite o percentual de ICMS (em %%): ");
    scanf("%f", &percentualICMS);

    printf("Digite o percentual de lucro da empresa (em %%): ");
    scanf("%f", &percentualLucro);

    // Convertendo o valor da compra para reais
    valorReais = valorDolar * taxaDolar;

    // Calculando o valor com ICMS
    valorComICMS = valorReais * (1 + percentualICMS / 100);

    // Calculando o valor com lucro
    valorComLucro = valorComICMS * (1 + percentualLucro / 100);

    // Valor final a ser pago
    valorFinal = valorComLucro;

    // Imprimindo o resultado
    printf("O valor a ser pago em reais é: R$ %.2f\n", valorFinal);

    return 0;
}
