#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int M, N;
    int L1, L2, H;

    // Entrada dos valores
    printf("Digite dois números inteiros positivos (M e N), onde M > N:\n");
    printf("M: ");
    scanf("%d", &M);
    printf("N: ");
    scanf("%d", &N);

    // Verifica se M é maior que N e se ambos são positivos
    if (M > N && M > 0 && N > 0) {
        // Cálculo dos lados e da hipotenusa
        L1 = (M * M) - (N * N);
        L2 = 2 * M * N;
        H = (M * M) + (N * N);

        // Exibe os resultados
        printf("L1: %d\n", L1);
        printf("L2: %d\n", L2);
        printf("Hipotenusa: %d\n", H);
    } else {
        printf("Erro: Certifique-se de que M > N e ambos são positivos.\n");
    }

    return 0;
}
