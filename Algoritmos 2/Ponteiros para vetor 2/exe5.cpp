/*
Fa�a um programa que pe�a 6 valores inteiros, mas o primeiro valor 
deve ser colocado na �ltima posi��o do vetor, o segundo valor deve 
ser colocado na pen�ltima posi��o e assim por diante. 
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 6

int main(int argc, char** argv){
	int *p, i;
	
	p = (int*)malloc(QTD * sizeof(int));
	
	for(i = QTD - 1; i >= 0; i--){
		printf("Digite um n�mero inteiro: ");
		scanf("%d", (p + i));
	}
	
	for(i = 0; i < QTD; i++){
		printf("\n%d valor: %d", i + 1, *(p + i));
	}
	
	return 0;
}