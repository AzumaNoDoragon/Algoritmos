//Escreva um programa em linguagem C que leia um número real digitado pelo usuário.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1;
	
	printf("digite seu número: ");
	scanf("%f",&n1);
	printf("seu número é: %.2f", n1);
	
	return 0;
} 