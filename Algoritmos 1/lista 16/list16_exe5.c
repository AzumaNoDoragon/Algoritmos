#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 5 números inteiros e, no final, troque a ordem do primeiro número com a do último número digitado.
*/

int main(){
	int i, aux, var[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor real: ");
		scanf("%d", &var[i]);
	}
	
	aux = var[0];
	var[0] = var[4];
	var[4] = aux;
	
	printf("Os numeros digitados foram: ");
	for(i = 0; i < 5; i++){
		printf("%d ", var[i]);
	}
	
	return 0;
}