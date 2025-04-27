/*Gabriel Santos Afini da Silva
RA 2267284

A04-03 (extra)
Escreva um programa em C que verifique se um determinado número é par ou ímpar
Crie uma função chamada "verifica()" do tipo void que faz a leitura de um número
digitado pelo usuário, verifica se o número é para ou impar e imprime o resultado na tela. 
Observação: a operação  a % b  retorna o resto da divisão de a por b 
Exemplo do operador de módulo
4 % 2 retorna o valor 0
3 % 2 retorna o valor 1
10 % 8 retorna o valor 2*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"PORTUGUESE");
	int num, res; 
	
void verifica(){
	res = num % 2;
	if(res == 0){
		printf("\nO %d valor é par\n", num);
	}else{
		printf("\nO %d valor é ímpar\n", num);
	}
}
	
	printf("Digite o um valor para descobrir se ele é par ou ímpar:\n");
		scanf("%d",&num);
	
	verifica();
	
	return 0;
}