/*Escreva um programa em linguagem C que mostre na tela o seguinte texto: 
Aula de Programa��o em C. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Aula de Programa��o em C\n\n");
		
	return 0;
}