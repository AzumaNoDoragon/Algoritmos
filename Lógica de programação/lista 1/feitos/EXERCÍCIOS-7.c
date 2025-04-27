/* Escreva um programa em linguagem C que contenha a declaração de uma variável 
do tipo int chamada numero. Declare também outra variável do tipo int 
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
	printf("A sua atribuição é %d",soma);
	
	return 0;
	}