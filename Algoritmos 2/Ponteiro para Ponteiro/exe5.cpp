#include <stdio.h>
#include <stdlib.h>

void inicializar(int **p){
	*p = (int*)malloc(2 * sizeof(int));
	**p = 3;
	*(*p+1) = 5;
}

int main() {
	int *a;
	inicializar(&a);
	printf("%d",*a);
	printf("\n%d",*(a+1));
	return 0;
}
