/*Escreva um programa em linguagem C que pergunte para a pessoa informar dois n�meros inteiros e
depois forne�a o resultado da divis�o e o seu resto. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int div, n1, n2, res;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	div = n1 / n2;
	res = n1 % n2;
	printf("\nO resultado da divis�o � %d e o resto � %d\n",div,res);
			
	return 0;
}