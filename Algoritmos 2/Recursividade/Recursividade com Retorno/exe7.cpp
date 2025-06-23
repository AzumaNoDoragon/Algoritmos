/*
7- Fa�a um algoritmo que pe�a 5 valores. E crie uma fun��o recursiva que calcule
quantos valores s�o pares. Fa�a o desenho da execu��o
*/
#include <stdio.h>

int read(int count);

int main(int argc, char** argv){
	int valor;
	
	valor = read(0);
	
	printf("Tem %d numeros pares", valor);
	
	return 0;
}

int read(int count){
	int a, pares = 0;
	
	printf("Digite o %d� valor: ", count + 1);
	scanf("%d", &a);
	
	if (a % 2 == 0){
		pares = 1;
	}

	if (count < 4){
		return pares + read(count + 1);
	}

	return pares;
}