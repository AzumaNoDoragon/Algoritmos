/* Escreva um programa em linguagem C que leia um número inteiro digitado pelo usuário.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1;
	
	printf("Digite seu número: ");
	scanf("%d",&n1);
	printf("O número é %d", n1);
	
	return 0;
}