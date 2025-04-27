/*Escreva um programa em linguagem C que pergunte para a pessoa informar dois números inteiros e
depois forneça o resultado da divisão e o seu resto. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int div, n1, n2, res;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	div = n1 / n2;
	res = n1 % n2;
	printf("\nO resultado da divisão é %d e o resto é %d\n",div,res);
			
	return 0;
}