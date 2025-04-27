/*Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último
ano. Escreva um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de
acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float sm, soma;
	
	printf("Digite seu saldo médio do ultimo ano, para que seja calculado seu crédito\n");
	scanf("%f",&sm);
	
	if (sm <= 200){
		soma = sm * 0.10;
		printf("\nSeu crédito será de %.2f\n",soma);
		}
	if ((sm > 200) && (sm <= 300)){
		soma = sm * 0.20;
		printf("\nSeu crédito será de %.2f\n",soma);
		}
	if ((sm > 300) && (sm <= 400)){
		soma = sm * 0.25;
		printf("\nSeu crédito será de %.2f\n",soma);
	  	}	
	if (sm > 400){
		soma = sm * 0.30;
		printf("\nSeu crédito será de %.2f\n",soma);
		}
		
	return 0;
}