/*Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel do tipo int chamada
n�mero. Pe�a ent�o para a pessoa informar por meio do teclado um valor para esta vari�vel. Se o valor
for menor que 0 exiba a seguinte mensagem �O n�mero digitado (numero) � menor que 0.�. Caso
contr�rio exiba a mensagem �O n�mero digitado (numero) � maior ou igual a 0.�. O trecho (numero)
se refere ao valor da vari�vel n�mero. Exemplo de funcionamento do programa:*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	
	printf("Digite o valor: ");
	scanf("%d",&num);
	
	if (num < 0){
		printf("\nO n�mero digitado %d � menor que 0.\n",num);
		}
		else{
			printf("\nO n�mero digitado %d � maior ou igual a 0.\n",num);
		}
	
	return 0;
}
