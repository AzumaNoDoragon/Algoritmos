#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float massa, aceleracao, tempo;
    float velocidade, comprimentoPista, trabalho;

    // Lendo os dados de entrada
    printf("Digite a massa do avião em toneladas: ");
    scanf("%f", &massa);
    massa = massa * 1000;  // Convertendo a massa para kg (1 tonelada = 1000 kg)

    printf("Digite a aceleração em m/s²: ");
    scanf("%f", &aceleracao);

    printf("Digite o tempo de decolagem em segundos: ");
    scanf("%f", &tempo);

    // Calculando a velocidade atingida (em m/s)
    velocidade = aceleracao * tempo;

    // Convertendo a velocidade para km/h
    float velocidadeKmH = velocidade * 3.6;

    // Calculando o comprimento da pista
    comprimentoPista = (velocidade * velocidade) / (2 * aceleracao);

    // Calculando o trabalho mecânico realizado
    trabalho = (massa * velocidade * velocidade) / 2;

    // Exibindo os resultados
    printf("Velocidade atingida: %.2f km/h\n", velocidadeKmH);
    printf("Comprimento da pista: %.2f metros\n", comprimentoPista);
    printf("Trabalho mecânico realizado: %.2f joules\n", trabalho);

    return 0;
}
