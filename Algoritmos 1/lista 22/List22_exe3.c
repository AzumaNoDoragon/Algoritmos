#include <stdio.h>

/*
Crie um algoritmo que pe�a uma temperatura em Farenheit, fa�a a 
convers�o para Celsius e apresente o valor convertido. C= 5*(F-32)/9 
*/

void result(float c){
	printf("\nA temperatura em Celsius e %0.1f\n", c);
}

void calc(float far){
	float c;
	
	c = 5 * ( far - 32 ) / 9;
	
	result(c);
}

void read(){
	float far;
	
	printf("Digite a temperatura em Farenheit: ");
	scanf("%f", &far);
	
	calc(far);
}

int main(){
	
	read();
	
	return 0;
}