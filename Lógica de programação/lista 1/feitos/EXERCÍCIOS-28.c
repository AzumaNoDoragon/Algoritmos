/*Calcular o pre�o de venda de um carro. O pre�o de venda � formado pelo pre�o da montadora,
mais 15% de lucro, mais 11% de IPI, mais 17% de ICM. As porcentagens s�o sobre o pre�o da montadora,
que � lido. Informe o pre�o final e o valor dos impostos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float pm, vi, soma;

	printf("Digite o pre�o cobrado pela montadora: ");	
	scanf("%f",&pm);
	soma = pm * 1.5 * 1.1 * 1.7;
	vi = soma - pm;
	printf("\nO valor final � %.2f e o valor dos impostos s�o %.2f\n",soma,vi);
			
	return 0;
}