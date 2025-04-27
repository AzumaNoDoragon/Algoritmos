/*Obter um nº qualquer e informar se este nº é par, ímpar, positivo ou negativo.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int num, n;
	
	printf("Digite seu número: ");
	scanf("%d",&n);

	num = n % 2;
	
	printf("\nO Número é ");
	if (num == 0) 
		printf("par e ");
	if (num != 0)
		printf("ímpar e ");
	if (n >= 0)
		printf("positivo\n\n");
	if (n <= 0)
		printf("negativo\n\n");
	
	return 0;
}