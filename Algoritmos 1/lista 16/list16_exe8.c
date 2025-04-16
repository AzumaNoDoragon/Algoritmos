#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 6 valores inteiros. Após digitados os valores, a ordem 
deve ser trocada de forma que. o primeiro valor deve ser colocado na última posição 
do vetor, o segundo valor deve ser colocado na penúltima posição e assim por diante. 
*/

int main(){
	int i, aux, var[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite um valor inteiro: ");
		scanf("%d", &var[i]);
	}
	
	for(i = 0; i < 3; i++){
		aux = var[i];
		var[i] = var[5 - i];
		var[5 - i] = aux;
	}
	
	printf("Os valores invertidos sao: ");
	for(i = 0; i < 6; i++){
		printf("%d ", var[i]);
	}
	
	return 0;
}