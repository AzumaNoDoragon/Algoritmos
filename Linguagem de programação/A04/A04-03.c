/*Gabriel Santos Afini da Silva
RA 2267284

A04-03 (extra)
Escreva um programa em C que verifique se um determinado n�mero � par ou �mpar
Crie uma fun��o chamada "verifica()" do tipo void que faz a leitura de um n�mero
digitado pelo usu�rio, verifica se o n�mero � para ou impar e imprime o resultado na tela. 
Observa��o: a opera��o  a % b  retorna o resto da divis�o de a por b 
Exemplo do operador de m�dulo
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
		printf("\nO %d valor � par\n", num);
	}else{
		printf("\nO %d valor � �mpar\n", num);
	}
}
	
	printf("Digite o um valor para descobrir se ele � par ou �mpar:\n");
		scanf("%d",&num);
	
	verifica();
	
	return 0;
}