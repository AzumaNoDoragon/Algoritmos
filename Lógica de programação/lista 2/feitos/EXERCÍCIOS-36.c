/*Escreva um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual de
aumento encontra-se na tabela a seguir.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, soma;
	
	printf("Para calcular o valor do reajuste digite o valor do seu sal�rio\n");
	scanf("%f",&n1);
	
	if (n1 <= 300){
		soma = n1 * 0.35;
		n1 = n1 + soma;
		printf("\nO valor do reajuste � %.2f, seu sal�rio passou para %.2f\n",soma,n1);
		}
		else{
			soma = n1 * 0.15;
			n1 = n1 + soma;
			printf("\nO valor do reajuste � %.2f, seu sal�rio passou para %.2f\n",soma,n1);
		}
	
	return 0;
}