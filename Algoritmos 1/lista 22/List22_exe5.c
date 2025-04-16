#include <stdio.h>

/*
Crie um algoritmo que pe�a duas notas, calcule a m�dia e apresente 
a m�dia
*/

int count = 1;

float nota(){
	float n;
	
	printf("Digite a nota %d: ", count);
	scanf("%f", &n);
	
	count++;
	
	return n;
}

float media(float n1, float n2){
	return ((n1 + n2) / 2);
}

void show(float result){
	printf("A m�dia da nota e: %0.2f", result);
}

int main(){
	float n1, n2, result;
	
	n1 = nota();
	n2 = nota();
	result = media(n1, n2);
	show(result);
	
	return 0;
}