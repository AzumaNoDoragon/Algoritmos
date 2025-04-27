/* Calcular e apresentar a quantidade de gal�es cheios de 5 litros de combust�vel 
necess�ria em uma viagem utilizando-se um autom�vel que faz 12Km/l. O usu�rio 
fornecer� o tempo gasto e a velocidade m�dia na viagem */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){  
	setlocale(LC_ALL,"PORTUGUESE");
	float t1, v1, soma;
	
	printf("Para saber a quantidade de gal�es: \n");
	printf("Digite o tempo em horas: \n");
	scanf("%f",&t1);
	printf("Digite a velocidade m�dia em km: \n");
	scanf("%f",&v1);
	soma = ((t1 * v1) / 60);
	printf("\nSer� necess�rio %.0f gal�es de combust�vel\n",ceil(soma));
			
	return 0;
}