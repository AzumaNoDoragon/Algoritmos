/* Escreva um programa em linguagem C que leia um n�mero inteiro digitado pelo usu�rio.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n1;
	
	printf("Digite seu n�mero: ");
	scanf("%d",&n1);
	printf("O n�mero � %d", n1);
	
	return 0;
}