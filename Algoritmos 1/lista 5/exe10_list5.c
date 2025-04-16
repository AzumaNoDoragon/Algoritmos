#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float distancia, volume, consumoMedio;

    // Lendo a dist�ncia total percorrida
    printf("Digite a dist�ncia total percorrida (em Km): ");
    scanf("%f", &distancia);

    // Lendo o volume de combust�vel consumido
    printf("Digite o volume de combust�vel consumido (em litros): ");
    scanf("%f", &volume);

    // Verificando se o volume � maior que zero para evitar divis�o por zero
    if (volume > 0) {
        // Calculando o consumo m�dio
        consumoMedio = distancia / volume;

        // Imprimindo o resultado
        printf("O consumo m�dio do autom�vel �: %.2f Km/l\n", consumoMedio);
    } else {
        printf("O volume de combust�vel deve ser maior que zero.\n");
    }

    return 0;
}
