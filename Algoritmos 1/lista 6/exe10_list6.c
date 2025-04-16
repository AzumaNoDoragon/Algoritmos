#include <stdio.h>
#include <locale.h>

/*Faça um programa que peça um número inteiro e apresente a mensagem 
“é par” ou “é ímpar”. Dica: use o operador %. Este operador retorna o resto 
de uma divisão. Por exemplo: 5%2 retornará o resto da divisão de 5 por 2. 
Então, 5%2=1 (porque 5 dividido por 2 é igual a 2 e resta 1). Por outro lado, 
6%2=0, porque 6 dividido por 2 é igual a 3 e resta 0. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número para descobrir se é par ou ímpar: ");
	scanf("%d", &num);
	
	if (num%2==0)
		printf("\nEste número é par!\n ");
	else
		printf("\nEste número é ímpar!\n ");
	
	return 0;
}