//Escreva um programa em linguagem C que leia um n�mero real digitado pelo usu�rio.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1;
	
	printf("digite seu n�mero: ");
	scanf("%f",&n1);
	printf("seu n�mero �: %.2f", n1);
	
	return 0;
} 