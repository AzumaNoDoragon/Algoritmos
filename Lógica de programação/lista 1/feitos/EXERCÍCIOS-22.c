/*Escreva um programa em linguagem C para calcular a raiz quadrada de um n�mero inteiro qualquer
fornecido pela pessoa. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, soma;
	
	printf("Digite seu n�mero: ");
	scanf("%d",&n1);
	soma = pow(n1,1.0/2.0);
	printf("A raiz de %d � %d",n1,soma);
	
	return 0;
}