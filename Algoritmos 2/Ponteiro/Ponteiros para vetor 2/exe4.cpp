/*
Faça um programa que peça 6 números inteiros e, depois, 
apresente-os na tela na forma invertida ao que foi digitado. Exemplo, 
se foi digitado 1 3 2 4 5 9, deve ser apresentado 9 5 4 2 3 1. 
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 6

int main(int argc, char** argv){
	int *p, i;
	
	p = (int*)malloc(QTD * sizeof(int));
	
	for(i = 0; i < QTD; i++){
		printf("Digite um número inteiro: ");
		scanf("%d", (p + i));
	}
	
	for(i = QTD - 1; i >= 0; i--){
		printf("\n%d valor: %d", i + 1, *(p + i));
	}
	
	return 0;
}