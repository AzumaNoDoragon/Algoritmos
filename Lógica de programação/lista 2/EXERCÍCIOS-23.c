/*Escreva um programa em linguagem C que contenha a declara��o de duas vari�veis do tipo float
chamadas valor1 e valor2. Pe�a ent�o para a pessoa informar por meio do teclado um valor para estas
vari�veis. Se a soma dessas vari�veis for maior que 100.25 exiba a seguinte mensagem �A soma dos
valores digitados � maior que 100.25�.
Escreva um programa em linguagem C que contenha a declara��o de duas vari�veis do tipo int
chamadas n1 e n2. Se o valor da vari�vel n2 for igual a 0 ent�o exiba a seguinte mensagem �N�o �
poss�vel realizar a divis�o de um n�mero por 0.�. Caso contr�rio realize a divis�o entre n1 e n2 e exiba
o resultado.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float valor1, valor2, soma;
	
	printf("Digite dois n�meros (separados por enter)\n");
	scanf("%f%f",&valor1,&valor2);
	
	soma = valor1 + valor2;
	
	if (soma)
	
	
	return 0;
}