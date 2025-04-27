/*Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo int chamada
número. Peça então para a pessoa informar por meio do teclado um valor para esta variável. Se o valor
for menor que 0 exiba a seguinte mensagem “O número digitado (numero) é menor que 0.”. Caso
contrário exiba a mensagem “O número digitado (numero) é maior ou igual a 0.”. O trecho (numero)
se refere ao valor da variável número. Exemplo de funcionamento do programa:*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	
	printf("Digite o valor: ");
	scanf("%d",&num);
	
	if (num < 0){
		printf("\nO número digitado %d é menor que 0.\n",num);
		}
		else{
			printf("\nO número digitado %d é maior ou igual a 0.\n",num);
		}
	
	return 0;
}
