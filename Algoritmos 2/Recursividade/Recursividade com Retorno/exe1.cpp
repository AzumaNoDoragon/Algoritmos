/*
1-Fa�a um programa que pe�a um n�mero e retorne a somat�ria deste n�mero.
*/
#include <stdio.h>

int som(int a);

int main(int argc, char** argv){
	int a;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	a = som(a);
	
	printf("resultado e %d", a);
	
	return 0;
}

int som(int a){
	if(a >= 1){
		return a + som(a - 1);
	}
	return a;
}