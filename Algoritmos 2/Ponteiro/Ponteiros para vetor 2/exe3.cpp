/*
Fa�a um programa que pe�a 5 n�meros inteiros e, no final, troque 
a ordem do primeiro n�mero com a do �ltimo n�mero digitado.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

int main(int argc, char** argv){
	float *p, aux;
	int i;
	
	p = (float*)malloc(QTD * sizeof(float));
	
	for(i = 0; i < QTD; i++){
		printf("Digite um n�mero real: ");
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