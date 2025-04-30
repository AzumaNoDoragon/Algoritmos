#include <stdio.h>
#include <stdlib.h>

#define QTD 3

int main(int argc, char** argv)
{
	int *p, i, maior = 0;
	
	p = (int*)malloc(QTD * sizeof(int));
	
	for(i = 0; i < QTD; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", (p + i));
	}
	
	for(i = 0; i < QTD; i++){
		if(*(p + i) > maior){
			maior = *(p + i); 
		}
	}
	
	printf("\nO maior valor foi: %d", maior);
	
	return 0;
}