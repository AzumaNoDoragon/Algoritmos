#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	float velocidade, tempo, distancia, combustivel_necessario;
    int galoes_necessarios;
	
	printf("Informe a velocidade média da viagem (km/h): ");
    scanf("%f", &velocidade);
    printf("Informe o tempo da viagem (horas): ");
    scanf("%f", &tempo);

	distancia = velocidade * tempo;
	combustivel_necessario = distancia / 12;
	galoes_necessarios = ceil(combustivel_necessario / 5);
	
	printf("\nVocê precisará de %d galões de combustível para realizar a viagem.\n", galoes_necessarios);
	
	return 0;
}