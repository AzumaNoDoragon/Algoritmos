#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float distancia, volume, consumoMedio;

    // Lendo a distância total percorrida
    printf("Digite a distância total percorrida (em Km): ");
    scanf("%f", &distancia);

    // Lendo o volume de combustível consumido
    printf("Digite o volume de combustível consumido (em litros): ");
    scanf("%f", &volume);

    // Verificando se o volume é maior que zero para evitar divisão por zero
    if (volume > 0) {
        // Calculando o consumo médio
        consumoMedio = distancia / volume;

        // Imprimindo o resultado
        printf("O consumo médio do automóvel é: %.2f Km/l\n", consumoMedio);
    } else {
        printf("O volume de combustível deve ser maior que zero.\n");
    }

    return 0;
}
