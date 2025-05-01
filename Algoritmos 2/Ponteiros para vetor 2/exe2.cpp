/*
Fa�a um programa que pe�a 5 n�meros reais. Depois, o programa 
deve apresentar o n�mero menor. 
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

int main(int argc, char** argv){
	float *p, menor;
	int i;
	
	p = (float*)malloc(QTD * sizeof(float));
	
	for(i = 0; i < QTD; i++){
		printf("Digite um n�mero real: ");
		scanf("%f", (p + i));
	}
	
	menor = *(p + 0);
	for(i = 1; i < QTD; i++){
		if(*(p + i) < menor){
			menor = *(p + i);
		}
	}
	
	printf("\nO menor numero foi: %0.2f", menor);
	
	return 0;
}