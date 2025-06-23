/*
4-Faça um programa que peça 4 valores e apresente, no fim, o maior valor.
*/
#include <stdio.h>

int read(int count);

int main(int argc, char** argv){
	int maior;
	
	maior = read(0);
	
	printf("O maior valor e %d", maior);
	
	return 0;
}

int read(int count){
	int a, maior;
	
	printf("Digite o %dº valor: ", count + 1);
	scanf("%d", &a);
	
	if (count < 3){
		maior = read(count + 1);
		if (a > maior){
			return a;
		} else
		{
			return maior;
		}
	}
	return a;
}