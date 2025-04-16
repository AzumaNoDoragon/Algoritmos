#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 6 valores inteiros e, depois, apresente-os na tela. 
*/

int main(){
	int i, var[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite um valor inteiro: ");
		scanf("%d", &var[i]);
	}
	
	printf("Os numeros digitados foram: ");
	for(i = 0; i < 6; i++){
		printf("%d ", var[i]);
	}
	
	return 0;
}