#include <stdio.h>
#include <locale.h>
#include <math.h> // Biblioteca para a fun��o sqrt

int main() {
    setlocale(LC_ALL, "Portuguese");
    float L1, L2, L3;
    float T, area;

    // Lendo os comprimentos dos lados do tri�ngulo
    printf("Digite o comprimento do lado L1: ");
    scanf("%f", &L1);
    printf("Digite o comprimento do lado L2: ");
    scanf("%f", &L2);
    printf("Digite o comprimento do lado L3: ");
    scanf("%f", &L3);

    // Verificando se os lados formam um tri�ngulo v�lido
    if (L1 + L2 > L3 && L1 + L3 > L2 && L2 + L3 > L1) {
        // Calculando T (semi-per�metro)
        T = (L1 + L2 + L3) / 2;

        // Calculando a �rea usando a f�rmula de Heron
        area = sqrt(T * (T - L1) * (T - L2) * (T - L3));

        // Imprimindo o resultado
        printf("A �rea do tri�ngulo �: %.2f\n", area);
    } else {
        printf("Os comprimentos fornecidos n�o formam um tri�ngulo v�lido.\n");
    }

    return 0;
}
