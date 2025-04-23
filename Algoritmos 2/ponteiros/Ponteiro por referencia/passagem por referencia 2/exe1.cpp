/*
	Crie um programa que peça um número inteiro e diga se é par ou ímpar.
*/

#include <stdio.h>
#include <string.h>

void recebe(int *valor);
void verifica(int valor, char *flag);
void apresenta(int valor, char *flag);

int main(int argc, char** argv)
{
	int valor;
	char flag[6];
	
	recebe(&valor);
	verifica(valor, flag);
	apresenta(valor, flag);
	
	return 0;
}

void recebe(int *valor){
	printf("Digite um valor: ");
	scanf("%d", valor);
}

void verifica(int valor, char *flag){
	strcpy(flag, (valor % 2 == 0) ? "Par" : "Impar");
}

void apresenta(int valor, char *flag){
	printf("O valor %d e %s", valor, flag);
}
