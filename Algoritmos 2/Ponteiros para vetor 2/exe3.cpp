/*
Faça um programa que peça 5 números inteiros e, no final, troque 
a ordem do primeiro número com a do último número digitado.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

int main(int argc, char** argv){
	float *p, aux;
	int i;
	
	p = (float*)malloc(QTD * sizeof(float));
	
	for(i = 0; i < QTD; i++){
		printf("Digite um número real: ");
		scanf("%f", (p + i));
	}
	
	aux = *(p + 0);
	*(p + 0) = *(p + 4);
	*(p + 4) = aux;
	
	for (i = 0; i < QTD; i++){
		printf("\n%d valor: %0.2f", i + 1, *(p + i));
	}
	
	return 0;
}