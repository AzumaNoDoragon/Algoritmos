#include <stdio.h>
#include <locale.h>
#include <math.h> // Biblioteca para a constante M_PI

int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio, altura;
    float area, volume;

    // Lendo o raio e a altura do cilindro
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    // Calculando a área e o volume
    area = 2 * M_PI * raio * (altura + raio);
    volume = M_PI * pow(raio, 2) * altura;

    // Imprimindo os resultados
    printf("A área do cilindro é: %.2f\n", area);
    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}
