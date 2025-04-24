/*
	Crie um programa que receba dois números e apresente o maior.
*/

#include <stdio.h>

void recebe(int *valor);
void verifica(int v1, int v2, int *maior);
void apresenta(int maior);

int main(int argc, char** argv)
{
	int v1 , v2, maior;

	recebe(&v1);
	recebe(&v2);
	verifica(v1, v2, &maior);
	apresenta(maior);
	
	return 0;
}

void recebe(int *valor){
	printf("Digite um valor: ");
	scanf("%d", valor);
}

void verifica(int v1, int v2, int *maior){
	*maior = (v1 > v2) ? v1 : v2;
}

void apresenta(int maior){
	printf("O maior valor e %d.\n", maior);
}
