/*Escreva um programa em linguagem C que pergunte para a pessoa informar dois n�meros reais e
depois forne�a o resultado da soma, subtra��o, multiplica��o e divis�o entre os n�meros informados.
Mostre o resultado na tela de forma clara usando a formata��o correta do comando printf */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, soma, sub, mult, div;
		
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	printf("\nA soma � %.2f",soma);
	sub = n1 - n2;
	printf("\nA subtra��o � %.2f",sub);
	mult = n1 * n2;
	printf("\nA multiplica��o � %.2f",mult);
	div = n1 / n2;
	printf("\nA divis�o � %.2f\n",div);
			
	return 0;
}