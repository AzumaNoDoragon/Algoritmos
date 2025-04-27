/*Escreva um programa em linguagem C que pergunte para a pessoa informar dois números reais e
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os números informados.
Mostre o resultado na tela de forma clara usando a formatação correta do comando printf */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, soma, sub, mult, div;
		
	printf("Digite o primeiro número: ");
	scanf("%f",&n1);
	printf("Digite o segundo número: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	printf("\nA soma é %.2f",soma);
	sub = n1 - n2;
	printf("\nA subtração é %.2f",sub);
	mult = n1 * n2;
	printf("\nA multiplicação é %.2f",mult);
	div = n1 / n2;
	printf("\nA divisão é %.2f\n",div);
			
	return 0;
}