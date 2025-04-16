#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float A, B, C;
    float delta;

    // Lendo os coeficientes A, B e C
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Calculando o discriminante (delta)
    delta = (B * B) - (4 * A * C);

    // Imprimindo o resultado
    printf("O valor do discriminante (delta) é: %.2f\n", delta);

    return 0;
}
