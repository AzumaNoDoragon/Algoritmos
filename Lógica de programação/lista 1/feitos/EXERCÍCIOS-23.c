/*Escreva um programa em linguagem C para calcular a operação de um número elevado a outro
(potência). A pessoa deve informar a base e o expoente que deverão ser números inteiros.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int bas, exp, soma;

	printf("digite a base e em seguida o expoente para calcular a potência\n");
	scanf("%d%d",&bas,&exp);
	soma = pow (bas,exp);
	printf("\no resultado é: %d\n",soma);
	
	return 0;
}