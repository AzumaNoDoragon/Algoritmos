/* Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel 
do tipo float chamada n�mero. Declare tamb�m outra vari�vel do tipo float
chamada x atribuindo-lhe o valor 100.25. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float numero, x, soma;
	x = 100.25;
	
	printf("Digite o valor a ser atribu�do: ");
	scanf("%f", &numero);
	soma = x + numero;
	printf("o valor � %.2f", soma);

	return 0;
}
 