#include <stdio.h>

/*
Crie um algoritmo que pe�a uma temperatura em Celsius, fa�a a 
convers�o para Farenheit e apresente o valor em Celsius e em 
Farenheit. F= (9*C/5) + 32. Dica: se esqueceu, reveja a se��o 
Passagem com Mais de Um Valor. 
*/

void result(float ce, float fah){
	printf("\nA temperatura em Celsius e %0.1f\n", ce);
	printf("A temperatura em farenheit e %0.1f\n", fah);
}

void conv(float ce){
	float fh;
	
	fh = (9 * ce / 5) + 32;
	
	result(ce, fh);
}

void celsius(){
	float c;
	
	printf("Digite a temperatura em Celsius para converter: ");
	scanf("%f", &c);
	
	conv(c);
}

int main(){

	celsius();

	return 0;
}