#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float a11, a12, a21, a22;
    float determinante;

    // Lendo os elementos da matriz 2x2
    printf("Digite o valor de a11: ");
    scanf("%f", &a11);
    printf("Digite o valor de a12: ");
    scanf("%f", &a12);
    printf("Digite o valor de a21: ");
    scanf("%f", &a21);
    printf("Digite o valor de a22: ");
    scanf("%f", &a22);

    // Calculando o determinante
    determinante = (a11 * a22) - (a21 * a12);

    // Imprimindo o resultado
    printf("O valor do determinante da matriz é: %.2f\n", determinante);

    return 0;
}
