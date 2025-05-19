#include <stdio.h>
#include <stdlib.h>

void inicializar(int **p){
	*p = (int*)malloc(sizeof(int));
}

int main() {
	int *a;
	inicializar(&a);
	*a=3;
	printf("%d",*a);
	return 0;
}
