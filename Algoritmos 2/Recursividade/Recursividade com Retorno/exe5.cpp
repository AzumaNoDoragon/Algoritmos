/*
5-Fa�a um programa que pe�a 4 valores e apresente, no fim, o menor valor.
*/

#include <stdio.h>

int read(int count);

int main(int argc, char** argv){
	int menor;
	
	menor = read(0);
	
	printf("O menor valor e %d", menor);
	
	return 0;
}

int read(int count){
	int a, menor;
	
	printf("Digite o %d� valor: ", count + 1);
	scanf("%d", &a);
	
	if (count < 3){
		menor = read(count + 1);
		if (a < menor){
			return a;
		} else
		{
			return menor;
		}
	}
	return a;
}