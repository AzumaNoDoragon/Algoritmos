#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que pe�a 6 valores inteiros. Ap�s digitados os valores, a ordem 
deve ser trocada de forma que. o primeiro valor deve ser colocado na �ltima posi��o 
do vetor, o segundo valor deve ser colocado na pen�ltima posi��o e assim por diante. 
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