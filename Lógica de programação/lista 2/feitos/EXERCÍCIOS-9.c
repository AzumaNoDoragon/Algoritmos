/*Criar um programa que leia 2 n�meros. Caso o primeiro n�mero lido seja maior que o segundo,
imprima na tela o primeiro n�mero menos o segundo, caso contr�rio mostre a soma dos dois n�meros.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, calc;
	
	printf("Digite dois n�meros separados por enter\n");
	scanf("%f%f",&n1,&n2);

	if (n1 > n2){
		calc = n1 - n2;
		printf("\nA subtra��o � %.2f\n",calc);
	   	}
		else{
			calc = n1 + n2;
			printf("\nA soma � %.2f\n",calc);
		}
	
	
	return 0;
}