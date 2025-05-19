#include <stdio.h>
#include <stdlib.h>

void inicializar(int **p){
	*p = (int*)malloc(2 * sizeof(int));
}

int main() {
	int *a;
	inicializar(&a);
	*a=3; //Essa linha deve ficar na função main
	*(a+1)=5; //Essa linha deve ficar na função main
	printf("%d\n",*a);
	printf("%d\n",*(a+1));
	return 0;
}