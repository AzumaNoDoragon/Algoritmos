/*Obter um n� qualquer e informar se este n� � par, �mpar, positivo ou negativo.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int num, n;
	
	printf("Digite seu n�mero: ");
	scanf("%d",&n);

	num = n % 2;
	
	printf("\nO N�mero � ");
	if (num == 0) 
		printf("par e ");
	if (num != 0)
		printf("�mpar e ");
	if (n >= 0)
		printf("positivo\n\n");
	if (n <= 0)
		printf("negativo\n\n");
	
	return 0;
}