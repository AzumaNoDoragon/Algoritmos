/*Criar um programa que leia 2 números. Caso o primeiro número lido seja maior que o segundo,
imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, calc;
	
	printf("Digite dois números separados por enter\n");
	scanf("%f%f",&n1,&n2);

	if (n1 > n2){
		calc = n1 - n2;
		printf("\nA subtração é %.2f\n",calc);
	   	}
		else{
			calc = n1 + n2;
			printf("\nA soma é %.2f\n",calc);
		}
	
	
	return 0;
}