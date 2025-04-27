/*Calcular o preço de venda de um carro. O preço de venda é formado pelo preço da montadora,
mais 15% de lucro, mais 11% de IPI, mais 17% de ICM. As porcentagens são sobre o preço da montadora,
que é lido. Informe o preço final e o valor dos impostos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float pm, vi, soma;

	printf("Digite o preço cobrado pela montadora: ");	
	scanf("%f",&pm);
	soma = pm * 1.5 * 1.1 * 1.7;
	vi = soma - pm;
	printf("\nO valor final é %.2f e o valor dos impostos são %.2f\n",soma,vi);
			
	return 0;
}