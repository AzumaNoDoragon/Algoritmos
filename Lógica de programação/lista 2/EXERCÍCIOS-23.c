/*Escreva um programa em linguagem C que contenha a declaração de duas variáveis do tipo float
chamadas valor1 e valor2. Peça então para a pessoa informar por meio do teclado um valor para estas
variáveis. Se a soma dessas variáveis for maior que 100.25 exiba a seguinte mensagem “A soma dos
valores digitados é maior que 100.25”.
Escreva um programa em linguagem C que contenha a declaração de duas variáveis do tipo int
chamadas n1 e n2. Se o valor da variável n2 for igual a 0 então exiba a seguinte mensagem “Não é
possível realizar a divisão de um número por 0.”. Caso contrário realize a divisão entre n1 e n2 e exiba
o resultado.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float valor1, valor2, soma;
	
	printf("Digite dois números (separados por enter)\n");
	scanf("%f%f",&valor1,&valor2);
	
	soma = valor1 + valor2;
	
	if (soma)
	
	
	return 0;
}