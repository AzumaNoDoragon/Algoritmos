/*Escreva um programa em linguagem C que pergunte para a pessoa informar dois n�meros inteiros e
depois forne�a o resultado da soma, subtra��o, multiplica��o e divis�o entre os n�meros informados.
Mostre o resultado na tela de forma clara usando a formata��o correta do comando printf.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, soma, sub, mult, div;
		
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	soma = n1 + n2;
	printf("\nA soma � %d",soma);
	sub = n1 - n2;
	printf("\nA subtra��o � %d",sub);
	mult = n1 * n2;
	printf("\nA multiplica��o � %d",mult);
	div = n1 / n2;
	printf("\nA divis�o � %d\n",div);
			
	return 0;
}