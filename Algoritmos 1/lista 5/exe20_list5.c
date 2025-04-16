#include <stdio.h>
#include <math.h>  // Para a constante M_PI

int main() {
    float raio, comprimento, area, volume;

    // Solicita o valor do raio da esfera
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    // Calcula o comprimento, a área e o volume da esfera
    comprimento = 2 * M_PI * raio;  // Comprimento = 2 * PI * Raio
    area = M_PI * pow(raio, 2);     // Área = PI * Raio^2
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);  // Volume = (4/3) * PI * Raio^3

    // Exibe os resultados
    printf("Comprimento da esfera: %.2f\n", comprimento);
    printf("Área da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
