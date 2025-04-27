/* Escreva um programa em linguagem C que contenha a declaração de uma variável 
do tipo float chamada número. Declare também outra variável do tipo float
chamada x atribuindo-lhe o valor 100.25. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float numero, x, soma;
	x = 100.25;
	
	printf("Digite o valor a ser atribuído: ");
	scanf("%f", &numero);
	soma = x + numero;
	printf("o valor é %.2f", soma);

	return 0;
}
 