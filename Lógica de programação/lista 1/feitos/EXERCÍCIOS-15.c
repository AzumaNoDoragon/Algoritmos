//Escreva um programa em linguagem C que leia um simples caractere digitado pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char L[1];
	
	printf("Digite a sua letra: \n");
	fflush(stdin);
	gets(L);
	printf("\nSua letra é: %s\n",L);
	
	return 0;
} 