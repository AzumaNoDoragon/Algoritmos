#include <stdio.h>
#include <locale.h>
#include <math.h>  // Biblioteca para funções trigonométricas

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Definindo a variável para o ângulo em graus
    float angulo_em_graus, angulo_em_radianos;

    // Solicita ao usuário o valor do ângulo em graus
    printf("Digite o ângulo em graus: ");
    scanf("%f", &angulo_em_graus);

    // Converte o ângulo de graus para radianos
    angulo_em_radianos = angulo_em_graus * M_PI / 180.0;

    // Calcula o seno, cosseno e tangente
    float seno = sin(angulo_em_radianos);
    float cosseno = cos(angulo_em_radianos);
    float tangente = tan(angulo_em_radianos);

    // Exibe os resultados
    printf("Seno de %.2f graus: %.4f\n", angulo_em_graus, seno);
    printf("Cosseno de %.2f graus: %.4f\n", angulo_em_graus, cosseno);
    printf("Tangente de %.2f graus: %.4f\n", angulo_em_graus, tangente);

    return 0;
}
