/*Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo m�dio no �ltimo
ano. Escreva um programa que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, de
acordo com a tabela a seguir. Mostre o saldo m�dio e o valor do cr�dito.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float sm, soma;
	
	printf("Digite seu saldo m�dio do ultimo ano, para que seja calculado seu cr�dito\n");
	scanf("%f",&sm);
	
	if (sm <= 200){
		soma = sm * 0.10;
		printf("\nSeu cr�dito ser� de %.2f\n",soma);
		}
	if ((sm > 200) && (sm <= 300)){
		soma = sm * 0.20;
		printf("\nSeu cr�dito ser� de %.2f\n",soma);
		}
	if ((sm > 300) && (sm <= 400)){
		soma = sm * 0.25;
		printf("\nSeu cr�dito ser� de %.2f\n",soma);
	  	}	
	if (sm > 400){
		soma = sm * 0.30;
		printf("\nSeu cr�dito ser� de %.2f\n",soma);
		}
		
	return 0;
}