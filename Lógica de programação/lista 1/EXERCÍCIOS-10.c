/* Escreva um programa em linguagem C que contenha a declara��o de 
tr�s constantes, cada uma possuindo um tipo e valor diferente. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1 = 10;
	float n2 = 10.5;
	char l1 = 'A';
		
	printf("O numero inteiro �: %d\n",n1);
	printf("O numero real �: %.2f\n",n2);
	printf("A letra �: %c\n",l1);
	printf("\nN�mero inteiro %d, numero real %.2f e sua letra � %c\n", n1, n2, l1);
	
	return 0;
}
 