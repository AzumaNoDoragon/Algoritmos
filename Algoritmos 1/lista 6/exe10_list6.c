#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que pe�a um n�mero inteiro e apresente a mensagem 
�� par� ou �� �mpar�. Dica: use o operador %. Este operador retorna o resto 
de uma divis�o. Por exemplo: 5%2 retornar� o resto da divis�o de 5 por 2. 
Ent�o, 5%2=1 (porque 5 dividido por 2 � igual a 2 e resta 1). Por outro lado, 
6%2=0, porque 6 dividido por 2 � igual a 3 e resta 0. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n�mero para descobrir se � par ou �mpar: ");
	scanf("%d", &num);
	
	if (num%2==0)
		printf("\nEste n�mero � par!\n ");
	else
		printf("\nEste n�mero � �mpar!\n ");
	
	return 0;
}