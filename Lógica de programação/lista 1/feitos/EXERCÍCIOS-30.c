/* Calcular e apresentar a quantidade de galões cheios de 5 litros de combustível 
necessária em uma viagem utilizando-se um automóvel que faz 12Km/l. O usuário 
fornecerá o tempo gasto e a velocidade média na viagem */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){  
	setlocale(LC_ALL,"PORTUGUESE");
	float t1, v1, soma;
	
	printf("Para saber a quantidade de galões: \n");
	printf("Digite o tempo em horas: \n");
	scanf("%f",&t1);
	printf("Digite a velocidade média em km: \n");
	scanf("%f",&v1);
	soma = ((t1 * v1) / 60);
	printf("\nSerá necessário %.0f galões de combustível\n",ceil(soma));
			
	return 0;
}