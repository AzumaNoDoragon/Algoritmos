/* Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel 
do tipo int chamada numero. Declare tamb�m outra vari�vel do tipo int 
chamada x atribuindo-lhe o valor 100. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int numero, x, soma;
	x = 100;
	
	printf("digite seu numero: ");
	scanf("%d",&numero);
	soma = x + numero;
	printf("A sua atribui��o � %d",soma);
	
	return 0;
	}