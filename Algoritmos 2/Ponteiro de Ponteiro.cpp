#include <stdio.h>
#include <stdlib.h>

void ler(int **x);
void apresentar(int p);

int main(int argc, char** argv)
{
	int *p;
	
	ler(&p);
	apresentar(*p);
	free(p);
	return 0;
}

void ler(int **x){
	*x = (int*)malloc(sizeof(int));
	**x = 3;
}

void apresentar(int p){
	printf("valor: %d", p);
}