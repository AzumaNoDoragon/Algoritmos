/*
	Crie um programa que receba uma temperatura em Farenheit, faça a conversão para 
	Celsius e apresente o valor convertido. C= 5*(F-32)/9 
*/

#include <stdio.h>

void recebe(float *c);
void converte(float c, float *f);
void apresenta(float c, float f);

int main(int argc, char** argv)
{
	float f, c;
	
	recebe(&f);
	converte(f, &c);
	apresenta(f, c);
	
	return 0;
}

void recebe(float *f){
	printf("Digite a temperatura em Farenheit: ");
	scanf("%f", f);
}

void converte(float f, float *c){
	*c = 5 * (f - 32) / 9;
}

void apresenta(float f, float c){
	printf("%0.2fºF convertido fica %0.2fºC", f, c);
}