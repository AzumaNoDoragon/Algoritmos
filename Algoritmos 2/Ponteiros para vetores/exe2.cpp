#include <stdio.h>
#include <stdlib.h>

#define QTD 3

int main(int argc, char** argv)
{
	int *p, i;
	
	p = (int*)malloc(QTD * sizeof(int));
	
	for(i = 0; i < QTD; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", (p + i));
	}
	
	for(i = QTD - 1; i >= 0; i--){
		printf("\nValor %d: %d", i + 1, *(p + i));
	}
	
	return 0;
}