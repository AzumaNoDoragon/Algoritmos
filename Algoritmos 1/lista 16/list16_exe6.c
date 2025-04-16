#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 6 números inteiros e, depois, apresente-os na tela na 
forma invertida ao que foi digitado. Exemplo, se foi digitado 1 3 2 4 5 9, deve 
ser apresentado 9 5 4 2 3 1.
*/

int main(){
	int i, var[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite um valor inteiro: ");
		scanf("%d", &var[i]);
	}
	
	printf("Os Valores digitados foram: ");
	for(i = 6; i > 0; i--){
		printf("%d ", var[i - 1]);
	}
	
	return 0;
}