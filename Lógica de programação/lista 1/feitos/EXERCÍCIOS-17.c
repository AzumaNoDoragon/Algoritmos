/*Escreva um programa em linguagem C que declare 3 variáveis (dos tipos int,
float e char). Depois coloque um valor em cada uma delas e exiba 
o seu conteúdo na tela. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1;
	float n2;
	char L[1];
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&n1);
	printf("Digite um numero real: ");
	scanf("%f",&n2);
	printf("Digite uma letra: ");	
	fflush(stdin);
	gets(L);
	printf("\nSeu número inteiro é %d, seu número real é %.2f e sua letra é %s\n",n1,n2,L);
		
	return 0;
}