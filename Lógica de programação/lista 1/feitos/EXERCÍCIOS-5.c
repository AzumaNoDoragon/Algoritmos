//Calcular a velocidade m�dia para um ve�culo que percorre uma dist�ncia X em um tempo Y.

#include <stdio.h>
#include <locale.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float d1, t1, soma;

	printf("Para calcular a velocidade da m�dia:\n");
	printf("Digite a dist�ncia em km: ");
	scanf("%f",&d1);
	printf("Digite o tempo em horas: ");
	scanf("%f",&t1);
	soma = d1 / t1;
	printf("\nA velocidade m�dia � de %.2f km/h\n",soma);
	
	return 0;
}