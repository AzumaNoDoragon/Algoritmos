#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que pe�a 5 n�meros inteiros e, no final, troque a ordem do primeiro n�mero com a do �ltimo n�mero digitado.
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