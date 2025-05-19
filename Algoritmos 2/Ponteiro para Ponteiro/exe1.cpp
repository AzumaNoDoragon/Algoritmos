#include <stdio.h>
#include <stdlib.h>

void inicializar(int **p){
	*p = (int*)malloc(sizeof(int));
	**p = 3;
}

int main() {
	int *a;
	inicializar(&a);
	printf("%d", *a);
	return 0;
}
