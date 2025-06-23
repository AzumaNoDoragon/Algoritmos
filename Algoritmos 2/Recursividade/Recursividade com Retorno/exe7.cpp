/*
7- Faça um algoritmo que peça 5 valores. E crie uma função recursiva que calcule
quantos valores são pares. Faça o desenho da execução
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
	
	printf("Digite o %dº valor: ", count + 1);
	scanf("%d", &a);
	
	if (a % 2 == 0){
		pares = 1;
	}

	if (count < 4){
		return pares + read(count + 1);
	}

	return pares;
}