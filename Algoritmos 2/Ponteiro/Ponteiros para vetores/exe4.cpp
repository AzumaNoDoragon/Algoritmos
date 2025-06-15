#include <stdio.h>
#include <stdlib.h>

#define QTD 3

int main(int argc, char** argv)
{
	int *p,i;
	
	p = (int*)malloc(QTD * sizeof(int));
	
	for(i = 0; i < QTD; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", (p + i));
	}
	
	for(i = 0; i < QTD; i++){
		printf("\nO valor de %d multiplica por 2 e: %d", *(p + i), *(p + i) * 2);
	}
	
	return 0;
}