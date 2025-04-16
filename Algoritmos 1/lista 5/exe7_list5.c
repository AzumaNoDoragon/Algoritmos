#include <stdio.h>
#include <locale.h>
#include <math.h> // Biblioteca para a função pow()

int main() {
    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    int R, S, D;

    // Lendo os três números inteiros positivos
    printf("Digite o valor de A (positivo): ");
    scanf("%d", &A);
    printf("Digite o valor de B (positivo): ");
    scanf("%d", &B);
    printf("Digite o valor de C (positivo): ");
    scanf("%d", &C);

    // Verificando se os valores são positivos
    if (A > 0 && B > 0 && C > 0) {
        // Calculando R e S
        R = pow((A + B), 2);
        S = pow((B + C), 2);

        // Calculando D
        D = R + S;

        // Imprimindo o resultado
        printf("O valor de D é: %d\n", D);
    } else {
        printf("Todos os valores devem ser inteiros positivos.\n");
    }

    return 0;
}
