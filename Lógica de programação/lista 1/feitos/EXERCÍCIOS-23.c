/*Escreva um programa em linguagem C para calcular a opera��o de um n�mero elevado a outro
(pot�ncia). A pessoa deve informar a base e o expoente que dever�o ser n�meros inteiros.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int bas, exp, soma;

	printf("digite a base e em seguida o expoente para calcular a pot�ncia\n");
	scanf("%d%d",&bas,&exp);
	soma = pow (bas,exp);
	printf("\no resultado �: %d\n",soma);
	
	return 0;
}