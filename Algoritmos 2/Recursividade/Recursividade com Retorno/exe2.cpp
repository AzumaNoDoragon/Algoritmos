/*
2-Fa�a um programa que pe�a um n�mero e retorne o fatorial deste n�mero.
*/
#include <stdio.h>

int fac(int a);

int main(int argc, char** argv){
	int a, fact;
	
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	
	fact = fac(a);
	
	printf("O fatoria de %d e %d", a, fact);
	
	return 0;
}

int fac(int a){
	if(a > 1){
		return a * fac(a - 1);
	}
	return a;
}