/*Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel do tipo char
chamada letra. Declare tamb�m outra vari�vel do tipo char chamada letra_a atribuindo-lhe o valor 'a'.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char letra_a;
	char letra[1];
			
	printf("Digite a letra: ");
	fflush(stdin);
	gets(letra);
		
	letra_a = 'a';
	fflush(stdin);
	
	printf("\nA variavel �: %s e a constante �: %c\n",letra,letra_a);
	
	return 0;
}