/* 
Fa�a um programa que pe�a 5 n�meros reais. Depois, o programa 
deve apresentar o n�mero maior. 
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

int main(int argc, char** argv){
	float *p, maior;
	int i;
	
	p = (float*)malloc(QTD * sizeof(float));
	
	for(i = 0; i < QTD; i++){
		printf("Digite um n�mero real: ");
		scanf("%f", (p + i));
	}
	
	maior = *(p + 0);
	for(i = 1; i < QTD; i++){
		if(*(p + i) > maior){
			maior = *(p + i);
		}
	}
	
	printf("\nO maior n�mero digitado foi: %0.2f", maior);
	
	
	return 0;
}